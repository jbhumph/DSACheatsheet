#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_CAPACITY 16

typedef struct Entry {
    char* key;
    int value;
    struct Entry* next;
} Entry;

typedef struct {
    Entry** buckets;
    int capacity;
} HashMap;

unsigned int hash(const char* key) {
    unsigned int hash = 0;
    while (*key) {
        hash = (hash << 5) + *key++;
    }
    return hash;
}

HashMap* createHashMap() {
    HashMap* map = (HashMap*)malloc(sizeof(HashMap));
    map->capacity = INITIAL_CAPACITY;
    map->buckets = (Entry**)malloc(map->capacity * sizeof(Entry*));
    for (int i = 0; i < map->capacity; i++) {
        map->buckets[i] = NULL;
    }
    return map;
}

void put(HashMap* map, const char* key, int value) {
    unsigned int bucketIndex = hash(key) % map->capacity;
    Entry* entry = map->buckets[bucketIndex];
    while (entry != NULL) {
        if (strcmp(entry->key, key) == 0) {
            entry->value = value;
            return;
        }
        entry = entry->next;
    }
    entry = (Entry*)malloc(sizeof(Entry));
    entry->key = strdup(key);
    entry->value = value;
    entry->next = map->buckets[bucketIndex];
    map->buckets[bucketIndex] = entry;
}

int get(HashMap* map, const char* key) {
    unsigned int bucketIndex = hash(key) % map->capacity;
    Entry* entry = map->buckets[bucketIndex];
    while (entry != NULL) {
        if (strcmp(entry->key, key) == 0) {
            return entry->value;
        }
        entry = entry->next;
    }
    return -1; // Key not found
}

int containsKey(HashMap* map, const char* key) {
    unsigned int bucketIndex = hash(key) % map->capacity;
    Entry* entry = map->buckets[bucketIndex];
    while (entry != NULL) {
        if (strcmp(entry->key, key) == 0) {
            return 1;
        }
        entry = entry->next;
    }
    return 0;
}

void removeKey(HashMap* map, const char* key) {
    unsigned int bucketIndex = hash(key) % map->capacity;
    Entry* entry = map->buckets[bucketIndex];
    Entry* prev = NULL;
    while (entry != NULL) {
        if (strcmp(entry->key, key) == 0) {
            if (prev == NULL) {
                map->buckets[bucketIndex] = entry->next;
            } else {
                prev->next = entry->next;
            }
            free(entry->key);
            free(entry);
            return;
        }
        prev = entry;
        entry = entry->next;
    }
}

void freeHashMap(HashMap* map) {
    for (int i = 0; i < map->capacity; i++) {
        Entry* entry = map->buckets[i];
        while (entry != NULL) {
            Entry* temp = entry;
            entry = entry->next;
            free(temp->key);
            free(temp);
        }
    }
    free(map->buckets);
    free(map);
}

int main() {
    HashMap* map = createHashMap();
    put(map, "one", 1);
    put(map, "two", 2);
    put(map, "three", 3);

    printf("Value for key 'one': %d\n", get(map, "one"));
    printf("Value for key 'two': %d\n", get(map, "two"));
    printf("Value for key 'three': %d\n", get(map, "three"));

    removeKey(map, "two");
    printf("Contains key 'two': %d\n", containsKey(map, "two"));

    freeHashMap(map);
    return 0;
}
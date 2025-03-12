#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *array;
    size_t size;
    size_t capacity;
} ArrayList;

ArrayList* createArrayList(size_t initialCapacity) {
    ArrayList *list = (ArrayList*)malloc(sizeof(ArrayList));
    list->array = (int*)malloc(initialCapacity * sizeof(int));
    list->size = 0;
    list->capacity = initialCapacity;
    return list;
}

void resizeArrayList(ArrayList *list, size_t newCapacity) {
    int *newArray = (int*)realloc(list->array, newCapacity * sizeof(int));
    if (newArray) {
        list->array = newArray;
        list->capacity = newCapacity;
    } else {
        printf("Memory allocation failed\n");
        exit(1);
    }
}

void addToArrayList(ArrayList *list, int value) {
    if (list->size == list->capacity) {
        resizeArrayList(list, list->capacity * 2);
    }
    list->array[list->size++] = value;
}

int getFromArrayList(ArrayList *list, size_t index) {
    if (index < list->size) {
        return list->array[index];
    } else {
        printf("Index out of bounds\n");
        exit(1);
    }
}

void freeArrayList(ArrayList *list) {
    free(list->array);
    free(list);
}

int main() {
    ArrayList *list = createArrayList(4);
    addToArrayList(list, 1);
    addToArrayList(list, 2);
    addToArrayList(list, 3);
    addToArrayList(list, 4);
    addToArrayList(list, 5);

    for (size_t i = 0; i < list->size; i++) {
        printf("%d ", getFromArrayList(list, i));
    }
    printf("\n");

    freeArrayList(list);
    return 0;
}
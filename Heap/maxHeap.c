#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *heap;
    int size;
    int capacity;
} MaxHeap;

MaxHeap* createMaxHeap(int capacity) {
    MaxHeap* maxHeap = (MaxHeap*)malloc(sizeof(MaxHeap));
    maxHeap->capacity = capacity;
    maxHeap->size = 0;
    maxHeap->heap = (int*)malloc(capacity * sizeof(int));
    return maxHeap;
}

int parent(int index) {
    return (index - 1) / 2;
}

int leftChild(int index) {
    return 2 * index + 1;
}

int rightChild(int index) {
    return 2 * index + 2;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertMaxHeap(MaxHeap* maxHeap, int key) {
    if (maxHeap->size == maxHeap->capacity) {
        maxHeap->capacity *= 2;
        maxHeap->heap = (int*)realloc(maxHeap->heap, maxHeap->capacity * sizeof(int));
    }
    maxHeap->heap[maxHeap->size] = key;
    int current = maxHeap->size;
    maxHeap->size++;

    while (current != 0 && maxHeap->heap[parent(current)] < maxHeap->heap[current]) {
        swap(&maxHeap->heap[current], &maxHeap->heap[parent(current)]);
        current = parent(current);
    }
}

void heapifyDownMaxHeap(MaxHeap* maxHeap, int index) {
    int largest = index;
    int left = leftChild(index);
    int right = rightChild(index);

    if (left < maxHeap->size && maxHeap->heap[left] > maxHeap->heap[largest]) {
        largest = left;
    }
    if (right < maxHeap->size && maxHeap->heap[right] > maxHeap->heap[largest]) {
        largest = right;
    }
    if (largest != index) {
        swap(&maxHeap->heap[index], &maxHeap->heap[largest]);
        heapifyDownMaxHeap(maxHeap, largest);
    }
}

int extractMax(MaxHeap* maxHeap) {
    if (maxHeap->size == 0) {
        printf("Heap is empty\n");
        return -1;
    }
    int root = maxHeap->heap[0];
    maxHeap->heap[0] = maxHeap->heap[maxHeap->size - 1];
    maxHeap->size--;
    heapifyDownMaxHeap(maxHeap, 0);
    return root;
}

int getMax(MaxHeap* maxHeap) {
    if (maxHeap->size == 0) {
        printf("Heap is empty\n");
        return -1;
    }
    return maxHeap->heap[0];
}

int main() {
    MaxHeap* maxHeap = createMaxHeap(10);
    insertMaxHeap(maxHeap, 3);
    insertMaxHeap(maxHeap, 2);
    insertMaxHeap(maxHeap, 1);
    insertMaxHeap(maxHeap, 7);
    insertMaxHeap(maxHeap, 8);
    insertMaxHeap(maxHeap, 4);
    insertMaxHeap(maxHeap, 10);
    insertMaxHeap(maxHeap, 16);
    insertMaxHeap(maxHeap, 12);

    printf("Max value: %d\n", getMax(maxHeap));
    printf("Extracted max value: %d\n", extractMax(maxHeap));
    printf("Max value after extraction: %d\n", getMax(maxHeap));

    free(maxHeap->heap);
    free(maxHeap);
    return 0;
}
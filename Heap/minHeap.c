#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *heap;
    int size;
    int capacity;
} MinHeap;

MinHeap* createMinHeap(int capacity) {
    MinHeap* minHeap = (MinHeap*)malloc(sizeof(MinHeap));
    minHeap->capacity = capacity;
    minHeap->size = 0;
    minHeap->heap = (int*)malloc(capacity * sizeof(int));
    return minHeap;
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

void insertMinHeap(MinHeap* minHeap, int key) {
    if (minHeap->size == minHeap->capacity) {
        minHeap->capacity *= 2;
        minHeap->heap = (int*)realloc(minHeap->heap, minHeap->capacity * sizeof(int));
    }
    minHeap->heap[minHeap->size] = key;
    int current = minHeap->size;
    minHeap->size++;

    while (current != 0 && minHeap->heap[parent(current)] > minHeap->heap[current]) {
        swap(&minHeap->heap[current], &minHeap->heap[parent(current)]);
        current = parent(current);
    }
}

void heapifyDownMinHeap(MinHeap* minHeap, int index) {
    int smallest = index;
    int left = leftChild(index);
    int right = rightChild(index);

    if (left < minHeap->size && minHeap->heap[left] < minHeap->heap[smallest]) {
        smallest = left;
    }
    if (right < minHeap->size && minHeap->heap[right] < minHeap->heap[smallest]) {
        smallest = right;
    }
    if (smallest != index) {
        swap(&minHeap->heap[index], &minHeap->heap[smallest]);
        heapifyDownMinHeap(minHeap, smallest);
    }
}

int extractMin(MinHeap* minHeap) {
    if (minHeap->size == 0) {
        printf("Heap is empty\n");
        return -1;
    }
    int root = minHeap->heap[0];
    minHeap->heap[0] = minHeap->heap[minHeap->size - 1];
    minHeap->size--;
    heapifyDownMinHeap(minHeap, 0);
    return root;
}

int getMin(MinHeap* minHeap) {
    if (minHeap->size == 0) {
        printf("Heap is empty\n");
        return -1;
    }
    return minHeap->heap[0];
}

int main() {
    MinHeap* minHeap = createMinHeap(10);
    insertMinHeap(minHeap, 3);
    insertMinHeap(minHeap, 2);
    insertMinHeap(minHeap, 1);
    insertMinHeap(minHeap, 7);
    insertMinHeap(minHeap, 8);
    insertMinHeap(minHeap, 4);
    insertMinHeap(minHeap, 10);
    insertMinHeap(minHeap, 16);
    insertMinHeap(minHeap, 12);

    printf("Min value: %d\n", getMin(minHeap));
    printf("Extracted min value: %d\n", extractMin(minHeap));
    printf("Min value after extraction: %d\n", getMin(minHeap));

    free(minHeap->heap);
    free(minHeap);
    return 0;
}
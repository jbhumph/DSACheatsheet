#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int *array;
    int size;
    int capacity;
} PriorityQueue;

PriorityQueue* createPriorityQueue(int capacity) {
    PriorityQueue *pq = (PriorityQueue*)malloc(sizeof(PriorityQueue));
    pq->capacity = capacity;
    pq->size = 0;
    pq->array = (int*)malloc(pq->capacity * sizeof(int));
    return pq;
}

bool isFull(PriorityQueue* pq) {
    return (pq->size == pq->capacity);
}

bool isEmpty(PriorityQueue* pq) {
    return (pq->size == 0);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapifyUp(PriorityQueue* pq, int index) {
    while (index > 0 && pq->array[(index - 1) / 2] < pq->array[index]) {
        swap(&pq->array[(index - 1) / 2], &pq->array[index]);
        index = (index - 1) / 2;
    }
}

void heapifyDown(PriorityQueue* pq, int index) {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < pq->size && pq->array[left] > pq->array[largest]) {
        largest = left;
    }

    if (right < pq->size && pq->array[right] > pq->array[largest]) {
        largest = right;
    }

    if (largest != index) {
        swap(&pq->array[index], &pq->array[largest]);
        heapifyDown(pq, largest);
    }
}

void enqueue(PriorityQueue* pq, int item) {
    if (isFull(pq)) {
        printf("PriorityQueue is full\n");
        return;
    }
    pq->array[pq->size++] = item;
    heapifyUp(pq, pq->size - 1);
    printf("%d enqueued to priority queue\n", item);
}

int dequeue(PriorityQueue* pq) {
    if (isEmpty(pq)) {
        printf("PriorityQueue is empty\n");
        return -1;
    }
    int item = pq->array[0];
    pq->array[0] = pq->array[--pq->size];
    heapifyDown(pq, 0);
    return item;
}

int peek(PriorityQueue* pq) {
    if (isEmpty(pq)) {
        return -1;
    }
    return pq->array[0];
}

int main() {
    PriorityQueue* pq = createPriorityQueue(5);

    enqueue(pq, 3);
    enqueue(pq, 5);
    enqueue(pq, 1);
    enqueue(pq, 4);
    enqueue(pq, 2);

    printf("Front element is %d\n", peek(pq));
    printf("%d dequeued from priority queue\n", dequeue(pq));
    printf("Front element is %d\n", peek(pq));

    return 0;
}
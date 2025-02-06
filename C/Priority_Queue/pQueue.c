// taken from flight booker project. Need to choose  or create new variable / struct to replace seat.

#include <stdlib.h>

// define type node for Queue
typedef struct Node {
    struct Seat* data;
    struct Node *next;
    int priority;
} node;

// define type queue
typedef struct Queue {
    node* front;
    node* rear;
    int size;
}queue;

// create an empty queue
queue* newQueue() {
    queue* q = (queue*) malloc(sizeof(queue));
    q->front = NULL;
    q->rear = NULL;
    return q;
}

// creates new node
node* newNode(seat* seat) {
    node* temp = (node*) malloc(sizeof(node));
    temp->priority = 0;
    temp->data = seat;
    temp->next = NULL;
    return temp;
}

// checks if queue is empty
int empty(queue* q) {
    return (q->front == NULL);
}

// add a new node to queue
void enqueue(queue* q, seat* seat) {
    node* temp = newNode(seat);
    if (empty(q)) {
        q->front = temp;
        q->rear = temp;
    } else {
        q->rear->next = temp;
        q->rear = temp;
    }
}

// enqueue a priority seat
void enqueuePriority(queue* q, seat* seat) {
    node* temp = newNode(seat);
    temp->priority = 1;
    if (empty(q)) {
        q->front = temp;
        q->rear = temp;
        return;
    }
    if (q->front->priority < temp->priority) {
        temp->next = q->front;
        q->front = temp;
    } else {
        node* current = q->front;
        while (current->next != NULL && current->next->priority >= temp->priority) {
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp;
    }
}

// remove item from queue
seat* dequeue(queue* q) {
    if (empty(q)) {
        return NULL;
    }
    node* temp = q->front;
    seat* data = temp->data;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(temp);
    return data;
}

// return data from front node
seat* peek(queue* q) {
    if (empty(q)) {
        return NULL;
    }
    return q->front->data;
}

// print queue
void print(queue* q) {
    if (empty(q)) {
        printf("Queue is empty\n");
        return;
    }
    char arr[3][10] = {"First", "Business", "Economy"};
    char p[2][20] = {"without Priority", "with Priority"};
    node* temp = q->front;
    while (temp != NULL) {
        printf("Seat %c%d - %s Class - %s\n", temp->data->row, temp->data->num, arr[temp->data->class], p[temp->data->priority]);
        temp = temp->next;
    }
}

// free allocated memory
void freeQueue(queue* q) {
    while (!empty(q)) {
        dequeue(q);
    }
}


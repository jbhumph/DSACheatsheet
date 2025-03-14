package Queue;

public class PriorityQueue {
    private int[] array;
    private int size;
    private int capacity;

    public PriorityQueue(int capacity) {
        this.capacity = capacity;
        this.array = new int[capacity];
        this.size = 0;
    }

    public boolean isFull() {
        return size == capacity;
    }

    public boolean isEmpty() {
        return size == 0;
    }

    public void enqueue(int item) {
        if (isFull()) {
            throw new IllegalStateException("PriorityQueue is full");
        }
        array[size++] = item;
        heapifyUp();
    }

    public int dequeue() {
        if (isEmpty()) {
            throw new IllegalStateException("PriorityQueue is empty");
        }
        int item = array[0];
        array[0] = array[--size];
        heapifyDown();
        return item;
    }

    public int peek() {
        if (isEmpty()) {
            throw new IllegalStateException("PriorityQueue is empty");
        }
        return array[0];
    }

    public int size() {
        return size;
    }

    private void heapifyUp() {
        int index = size - 1;
        while (index > 0 && array[parent(index)] < array[index]) {
            swap(index, parent(index));
            index = parent(index);
        }
    }

    private void heapifyDown() {
        int index = 0;
        while (leftChild(index) < size) {
            int largerChild = leftChild(index);
            if (rightChild(index) < size && array[rightChild(index)] > array[largerChild]) {
                largerChild = rightChild(index);
            }
            if (array[index] > array[largerChild]) {
                break;
            }
            swap(index, largerChild);
            index = largerChild;
        }
    }

    private int parent(int index) {
        return (index - 1) / 2;
    }

    private int leftChild(int index) {
        return 2 * index + 1;
    }

    private int rightChild(int index) {
        return 2 * index + 2;
    }

    private void swap(int index1, int index2) {
        int temp = array[index1];
        array[index1] = array[index2];
        array[index2] = temp;
    }

    public static void main(String[] args) {
        PriorityQueue pq = new PriorityQueue(5);
        pq.enqueue(3);
        pq.enqueue(5);
        pq.enqueue(1);
        pq.enqueue(4);
        pq.enqueue(2);

        System.out.println("Front element is: " + pq.peek());
        System.out.println("PriorityQueue size is: " + pq.size());

        pq.dequeue();
        pq.dequeue();

        System.out.println("Front element is: " + pq.peek());
        System.out.println("PriorityQueue size is: " + pq.size());
    }
}

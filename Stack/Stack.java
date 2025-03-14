package Stack;

public class Stack {
    private int[] stack;
    private int top;
    private int capacity;

    public Stack(int capacity) {
        this.capacity = capacity;
        this.stack = new int[capacity];
        this.top = -1;
    }

    public void push(int value) {
        if (isFull()) {
            throw new IllegalStateException("Stack is full");
        }
        stack[++top] = value;
    }

    public int pop() {
        if (isEmpty()) {
            throw new IllegalStateException("Stack is empty");
        }
        return stack[top--];
    }

    public int peek() {
        if (isEmpty()) {
            throw new IllegalStateException("Stack is empty");
        }
        return stack[top];
    }

    public boolean isEmpty() {
        return top == -1;
    }

    public boolean isFull() {
        return top == capacity - 1;
    }

    public static void main(String[] args) {
        Stack stack = new Stack(5);
        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);
        stack.push(5);

        System.out.println("Top element is: " + stack.peek());
        System.out.println("Stack is full: " + stack.isFull());

        System.out.println("Popped element: " + stack.pop());
        System.out.println("Top element after pop: " + stack.peek());
    }
}

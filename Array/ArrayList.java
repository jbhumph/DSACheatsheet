package Array;

import java.util.Arrays;

public class ArrayList {
    private int[] array;
    private int size;
    private int capacity;

    public ArrayList(int initialCapacity) {
        this.array = new int[initialCapacity];
        this.size = 0;
        this.capacity = initialCapacity;
    }

    public void add(int value) {
        if (size == capacity) {
            resize(capacity * 2);
        }
        array[size++] = value;
    }

    public int get(int index) {
        if (index >= size || index < 0) {
            throw new IndexOutOfBoundsException("Index: " + index + ", Size: " + size);
        }
        return array[index];
    }

    private void resize(int newCapacity) {
        array = Arrays.copyOf(array, newCapacity);
        capacity = newCapacity;
    }

    public int size() {
        return size;
    }

    public static void main(String[] args) {
        ArrayList list = new ArrayList(4);
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        list.add(5);

        for (int i = 0; i < list.size(); i++) {
            System.out.print(list.get(i) + " ");
        }
        System.out.println();
    }
}
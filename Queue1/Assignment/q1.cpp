// Ques: Design Circular Deque [Leetcode - 641]
// (Use Array / Vector)


#include <iostream>
#include <vector>
using namespace std;

class CircularDeque {
private:
    vector<int> deque;
    int front, rear, capacity, currentSize;

public:
    // Constructor to initialize the deque with a given capacity
    CircularDeque(int k) {
        capacity = k;
        deque.resize(k);
        front = 0;
        rear = 0;
        currentSize = 0;
    }

    // Insert an element at the front of the deque
    bool insertFront(int value) {
        if (isFull()) {
            return false;
        }
        front = (front - 1 + capacity) % capacity;
        deque[front] = value;
        currentSize++;
        return true;
    }

    // Insert an element at the rear of the deque
    bool insertRear(int value) {
        if (isFull()) {
            return false;
        }
        deque[rear] = value;
        rear = (rear + 1) % capacity;
        currentSize++;
        return true;
    }

    // Delete an element from the front of the deque
    bool deleteFront() {
        if (isEmpty()) {
            return false;
        }
        front = (front + 1) % capacity;
        currentSize--;
        return true;
    }

    // Delete an element from the rear of the deque
    bool deleteRear() {
        if (isEmpty()) {
            return false;
        }
        rear = (rear - 1 + capacity) % capacity;
        currentSize--;
        return true;
    }

    // Get the front element of the deque
    int getFront() {
        if (isEmpty()) {
            return -1; // Deque is empty
        }
        return deque[front];
    }

    // Get the rear element of the deque
    int getRear() {
        if (isEmpty()) {
            return -1; // Deque is empty
        }
        return deque[(rear - 1 + capacity) % capacity];
    }

    // Check if the deque is empty
    bool isEmpty() {
        return currentSize == 0;
    }

    // Check if the deque is full
    bool isFull() {
        return currentSize == capacity;
    }

    // Get the current size of the deque
    int getSize() {
        return currentSize;
    }
};

int main() {
    CircularDeque deque(5); // Create a circular deque with capacity 5

    // Test insert operations
    cout << "Insert 10 at rear: " << (deque.insertRear(10) ? "Success" : "Failed") << endl;
    cout << "Insert 20 at rear: " << (deque.insertRear(20) ? "Success" : "Failed") << endl;
    cout << "Insert 30 at front: " << (deque.insertFront(30) ? "Success" : "Failed") << endl;
    cout << "Insert 40 at front: " << (deque.insertFront(40) ? "Success" : "Failed") << endl;

    // Check the front and rear elements
    cout << "Front element: " << deque.getFront() << endl;  // Should be 40
    cout << "Rear element: " << deque.getRear() << endl;    // Should be 20

    // Test delete operations
    cout << "Delete front: " << (deque.deleteFront() ? "Success" : "Failed") << endl;
    cout << "Delete rear: " << (deque.deleteRear() ? "Success" : "Failed") << endl;

    // Check the front and rear elements again
    cout << "Front element: " << deque.getFront() << endl;  // Should be 30
    cout << "Rear element: " << deque.getRear() << endl;    // Should be 10

    // Test when deque is full
    cout << "Insert 50 at rear: " << (deque.insertRear(50) ? "Success" : "Failed") << endl;
    cout << "Insert 60 at rear: " << (deque.insertRear(60) ? "Success" : "Failed") << endl; // Should fail, as the deque is full

    // Check if the deque is full
    cout << "Is the deque full? " << (deque.isFull() ? "Yes" : "No") << endl;

    // Check the size of the deque
    cout << "Current size: " << deque.getSize() << endl;  // Should be 4

    return 0;
}

#include <iostream>

const int MAX_SIZE = 100;  // Maximum size of the stack

class Stack {
public:
    Stack() : top(-1) {}  // Constructor to initialize the top

    // Push operation to add an element to the stack
    void push(int value) {
        if (top >= MAX_SIZE - 1) {
            std::cout << "Stack overflow. Cannot push more elements." << std::endl;
        } else {
            data[++top] = value;
        }
    }

    // Pop operation to remove and return the top element
    int pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
            return -1;  // Return a default value for an empty stack
        } else {
            return data[top--];
        }
    }

    // Check if the stack is empty
    bool isEmpty() const {
        return top == -1;
    }

    // Return the top element without removing it
    int peek() const {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot peek." << std::endl;
            return -1;  // Return a default value for an empty stack
        } else {
            return data[top];
        }
    }

private:
    int data[MAX_SIZE];  // Array to store stack elements
    int top;  // Index to keep track of the top element
};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element: " << myStack.peek() << std::endl;

    while (!myStack.isEmpty()) {
        std::cout << "Popped: " << myStack.pop() << std::endl;
    }

    return 0;
}

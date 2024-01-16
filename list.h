#ifndef LIST_H
#define LIST_H
#include <iostream>

using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node<T>* next;

    Node(T value) : data(value), next(nullptr) {}
};

template <typename T>
class Stack {
private:
    Node<T>* top;
    int size;

public:
    Stack() : top(nullptr), size(0) {}

    ~Stack() {
        Clear();
    }

    void Push(T value) {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = top;
        top = newNode;
        size++;
    }

    void Pop() {
        if (IsEmpty()) {
            cerr << "Error: Stack is empty. Cannot pop.\n";
            return;
        }

        Node<T>* temp = top;
        top = top->next;
        delete temp;
        size--;
    }

    T Top() const {
        if (IsEmpty()) {
            cerr << "Error: Stack is empty. No top element.\n";
            return T();
        }
        return top->data;
    }

    bool IsEmpty() const {
        return top == nullptr;
    }

    int Size() const {
        return size;
    }

    void Clear() {
        while (!IsEmpty()) {
            Pop();
        }
    }
};
#endif
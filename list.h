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
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList() : head(nullptr) {}

   
    void AddElement(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (!head) {
            head = newNode;
        }
        else {
            Node<T>* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

  
    LinkedList<T> Clone() const {
        LinkedList<T> cloneList;
        Node<T>* temp = head;
        while (temp) {
            cloneList.AddElement(temp->data);
            temp = temp->next;
        }
        return cloneList;
    }

    LinkedList<T> operator+(const LinkedList<T>& otherList) const {
        LinkedList<T> resultList = *this;
        Node<T>* temp = otherList.head;
        while (temp) {
            resultList.AddElement(temp->data);
            temp = temp->next;
        }
        return resultList;
    }

    LinkedList<T> operator*(const LinkedList<T>& otherList) const {
        LinkedList<T> commonList;
        Node<T>* temp1 = head;
        while (temp1) {
            Node<T>* temp2 = otherList.head;
            while (temp2) {
                if (temp1->data == temp2->data) {
                    commonList.AddElement(temp1->data);
                    break;
                }
                temp2 = temp2->next;
            }
            temp1 = temp1->next;
        }
        return commonList;
    }

    void PrintList() const {
        Node<T>* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

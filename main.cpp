#include"list.h"
int main() {
    Stack<int> stack;

    stack.Push(1);
    stack.Push(2);
    stack.Push(3);

    cout << "Top element: " << stack.Top() << "\n";
    cout << "Stack size: " << stack.Size() << "\n";

    stack.Pop();
    cout << "After pop, top element: " << stack.Top() << "\n";

    return 0;
}
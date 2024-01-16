#include"list.h"
int main() {
    LinkedList<int> list1, list2;

   
    list1.AddElement(1);
    list1.AddElement(2);
    list1.AddElement(3);

   
    list2.AddElement(3);
    list2.AddElement(4);
    list2.AddElement(5);

    cout << "List 1: ";
    list1.PrintList();

    cout << "List 2: ";
    list2.PrintList();

  
    LinkedList<int> cloneList = list1.Clone();
    cout << "Clone of List 1: ";
    cloneList.PrintList();

    
    LinkedList<int> resultAddList = list1 + list2;
    cout << "List 1 + List 2: ";
    resultAddList.PrintList();

    
    LinkedList<int> resultCommonList = list1 * list2;
    cout << "Common elements of List 1 and List 2: ";
    resultCommonList.PrintList();

    return 0;
}
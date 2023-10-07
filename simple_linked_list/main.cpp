#include <iostream>
#include "classes/LinkedList.h"

using namespace std;

int main() {
    LinkedList* list = new LinkedList();
    list->append(2);
    list->append(4);
    list->unshift(10);

    // list->printList();

    cout << "--------------------" << endl;

    list->pop();
    list->shift();

    // list->printList();

    cout << "--------------------" << endl;

    list->insert(4, 0);
    // list->printList();
    list->insert(8, 1);
    list->insert(22, 2);
    list->insert(99, 0);
    list->insert(69, 1);
    // list->printList();

    cout << "--------------------" << endl;

    // list->printList();

    list->remove(0);
    list->remove(4);
    list->remove(2);
    list->remove(1);
    // list->printList();

    cout << "--------------------" << endl;

    list->revert();
    // list->printList();
    list->append(69);
    list->append(69);
    list->append(22);
    list->append(40);
    list->append(22);
    list->unshift(19);
    list->unshift(72);
    list->insert(5, 22);
    list->printList();

    cout << "--------------------" << endl;

    list->removeDuplicates();
    list->printList();

    delete list;

    return 0;
}
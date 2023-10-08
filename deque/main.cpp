#include <iostream>
#include "classes/Deque.h"

using namespace std;

int main() {
    Deque* deque = new Deque();
    deque->insertFirst(24);
    deque->insertFirst(48);
    deque->insertFirst(72);
    deque->insertLast(96);

    cout << "--------- Full Deque ---------" << endl;
    deque->printDeque();

    deque->removeFirst();
    deque->removeLast();

    cout << "--------- Removing First and Last elements ----------" << endl;

    deque->printDeque();
    deque->insertLast(69);

    cout << "--------- First Node ------" << endl;
    cout << deque->first() << endl;

    cout << "--------- Last Node ------" << endl;
    cout << deque->last() << endl;

    cout << "--------- Size --------" << endl;
    cout << deque->getSize() << endl;

    return 0;
}
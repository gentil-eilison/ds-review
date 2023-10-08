#include <iostream>
#include "classes/Deque.h"

using namespace std;

int main() {
    Deque* deque = new Deque();
    deque->insertFirst(24);
    deque->insertFirst(48);
    deque->insertFirst(72);
    deque->insertLast(96);
    deque->removeFirst();
    deque->printDeque();

    return 0;
}
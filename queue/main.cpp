#include <iostream>
#include "classes/Queue.h"

using namespace std;

int main() {
    Queue* queue = new Queue();
    queue->push(44);
    queue->push(22);
    queue->push(69);
    // queue->pop();
    queue->printQueue();
    // cout << queue->front()->getNumber() << endl;
    // cout << queue->back()->getNumber() << endl;

    return 0;
}
#include <iostream>
#include "Node.h"

using namespace std;

class Queue {
    private:
        Node* firstNode = nullptr;
        Node* lastNode = nullptr;
        unsigned int size = 0;
    public:
        Node* front();
        Node* back();
        void push(int number);
        void pop();
        void printQueue();
};
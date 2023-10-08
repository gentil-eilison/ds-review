#include <iostream>
#include "Node.h"

using namespace std;

class Deque {
    private:
        Node* startNode = nullptr;
        Node* endNode = nullptr;
        unsigned int size = 0;
    public:
        void insertFirst(int number);
        void insertLast(int number);
        void removeFirst();
        void removeLast();
        unsigned int getSize();
        int first();
        int last();
        bool isEmpty();
        void printDeque();
};
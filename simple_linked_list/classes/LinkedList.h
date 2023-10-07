#include <iostream>
#include "Node.h"

using namespace std;

class LinkedList {
    private:
        Node* head = nullptr;
        Node* tail = nullptr;
        unsigned int size = 0;
    public:
        Node* getHead();
        Node* getTail();
        unsigned int getSize();
        void printList();

        void append(int number);
        void unshift(int number);
        void insert(int number, unsigned int position);
        void remove(unsigned int position);
        void revert();
        void pop();
        void shift();
        void removeDuplicates();
};
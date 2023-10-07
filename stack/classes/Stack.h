#include <iostream>
#include "Node.h"

using namespace std;

class Stack {
    private:
        Node* topNode = nullptr;
    public:
        void push(int number);
        void pop();
        int getTop();
        bool isEmpty();
        void printStack();
};
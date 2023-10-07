#include <iostream>
#include "Stack.h"
#include "Node.h"

using namespace std;

bool Stack::isEmpty() {
    return this->topNode == nullptr;
}

void Stack::push(int number) {
    Node* node = new Node(number);
    if (this->isEmpty()) {
        this->topNode = node;
        node->setPreviousNode(nullptr);
    } else {
        Node* currentTopNode = this->topNode;
        this->topNode = node;
        node->setPreviousNode(currentTopNode);
    }
}

void Stack::pop() {
    if (this->isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        Node* previousTop = this->topNode;
        this->topNode = this->topNode->getPreviousNode();
        delete previousTop;
    }
}

int Stack::getTop() {
    if (this->isEmpty()) {
        cout << "Stack is empty" << endl;
        return -1;
    } else {
        return this->topNode->getNumber();
    }
}

void Stack::printStack() {
    Node* currentNode = this->topNode;

    while(currentNode != nullptr) {
        cout << currentNode->getNumber() << endl;
        currentNode = currentNode->getPreviousNode();
    }
}
#include <iostream>
#include "Node.h"
#include "Queue.h"

using namespace std;

void Queue::push(int number) {
    Node* node = new Node(number);
    if (this->firstNode == nullptr) {
        this->firstNode = node;
        this->lastNode = node;
        node->setNextNode(nullptr);
    } else {
        this->lastNode->setNextNode(node);
        node->setNextNode(nullptr);
        this->lastNode = node;
    }
    this->size++;
}

void Queue::pop() {
    if (this->firstNode == nullptr) {
        cout << "Queue is empty" << endl;
    } else {
        Node* currentFirstNode = this->firstNode;
        this->firstNode = this->firstNode->getNextNode();
        delete currentFirstNode; 
    }
    this->size--;
}

void Queue::printQueue() {
    Node* currentNode = this->firstNode;
    while(currentNode != nullptr) {
        cout << currentNode->getNumber() << endl;
        currentNode = currentNode->getNextNode();
    }
}

Node* Queue::front() {
    return this->firstNode;
}

Node* Queue::back() {
    return this->lastNode;
}
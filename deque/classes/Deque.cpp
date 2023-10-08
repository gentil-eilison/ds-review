#include <iostream>
#include "Deque.h"
#include "Node.h"

using namespace std;

bool Deque::isEmpty() {
    return this->startNode == nullptr;
}

void Deque::insertFirst(int number) {
    Node* node = new Node(number);
    if (this->isEmpty()) {
        this->startNode = node;
        this->endNode = node;
    } else {
        this->startNode->setPreviousNode(node);
        node->setNextNode(this->startNode);
        this->startNode = node;
        node->setPreviousNode(nullptr);
    }
}

void Deque::insertLast(int number) {
    Node* node = new Node(number);
    if (this->isEmpty()) {
        this->startNode = node;
        this->endNode = node;
    } else {
        this->endNode->setNextNode(node);
        node->setPreviousNode(this->endNode);
        node->setNextNode(nullptr);
        this->endNode = node;
    }
}

void Deque::removeFirst() {
    if (this->isEmpty()) {
        cout << "Deque is empty" << endl;
    } else {
        Node* currentFirstNode = this->startNode;
        this->startNode = this->startNode->getNextNode();
        this->startNode->setPreviousNode(nullptr);
        delete currentFirstNode;
    }
}

void Deque::printDeque() {
    Node* currentNode = this->startNode;
    while(currentNode != nullptr) {
        cout << currentNode->getNumber() << endl;
        currentNode = currentNode->getNextNode();
    }
}
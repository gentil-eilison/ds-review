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

    this->size++;
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

    this->size++;
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
    this->size--;
}

void Deque::removeLast() {
    if (this->isEmpty()) {
        cout << "Deque is empty" << endl;
    } else {
        Node* currentLastNode = this->endNode;
        this->endNode = this->endNode->getPreviousNode();
        this->endNode->setNextNode(nullptr);
        delete currentLastNode;
    }
    this->size--;
}

void Deque::printDeque() {
    Node* currentNode = this->startNode;
    while(currentNode != nullptr) {
        cout << currentNode->getNumber() << endl;
        currentNode = currentNode->getNextNode();
    }
}

int Deque::first() {
    if (this->isEmpty()) {
        cout << "Deque is empty" << endl;
        return -1;
    } else {
        return this->startNode->getNumber();
    }
}

int Deque::last() {
    if (this->isEmpty()) {
        cout << "Deque is empty" << endl;
        return -1;
    } else {
        return this->endNode->getNumber();
    }
}

unsigned int Deque::getSize() {
    return this->size;
}
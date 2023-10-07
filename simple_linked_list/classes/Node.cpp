#include <iostream>
#include "Node.h"

using namespace std;

Node::Node(int number) {
    this->number = number;
}

void Node::setNumber(int number) {
    this->number = number;
}

int Node::getNumber() {
    return this->number;
}

void Node::setNextNode(Node* nextNode) {
    this->nextNode = nextNode;
}

Node* Node::getNextNode() {
    return this->nextNode;
}
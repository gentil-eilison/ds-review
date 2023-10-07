#include <iostream>
#include "LinkedList.h"
#include "Node.h"

using namespace std;

Node* LinkedList::getHead() {
    return this->head;
}

Node* LinkedList::getTail() {
    return this->tail;
}

unsigned int LinkedList::getSize() {
    return this->size;
}

void LinkedList::printList() {
    Node* currentNode = this->head;

    while (currentNode != nullptr) {
        cout << currentNode->getNumber() << endl;
        currentNode = currentNode->getNextNode();
    }
}

void LinkedList::append(int number) {
    // Inserts a node at the end of the list
    Node* node = new Node(number);
    if (this->head == nullptr) {
        this->head = node;
        this->tail = node;
        node->setNextNode(nullptr);
    } else {
        this->tail->setNextNode(node);
        this->tail = node;
        node->setNextNode(nullptr);
    }
    this->size++;
}

void LinkedList::pop() {
    // Removes a node from the end of the list
    if (this->tail == nullptr) {
        cout << "List is empty, no elements to pop." << endl;
    } else {
        Node* currentNode = this->head;
        Node* previousNode = nullptr;

        while (currentNode->getNextNode() != nullptr) {
            previousNode = currentNode;
            currentNode = currentNode->getNextNode();
        }

        this->tail = previousNode;
        previousNode->setNextNode(nullptr);
        delete currentNode;
    }
    this->size--;
}

void LinkedList::unshift(int number) {
    // Inserts a note at the start of the list
    Node* node = new Node(number);
    if (this->head == nullptr) {
        this->head = node;
        this->tail = node;
        node->setNextNode(nullptr);
    } else {
        node->setNextNode(this->head);
        this->head = node;
    }
    this->size++;
}

void LinkedList::shift() {
    // Removes an element at the start of the list
    if (this->head == nullptr) {
        cout << "List is empty, no elements to shift." << endl;
    } else {
        Node* currentHead = this->head;
        this->head = currentHead->getNextNode();
        delete currentHead;
    }
    this->size--;
}

void LinkedList::insert(int number, unsigned int position) {
    // Inserts a node at the specified position, shifting the current to the right
    if (position > this->getSize() - 1) {
        cout << "Invalid position" << endl;
    } else {
        if (position == 0) {
            this->unshift(number);
        } else {
            Node* node = new Node(number);
            unsigned int currentPosition = 0;
            Node* currentNode = this->head;
            Node* previousNode = this->head;
            while (currentPosition != position) {
                previousNode = currentNode;
                currentNode = currentNode->getNextNode();
                currentPosition++;
            }
            node->setNextNode(currentNode);
            previousNode->setNextNode(node);
            this->size++;
        }

    }
}

void LinkedList::remove(unsigned int position) {
    // Removes a node at the specified position from the list
    if (this->head == nullptr) {
        cout << "List is already empty." << endl;
    } else if (position > this->getSize() - 1) {
        cout << "Invalid position" << endl; 
    } else if (position == this->getSize() - 1) {
        this->pop();
    } else if (position == 0) {
        this->shift();
    } else {
        unsigned int currentPosition = 0;
        Node* currentNode = this->head;
        Node* previousNode = nullptr;

        while (currentPosition != position) {
            previousNode = currentNode;
            currentNode = currentNode->getNextNode();
            currentPosition++;
        }

        previousNode->setNextNode(currentNode->getNextNode());
        delete currentNode;
        this->size--;
    }
}

void LinkedList::revert() {
    // Reverts the list elements
    if (this->head == nullptr || this->getSize() == 1) {
        cout << "List is either empty or single-valued, no reversing allowed" << endl;
    } else {
        Node* previousNode = nullptr;
        Node* nextNode = this->head->getNextNode();

        while(nextNode != nullptr) {
            this->head->setNextNode(previousNode);
            previousNode = this->head;
            this->head = nextNode;
            nextNode = nextNode->getNextNode();
        }

        this->head->setNextNode(previousNode);

    }
}

void LinkedList::removeDuplicates() {
    if (this->head == nullptr || this->getSize() == 1) {
        cout << "List is empty or single-valued. No removeDuplicates allowed" << endl;
    } else {
        Node* nodeToCompareTo = this->head;
        Node* currentNode = this->head->getNextNode();
        Node* previousNode = this->head;

        while (nodeToCompareTo->getNextNode() != nullptr) {
            while (currentNode != nullptr) {
                if (currentNode->getNumber() == nodeToCompareTo->getNumber()) {
                    Node* temp = currentNode;
                    previousNode->setNextNode(temp->getNextNode());
                    currentNode = currentNode->getNextNode();
                    delete temp;
                } else {
                    previousNode = currentNode;
                    currentNode = currentNode->getNextNode();
                }
            }
            nodeToCompareTo = nodeToCompareTo->getNextNode();
            previousNode = nodeToCompareTo;
            currentNode = nodeToCompareTo->getNextNode();
        }
    }

}
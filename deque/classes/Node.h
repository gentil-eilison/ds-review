#include <iostream>

using namespace std;

#ifndef NODE_H
#define NODE_H

class Node {
    private:
        int number;
        Node* nextNode = nullptr;
        Node* previousNode = nullptr;
    public:
        Node(int number);
        void setNumber(int number);
        int getNumber();
        void setNextNode(Node* nextNode);
        Node* getNextNode();
        void setPreviousNode(Node* previousNode);
        Node* getPreviousNode();
};

#endif
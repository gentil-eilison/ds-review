#include <iostream>

using namespace std;

#ifndef NODE_H
#define NODE_H

class Node {
    private:
        int number;
        Node* previousNode = nullptr;
    public:
        Node(int number);
        void setNumber(int number);
        int getNumber();
        void setPreviousNode(Node* previousNode);
        Node* getPreviousNode();
};

#endif
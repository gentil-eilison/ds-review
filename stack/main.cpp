#include <iostream>
#include "classes/Stack.h"

using namespace std;

int main() {
    Stack* stack = new Stack();
    stack->push(5);
    stack->push(11);
    stack->push(23);
    stack->push(69);
    stack->pop();
    stack->printStack();

    cout << "----------Topo----------" << endl;
    cout << stack->getTop() << endl;

    return 0;
}
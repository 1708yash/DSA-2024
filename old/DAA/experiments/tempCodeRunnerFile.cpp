#include <iostream>
using namespace std;
template <class T>
class Node
{
public:
    T data;
    Node *next;
    Node(T data)
    {
        this->data = data;
        next = nullptr;
    }
};
template <class T>
class Stack
{
private:
    Node<T> *top;
public:
    Stack()
    {
        top = nullptr;
    }
    ~Stack()
    {
        while (top != nullptr)
        {
            Node<T> *temp = top;
            top = top->next;
            delete temp;
        }
    }
    bool isEmpty()
    {
        return top == nullptr;
    }
    bool isFull()
    {
        return false; // A linked list can never be full
    }
    T topElement()
    {
        if (isEmpty())
        {
            throw "Stack is empty";
        }
        return top->data;
    }
    void push(T element)
    {
        Node<T> *newNode = new Node<T>(element);
        newNode->next = top;
        top = newNode;
    }
    T pop()
    {
        if (isEmpty())
        {
            throw "Stack is empty";
        }
        T element = top->data;
        Node<T> *temp = top;
        top = top->next;
        delete temp;
        return element;
    }
};
int main()
{
    Stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    if (!stack.isEmpty())
    {
        cout << "The top element is " << stack.topElement() << endl;
    }
    stack.pop();
    if (!stack.isEmpty())
    {
        cout << "The top element is " << stack.topElement() << endl;
    }
    return 0;
}

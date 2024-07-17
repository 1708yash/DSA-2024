#include <bits/stdc++.h>
using namespace std;

// implement stack using array
class Stack
{
    int *arr;
    int top;
    int size;

public:
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int x)
    {
        if (top == size - 1)
            cout << "Stack Overflow" << endl;
        else
        {
            top++;
            arr[top] = x;
        }
    }
    void pop()
    {
        if (top == -1)
            cout << "Stack Underflow" << endl;
        else
        {
            top--;
        }
    }
    int peek()
    {
        if (top == -1)
            cout << "Stack Underflow" << endl;
        else
            return arr[top];
    }
    void display()
    {
        if (top == -1)
            cout << "Stack is empty" << endl;
        else
        {
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main()
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.peek() << endl;
    s.pop();
    s.display();
}
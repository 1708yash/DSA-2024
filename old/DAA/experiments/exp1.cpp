#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
    T *arr;
    int top;
    int capacity;

public:
    Stack(int capacity)
    {
        this->capacity = capacity;
        arr = new T[capacity];
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == capacity - 1;
    }

    T topElement()
    {
        if (isEmpty())
        {
            cout << "Stack is empty hence need to put new elements first!" << endl;
            cout<<" the index is curently at"<<endl;
            return -1;
        }
        return arr[top];
    }

    void push(T element)
    {
        if (isFull())
        {
            cout << "Stack is full! make space" << endl;
            return;
        }
        top++;
        arr[top] = element;
    }

    T pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty, hence there is nothing to delete!" << endl;
            return 0;
        }
        T element = arr[top];
        top--;
        return element;
    }
};

int main()
{
    cout<<" By: Yash Tomar  (21BCS5128)"<<endl;
    Stack<int> st(10);
    cout<<st.topElement()<<endl;
    st.push(111);
    st.push(5128);
    st.push(786);

    cout << "Top element after checking for empty and full: " << st.topElement() << endl;

    st.pop();
    st.pop();
     
    cout << "Top elements after pop operation: " << st.topElement() << endl;

    return 0;
}
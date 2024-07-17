#include <iostream>
#include <stdexcept>
#include <stack>
template <typename T, int MaxSize>
class Stack
{
private:
    T data[MaxSize];
    int topIndex;

public:
    Stack() : topIndex(-1) {}
    bool IsEmpty()const
    {
        return topIndex == -1;
    }
    bool IsFull() const
    {
        return topIndex == MaxSize - 1;
    }
    void Push(const T &element)
    {
        if (!IsFull())
        {
            topIndex++;
            data[topIndex] = element;
        }
        else
        {
            throw std::overflow_error("Stack is full. Cannot push element.");
        }
    }
    void Pop()
    {
        if (!IsEmpty())
        {
            topIndex--;
        }
        else
        {
            throw std::underflow_error("Stack is empty. Cannot pop element.");
        }
    }
    T Top() const
    {
        if (!IsEmpty())
        {
            return data[topIndex];
        }
        else
        {
            throw std::underflow_error("Stack is empty. Cannot retrieve top element.");
        }
    }
};
int main()
{
    try
    {
        Stack<int, 5>
            intStack;
        std::cout << "Is stack empty? " << (intStack.IsEmpty() ? "Yes" : "No") << std::endl;
        intStack.Push(475);
        intStack.Push(624);
        intStack.Push(142);
        std::cout << "Top element: " << intStack.Top() << std::endl;
        intStack.Pop();
        std::cout << "Is stack full? " << (intStack.IsFull() ? "Yes" : "No") << std::endl;
        std::cout << "Top element after pop: " << intStack.Top() << std::endl;
        intStack.Pop();
        intStack.Pop();
        intStack.Pop();
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;

    }
    return 0;
}
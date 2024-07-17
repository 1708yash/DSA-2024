#include <iostream>
using namespace std;
class stacks{
int top;
public: int stack[1000]; // array for the stack
stacks(){top=-1;}
bool push(int x);
int pop();
bool isEmpty();
};

// function to push in the stack
bool stacks::push(int item){
if(top>=1000){
cout<<"Stack Overflow";
return false;

}
}
bool stacks::pop(){

}
bool stacks::isEmpty(){

}
int main()
{

}
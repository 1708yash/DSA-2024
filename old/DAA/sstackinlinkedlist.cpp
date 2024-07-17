#include <iostream>
#include <stack>
using namespace std;

class node{
public:
int node_data;
node* next;
node(int n)
{
    this->node_data=n;
    this->next=NULL;
}
};
class stacks{
node* top;
public: 
stacks(){top=NULL;}
    void push(int data){
        node* temp=new node(data);
        temp->node_data=data;   
        temp->next=top;
        top=temp;

        if(!temp){  // when the stack is overflowing
            exit(1);
        }

    }
    
};
// 
// class stacks{
//     node* top;
//     public:

// }
int main()
{

}
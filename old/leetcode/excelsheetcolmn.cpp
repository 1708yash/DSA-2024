#include <iostream>
using namespace std;
class solution{
    public:
    string convertitle(int columnnumber){
      int rem;
      string result;
      while(columnnumber>0){
        columnnumber=columnnumber-1;
        rem=columnnumber%26;
 
        result=char(65+rem)+result;
        columnnumber/=26;
      }
      cout<<string(result);
    }
};
int main()
{
    int a=28;
    solution m;
    m.convertitle(a);
    return 0;
}
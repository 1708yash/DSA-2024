#include <iostream>
using namespace std;
bool isEven(int a){
if(a%2==0){
    cout<<"even";
}
else {
cout<<"odd";
}
}

int power(int a,int b){
int ans=1;
for(int i=1;i<=b;i++){
    ans =ans*a;
}
  return ans;
}

int main()
{
int a,b,c;
cin>>a>>b;
c=a+b;
int ans =power(a,b);
cout<<ans<<endl;
ans = isEven(c);
return 0;
}
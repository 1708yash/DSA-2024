// using recursive method
#include <iostream>
using namespace std;
int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return power(x * x, n / 2);
    }
    else
    {
        return x * power(x * x, n / 2);
    }
}
int main()
{
    int x = 2;
    int n = 15;
    for(int i=10;i<n;i++){
        cout << "Power of the given number " << i << " is :" << power(x, i) << endl;
    }
    return 0;
}

// using iterative method

// #include <iostream>
// using namespace std;
// int power(int x,int n){
//     if(n==0){
//         return 1;
//     }
//    else if(n%2==0){
//      for(int i=0;i<n/2;i++){
//         x= x*i;
//      }
//         return x;
//    }
//     else{
//          for(int i=0;i<n/2;i++){
//           x= x*i;
//       }
//           return x*x;
// }}
// int main()
// {
//     int x = 2;
//     int n = 10;
//     cout << power(x, n) << endl;
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    // 123 first que
    // 123
    // 123
    int n;
    cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<j;
    //         j=j+1 ;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

// Q2 print the below
//123
//456
//789
// int i=1,count=1;
// while(i<=n){
// int j=1;
// while(j<=n){
//     cout<<count;
//     count++;
//     j++;
// }
// cout<<endl;
// i++;
// }   



// Q3 print the below star pattern
// *
// **
// ***
// ****
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<"*";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }


//Q4 print the following pattern
//1
//22
//333
//4444




//Q5 print the following
// 1
// 23
// 345
// 4567
/* int i=1,count=1;
while(i<=n){
    int j=1;
    int k=i;
    while(j<=i){
    cout<<k;
   
    j++;
    k++;
    }
    cout<<endl;
    i++;
} */


// Q6 print the following
/* 
1
21
321
4321
 */
int i =1;
while(i<=n){
    int j=1;
    while(j<=i){
    cout<<(i-j+1)<<" ";
    j++;
    }
    cout<<endl;
    i++;
}

}


// // time complexity: O(nlogn)
// // #include <iostream>
// // #include <algorithm>
// // using namespace std;

// // void countDistinct(int arr[], int n)
// // {

// //     sort(arr, arr + n);
// //     for (int i = 0; i < n; i++)
// //     {
// //         int count = 1;
// //         while (i < n - 1 && arr[i] == arr[i + 1])
// //         {
// //             i++;
// //             count++;
// //         }

// //         cout << arr[i] << ": " << count << endl;
// //     }
// // }
// // int main()
// // {
// //     int arr[] = {5, 8, 5, 7, 8, 10,7};
// //     int n = sizeof(arr) / sizeof(arr[0]);
// //     countDistinct(arr, n);
// //     return 0;
// // }


// // complexity O(n^2)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {10, 30, 10, 20, 10, 20, 30, 10};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int seen[n];
//     for (int i = 0; i < n; i++)
//     {
//         if (seen[i] != 1)
//         {
//             int count = 1;
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     count++;
//                     seen[j] = 1;
//                 }
//             }
//             cout<<arr[i]<<" frequency is: "<<count<< endl;
//         }
//     }
//     return 0;
// }

// // #include <bits/stdc++.h>
// // using namespace std;

// // // Main function to run the program
// // int main()
// // {
// //     int arr[] = {10, 30, 10, 20, 10, 20, 30, 10};
// //     int n = sizeof(arr) / sizeof(arr[0]);

// //     unordered_map<int, int> mp;

// //     for (int i = 0; i < n; i++)
// //         mp[arr[i]]++;

// //     for (auto it = mp.begin(); it != mp.end(); it++)
// //         cout < first << " occurs " < second << " times\n";
// // }

#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    cout<<"By: Yash Tomar"<<endl;
    int arr[] = {1, 2, 3, 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> freqMap;
    for (int i = 0; i < n; i++)
    {
        freqMap[arr[i]]++;
    }
    for (auto iter = freqMap.begin(); iter != freqMap.end(); iter++)
    {
        cout << iter->first << " " << iter->second << endl;
    }

    return 0;
}

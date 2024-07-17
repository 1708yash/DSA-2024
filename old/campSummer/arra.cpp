// #include <iostream>
// using namespace std;

// int rotate(int arr[],int n)
// {
//     int temp = arr[n-1];
//     for(int i=n-1;i>0;i--)
//     {
//         arr[i] = arr[i-1];
//     }
//     arr[0] = temp;
// }
// int main()
// {
// // right rotation in array

// int n = 8;
// int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};

// rotate(arr,n);
// rotate(arr, n);
// rotate(arr, n);

// for(int i=0;i<n;i++)
// {
//     cout<<arr[i]<<" ";
// }
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     // Input string
//     string str;
//     cout << "Enter a lowercase string: ";
//     getline(cin, str);

//     // Convert to uppercase using ASCII values
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] = str[i] - 'a' + 'A';
//         }
//     }

//     // Output the result
//     cout << "Uppercase string: " << str << endl;

//     return 0;
// }
#include <iostream>
#include <vector>

using namespace std;

void printMatrix(const vector<vector<int>> &matrix)
{
    for (const auto &row : matrix)
    {
        for (const auto &elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> transposeMatrix(const vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<int>> transposed(cols, vector<int>(rows));

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    vector<vector<int>> transposed = transposeMatrix(matrix);

    cout << "Transposed Matrix:" << endl;
    printMatrix(transposed);

    return 0;
}

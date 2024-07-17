#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> strings;
vector<string> currentSubset;
vector<string> resSub;
long long targetRank;
long long currRk;

// Function to generate all legal subsets recursively
void generateSubsets(int index)
{
    if (index == strings.size())
    {
        currRk++;
        if (currRk == targetRank)
        {
            resSub = currentSubset;
        }
        return;
    }

    // Include the current string in the subset
    currentSubset.push_back(strings[index]);
    generateSubsets(index + 1);
    currentSubset.pop_back();

    // Exclude the current string in the subset
    generateSubsets(index + 1);
}

int main()
{
    int N;
    cin >> N;

    cin >> targetRank;

    string input;
    cin >> input;

    size_t pos = 0;
    string delimiter = ",";
    while ((pos = input.find(delimiter)) != string::npos)
    {
        strings.push_back(input.substr(0, pos));
        input.erase(0, pos + delimiter.length());
    }
    strings.push_back(input);

    currRk = 0;
    generateSubsets(0);

    for (int i = 0; i < resSub.size(); i++)
    {
        cout << resSub[i];
        if (i < resSub.size() - 1)
        {
            cout << ",";
        }
    }
    cout << endl;

    return 0;
}

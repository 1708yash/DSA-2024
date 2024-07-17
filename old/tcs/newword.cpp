#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string originalSequence, inputSequence;
    cin >> originalSequence;
    cin.ignore(); // Ignore the newline character
    getline(cin, inputSequence);

    // Check for duplicate characters in the original sequence
    unordered_map<char, int> charCount;
    for (char c : originalSequence)
    {
        if (isalnum(c) || c == ' ' || c == '@' || c == '#' || c == ')' || c == '(')
        {
            if (charCount.count(c) > 0)
            {
                cout << "New Language Error" << endl;
                return 0;
            }
            charCount[c]++;
        }
    }

    string newSequence;
    for (char c : originalSequence)
    {
        if (isalpha(c) || isdigit(c) || c == ' ' || c == '@' || c == '#' || c == ')' || c == '(')
        {
            newSequence += c;
        }
    }

    unordered_map<char, char> translationMap;
    for (int i = 0; i < newSequence.length(); i++)
    {
        translationMap[newSequence[i]] = inputSequence[i];
    }

    string translatedSequence;
    for (char c : inputSequence)
    {
        if (translationMap.find(c) != translationMap.end())
        {
            translatedSequence += translationMap[c];
        }
    }

    cout << translatedSequence << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cin >> input;

    string actn;
    cin >> actn;

    int curInd = 0;
    for (char action : actn)
    {
        if (action == 'R')
        {
            curInd = min(curInd + 1, (int)input.size() - 1);
        }
        else if (action == 'L')
        {
            curInd = max(curInd - 1, 0);
        }
        else if (action == 'T')
        {
            if (input[curInd] < '9')
            {
                input[curInd]++;
            }
        }
        else if (action == 'D')
        {
            if (input[curInd] > '0')
            {
                input[curInd]--;
            }
        }
        else if (action >= 'S' && action <= 'S' + '9')
        {
            int suIndex = action - 'S';
            swap(input[curInd], input[curInd + suIndex]);
        }
    }

    cout << input << endl;

    return 0;
}

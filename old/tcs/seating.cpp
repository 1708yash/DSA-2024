#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string seats;
    cin >> seats;

    int emptySeats = 0;
    int minMoves = 0;
    int ways = 1;

    for (char seat : seats)
    {
        if (seat == 'E')
        {
            emptySeats++;
        }
        else
        {
            minMoves += (emptySeats > 0) ? 1 : 0;
            emptySeats = 0;
        }
    }

    if (emptySeats > 0)
    {
        minMoves--; // The last group of empty seats doesn't require a move
        for (int i = 1; i <= emptySeats; i++)
        {
            ways *= i;
        }
    }

    cout << minMoves << " " << ways << endl;

    return 0;
}

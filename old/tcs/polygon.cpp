#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to calculate the absolute value of the area using the Shoelace formula
double calculateArea(vector<pair<int, int>> &points)
{
    double area = 0.0;
    int n = points.size();

    for (int i = 0; i < n; i++)
    {
        int x1 = points[i].first;
        int y1 = points[i].second;
        int x2 = points[(i + 1) % n].first;
        int y2 = points[(i + 1) % n].second;

        area += (x1 * y2) - (x2 * y1);
    }

    return abs(area) / 2.0;
}

int main()
{
    int N;
    cin >> N;

    vector<pair<int, int>> coordinates(N);

    for (int i = 0; i < N; i++)
    {
        cin >> coordinates[i].first >> coordinates[i].second;
    }

    double maxArea = calculateArea(coordinates);
    cout << maxArea << endl;

    return 0;
}

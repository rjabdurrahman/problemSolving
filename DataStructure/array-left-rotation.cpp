#include <iostream>

using namespace std;

int main()
{
    int n, d, i;
    cin >> n;
    cin >> d;
    int part1[d], part2[n - d];
    for(i = 0; i < n; i++)
    {
        if(i < d)
        {
            cin >> part1[i];
        }
        else cin >> part2[i - d];
    }

    for(i = 0; i < n - d; i++) cout << part2[i] << " ";
    for(i = 0; i < d; i++) cout << part1[i] << " ";
    cout << endl;

    return 0;
}

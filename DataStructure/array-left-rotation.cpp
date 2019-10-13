#include <iostream>

using namespace std;

int main()
{
    int n, d, i, p;
    cin >> n;
    cin >> d;
    int part1[d];
    for(i = 0; i < n; i++)
    {
        if(i < d)
        {
            cin >> part1[i];
        }
        else
        {
            cin >> p;
            cout << p << " ";;
        }
    }
    for(i = 0; i < d; i++) cout << part1[i] << " ";
    cout << endl;

    return 0;
}

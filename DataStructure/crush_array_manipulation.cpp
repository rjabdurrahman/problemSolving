#include <iostream>

using namespace std;

int main()
{
    long int n, m, count = 0, st, en, val, max = 0;
    cin >> n >> m;
    long int arr[n];
    for(long int i = 0; i < n; i++) arr[i] = 0;
    for(int i = 0; i < 4; i++)
    {
        if(count == m) break;
        if(i == 3)
        {
            i = 0;
            continue;
        }
        cin >> st;
        if(st == 10000000)
        {
            ++i;
            cin >> val;
            arr[st] += val;
        }
        else
        {
            cin >> en >> val;
            for(long int j = st-1; j < en; j++) arr[j] += val;
        }
        count++;
    }

    for(long int i = 0; i < n; i++) max = arr[i] > max ? arr[i] : max;
    cout << max <<endl;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n, d;
    cin >> n;
    cin >> d;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int j = 0; j < d; j++)
    {
        int temp = arr[0];
        for(int i = 0; i < n -1; i++) arr[i] = arr[i+1];
        arr[n - 1] = temp;
    }
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}

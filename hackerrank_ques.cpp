// question link : https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true

// code
#include <iostream>
using namespace std;

int main()
{
    int n, q, k;
    cin >> n >> q;
    int arr[q][2];
    int **a = new int *[n];

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        a[i] = new int[k];
        for (int j = 0; j < k; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int h = 0; h < q; h++)
    {
        for (int g = 0; g < 2; g++)
        {
            cin >> arr[h][g];
        }
    }
    for (int h = 0; h < q; h++)
    {
        cout << a[arr[h][0]][arr[h][1]] << endl;
    }

    return 0;
}

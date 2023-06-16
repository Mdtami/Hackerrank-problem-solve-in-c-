#include <bits/stdc++.h>
using namespace std;
int bs(int arr[], int n, int k)
{
    while (k--)
    {
        int a;
        cin >> a;
        int l = 0, r = n - 1, res = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == a)
            {
                res = mid;
                return res;
            }
            else if (arr[mid] > a)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return res;
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ac = bs(arr, n, k);
    if (ac != -1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

// bakita pore korbo
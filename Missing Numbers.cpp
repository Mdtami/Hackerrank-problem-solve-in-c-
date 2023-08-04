#include <bits/stdc++.h>
using namespace std;
void missingNumbers(int arr[], int arr2[], int n, int m)
{
    sort(arr, arr + n);
    sort(arr2, arr2 + m);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
    missingNumbers(arr, arr2, n, m);
} // bakita korbo
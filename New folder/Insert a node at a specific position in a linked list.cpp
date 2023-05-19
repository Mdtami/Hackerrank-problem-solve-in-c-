#include <bits/stdc++.h>
using namespace std;
void insertNodeAtPosition(list<int> li, list<int> li2, int t)
{
    int k, b;
    cin >> k;
    cin >> b;
    for (int i = 0; i < t; i++)
    {
        li2[i] = li[i];
    }
    for (int i = b; i < t; i++)
    {
        li2[i + 1] = li[i];
    }
    for (int i = b; i <= b; i++)
    {
        li2.push_back(k);
    }

    for (int i = 0; i < t + 1; i++)
    {
        cout << li2.front() << endl;
        li2.pop_front();
    }
}
int main()
{
    int t;
    cin >> t;
    list<int> li;
    list<int> li2;
    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        li.push_back(a);
    }
    insertNodeAtPosition(li, li2, t);
}
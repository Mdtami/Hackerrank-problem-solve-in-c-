#include <bits/stdc++.h>
using namespace std;
void SinglyLinkedListNode(list<int> li, int m)
{
    li.reverse();
    list<int>::iterator it;
    it = li.begin();
    advance(it, m);
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        list<int> li;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            li.push_back(a);
        }
        int m;
        cin >> m;
        SinglyLinkedListNode(li, m);
    }
}
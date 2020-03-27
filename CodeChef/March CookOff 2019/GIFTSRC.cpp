#include <bits/stdc++.h>
using namespace std;
int x = 0, y = 0;
void changecord(int &x, int &y, char com)
{
    if (com == 'L')
        x--;
    else if (com == 'R')
        x++;
    else if (com == 'U')
        y++;
    else if (com == 'D')
        y--;
}
bool checkxis(char prev, char cur)
{
    if (((prev == 'L') && (cur == 'R')) || ((prev == 'R') && (cur == 'L')) || ((prev == 'L') && (cur == 'L')) || ((prev == 'R') && (cur == 'R')))
        return true;
    if (((prev == 'U') && (cur == 'D')) || ((prev == 'D') && (cur == 'U')) || ((prev == 'U') && (cur == 'U')) || ((prev == 'D') && (cur == 'D')))
        return true;
    return false;
}
void solve()
{
    x = 0, y = 0;
    int n = 0;
    cin >> n;
    string A;
    cin >> A;
    char prev = 'A';
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            prev = A[i - 1];
        char cur = A[i];
        if (checkxis(prev, cur))
            continue;
        else
        {
            changecord(x, y, cur);
        }
    }
    cout << x << ' ' << y << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
long long int res[4801];
bool leap(long long int i)
{
    if (i % 400 == 0)
        return true;
    if (i % 4 == 0 && i % 100 != 0)
        return true;
    return false;
}
long long int solve(long long int m, long long int y)
{
    long long int r = 0;
    r = (y / 400) * res[4800];
    r += res[(y % 400 * 12) + m - 1];
    return r;
}
int main()
{
    long long int s = 6;

    for (long long int i = 0; i < 400; i++)
    {
        for (long long int j = 1; j <= 12; j++)
        {
            long long int d = 0;
            if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
                d = 31;
            if (j == 4 || j == 6 || j == 9 || j == 11)
                d = 30;
            if (j == 2)
            {
                if (leap(i))
                    d = 29;
                else
                    d = 28;
            }
            long long int d1 = 0, d2 = d - 1;
            while ((s + d1) % 7 != 5)
                d1++;
            while ((s + d2) % 7 != 0)
                d2--;
            d2 -= 7;
            res[i * 12 + j] = res[i * 12 + j - 1];
            if (d1 + 10 > d2)
                res[i * 12 + j]++; 
            s = (s + d) % 7;
        }
    }
    long long int t = 0;
    cin >> t;
    while (t--)
    {
        long long int m1 = 0, y1 = 0, m2 = 0, y2 = 0;
        cin >> m1 >> y1;
        cin >> m2 >> y2;
        m2++;
        if (m2 > 12)
        {
            m2 = 1;
            y2++;
        }
        cout << solve(m2, y2) - solve(m1, y1) << '\n';
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int lookup[256];
void scanner(int &n)
{
    bool isneg = false;
    register int c;
    n = 0;
    c = getchar();
    if (c == '-')
    {
        isneg = true;
        c = getchar();
    }
    for (; (c > 47 && c < 58); c = getchar())
        n = (n << 1) + (n << 3) + c - 48;
    if (isneg)
        n *= -1;
}
void intial()
{
    lookup[0] = 0;
    for (int i = 1; i < 256; i++)
        lookup[i] = (i & 1) + lookup[i / 2];
}
int countbit(int n)
{
    return (lookup[n & 0xff] +
            lookup[(n >> 8) & 0xff] +
            lookup[(n >> 16) & 0xff] +
            lookup[n >> 24]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    scanner(t);
    intial();
    while (t--)
    {
        int n = 0, q = 0;
        scanner(n);
        scanner(q);
        int A[n];
        int res = 0;
        for (int i = 0; i < n; i++)
            scanner(A[i]);
        while (q--)
        {
            int qy = 0, evn = 0, odd = 0;
            scanner(qy);
            for (int i = 0; i < n; i++)
            {
                res = qy ^ A[i];
                if (countbit(res) % 2 == 0)
                    evn++;
                else
                    odd++;
            }
            cout << evn << ' ' << odd << '\n';
        }
    }
    return 0;
}

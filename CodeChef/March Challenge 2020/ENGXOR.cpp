#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
void scanner(lli &n)
{
    bool isneg = false;
    register lli c;
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
bool parity(lli x)
{
    lli y = x ^ (x >> 1);
    y = y ^ (y >> 2);
    y = y ^ (y >> 4);
    y = y ^ (y >> 8);
    y = y ^ (y >> 16);
    if (y & 1)
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t = 0;
    scanner(t);
    while (t--)
    {
        lli n = 0, q = 0;
        scanner(n);
        scanner(q);
        lli A[n];
        lli res = 0;
        for (lli i = 0; i < n; i++)
            scanner(A[i]);
        while (q--)
        {
            lli qy = 0, evn = 0, odd = 0;
            scanner(qy);
            for (lli i = 0; i < n; i++)
            {
                res = qy ^ A[i];
                if (!parity(res))
                    evn++;
                else
                    odd++;
            }
            cout << evn << ' ' << odd << '\n';
        }
    }
    return 0;
}

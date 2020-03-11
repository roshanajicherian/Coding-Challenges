#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define P2(n) n, n ^ 1, n ^ 1, n
#define P4(n) P2(n), P2(n ^ 1), P2(n ^ 1), P2(n)
#define P6(n) P4(n), P4(n ^ 1), P4(n ^ 1), P4(n)
#define LOOK_UP P6(0), P6(1), P6(1), P6(0)
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
unsigned int table[256] = {LOOK_UP};
lli parity(lli x)
{
    int max = 16;
    while (max >= 8)
    {
        x = x ^ (x >> max);
        max >>= 1;
    }
    return table[x & 0xff];
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
        bool res[n];
        scanner(n);
        scanner(q);
        lli A[n];
        for (int i = 0; i < n; i++)
            res[i] = false;
        for (lli i = 0; i < n; i++)
        {
            scanner(A[i]);
            if (!parity(A[i]))
                res[i] = true;
        }
        while (q--)
        {
            lli qy = 0, evn = 0, odd = 0;
            bool qypar = false;
            scanner(qy);
            if (!parity(qy))
                qypar = true;
            for (lli i = 0; i < n; i++)
            {
                if ((res[i] == true) && (qypar == true))
                    evn++;
                else if ((res[i] == false) && (qypar == false))
                    evn++;
                else if ((res[i] == true) && (qypar == false))
                    odd++;
                else if ((res[i] == false) && (qypar == true))
                    odd++;
            }
            cout << evn << ' ' << odd << '\n';
        }
    }
    return 0;
}

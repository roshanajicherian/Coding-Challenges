#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
/*lli countsetbits(lli a)
{
    lli count = 0;
    while (a)
    {
        count += a & 1;
        a >>= 1;
    }
    return count;
}*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t = 0;
    cin >> t;
    while (t--)
    {
        lli n = 0, q = 0;
        cin >> n >> q;
        lli A[n];
        lli res = 0;
        for (lli i = 0; i < n; i++)
            cin >> A[i];
        while (q--)
        {
            lli qy = 0, evn = 0, odd = 0;
            cin >> qy;
            for (lli i = 0; i < n; i++)
            {
                res = qy ^ A[i];
                if (__builtin_parity(res)==0)

                    evn++;
                else
                    odd++;
            }
            cout << evn << ' ' << odd << '\n';
        }
    }
    return 0;
}

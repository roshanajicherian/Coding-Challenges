#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    ios_base::sync_with_stdio(false);
    lli t = 0;
    cin >> t;
    while (t--)
    {
        lli n = 0, m = 0;
        cin >> m >> n;
        lli A[m + 1], B[m + 1], res[n + 1];
        for (lli i = 1; i <= m; i++)
            cin >> A[i];
        for (lli i = 1; i <= m; i++)
            cin >> B[i];
        for (lli i = 1; i <= n; i++)
            res[i] = -1;
        for (lli i = 1; i <= m; i++)
        {
            if (res[A[i]] == -1)
            {
                res[A[i]] = 0;
                for (lli j = 1; j <= m; j++)
                {

                    if (A[i] == A[j])
                        res[A[i]] += B[j];
                }
            }
        }
        lli min = INT_MAX;
        for (lli i = 1; i <= n; i++)
        {
            if (res[i] < min && res[i] != -1)
                min = res[i];
        }
        cout << min << '\n';
    }
    return 0;
}

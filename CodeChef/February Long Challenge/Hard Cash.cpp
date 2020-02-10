//COMPETITION: CODECHEF FEBRUARY LONG CHALLENGE 2020
//PROBLEM: HARD CASH CODE: CASH
//AUTHOR:ROSHAN AJI CHERIAN DATE: 07-02-2019
#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;
int main()
{
    lli t = 0;
    cin >> t;
    while (t--)
    {
        lli n = 0, r = 0, k = 0, res_sum = 0, add = 0, diff = 0, fin = 0, c = 0, nres = 0, i = 0, prod = 0, prev = 0, frev = 0;
        cin >> n >> k;
        lli A[n], res[n];
        for (lli i = 0; i < n; i++)
            cin >> A[i];
        for (lli i = 0; i < n; i++)
        {
            if (A[i] % k == A[i])
                res[i] = A[i];
            else if (A[i] % k == 0)
                res[i] = 0;
            else if (A[i] % k == 1 && k == 2)
                res[i] = 1;
            else if (A[i] % k != 0 && k != 2)
            {
                prod = A[i] / k;
                prev = abs(A[i] - (prod * k));
                frev = abs(A[i] - (((prod + 1) * k)));
                res[i] = min(prev, frev);
            }
            res_sum += res[i];
        }

        while (i < n)
        {
            nres += res[i];
            if (nres >= res_sum - nres)
            {
                c = i;
                break;
            }
            i++;
        }
        lli tc = 0, mini = INT_MAX;
        if (k == 2)
        {
            for (lli i = 0; i < n; i++)
            {
                if (i <= c)
                    add += res[i];
                else
                    diff += res[i];
            }
            fin = add - diff;
        }
        if (k != 2)
        {
            for (lli i = 0; i < n; i++)
            {
                add = 0;
                diff = 0;
                //mini = INT_MAX;
                int flag = 0;
                for (lli j = 0; j < n; j++)
                {
                    if ((A[j] - res[j]) % k == 0 && flag == 0)
                    {
                        add += res[j];
                        flag = 1;
                    }
                    else
                        diff += res[j];
                }
                if (diff - add < mini && add - diff >= 0)
                {
                    mini = add - diff;
                }
            }
            fin = mini;
        }
        cout << fin << '\n';
    }
    return 0;
}

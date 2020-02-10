//COMPETITION: CODECHEF FEBRUARY LONG CHALLENGE 2020
//PROBLEM: SCHOOL OF GEOMETREY CODE: SNUG_FIT
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
        lli n = 0, res = 0, same = 0;
        cin >> n;
        lli A[n], B[n];
        for (lli i = 0; i < n; i++)
        {
            cin >> A[i];
            if (i >= 1)
            {
                if (A[i - 1] != A[i])
                    same = 1;
            }
        }
        for (lli i = 0; i < n; i++)
        {
            cin >> B[i];
            if (i >= 1 && same == 0)
            {
                if (A[i - 1] != A[i])
                    same = 1;
            }
        }
        if (same == 0)
            res = n * min(A[0], B[0]);
        else
        {
            sort(A, A + n, greater<long long int>());
            sort(B, B + n, greater<long long int>());
            for (lli i = 0; i < n; i++)
                res += min(A[i], B[i]);
        }
        cout << res << '\n';
    }
    return 0;
}

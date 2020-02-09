
//COMPETITION: CODECHEF FEBRUARY LONG CHALLENGE 2020
//PROBLEM: The Theatre Problem CODE: THEATRE
//AUTHOR:ROSHAN AJI CHERIAN DATE: 07-02-2019
#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;
lli A[4], B[4], C[4], D[4];
void init(lli A[], lli B[], lli C[], lli D[])
{
    for (lli i = 0; i < 4; i++)
    {
        A[i] = 0;
        B[i] = 0;
        C[i] = 0;
        D[i] = 0;
    }
}
void arange(char m, lli sh)
{
    lli a_c = 0, b_c = 0, c_c = 0, d_d = 0;
    if (m == 'A')
    {
        if (sh == 12)
            A[0]++;
        else if (sh == 3)
            A[1]++;
        else if (sh == 6)
            A[2]++;
        else if (sh == 9)
            A[3]++;
    }
    else if (m == 'B')
    {
        if (sh == 12)
            B[0]++;
        else if (sh == 3)
            B[1]++;
        else if (sh == 6)
            B[2]++;
        else if (sh == 9)
            B[3]++;
    }
    else if (m == 'C')
    {
        if (sh == 12)
            C[0]++;
        else if (sh == 3)
            C[1]++;
        else if (sh == 6)
            C[2]++;
        else if (sh == 9)
            C[3]++;
    }
    else if (m == 'D')
    {
        if (sh == 12)
            D[0]++;
        else if (sh == 3)
            D[1]++;
        else if (sh == 6)
            D[2]++;
        else if (sh == 9)
            D[3]++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    lli t = 0, tres = 0;
    cin >> t;
    while (t--)
    {
        init(A, B, C, D);
        lli n = 0, sh = 0;
        char m;
        cin >> n;
        lli rate[4] = {100, 75, 50, 25};
        for (lli i = 0; i < n; i++)
        {
            cin >> m;
            cin >> sh;
            arange(m, sh);
        }
        lli maxn[4], intit_max[4];
        for (lli i = 0; i < 4; i++)
        {
            maxn[i] = INT_MIN;
            intit_max[i] = INT_MIN;
        }
        for (int i = 0; i < 4; i++)
        {
            intit_max[0] = max(intit_max[0], A[i]);
            intit_max[1] = max(intit_max[1], B[i]);
            intit_max[2] = max(intit_max[2], C[i]);
            intit_max[3] = max(intit_max[3], D[i]);
        }
        bool check[4] = {false, false, false, false};
        for (lli i = 0; i < 4; i++)
        {
            if (A[i] >= B[i] && A[i] >= C[i] && A[i] >= D[i] && A[i] >= intit_max[0] && !check[0] && A[i] != 0)
            {
                maxn[i] = A[i];
                check[0] = true;
                for (lli i = 0; i < 4; i++)
                    A[i] = -1;
            }
            else if (B[i] >= A[i] && B[i] >= C[i] && B[i] >= D[i] && B[i] >= intit_max[1] && !check[1] && B[i] != 0)
            {
                maxn[i] = B[i];
                check[1] = true;
                for (lli i = 0; i < 4; i++)
                    B[i] = -1;
            }
            else if (C[i] >= A[i] && C[i] >= B[i] && C[i] >= D[i] && C[i] >= intit_max[2] && !check[2] && C[i] != 0)
            {
                maxn[i] = C[i];
                check[2] = true;
                for (lli i = 0; i < 4; i++)
                    C[i] = -1;
            }
            else if (D[i] >= A[i] && D[i] >= B[i] && D[i] >= C[i] && D[i] >= intit_max[3] && !check[3] && D[i] != 0)
            {
                maxn[i] = D[i];
                check[3] = true;
                for (lli i = 0; i < 4; i++)
                    D[i] = -1;
            }
        }
        sort(maxn, maxn + 4, greater<lli>());
        lli ded = 0, res = 0;
        for (lli i = 0; i < 4; i++)
        {
            if (maxn[i] <= 0 && maxn[i] != -1)
                res -= 100;
            else
                res += (maxn[i] * rate[i]);
        }
        cout << res << '\n';
        tres += res;
    }
    cout << tres << '\n';
    return 0;
}

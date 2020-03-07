#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t = 0;
    cin >> t;
    while (t--)
    {
        long long int n = 0, k = 0, cou = 0;
        cin >> n >> k;
        char A[n], res[n];
        for (long long int i = 0; i < n; i++)
            cin >> A[i];
        long long int ls = n - 1;
        while (k--)
        {
            if (A[ls] == 'T')
            {
                A[ls] = -1;
                res[ls]=-1;
                for (long long int i = 0; i < ls; i++)
                    res[i] = A[i];
            }
            else if (A[ls] == 'H')
            {
                A[ls] = -1;
                res[ls]=-1;
                for (long long int i = 0; i < ls; i++)
                {
                    if (A[i] == 'H')
                        res[i] = 'T';
                    else if (A[i] == 'T')
                        res[i] = 'H';
                }
            }
            ls--;
        }
        for (long long int i = 0; i < n; i++)
            if (res[i] == 'H')
                cou++;
        cout << cou << '\n';
    }
    return 0;
}

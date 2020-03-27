#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef  long long int lli;
void solve()
{
    lli n = 0;
    cin >> n;
    lli temp = 0;
    vector<lli> A;
    for (lli i = 0; i < n; i++)
    {
        cin >> temp;
        A.push_back(temp);
    }
    //checking subset
    //if not a subset then a valid A from which B can be formed does not exist.
    //Another way this could be checked is if the array is in ascendeing order because whenevr
    //you perform an or operation the value either is the previoous value or a greater value.
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] & A[i + 1] != A[i])
        {
            cout << 0;
            return;
        }
    }
    lli bit = 0;
    for (int i = 0; i < n - 1; i++)
    {
        bit += __builtin_popcount(A[i]);
    }
    lli res = 1;
    for (int i = 0; i < bit; i++)
        res = (res * 2) % MOD;
    cout << res << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t = 0;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

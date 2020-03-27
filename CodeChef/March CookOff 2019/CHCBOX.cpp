#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n = 0;
    cin >> n;
    vector<int> A;
    vector<int> S;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        A.push_back(temp);
    }
    int maxe = INT_MIN;
    for (int i = 0; i < n; i++)
        maxe = max(maxe, A[i]);
    for (int i = 0, j = 0; i < n; i = j)
    {
        if (A[i] == maxe)
        {
            j++;
            continue;
        }
        while (j < n && A[j] ^ maxe)
            j++;
        S.push_back(j - i);
    }
    if ((A[0] ^ maxe) && (A[n - 1] ^ maxe))
    {
        S[0] += S.back();
        S.pop_back();
    }
    int ans = 0;
    for (int i : S)
        ans += max(0, i - n / 2 + 1);
    cout << ans << '\n';
}
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

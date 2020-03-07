#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t = 0;
    cin >> t;
    while (t--)
    {
        long long int n = 0, swap = 0;
        char temp;
        string S;
        cin >> n;
        cin >> S;
        long long int i = 0, j = n - 1, flg = 0;
        bool ls = false, lr = false;
        for (i = 0, j = n - 1; i < j; i++, j--)
        {
            if (S[i] == S[j])
            {
                ls = false;
                lr = false;
                continue;
            }
            if (i + 1 == j)
            {
                flg = 1;
                break;
            }
            if (S[i + 1] == S[j] && ls == false)
            {
                temp = S[i + 1];
                S[i + 1] = S[i];
                S[i] = temp;
                ls = true;
                lr = false;
                swap++;
            }
            else if (S[j - 1] == S[i] && lr == false)
            {
                temp = S[j - 1];
                S[j - 1] = S[j];
                S[j] = temp;
                ls = false;
                lr = true;
                swap++;
            }
            else
            {
                flg = 1;
                break;
            }
        }
        if (flg)
            cout << "NO\n";
        else
            cout << "YES\n"
                 << swap << '\n';
    }
    return 0;
}

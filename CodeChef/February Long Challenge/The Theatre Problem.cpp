#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;
class res
{
public:
    int pep[101];
    int ti[101];
    char a[101];
    bool took[101];
    res()
    {
        for (int i = 0; i < 101; i++)
        {
            took[i] = false;
            ti[i] = 0;
            pep[i] = 0;
        }
    }
};
res P;
int cou = 0;
lli A[4], B[4], C[4], D[4];
int flg = 0, pos1 = 0, pos2 = 0;
void init(lli A[], lli B[], lli C[], lli D[])
{
    for (lli i = 0; i < 4; i++)
    {
        A[i] = 0;
        B[i] = 0;
        C[i] = 0;
        D[i] = 0;
    }
    for (int i = 0; i < 101; i++)
    {
        P.took[i] = false;
        P.ti[i] = 0;
        P.pep[i] = 0;
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
void findsort()
{
    for (int i = 0; i < cou - 1; i++)
    {
        for (int j = 0; j < cou - i - 1; j++)
        {
            if (P.pep[j + 1] > P.pep[j])
            {
                swap(P.pep[j + 1], P.pep[j]);
                swap(P.ti[j + 1], P.ti[j]);
                swap(P.a[j + 1], P.a[j]);
            }
        }
    }
}
lli fin = 0;
void findmax()
{
    lli rate[4] = {100, 75, 50, 25};
    findsort();
    lli res[4];
    for (int i = 0; i < 4; i++)
        res[i] = 0;
    lli val = 0;
    int k = 0;
    for (int i = 0; i < cou; i++)
    {
        if (P.took[i] == false)
        {
            res[k] = P.pep[i];
            k++;
            P.took[i] = true;
            for (int j = 0; j <= cou; j++)
            {
                if (P.ti[i] == P.ti[j] || P.a[i] == P.a[j])
                    P.took[j] = true;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (res[i] <= 0)
            val -= 100;
        else
            val += (rate[i] * res[i]);
    }
    cout << val << '\n';
    fin += val;
}
int main()
{
    ios_base::sync_with_stdio(false);
    lli t = 0, tres = 0;

    cin >> t;
    while (t--)
    {
        vector<lli> max1(4, INT_MIN);
        vector<lli> maxc(4, INT_MIN);

        init(A, B, C, D);
        lli n = 0, sh = 0;
        char m;
        cin >> n;
        for (lli i = 0; i < n; i++)
        {
            cin >> m;
            cin >> sh;
            arange(m, sh);
        }
        lli M[4][4];
        for (int i = 0; i < 4; i++)
        {
            M[0][i] = A[i];
            M[1][i] = B[i];
            M[2][i] = C[i];
            M[3][i] = D[i];
        }

        // for(int i=1;i<4;i++)
        // {
        //     for(int j=1;j<4;j++)
        //     {
        //         if(M[i][j]==M[i-1][j-1] && M[i][j]==M[i-1][j])
        //         {
        //             flg=1;
        //             break;
        //             pos1=j-1;
        //             pos2=i-1;
        //         }
        //     }
        // }
        //FIND OUT ROW WISE MAXIMUM
        for (int i = 0; i < 4; i++)
        {
            max1[0] = max(max1[0], A[i]);
            max1[1] = max(max1[1], B[i]);
            max1[2] = max(max1[2], C[i]);
            max1[3] = max(max1[3], D[i]);
        }
        //WE SHOULD CONSIDER REPETITIONS ALSO
        int j = 0;
        for (int i = 0; i < 4; i++)
        {
            if (A[i] == max1[0] && A[i] != 0)
            {
                P.pep[j] = A[i];
                P.ti[j] = i;
                P.a[j] = 'A';
                j++;
            }
            if (B[i] == max1[1] && B[i] != 0)
            {
                P.pep[j] = B[i];
                P.ti[j] = i;
                P.a[j] = 'B';
                j++;
            }
            if (C[i] == max1[2] && C[i] != 0)
            {
                P.pep[j] = C[i];
                P.ti[j] = i;
                P.a[j] = 'C';
                j++;
            }
            if (D[i] == max1[3] && D[i] != 0)
            {
                P.pep[j] = D[i];
                P.ti[j] = i;
                P.a[j] = 'D';
                j++;
            }
        }
        vector<char> loc;
        //FIND OUT COLUMN WISE MAXIMUM
        for (int i = 0; i < 4; i++)
        {
            if (A[i] >= B[i] && A[i] >= C[i] && A[i] >= D[i])
            {
                maxc[i] = A[i];
                loc.push_back('A');
            }
            if (B[i] >= A[i] && B[i] >= C[i] && B[i] >= D[i])
            {
                maxc[i] = B[i];
                loc.push_back('B');
            }
            if (C[i] >= A[i] && C[i] >= B[i] && C[i] >= D[i])
            {
                maxc[i] = C[i];
                loc.push_back('C');
            }
            if (D[i] >= A[i] && D[i] >= B[i] && D[i] >= C[i])
            {
                maxc[i] = D[i];
                loc.push_back('D');
            }
        }
        for (int i = 0; i < 4; i++)
        {
            if (M[i][0] == maxc[0] && M[i][0] != 0)
            {
                P.pep[j] = M[i][0];
                P.ti[j] = 0;
                if (i == 0)
                    P.a[j] = 'A';
                else if (i == 1)
                    P.a[j] = 'B';
                else if (i == 2)
                    P.a[j] = 'C';
                else if (i == 3)
                    P.a[j] = 'D';
                j++;
            }
            if (M[i][1] == maxc[1] && M[i][1] != 0)
            {
                P.pep[j] = M[i][1];
                P.ti[j] = 1;
                if (i == 0)
                    P.a[j] = 'A';
                else if (i == 1)
                    P.a[j] = 'B';
                else if (i == 2)
                    P.a[j] = 'C';
                else if (i == 3)
                    P.a[j] = 'D';
                j++;
            }
            if (M[i][2] == maxc[2] && M[i][2] != 0)
            {
                P.pep[j] = M[i][2];
                P.ti[j] = 2;
                if (i == 0)
                    P.a[j] = 'A';
                else if (i == 1)
                    P.a[j] = 'B';
                else if (i == 2)
                    P.a[j] = 'C';
                else if (i == 3)
                    P.a[j] = 'D';
                j++;
            }
            if (M[i][3] == maxc[3] && M[i][3] != 0)
            {
                P.pep[j] = M[i][3];
                P.ti[j] = 3;
                if (i == 0)
                    P.a[j] = 'A';
                else if (i == 1)
                    P.a[j] = 'B';
                else if (i == 2)
                    P.a[j] = 'C';
                else if (i == 3)
                    P.a[j] = 'D';
                j++;
            }
        }
        cou = j;
        findmax();
    }
    cout << fin << '\n';
    return 0;
}

//COMPETITION: CODECHEF FEBRUARY LONG CHALLENGE 2020
//PROBLEM: THE THEATRE PROBLEM CODE: THEATRE
//AUTHOR:ROSHAN AJI CHERIAN DATE: 12-02-2019
#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;
int A[4], B[4], C[4], D[4];
int M[4][4];
bool visited[4][4];
void init(int A[], int B[], int C[], int D[])
{
    for (int i = 0; i < 4; i++)
    {
        A[i] = 0;
        B[i] = 0;
        C[i] = 0;
        D[i] = 0;
    }
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            visited[i][j] = false;
}

void arange(char m, int sh)
{
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
    int t = 0, tres = 0;
    int rate[4] = {100, 75, 50, 25};
    int res[4];
    cin >> t;
    int fintot = 0;
    while (t--)
    {

        init(A, B, C, D);
        for (int i = 0; i < 4; i++)
            res[i] = 0;
        int n = 0, sh = 0;
        char m;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            cin >> sh;
            arange(m, sh);
        }

        for (int i = 0; i < 4; i++)
        {
            M[0][i] = A[i];
            M[1][i] = B[i];
            M[2][i] = C[i];
            M[3][i] = D[i];
        }
        int cr[4], cc[4];
        int max1[4];
        for (int i = 0; i < 4; i++)
        {
            max1[i] = INT_MIN;
            cr[i] = 0;
            cc[i] = 0;
        }
        //find out row max
        for (int i = 0; i < 4; i++)
        {
            max1[0] = max(max1[0], A[i]);
            max1[1] = max(max1[1], B[i]);
            max1[2] = max(max1[2], C[i]);
            max1[3] = max(max1[3], D[i]);
        }

        /*for (int j = 0; j < 4; j++)
        {
            if (max1[0] == M[0][j])
                cr[0]++;
            if (max1[0] == M[j][3])
                cc[0]++;
            if (max1[1] == M[1][j])
                cr[1]++;
            if (max1[1] == M[j][3])
                cc[1]++;
            if (max1[2] == M[2][j])
                cr[2]++;
            if (max1[2] == M[j][3])
                cc[2]++;
            if (max1[3] == M[3][j])
                cr[3]++;
            if (max1[3] == M[j][3])
                cc[3]++;
        }*/
        for (int i = 0; i < 4; i++)
        {
            if (max1[0] == M[0][i])
                cr[0]++;
            if (max1[1] == M[1][i])
                cr[1]++;
            if (max1[2] == M[2][i])
                cr[2]++;
            if (max1[3] == M[3][i])
                cr[3]++;
        }
        int flag[4] = {0, 0, 0, 0};
        for (int i = 0; i < 4; i++)
        {
            if (cr[i] < cc[i] && cr[i] >= 1)
                flag[i] = 1;
        }
        int maxr = INT_MIN, loci = 0, locj = 0, l = 0;
        for (int i = 0; i < 4; i++)
        {
            maxr = INT_MIN;
            for (int j = 0; j < 4; j++)
            {
                if (flag[i] == 0)
                {

                    if (M[i][j] >= maxr && visited[i][j] == false)
                    {
                        maxr = M[i][j];
                        loci = i;
                        locj = j;
                    }
                }
                if (flag[i] == 1)
                {
                    if (M[i][j] > maxr && visited[i][j] == false)
                    {
                        maxr = M[i][j];
                        loci = i;
                        locj = j;
                    }
                }
            }
            res[l] = maxr;
            l++;
            for (int k = 0; k < 4; k++)
            {
                visited[loci][k] = true;
                visited[k][locj] = true;
            }
        }
        int tot = 0;
        sort(res, res + 4, greater<int>());
        for (int i = 0; i < 4; i++)
        {
            if (res[i] == 0)
                tot -= 100;
            else
                tot += (res[i] * rate[i]);
        }
        fintot += tot;
        cout << tot << '\n';
    }
    cout << fintot << '\n';
}

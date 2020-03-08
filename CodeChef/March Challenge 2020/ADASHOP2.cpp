#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int r0 = 0, c0 = 0;
        cin >> r0 >> c0;
        bool board[9][9];
        for (int i = 0; i <= 8; i++)
            for (int j = 0; j <= 8; j++)
                board[i][j] = false;
        int i = 1, j = 1, k = 0;
        int mov = 0, ipos[64], jpos[64];
        int cou = 0;
        while (i <= 8 && j <= 8 && board[i][j] == false)
        {
            bool flgtr = false;
            bool flgbl = false;
            mov++;
            cou++;
            ipos[k] = i;
            jpos[k] = j;
            k++;
            board[i][j] = true;
            int curi = i;
            int curj = j;
            //move along top-right dag
            while (curi > 1 && curj < 8 && board[curi - 1][curj + 1] == false)
            {
                curi--;
                curj++;
                board[curi][curj] = true;
                flgtr = true;
            }
            if (flgtr)
            {
                mov++;
                cou++;
                ipos[k] = curi;
                jpos[k] = curj;
                k++;
            }
            curi = i;
            curj = j;
            //move along bottom-left dag
            while (curi < 8 && curj > 1 && board[curi + 1][curj - 1] == false)
            {
                curi++;
                curj--;
                board[curi][curj] = true;
                flgbl = true;
            }
            if (flgbl)
            {
                mov += 2;
                cou++;
                ipos[k] = curi;
                jpos[k] = curj;
                k++;
                ipos[k]=i;
                jpos[k]=j;
                k++;
            }
            //move along major dag
            i++;
            j++;
        }
        cout << mov - 1 << '\n';
        for (int l = 1; l < mov; l++)
            cout << ipos[l] << ' ' << jpos[l] << '\n';
    }
    return 0;
}

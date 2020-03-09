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
        int i = r0, j = c0, k = 0;
        int mov = 0, ipos[64], jpos[64];
        if (r0 != 1 || c0 != 1)
        {
            int movupi = r0;
            int movupj = c0;
            if (r0 != c0)
            {
                if (r0 > c0)
                {
                    while (movupi != movupj)
                    {
                        movupi--;
                        movupj++;
                    }
                }
                else
                {
                    while (movupi != movupj)
                    {
                        movupi++;
                        movupj--;
                    }
                }
            }
            int digi = movupj;
            int digj = movupj;
            while (movupi >= 1 && movupj >= 1)
            {
                bool flgtr = false;
                bool flgbl = false;
                mov++;
                ipos[k] = movupi; //change here and next line
                jpos[k] = movupj;
                k++;
                int upi = movupi;
                int upj = movupj;
                while (upi > 1 && upj < 8)
                {
                    upi--;
                    upj++;
                    flgtr = true;
                }
                if (flgtr)
                {
                    mov++;
                    ipos[k] = upi;
                    jpos[k] = upj;
                    k++;
                }
                upi = movupi;
                upj = movupj;
                while (upi < 8 && upj > 1)
                {
                    upi++;
                    upj--;
                    flgbl = true;
                }
                if (flgbl)
                {
                    mov += 2;
                    ipos[k] = upi;
                    jpos[k] = upj;
                    k++;
                    ipos[k] = movupi;
                    jpos[k] = movupj;
                    k++;
                }
                movupi--;
                movupj--;
            }
            i = digi+1 ;
            j = digj+1;
        }

        while (i <= 8 && j <= 8)
        {
            bool flgtr = false;
            bool flgbl = false;
            mov++;
            ipos[k] = i;
            jpos[k] = j;
            k++;
            int curi = i;
            int curj = j;
            //move along top-right dag
            while (curi > 1 && curj < 8)
            {
                curi--;
                curj++;
                flgtr = true;
            }
            if (flgtr)
            {
                mov++;

                ipos[k] = curi;
                jpos[k] = curj;
                k++;
            }
            curi = i;
            curj = j;
            //move along bottom-left dag
            while (curi < 8 && curj > 1)
            {
                curi++;
                curj--;
                flgbl = true;
            }
            if (flgbl)
            {
                mov += 2;

                ipos[k] = curi;
                jpos[k] = curj;
                k++;
                ipos[k] = i;
                jpos[k] = j;
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

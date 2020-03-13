#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli onSegment(lli o1, lli o2, lli e1, lli e2, lli x1, lli y1)
{
    if (e1 <= max(o1, x1) && e1 >= min(o1, x1) &&
        e2 <= max(o2, y1) && e2 >= min(o2, y1))
        return true;

    return false;
}
lli orient(lli p1x, lli p1y, lli p2x, lli p2y, lli p3x, lli p3y)
{
    lli o = (p2y - p1y) * (p3x - p2x) - (p3y - p2y) * (p2x - p1x);
    if (o == 0)
        return 0;
    if (o > 0)
        return 1;
    else
        return 2;
}
bool checkallc(lli o1, lli o2, lli e1, lli e2, lli x1, lli x2, lli y1)
{
    lli or1 = orient(o1, o2, e1, e2, x1, y1);
    lli or2 = orient(o1, o2, e1, e2, x2, y1);
    lli or3 = orient(x1, y1, x2, y1, o1, o2);
    lli or4 = orient(x1, y1, x2, y1, e1, e2);
    if (or1 != or2 && or3 != or4)
        return true;
    if (or1 == 0 && onSegment(o1, o2, x1, y1, e1, e2))
        return true;
    if (or2 == 0 && onSegment(o1, o2, x2, y1, e1, e2))
        return true;
    if (or3 == 0 && onSegment(x1, y1, o1, o2, x2, y1))
        return true;
    if (or4 == 0 && onSegment(x1, y1, e1, e2, x2, y1))
        return true;
    return false;
}
int main()
{
    lli t = 0;
    cin >> t;
    while (t--)
    {
        lli n = 0, q = 0;
        cin >> n >> q;
        lli A[n + 1];
        for (lli i = 1; i <= n; i++)
            cin >> A[i];
        lli x1 = 0, x2 = 0, y1 = 0;
        while (q--)
        {
            cin >> x1 >> x2 >> y1;
            lli cou = 0;
            for (lli i = 1; i <= n - 1; i++)
            {
                if ((i == x2 && A[i] == y1) || (i + 1 == x1 && A[i + 1] == y1))
                    continue;
                if (checkallc(i, A[i], i + 1, A[i + 1], x1, x2, y1))
                    cou++;
            }
            cout << cou << '\n';
        }
    }
    return 0;
}

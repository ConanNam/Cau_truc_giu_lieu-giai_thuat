#include <bits/stdc++.h>
using namespace std;
int F[105];

int minTime(int n, int ins, int del, int cop)
{
    memset(F, 0, sizeof(F));
    if (n == 0)
        return 0;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            F[i] = ins;
        else if (i % 2 == 0)
        {
            F[i] = min(F[i - 1] + ins, F[i / 2] + cop);
        }
        else
        {
            F[i] = min(F[i - 1] + ins, F[i / 2 + 1] + cop + del);
        }
    }
    return F[n];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ins, del, cop;
        cin >> n >> ins >> del >> cop;
        cout << minTime(n, ins, del, cop) << endl;
    }
}

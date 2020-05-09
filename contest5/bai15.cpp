#include <bits/stdc++.h>
using namespace std;
int L[105][105][105];

int longgest_subsequece_3_string(string s1, string s2, string s3, int m, int n, int l)
{
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            for (int k = 0; k <= l; k++)
            {
                if (i == 0 || j == 0 || k == 0)
                    L[i][j][k] = 0;
                else if (s1[i - 1] == s2[j - 1] && s1[i - 1] == s3[k - 1])
                    L[i][j][k] = L[i - 1][j - 1][k - 1] + 1;
                else
                {
                    L[i][j][k] = max(max(L[i - 1][j][k], L[i][j - 1][k]), L[i][j][k - 1]);
                }
            }
        }
    }
    return L[m][n][l];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, l;
        cin >> m >> n >> l;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        cout << longgest_subsequece_3_string(s1, s2, s3, m, n, l) << endl;
    }
}
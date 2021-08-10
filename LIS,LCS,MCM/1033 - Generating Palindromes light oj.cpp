#include <bits/stdc++.h>
#define p 105
using namespace std;
int mem[p][p];

int lcsIterative(string S, string W) {
    int n = S.size();
    int m = W.size();

    for (int i = 0;i < n;i++) mem[i][m] = 0;
    for (int j = 0;j < m;j++) mem[n][j] = 0;

    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            if (S[i] == W[j]) {
                mem[i][j] = mem[i + 1][j + 1] + 1;
            } else {
                mem[i][j] = max(mem[i + 1][j], mem[i][j + 1]);
            }
        }
    }

    return mem[0][0];
}
int main()
{
    int t,j=1;
    cin>>t;
    while(t--)
    {
        string b,s;
        cin>>s;
        int mx=s.size()-1;
       b=s;
       reverse(b.begin(),b.end());

      int o= s.size()-lcsIterative(s,b);
       mx=min(mx,o);
        cout<<"Case "<<j++<<": "<<mx<<endl;



    }
}


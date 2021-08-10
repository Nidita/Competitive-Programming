#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int c[a.size()+1][b.size()+1];

        for(int i=0;i<a.size()+1;i++)
        {
            for(int j=0;j<b.size()+1;j++)
            {

                if(i==0)
                {
                    c[i][j]=j;
                }
                else if (j==0)
                {
                    c[i][j]=i;
                }
               else if(a[i-1]==b[j-1])
                {


                        c[i][j]=c[i-1][j-1];

                }
                else
                {

                        c[i][j]=1+min(c[i-1][j-1],min(c[i-1][j],c[i][j-1]));

                }
               // cout<<c[i][j]<<" ";
            }
           //cout<<endl;
        }
        //int l=max(a.size(),b.size());
       cout<<c[a.size()][b.size()]<<endl;
    }
}

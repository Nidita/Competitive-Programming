#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        int q;
        cin>>q;
        for(int i=0;i<q;i++)
        {
            int x,y,v;
            cin>>x>>y>>v;
            arr[x-1][y-1]=v;
            int p=0;
            for(int j=0;j<m;j++)
            {
                int g=0,h=j;
                set<int>s;
                while(g<n && h<m)
                {
                    cout<<arr[g][h]<<' ';
                    s.insert(arr[g][h]);
                    g++;
                    h++;
                }
                if(s.size()>1)
                {
                    p=1;
                    break;
                }

            }
            if(p==1)
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
    }
}

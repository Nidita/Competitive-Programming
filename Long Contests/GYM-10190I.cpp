#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int p;
    int g;
    int sw[m+1];
    vector<int>v[n+1];
    memset(sw,0,sizeof(sw));
    for(int i=0; i<=n; i++)
    {
        int c;
        cin>>c;
        for(int j=0; j<c; j++)
        {
            int a;
            cin>>a;
            v[i].push_back(a);
        }
    }
    for(int i=0; i<=n; i++)
    {
        p=0;
        for(int j=0; j<v[i].size(); j++)
        {
            if(sw[v[i][j]]==0)
                    sw[v[i][j]]=1;
                    else
                    sw[v[i][j]]=0;

        }
    for(int k=1; k<=m; k++)
        {
            if(sw[k]!=0)
            {
                p=1;
            }

        }

    if(p==0)
    {
        g=i;
        break;
    }
    }

    int e,f;
    if(p==0)
{
    cout<<g<<endl;

}

else{
        for(int i=1; i<=n; i++)
    {
        e=0;
        for(int j=0; j<v[i].size(); j++)
        {
            if(sw[v[i][j]]==0)
                    sw[v[i][j]]=1;
                    else
                    sw[v[i][j]]=0;

        }
    for(int k=1; k<=m; k++)
        {
            if(sw[k]!=0)
            {
                e=1;

            }
}
if(e==0)
{
    f=i;
    break;
}
    }


if(e==0)
{
    cout<<n+f<<endl;
}
else{
    cout<<"-1"<<endl;
}
}
}

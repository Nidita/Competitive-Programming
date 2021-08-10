
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e, i, x, y;
    while(1)
    {
        //vector<int>v[n+5];
         cin>>n;

        if(n==0)
            break;
        else
        {
vector<int>v[n+5];
            cin>>e;
            for(i=0; i<e; i++)
            {
                cin>>x>>y;
                v[x].push_back(y);
                v[y].push_back(x);
            }

       int vis[n+5]={0},color[n+5]={0};



queue<int>q;
int u,k=1;




    q.push(0);
    vis[0]=1;
    color[0]=1;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0; i<v[u].size(); i++)
        {
            if(vis[v[u][i]]==0)
            {
                vis[v[u][i]]=1;
                if(color[u]==1)
                {
                    color[v[u][i]]=2;
                }
                else
                {
                    color[v[u][i]]=1;

                }
                q.push(v[u][i]);
            }
            else
            {
                if(color[u]==color[v[u][i]])
                {


                 k=0;
                 break;

                }
            }
        }

    }






            if(k==0)
            {
                cout<<"NOT BICOLORABLE."<<endl;


            }
            else
            {
                cout<<"BICOLORABLE."<<endl;

            }

        }
        // }
    }
}




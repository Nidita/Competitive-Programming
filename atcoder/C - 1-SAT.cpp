#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    int n;
    cin>>n;
 string v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i][0]!='!')
        {
            m[v[i]]++;
        }
    }
    int p=0;
    string s1;
    for(int i=0;i<n;i++)
    {
        if(v[i][0]=='!')
        {
              string r = v[i].substr(1, v[i].size()-1);
              if(m[r]>0)
              {
                  s1=r;
                  p=1;
                  break;
              }
        }
    }
    if(p==1)
    {
        cout<<s1<<endl;
    }
    else
    {
        cout<<"satisfiable"<<endl;

    }

}

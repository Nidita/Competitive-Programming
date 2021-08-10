#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int x,y;
        cin>>x>>y;
        string s,s1;
        cin>>s;
        int x1=0,y1=0;
       if(x==0 && y==0)
       {
           cout<<"Impossible"<<endl;
       }
       else
       {
           int ans=0;

        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='R')
           {
               x1+=1;
           }
            if(s[i]=='U')
           {
               y1+=1;
           }
            if(s[i]=='D')
           {
               y1-=1;
           }
            if(s[i]=='L')
           {
               x1-=1;
           }
           if(x1==x && y1==y)
           {
               if(i>0)
               {
                   swap(s[i],s[i-1]);
                       if(s[i-1]=='R')
           {
               x1-=1;
           }
            if(s[i-1]=='U')
           {
               y1-=1;
           }
            if(s[i-1]=='D')
           {
               y1+=1;
           }
            if(s[i-1]=='L')
           {
               x1+=1;
           }
           //
            if(s[i]=='R')
           {
               x1+=1;
           }
            if(s[i]=='U')
           {
               y1+=1;
           }
            if(s[i]=='D')
           {
               y1-=1;
           }
            if(s[i]=='L')
           {
               x1-=1;
           }
           s1[s1.size()-1]=s[i-1];
           s1+=s[i];
           if(x1==x && y1==y)
           {
               ans=-1;
               break;
           }

               }
               else
               {
                  cout<<"Impossible"<<endl;
                  ans=-1;
                  break;
               }
           }
           else
           {
               s1+=s[i];
           }
        }
        if(ans!=-1)
        {
            cout<<s1<<endl;
        }

    }
    }

}

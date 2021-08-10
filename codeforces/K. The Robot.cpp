
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<pii>ans;
        int ax=0,ay=0,x=0,y=0;
        vector<pii>co;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
            {
                x--;
            }
            else if(s[i]=='R')
            {
                x++;
            }
            else if(s[i]=='U')
            {
                y++;
            }
            else
            {
                y--;
            }
            co.push_back(make_pair(x,y));
        }
        for(int i=0;i<co.size();i++)
        {
            int a=0,b=0;

          // cout<<co[i].first<<' '<<co[i].second<<'*'<<endl;
            if(!(co[i].first==0 and co[i].second==0))
                {
                    for(int j=0;j<s.size();j++)
            {
                  //  cout<<a<<' '<<b<<endl;
                if(s[j]=='L' and !(co[i].first==a-1 and co[i].second==b) )
                {
                    a--;
                }
                else if(s[j]=='R' and !(co[i].first==a+1 and co[i].second==b))
                {
                    a++;
                }
                else if(s[j]=='U' and !(co[i].first==a and co[i].second==b+1))
                {
                    b++;
                }
                else if(s[j]=='D' and !(co[i].first==a and co[i].second==b-1))
                {
                    b--;
                }
              // cout<<s[j]<<' '<<a<<' '<<b<<endl;
            }

            if(a==0 and b==0)
            {
                ax=co[i].first;
                ay=co[i].second;
            }
                }

        }
        cout<<ax<<" "<<ay<<endl;

    }
}


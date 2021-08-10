#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    { ll cnt=0;
        vector<pair<ll,ll>>v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        { ll a ,b;
        cin>>a>>b;
            v.push_back(make_pair(a,b));
        }
       v.push_back({1LL+1e10, 0});
        ll curtime=0,curposition=0,nexttime=0,nextposition=0,dir=0,ans=0;
        for(int i=0;i<n;i++)
        {
cnt++;

        if(v[i].first>=curtime)
        {
            nexttime=v[i].first+abs(v[i].second-curposition);
            nextposition=v[i].second;
            if(curposition<nextposition)
            {
                dir=1;
            }
            else if (curposition>nextposition)
            {
                dir=-1;
            }
            else
            {
                ans++;
                dir=0;
            }

        }
        int j;
    //    cout<<v[i].first<<' '<<"valid i"<<endl;
        for( j=i;v[j].first<nexttime;++j)
        {

cnt++;
            ll pos;
            if(dir>0){

                    pos=min(v[i].second, curposition+dir*(v[j+1].first-v[j].first));
            }
                else if(dir<0){
                              pos=max(v[i].second, curposition+dir*(v[j+1].first-v[j].first));

                }

        //    cout<<v[j].first<<' '<<curposition<<' '<<pos<<endl;

            if(v[j].second>=min(pos,curposition) &&v[j].second<=max(pos,curposition)  )
            {
                ans++;
              //  cout<<"*"<<endl;
            }
            curposition=pos;


        }
        j--;
        i=j;
        curtime=nexttime;
        curposition=nextposition;

        }
        cout<<ans<<'*'<<cnt<<endl;


    }
}

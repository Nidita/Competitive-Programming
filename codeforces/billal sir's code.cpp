// They Plan, and Allah Plans...
// Indeed Allah is the Best of Planners.

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
     ll i, j, k;
     ll t;
     cin >> t;
     while(t--){
          ll n,cnt=0;
          cin >> n;
          vector< pair<ll,ll> > vt(n);
          for(i=0; i<n; ++i) cin >> vt[i].first >> vt[i].second;
          vt.push_back({1LL+1e10, 0});
          ll cur_pos=0, cur_time=0, cmd=0, ans=0, nxt_time, nxt_pos;
          for(i=0; i<n; ++i){
                cnt++;
               if(vt[i].first>=cur_time){

                    nxt_time=vt[i].first+abs(vt[i].second-cur_pos);
                    nxt_pos=vt[i].second;

                    ll dir;
                    if(vt[i].second>cur_pos) dir=1;
                    else if(vt[i].second<cur_pos) dir=-1;
                    else{
                         ans++;
                         dir=0;
                    }

                    for(j=i; vt[j].first<nxt_time; ++j){
                            cnt++;
                         ll pos;
                         if(dir>0){
                              pos=min(vt[i].second, cur_pos+dir*(vt[j+1].first-vt[j].first));
                         }
                         else if(dir<0){
                              pos=max(vt[i].second, cur_pos+dir*(vt[j+1].first-vt[j].first));
                              //cout << "HERE " << j << endl;
                         }
                         if(vt[j].second>=min(pos, cur_pos) && vt[j].second<=max(pos, cur_pos)) ans++;
                        // cout << "For " << j << " " << cur_pos << " " << pos << endl;
                         cur_pos=pos;
                    }
                    cur_time=nxt_time;
                    cur_pos=nxt_pos;
               }
          }
          cout <<'*'<<cnt<<' '<< ans << endl;
     }
}


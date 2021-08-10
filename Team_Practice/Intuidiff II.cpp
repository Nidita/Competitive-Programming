#include <bits/stdc++.h>

#define MAX_N 100005
#define EMPTY_VALUE -1
#define ll long long

using namespace std;
ll mem[MAX_N];
vector<pair<ll,ll>>A;
int n;
ll f(int i) {
    if (mem[i] != EMPTY_VALUE) {
        return mem[i];
    }

    ll ans = 0;
    for (int j = i + 1;j < A.size();j++) {
        if (A[j].first > A[i].second) {
            ans = max(ans, f(j));
        }
    }

    mem[i] = ans + A[i].second-A[i].first+1;
    return mem[i];
}

ll findLIS(){
  ll ans = 0;

  for(int i = 0;i<A.size();i++) {
      mem[i] = EMPTY_VALUE;
  }

  for(int i = 0;i<A.size();i++) {
      ans = max(ans, f(i));
  }

  return ans;
}


int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        A.push_back(make_pair(a,b));

    }
      cout<<findLIS()<<endl;

}

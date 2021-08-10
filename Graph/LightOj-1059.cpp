#include<bits/stdc++.h>

using namespace std;
int pr[10001], n, m;
set<int>st;

struct edge{
    int u, v, w;
}one[100001];

bool comp(edge f, edge s){
    return f.w<s.w;
}

int find(int p){
    if(pr[p]==p) return p;
    else return find(pr[p]);
}

int mst(){
    int sm=0, xx, yy, cnt=0;
    for(int i=1; i<=n; i++)
    {
            pr[i]=i;
    }
     for(int i=0; i<=m-1; i++)
      {
        xx=find(one[i].u);
        yy=find(one[i].v);
        if(xx!=yy){
            pr[yy]=xx;
            cnt++;
            sm+=one[i].w;
        }
        if(cnt==n-1) return sm;
    }
    return sm;
}

int main(){
    int t, c, cs=1, sz, ans, u, v, w, an;
    cin>>t;
    while(t--){
        an=0;
        cin>>n>>m>>c;
         for(int i=0; i<=m-1; i++)
       {
            cin>>u>>v>>w;
            if(w<c){
                one[i].u=u;
                one[i].v=v;
                one[i].w=w;
            }
            else{
                one[i].u=u;
                one[i].v=u;
                one[i].w=0;
            }
        }
        sort(one, one+m, comp);
        ans=mst();
         for(int i=1; i<=n; i++)
        {
            st.insert(find(pr[i]));
        }
        sz=st.size();
        cout<<"Case "<<cs++<<": "<<ans+(sz*c)<<" "<<sz<<endl;
        st.clear();
    }
    return 0;
}

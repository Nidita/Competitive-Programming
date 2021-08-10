 #include <bits/stdc++.h>
 using namespace std;


#define mx 2005
 vector <int> g[mx];
 vector <int> gr[mx];
    vector<bool> used;
    vector<int> order, component;

    void dfs1 (int v) {
        used[v] = true;
        for (size_t i=0; i<g[v].size(); ++i)
            if (!used[ g[v][i] ])
                dfs1 (g[v][i]);
        order.push_back (v);
    }

    void dfs2 (int v) {
        used[v] = true;
        component.push_back (v);
        for (size_t i=0; i<gr[v].size(); ++i)
            if (!used[ gr[v][i] ])
                dfs2 (gr[v][i]);
    }

    int main() {
        while(1){
        int m, n;
        cin>>m>>n;
        if(m==0 && n==0)
        {
            break;
        }
        //... reading n ...
        for (int i=0;i<n;i++) {
            int a, b,c;
            cin>>a>>b>>c;

          //  ... reading next edge (a,b) ...
            g[a-1].push_back (b-1);
            gr[b-1].push_back (a-1);
            if(c==2)
            {
                 g[b-1].push_back (a-1);
            gr[a-1].push_back (b-1);
            }
        }
int cnt=0;
        used.assign (m, false);
        for (int i=0; i<m; ++i)
            if (!used[i])
                dfs1 (i);
        used.assign (m, false);
        for (int i=0; i<m; ++i) {
            int v = order[m-1-i];
            if (!used[v]) {
                dfs2 (v);
                cnt++;
        //... printing next component ...
                component.clear();
            }
        }
        order.clear();
        //cout<<cnt<<endl;
        if(cnt==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
       memset(gr,0,sizeof(gr));
       memset(g,0,sizeof(g));


    }
    }

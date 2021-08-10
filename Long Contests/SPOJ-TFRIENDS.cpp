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
        int n;
        cin>>n;
        while(n--){
        int m;
        cin>>m;

        //... reading n ...
        string s;
        for (int i=0;i<m;i++) {
           cin>>s;
           for(int j=0;j<m;j++){

          if(s[j]=='Y'){
            g[i].push_back (j);
            gr[j].push_back (i);
          }

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
    cout<<cnt<<endl;

       memset(gr,0,sizeof(gr));
       memset(g,0,sizeof(g));


    }
    }

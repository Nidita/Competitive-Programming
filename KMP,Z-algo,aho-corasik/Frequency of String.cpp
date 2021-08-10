// Aho-Corasick algorithm
#include<bits/stdc++.h>
using namespace std;

const int N = 300005;
const int K = 26;

int node,k;
int Next[K][N], fail[N], num[N];
bool endMark[N], vis[N];
  int n;
vector<int>e[100005];

map<int,int>need,length;
int nd;


void init()
{
    node = 0;
    for(int i = 0; i < K; i++) {
        for(int j = 0; j < N; j++) {
            Next[i][j] = 0;
        }
    }
    for(int i = 0; i < N; i++) {
        endMark[i] = false;
        vis[i] = false;
        fail[i] = 0;
        num[i] = 0;
    }
}

void Insert(string s)
{
    int v = 0;
    for(int i = 0; i < s.size(); i++) {
        int id = s[i] - 'a';

        if(!vis[Next[id][v]]) {

            Next[id][v] = ++node;

            vis[node] = true;
        }

        v = Next[id][v];
    }
    endMark[v] = true;


    need[v]=nd;

}

void build_fail()
{
    queue<int>q;

    for(int i = 0; i < K; i++) {
        if(vis[Next[i][0]]) {
            q.push(Next[i][0]); // root's child
        }
    }

    while(!q.empty()) {
        int u = q.front();

        q.pop();
        for(int i = 0; i < K; i++) {
            int v = Next[i][u];
            if(!vis[v]) continue;
            q.push(v);

            int p = fail[u];

           while(p && vis[Next[i][p]]==0) {
        // cout<<'*'<<endl;
                p = fail[p];
            }

            fail[v] = Next[i][p];
//cout<<u<<' '<<v<<' '<<fail[v]<<endl;

        }
    }
}

void Search(string s)
{
    int v = 0;
    for(int i = 0; i < s.size(); i++) {
        int id = s[i] - 'a';
        while(v && !vis[Next[id][v]])
        {
           // cout<<v<<' ';
            v = fail[v];
           //  cout<<v<<" *";


        }

        v = Next[id][v];
        int tmp = v;

        while(tmp) {

            num[tmp]++;

            if(need[tmp]<=num[tmp] &&  endMark[tmp] ==true)
            {
              cout<<" *"<<tmp<<' '<<length[tmp]<<' '<<num[tmp]<<endl;
              length[tmp]=num[tmp];

            }

            tmp = fail[tmp];
        }
    }
}

int main()
{
    int t,j=1;


    init();


string s;
cin>>s;
 cin>>n;

    while(n--) {
        string a;
        cin>>nd>>a;
        Insert(a);
    }
   build_fail();

    Search(s);


    return 0;
}




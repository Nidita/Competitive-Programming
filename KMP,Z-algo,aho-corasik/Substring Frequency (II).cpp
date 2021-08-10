// Aho-Corasick algorithm
#include<bits/stdc++.h>
using namespace std;

const int N = 300005;
const int K = 26;

int node;
int Next[K][N], fail[N], num[N];
bool endMark[N], vis[N];
vector<int>e;

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
    e.push_back(v);
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
                //cout<<tmp<<' ';
            num[tmp]++;
            tmp = fail[tmp];
        }
    }
}

int main()
{
    int t,j=1;
    cin>>t;
    while(t--)
    {


    init();
    int n;
    cin>>n;
string s;
cin>>s;


    while(n--) {
        string a;
        cin>>a;
        Insert(a);
    }
   build_fail();
    Search(s);
    cout<<"Case "<<j++<<":"<<endl;
    for(int i = 0; i <e.size(); i++) {
      //  if(endMark[i]) {
            cout<<num[e[i]]<<endl; // number of occurance of a word
      //  }
    }
    e.clear();
    }

    return 0;
}



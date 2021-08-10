#include<bits/stdc++.h>

using namespace std;
typedef int ll;
#define size1 1000
vector <ll> edge[size1], cost[size1];

map <string, ll> visited;
map <string, string> ans;
map<string,vector<string>>graph;

void Bfs(string start, string end)
{
    queue <string> qu;

    qu.push(start);
    visited[start] = 0;

    while (!qu.empty()){

        string top = qu.front();
        qu.pop();

        if(top == end) break;


        for(ll i = 0; i < graph[top].size(); i++){
            string now = graph[top][i];

            if(!visited.count(now)){

                visited[now] = visited[top] + 1;
                ans[now] = top;
                qu.push(now);
            }
        }
    }

}


void printResultPath(string end, string start){

    if(end == start) {
        cout << start[0];
        return;
    }
    else{
        printResultPath(ans[end], start);
        cout << end[0];
    }
}

int main()
{
    ll tc, t = 0;



   cin>>tc;

    while (tc--){

        t++;
        if(t > 1) cout << endl;

        map <string, vector <string> > grap;

        string first, last, start, end;

        ll num, tcase;
       cin>>num>>tcase;

        for(ll i = 0; i < num; i++){
            cin >> first >> last;
            graph[first].push_back(last);
            graph[last].push_back(first);
        }


        while (tcase--) {

            cin >> start >> end;

            ans.clear();
            visited.clear();
            Bfs(start, end);
            printResultPath(end, start);
            cout << endl;
        }
        graph.clear();
    }

}

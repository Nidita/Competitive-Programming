#include <bits/stdc++.h>

using namespace std;
#define MAX 30

vector <int> grafo[MAX];
bool visited[MAX];

void bfs(int c)
{
    queue<int>q;
    q.push(c);
    while(!q.empty())
    {
        int  d=q.front();
        q.pop();
        visited[d]=true;
        for(int i=0;i<grafo[d].size();i++)
        {
            int e=grafo[d][i];
            if(visited[e]==false)
            {
                q.push(e);
                visited[e]=true;

            }

        }
    }
}

void dfs_visitar(int V)
{
	int num = 0;

	for(int i=1; i <= V; i++){
		if(visited[i] == false){
			num++;
			//cout<<i<<endl;
			bfs(i);
		}
	}

	printf("%d\n", num);
}

int main()
{
	int TC, V;
	char c, a, b;
	char input[10];

	scanf("%d", &TC);
	while(TC--)
	{
		memset(visited, false, sizeof(visited));
		cin >> c;
		V = c - '0' - 16;
		while(getchar() != '\n');
		while(gets(input) && sscanf(input, "%c%c", &a, &b) == 2)
		{
			int u, v;
			u = a - '0' - 16;
			v = b - '0' - 16;
			grafo[u].push_back(v);
			grafo[v].push_back(u);
		}
		dfs_visitar(V);
		if(TC)
			printf("\n");
		for(int i=0; i<MAX; i++)
			grafo[i].clear();
	}

	return 0;
}

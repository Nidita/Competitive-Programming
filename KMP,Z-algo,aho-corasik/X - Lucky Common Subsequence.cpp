#include <bits/stdc++.h>

#define MAXC 1000
using namespace std;
char A[MAXC],B[MAXC];
int lenA,lenB;
int dp[MAXC][MAXC];
bool visited[MAXC][MAXC];
set<string>s;
set<string>::iterator it;
vector<int>z_function(string s)
{
    int n = s.size();
    vector<int>z(n);
    for(int i = 1, l = 0, r = 0; i < n; i++)
    {
        if(i<=r)
        {


            z[i] = min(r-i+1, z[i-l]);

        }
        while(i+z[i]<n && s[z[i]]==s[i+z[i]])
            z[i]++;
        if(i+z[i]-1>r)
        {
            l = i;
            r = i + z[i] - 1;
        }
    }
    return  z;
}
int calcLCS(int i,int j)
{
	if(A[i]=='\0' or B[j]=='\0') return 0;
	if(visited[i][j])return dp[i][j];

	int ans=0;
	if(A[i]==B[j]) ans=1+calcLCS(i+1,j+1);
	else
	{
		int val1=calcLCS(i+1,j);
		int val2=calcLCS(i,j+1);
		ans=max(val1,val2);
	}
	visited[i][j]=1;
	dp[i][j]=ans;
	return dp[i][j];
}
string ans;
void printAll(int i,int j)
{
	if(A[i]=='\0' or B[j]=='\0'){
		s.insert(ans);
		return;
	}
	if(A[i]==B[j]){
		ans+=A[i];
		printAll(i+1,j+1);
		ans.erase(ans.end()-1); //Delete last character
	}
	else
	{
		if(dp[i+1][j]>dp[i][j+1]) printAll(i+1,j);
		else if(dp[i+1][j]<dp[i][j+1]) printAll(i,j+1);
		else
		{
			printAll(i+1,j);
			printAll(i,j+1);
		}
	}
}
int main() {
	scanf("%s%s",A,B);
	string c;
	cin>>c;
	lenA=strlen(A);
	lenB=strlen(B);
	calcLCS(0,0);
	printAll(0,0);
	int o=0,k=0;
	for(it=s.begin();it!=s.end();it++)
    {
       string p;
        p+=c+'#'+*it;

        vector<int>z=z_function(p);
        o=0;
       for(int i=0;i<z.size();i++)
       {
           if(z[i]==c.size())
           {
               o=1;

           }
       }
       if(o==0)
       {
           cout<<*it<<endl;
           k=1;
           break;
       }

       //cout<<*it<<' ';
    }
  if(k==0)
    {
        cout<<0<<endl;
    }

	return 0;

}


#include<bits/stdc++.h>

using namespace std;

int lcs[1001][1001];

int main(){
    int t,n,p,q;
    cin>>t;


    while(t--){
       cin>>n>>p>>q;
       int s1[p],s2[q];
       for(int i=0;i<p;i++)
       {
           cin>>s1[i];
       }
       for(int i=0;i<q;i++)
       {
           cin>>s2[i];
       }


        for(int i=p;i>=0;i--){
            for(int j=q;j>=0;j--){
                if(i==p || j==q){
                    lcs[i][j]=0;
                    continue;
                }
                if(s1[i]==s2[j]) lcs[i][j]=1+lcs[i+1][j+1];
                else lcs[i][j]=max(lcs[i+1][j],lcs[i][j+1]);
            }
        }

        printf("%d\n",lcs[0][0]);
    }

    return 0;
}

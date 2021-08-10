//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
///A lot of mistakes is happened without understanding questions clearly.\
Please,make sure that understand question clearly.Think from every possible output.\
Make different algorithm to answer the question.Don't think that you have tried all possible ways.\
There is always simple and tricky way to solve the brute force type question.
/*--------Please carefully check--------
    1.Overflow and underflow
    2.Corner test case
    3. divide zero

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;
const ld PI = 2*acosl(0.0);
const int inf=2e5+7;
const int mxN=3000000;
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define reset(a) memset(a,0,sizeof a)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) (a/gcd(a,b)*b)
#define abs(a) (a<0?-(a):a)
#define debug1(x)  cout << #x << "=" << x << endl
#define debug2(x, y)  cout << #x << "=" << x << "," << #y << "=" << y << endl
#define digit2(x) floor((log2(x)))
#define digit2(x) floor((log2(x)))
#define sc(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define DEBUG 0
//cout<<"Case "<<cas<<": "<<
string dp[102][102][102]; ///three dimensional string
string a,b,c;
int lps[102];
void func(string &a,string b)
{
    if(a.size()<=b.size())
        a=b;
}
int main()
{
    int i,j,k,len,la,lb,lc,val;
    char ch;

    cin>>a>>b>>c;
    la=a.length();
    lb=b.length();
    lc=c.length();

    ///creation of prefix function of virus as like c
    for(i=1,len=0;i<lc;i++)
    {
        while(len and c[len]!=c[i])
        {
            len = lps[len-1];
        }
        if(c[len]==c[i])
        {
            len++;
        }
        lps[i]=len;
    }

        for(i=1;i<=la;i++)
            for(j=1;j<=lb;j++)
                for(k=0;k<lc;k++)
                {

                    //Below function we check that if virus match with the LCS then we can't take the char.
                    if(a[i-1]==b[j-1]) //here Ai-1 and Bi-1 mean we start index 1.
                    {
                        val=k;
                        ch=a[i-1];
                        while(val and ch!=c[val])
                        {
                            val = lps[val-1];
                        }
                        if(ch==c[val]) // if current char of LCS match with virus present position than we go to next.
                            val++;

                        func(dp[i][j][val] , dp[i-1][j-1][k]+ch); //in dp->[i,j,val] we assign dp->i-1,j-1,k+ch
                    }
                    func(dp[i][j][k],dp[i-1][j][k]); //take char of adjacent upper row if condition match
                    func(dp[i][j][k],dp[i][j-1][k]); ////take char of adjacent left adjacent column if condition match

                }

        string st="";
        for(i=0;i<lc;i++)
        {
            func(st,dp[la][lb][i]); // if condition match (i.e. func condition) then we take char from trace of 3 dimensional string.
        }
        if(st.size()==0)
        {
            cout<<0<<endl;
        }
        else
            cout<<st.c_str()<<endl; //c_str(), it is a library function, search google to know more about it.


}

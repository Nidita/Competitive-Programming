 ///O(n+m)
/*
    'i'th position has 'z[i]' length prefix
    a a a a a
    0 4 3 2 1 -> z array
    --------------
    a a a b a a b
    0 2 1 0 2 1 0
    --------------
    a b a c a b a
    0 0 1 0 3 0 1
*/
#include<bits/stdc++.h>
using namespace std;


vector<int>z_function(string s)
{
    int n = s.size();
    vector<int>z(n);
  for(int i=0;i<n;i++)
  {
      z[i]=0;
  }
    for(int i = 1, l = 0, r = 0; i < n; i++)
    {
        if(i<=r)
        {


            z[i] = min(r-i+1, z[i-l]);

        }


        while(i+z[i]<n && s[z[i]]==s[i+z[i]])
        {

            z[i]++;

        }

        if(i+z[i]-1>r)
        {
            l = i;
            r = i + z[i] - 1;
        }

    }
    return z;

}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
int n;
cin>>n;

    string T;
   cin>>T;




   vector<int>z= z_function(T);
vector<int>presum(n+1);

for(int i=0;i<n;i++)
    {
     if(z[i]>0)
     {
         presum[z[i]]+=1;
     }

    }

    for(int i=n-1;i>=1;i--)
    {

         presum[i]+=presum[i+1];
         presum[i+1]+=1;


    }
    presum[1]+=1;

 int mx=0,index=-1;



    for(int i=0;i<n;i++)
    {
        if(mx<=presum[i+1])
        {
        mx=presum[i+1];
        index=i+1;
        }

    }
    for(int i=0;i<index;i++)
    {
        cout<<T[i];
    }
    cout<<endl;


    }



    return 0;
}




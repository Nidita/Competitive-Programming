#include<bits/stdc++.h>
#define ll long long
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


            z[i] = min((r-i+1), z[i-l]);

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


   string T;
   cin>>T;

int index=-1;
   vector<int>z= z_function(T);
   for(int i=0;i<T.size();i++)
   {
       if(z[i]+i==T.size())
       {
           index=i;
           break;
       }
   }
   int n=(T.size()%index);
   int c=0;
   int j=n;

   while(c<8)
   {
       cout<<T[j];
       j++;
       if(j==index)
       {
           j=0;
       }
       c++;
   }
   cout<<"..."<<endl;


    }

    return 0;
}



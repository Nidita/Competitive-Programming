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
    char str[100005];
  string  T;
 cin>>T;





   vector<int>z= z_function(T);
   //vector<int>z1= z_function(T1);
vector<int>presum(T.size()+1);


for(int i=0;i<T.size();i++)
    {
     if(z[i]>0)
     {
         presum[z[i]]+=1;
     }

    }

    for(int i=T.size()-1;i>=1;i--)
    {

         presum[i]+=presum[i+1];
         presum[i+1]+=1;


    }
    presum[1]+=1;



    int cnt=0;

     for(int i=T.size()-1;i>=0;i--)
    {

       if(z[i]==T.size()-i)
       {
         //  cout<<i<<endl;
           cnt++;
       }


    }





printf("%d\n",cnt+1);
for(int i=T.size()-1;i>=0;i--)
{
 if(z[i]==T.size()-i)
       {
          // cout<<T.size()-i<<' '<<presum[T.size()-i]<<endl;
           printf("%d %d\n",T.size()-i,presum[T.size()-i]);
       }


}

  //  cout<<T.size()<<' '<<1<<endl;
     printf("%d 1\n",T.size());



    return 0;
}



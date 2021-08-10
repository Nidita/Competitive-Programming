#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,o=1,s=0,s1=0,i,j;
    cin>>n;
    long long arr[n][n];
    set<long long>sp;
     set<long long>sp2;
   long long indexi=0,indexj=0;
    for( i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         cin>>arr[i][j];
         if(arr[i][j]==0)
         {
             indexi=i;
             indexj=j;
         }


        }


    }
     for( j=0;j<n;j++)
    {
        s=0;
        for( i=0;i<n;i++)
        {
       s+=arr[i][j];


        }
       // cout<<s<<endl;
        if(indexj==j)
        {
              //cout<<s<<endl;
              //cout<<'1'<<endl;
            sp2.insert(s);
        }
        else{
                 // cout<<s<<endl;
         sp.insert(s);
        }


    }
    for( i=0;i<n;i++)
    {
        s=0;
        for( j=0;j<n;j++)
        {
       s+=arr[i][j];


        }
         if(indexi==i)
        {
              //cout<<s<<endl;
              //cout<<'1'<<endl;
            sp2.insert(s);
        }
        else{
                  // cout<<s<<endl;
         sp.insert(s);
        }


    }
    s=0;
     o=1;
     for( i=0;i<n;i++)
    {

        for( j=0;j<n;j++)
        {
            if(i==j){
                    if(indexi==i && indexj==j)
                    {
                        o=0;
                    }
       s+=arr[i][j];
            }


        }



    }
    if(o==0)
    {
          // cout<<s<<endl;
           //cout<<'1'<<endl;
        sp2.insert(s);
    }
    else{
              // cout<<s<<endl;
    sp.insert(s);
    }
    o=1;
     s=0;
     for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            if(n-1-i==j){
                    if(indexi==i && indexj==j)
                    {
                        o=0;
                    }
       s+=arr[i][j];
            }


        }



    }
     if(o==0)
    {
       // cout<<s<<endl;
       // cout<<'1'<<endl;
        sp2.insert(s);
    }
    else{
            //cout<<s<<endl;
    sp.insert(s);
    }
    if(n==1)
    {
        cout<<"1"<<endl;
    }
    else
    {


        if(sp.size()!=1 ||sp2.size()!=1 )
        {
            cout<<"-1"<<endl;
        }
        else
        {
            set<long long>::iterator it;
            set<long long>::iterator it1;
            it=sp.begin();
            it1=sp2.begin();
          if(*it-*it1<=0)
          {
              cout<<"-1"<<endl;
          }

          else
          {
             cout<<*it-*it1<<endl;
          }
        }

    }

}


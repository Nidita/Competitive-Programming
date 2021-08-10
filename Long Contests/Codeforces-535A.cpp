#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>v;
    cin>>n;
    int a=n;
    while(a!=0)
    {
       int  c=a%10;
        a=a/10;
        v.push_back(c);

    }
    if(v.size()==0)
    {
        cout<<"zero"<<endl;
    }
  else if(v.size()==1)
   {
       if(v[0]==0)
       {
           cout<<"zero"<<endl;
       }
      else  if(v[0]==1)
       {
           cout<<"one"<<endl;
       }

      else   if(v[0]==2)
       {
           cout<<"two"<<endl;
       }

       else  if(v[0]==3)
       {
           cout<<"three"<<endl;
       }

      else   if(v[0]==4)
       {
           cout<<"four"<<endl;
       }

     else    if(v[0]==5)
       {
           cout<<"five"<<endl;
       }

      else   if(v[0]==6)
       {
           cout<<"six"<<endl;
       }
      else   if(v[0]==7)
       {
           cout<<"seven"<<endl;
       }
      else   if(v[0]==8)
       {
           cout<<"eight"<<endl;
       }
      else   if(v[0]==9)
       {
           cout<<"nine"<<endl;
       }


   }
   else if(v.size()==2 && v[1]==1)
   {
       if( v[0]==0)
       {
           cout<<"ten";
       }
    else    if( v[0]==1)
       {
           cout<<"eleven";
       }
         else    if( v[0]==2)
       {
           cout<< "twelve";
       }
        else    if( v[0]==3)
       {
           cout<<  "thirteen";
       }
        else    if( v[0]==4)
       {
           cout<< "fourteen";
       }
        else    if( v[0]==5)
       {
           cout<< "fifteen";
       }
        else    if( v[0]==6)
       {
           cout<< "sixteen";
       }
        else    if( v[0]==7)
       {
           cout<<"seventeen";
       }
        else    if( v[0]==8)
       {
           cout<< "eighteen";
       }
        else    if( v[0]==9)
       {
           cout<<  "nineteen";
       }

   }
   else if(v.size()==2 && v[1]!=1)
   {





         if(v[1]==2)
       {
           cout<<"twenty";
       }

        else if(v[1]==3)
       {
           cout<<"thirty";
       }

        else if(v[1]==4)
       {
           cout<<"forty";
       }

      else   if(v[1]==5)
       {
           cout<<"fifty";
       }

      else   if(v[1]==6)
       {
           cout<<"sixty";
       }
      else   if(v[1]==7)
       {
           cout<<"seventy";
       }
     else    if(v[1]==8)
       {
           cout<<"eighty";
       }
       else  if(v[1]==9)
       {
           cout<<"ninety";
       }
       if(v[0]==0)
       {
           cout<<"";
       }
      else  if(v[0]==1)
       {
           cout<<"-one";
       }

     else    if(v[0]==2)
       {
           cout<<"-two"<<endl;
       }

      else   if(v[0]==3)
       {
           cout<<"-three"<<endl;
       }

       else  if(v[0]==4)
       {
           cout<<"-four"<<endl;
       }

       else  if(v[0]==5)
       {
           cout<<"-five"<<endl;
       }

        else if(v[0]==6)
       {
           cout<<"-six"<<endl;
       }
       else  if(v[0]==7)
       {
           cout<<"-seven"<<endl;
       }
    else     if(v[0]==8)
       {
           cout<<"-eight"<<endl;
       }
      else   if(v[0]==9)
       {
           cout<<"-nine"<<endl;
       }


   }
}

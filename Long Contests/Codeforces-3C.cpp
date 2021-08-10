#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[3][3];
    int zero=0,cross=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='X')
            {
                cross++;
            }
            else if(a[i][j]=='0')
            {
                zero++;
            }
        }
    }


      int c=0;
   for(int i=0;i<3;i++)
   {
       c=0;
       for(int j=0;j<3;j++)
       {
           if(a[i][j]=='X')
           {
               c++;
           }
       }
       if(c==3)
       {
           break;
       }
   }
   if(c!=3)
   {
       for(int j=0;j<3;j++)
   {
       c=0;
       for(int i=0;i<3;i++)
       {
           if(a[i][j]=='X')
           {
               c++;
           }
       }
       if(c==3)
       {
           break;
       }
   }
   }
   if(c!=3)
   {
       c=0;
       if(a[1][1]=='X'&&a[2][2]=='X'&&a[0][0]=='X')
       {
           c=3;
       }
   }
   if(c!=3)
   {
       c=0;
       if(a[1][1]=='X'&&a[2][0]=='X'&&a[0][2]=='X')
       {
           c=3;
       }
   }
   int z=0;
    for(int i=0;i<3;i++)
   {
       z=0;
       for(int j=0;j<3;j++)
       {
           if(a[i][j]=='0')
           {
               z++;
           }
       }
       if(z==3)
       {
           break;
       }
   }
   if(z!=3)
   {
       for(int j=0;j<3;j++)
   {
       z=0;
       for(int i=0;i<3;i++)
       {
           if(a[i][j]=='0')
           {
               z++;
           }
       }
       if(z==3)
       {
           break;
       }
   }
   }
   if(z!=3)
   {
       z=0;
       if(a[1][1]=='0'&&a[2][2]=='0'&&a[0][0]=='0')
       {
           z=3;
       }
   }
   if(z!=3)
   {
       z=0;
       if(a[1][1]=='0'&&a[2][0]=='0'&&a[0][2]=='0')
       {
           z=3;
       }
   }

  if(cross>zero+1)
      {
          cout<<"illegal"<<endl;
      }
      else if(zero>cross)
      {
           cout<<"illegal"<<endl;
      }
else if(z!=3 && c!=3)
{
    if(cross+zero!=9)
    {
        if(cross ==zero)
        {
            cout<<"first"<<endl;
        }
        else  if(cross ==zero+1)
        {
             cout<<"second"<<endl;
        }
    }
    else
    {
        cout<<"draw"<<endl;
    }

}
else if(z==3 && c==3)
{
    cout<<"illegal"<<endl;
}
else if(z==3 )
{
    if(cross>zero){
     cout<<"illegal"<<endl;
    }
    else
    {

    cout<<"the second player won"<<endl;
    }
}
else if(c==3)
{
     if(cross==zero){
     cout<<"illegal"<<endl;
    }
    else{
  cout<<"the first player won"<<endl;
    }
}

}

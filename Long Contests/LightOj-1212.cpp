#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,a,b,x;
     string s;
    cin>>t;
    for(i=1;i<=t;i++)
    { cout<<"Case "<<i<<":"<<endl;
        deque<string>q;

        cin>>a>>b;
        for(j=1;j<=b;j++)
        {
           // string s;
            scanf("\n");
            getline(cin,s);
            size_t f=s.find("pushLeft");
              size_t f1=s.find("pushRight");
              size_t f2=s.find("popRight");
                 size_t f3=s.find("popLeft");
            if(f!=string::npos)
            {
                if(q.size()<a)
                {
                  s.erase(0,9);
                  //  x=s.length();
                   // cout<<s[x-1]<<endl;
                    q.push_front(s);
                    cout<<"Pushed in left: "<<q.front()<<endl;
                }
                else
                {
                    cout<<"The queue is full"<<endl;
                }
            }
             if(f1!=string::npos)
            {
                if(q.size()<a)
                {
                    s.erase(0,10);
                    q.push_back(s);
                     cout<<"Pushed in right: "<<q.back()<<endl;
                }
                 else
                {
                    cout<<"The queue is full"<<endl;
                }
            }

            if(f2!=string::npos)
            {
                if(!q.empty())
                {
                   cout<<"Popped from right: "<<q.back()<<endl;
                    q.pop_back();
                }
                 else
                {
                    cout<<"The queue is empty"<<endl;
                }
            }

            if(f3!=string::npos)
            {
                if(!q.empty())
                {
                       cout<<"Popped from left: "<<q.front()<<endl;
                    q.pop_front();
                }
                 else
                {
                    cout<<"The queue is empty"<<endl;
                }
            }


        }

    }
}v

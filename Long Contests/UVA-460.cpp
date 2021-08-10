#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int x1,x2,y1,y2,x3,y3,x4,y4,ulx1,ulx2,uly1,uly2,o=1;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    ulx1=max(x1,x3);
    uly1=max(y1,y3);
    ulx2=min(x2,x4);
    uly2=min(y2,y4);
    if(ulx1>=ulx2 || uly1>=uly2)
    {
        cout<<"No Overlap"<<endl;
    }
    else
    {
        cout<<ulx1<<" "<<uly1<<" "<<ulx2<<" "<<uly2<<endl;
    }
if(t)
{
    cout<<endl;
}

    }
}

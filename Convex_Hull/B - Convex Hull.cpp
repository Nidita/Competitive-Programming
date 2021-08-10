#include <bits/stdc++.h>
using namespace std;
///convex hull construction

class PT
{
    public:

    long long x, y;

    PT() {}
    PT(long long _x, long long _y) {x = _x; y = _y;}

    bool operator < (const PT & p) {return ((x < p.x) || (x == p.x && y < p.y));}
    bool operator > (const PT & p) {return ((x > p.x) || (x == p.x && y > p.y));}
};

bool cw(PT a, PT b, PT c)
{
    return a.x * (b.y-c.y) + b.x * (c.y-a.y) + c.x * (a.y-b.y) < 0;
}

bool ccw(PT a, PT b, PT c)
{
    return a.x * (b.y-c.y) + b.x * (c.y-a.y) + c.x * (a.y-b.y) > 0;
}

vector<PT> convex_hull(vector<PT> a)
{
    sort(a.begin(), a.end());

    PT p1 = a[0], p2 = a.back();

    vector<PT> up, down;
    up.push_back(p1);
    down.push_back(p1);

    int n = a.size();

    for(int i = 1; i < n; ++i)
    {
        if (i == n - 1 || cw(p1, a[i], p2))
        {
            while(up.size() >= 2 && !cw(up[up.size()-2], up[up.size()-1], a[i])) up.pop_back();
            up.push_back(a[i]);
        }

        if (i == n - 1 || ccw(p1, a[i], p2))
        {
            while(down.size() >= 2 && !ccw(down[down.size()-2], down[down.size()-1], a[i])) down.pop_back();
            down.push_back(a[i]);
        }
    }

    vector<PT> c_hull;

    /// counter clockwise order
    for (int i = 0; i < down.size(); i++) c_hull.push_back(down[i]);

    for (int i = up.size() - 2; i > 0; i--) c_hull.push_back(up[i]);

    return c_hull;
}
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
       cin>>n;

        vector< PT>v,v1;
        for(int i=0;i<n;i++)
        {

            long long x,y;
            char c;
            cin>>x>>y>>c;

            if(c=='Y')
            {
               PT p(x,y);
               v.push_back(p);
            }
        }
        v1=convex_hull(v);
        cout<<v1.size()<<endl;
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i].x<<' '<<v1[i].y<<endl;
        }


    }
}



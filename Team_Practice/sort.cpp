// A C++ program to demonstrate
// STL sort() using
// our own comparator
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
// An interval has a start
// time and end time

// Compares two intervals
// according to staring times.
bool compareInterval(pi i1, pi i2)
{
    if(i1.first == i2.first)
    {
          return (i1.second> i2.second);
    }
    else{
    return (i1.first >i2.first);
    }
}

int main()
{
   int n;
   cin>>n;
   pi arr[n];
   for(int i=0;i<n;i++)
   {
       int a,b;
       cin>>a>>b;
       arr[i]=make_pair(a,b);
   }

    // sort the intervals in increasing order of
    // start time
    sort(arr, arr + n, compareInterval);

    cout << "Intervals sorted by start time : \n";
    for (int i = 0; i < n; i++)
        cout << arr[i].first<< "," << arr[i].second<<endl;


    return 0;
}

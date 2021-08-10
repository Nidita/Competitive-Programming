// A C++ program to demonstrate
// STL sort() using
// our own comparator
#include <bits/stdc++.h>
using namespace std;

// An interval has a start
// time and end time
struct Interval {
    int start, end;
};

// Compares two intervals
// according to staring times.
bool compareInterval(Interval i1, Interval i2)
{
    if(i1.start == i2.start)
    {
          return (i1.end > i2.end);
    }
    else{
    return (i1.start >i2.start);
    }
}

int main()
{
    Interval arr[]
        = { { 1, 2 }, { 4, 3 }, { 3, 2}, { 3, 1} };
    int n = sizeof(arr) / sizeof(arr[0]);

    // sort the intervals in increasing order of
    // start time
    sort(arr, arr + n, compareInterval);

    cout << "Intervals sorted by start time : \n";
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i].start << "," << arr[i].end
             << "] ";

    return 0;
}

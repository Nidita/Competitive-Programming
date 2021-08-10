
#include <bits/stdc++.h>
using namespace std;
int mem[30];
int lisIterative(vector<int> A) {
    for (int i = A.size() - 1;i >= 0;i--) {
        int ans = 0;
        for (int j = i + 1;j < A.size();j++) {
            if (A[j] > A[i]) {
                ans = max(ans, mem[j]);
            }
        }
        mem[i] = ans + 1;
    }

    int final_ans = 0;
    for(int i = 0;i<A.size();i++) {
      final_ans = max(final_ans, mem[i]);
    }

    return final_ans;
}
int main()
{
   string s;
   cin>>s;
  vector<int>s1;
   for(int i=0;i<s.size();i++)
   {
     s1.push_back((int)s[i]-'a');
   }
   for(int i=0;i<30;i++)
   {
       mem[i]=0;
   }
  cout<< 26-lisIterative(s1)<<endl;

}

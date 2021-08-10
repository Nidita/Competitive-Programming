#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node
{
    node* child[26];
    int end_mark;

     int level;
    node()
    {
        for(int i=0; i<26; i++)
        {
            child[i]=NULL;
        }
        end_mark=0;
        level=0;

    }
};
node* root;
void Insert(string s)
{
    node *cur=root;
 int k=0;
    for(auto ch:s)
    {
        int letter=ch-'a';

        if(cur->child[letter]==NULL)
        {
            cur->child[letter]=new node();
        }
        cur=cur->child[letter];
         cur->end_mark=++( cur->end_mark);
         cur->level=++k;

    }

}
int mn=1000006;
int srch(string str)
{
    node* curr = root;
    for (int i = 0; i < str.size(); i++) {
        int id = str[i] - 'a';
        if (curr->child[id] == NULL)
            return 0;
        mn=min(mn,curr->child[id]->end_mark);
        curr = curr->child[id];
    }
    return mn;
}
void Delete_all(node *cur)///root pathaile pora tree delete hobe
 {                        ///je node pathabo tar subtree delete hobe,
     for(int i=0;i<26;i++)
     {
         if(cur->child[i])
         {

             Delete_all(cur->child[i]);


         }
     }


     delete(cur);
 }


int main()
{


        root=new node();
        int n,q;
        cin>>n>>q;
        string s[n];
        for(int i=0; i<n; i++)
        {
            getchar();
            cin>>s[i];
            Insert(s[i]);
        }
for(int i=1;i<=q;i++)
{
    string o;
    cin>>o;
    cout<<srch(o)<<endl;
    mn=1000006;

}

           Delete_all(root);





}


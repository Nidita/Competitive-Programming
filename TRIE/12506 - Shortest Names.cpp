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
 int step=0;
 void Dfs(node *cur)///root pathaile pora tree delete hobe
 {                        ///je node pathabo tar subtree delete hobe,
     for(int i=0;i<26;i++)
     {

 if(cur->child[i])
         {

         if(cur->child[i]->end_mark==1 && cur->end_mark!=1)
         {
             //cout<<cur->level<<' ';
             step+=(cur->level)+1;




         }
          Dfs(cur->child[i]);
         }

     }



 }
int main()
{
    int t;
    scanf("%d",&t);
    for(int te=1; te<=t; te++)
    {
        root=new node();
        int n;
        scanf("%d",&n);
        string s[n];
        for(int i=0; i<n; i++)
        {
            getchar();
            cin>>s[i];
            Insert(s[i]);
        }
          Dfs(root);

           Delete_all(root);

          cout<<step<<endl;

//cout<<endl;
         step=0;
    }
}

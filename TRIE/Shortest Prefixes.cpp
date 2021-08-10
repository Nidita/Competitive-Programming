#include<iostream>
#include<string>
#include<vector>
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
string mn;
string srch(string str)
{
    node* curr = root;
    for (int i = 0; i < str.size(); i++) {
        int id = str[i] - 'a';
        if (curr->child[id] == NULL)
        {


            mn+=str[i];
            break;
        }

        else if(curr->end_mark==1)
        {


            //mn+=str[i];
            return mn;
        }


          mn+=str[i];


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
        vector<string>s;
        string a;


 while(getline(cin,a))

  {


            cin>>a;
            s.push_back(a);

        }
        for(int i=0;i<s.size();i++)
        {
cout<<s[i]<<' ';

        // Insert(s[i]);
        }
  for(int i=0;i<s.size();i++)
{


 //cout<<s[i]<<' '<<srch(s[i])<<endl;
 mn.clear();

}

          // Delete_all(root);





}



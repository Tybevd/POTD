#include<bits/stdc++.h>
using namespace std;
vector<int> findSpiral(Node *root)
{
  vector<int> ans;
  queue<Node*> q;
  if(root==NULL) return ans;
  q.push(root);
  int f=1;
  while(!q.empty()){
      vector<int> v;
      int sz=q.size();
      while(sz--){
          Node* top=q.front();q.pop();
          v.push_back(top->data);
          if(top->left) q.push(top->left);
          if(top->right) q.push(top->right);
      }
      if(f){
          reverse(v.begin(),v.end());
      }
      for(auto x:v) ans.push_back(x);
      f^=1;
  }
  return ans;
    
}

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int time(map<TreeNode*,TreeNode*> &parent, TreeNode* res)
 {
     map<TreeNode*,bool> vis;
     int ans=0;
     queue<TreeNode*> q;
     q.push(res);
     vis[res]=true;
     while(!q.empty())
     {
         int sz = q.size();
         int fl=0;
         for(int i=0;i<sz;i++)
         {
             TreeNode* curr = q.front();
             q.pop();
             
             if(curr->left && !vis[curr->left])
             {
                 q.push(curr->left);
                 vis[curr->left]= true;
                 fl=1;
             }
             if(curr->right && !vis[curr->right])
             {
                 q.push(curr->right);
                 vis[curr->right]= true;
                 fl=1;
             }
             if(parent[curr] && !vis[parent[curr]])
             {
                 q.push(parent[curr]);
                 vis[parent[curr]] = true;
                 fl=1;
             }
         }
         if(fl)ans++;
     }
     return ans;
 }
 TreeNode* markpar(TreeNode* A, map<TreeNode*,TreeNode*> &parent, int start)
 {
     TreeNode* res;
     queue<TreeNode*> q;
     q.push(A);
     while(!q.empty())
     {
         TreeNode* curr = q.front();
         q.pop();
         
         if(curr->val==start) res = curr;
         
         if(curr->left)
         {
             q.push(curr->left);
             parent[curr->left] = curr;
         }
         if(curr->right)
         {
             q.push(curr->right);
             parent[curr->right] = curr;
         }
     }
     return res;
 }
int Solution::solve(TreeNode* A, int B) {
    map<TreeNode*,TreeNode*> parent;
    
    TreeNode* res = markpar(A,parent,B);
    
    return time(parent,res);
}

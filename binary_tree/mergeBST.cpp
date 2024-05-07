#include<iostream>
#include<vector>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void inorder(TreeNode* root, vector<int>& in) {
        if(root == nullptr) return;
        
        inorder(root->left, in);
        in.push_back(root->val);
        inorder(root->right, in);
    }

    vector<int> mergeArrays(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        int i = 0, j = 0;

        while(i < a.size() && j < b.size()) {
            if(a[i] < b[j]) {
                ans.push_back(a[i]);
                i++;
            } else {
                ans.push_back(b[j]);
                j++;
            }
        }

        while(i < a.size()) {
            ans.push_back(a[i]);
            i++;
        }

        while(j < b.size()) {
            ans.push_back(b[j]);
            j++;
        }

        return ans;
    }

    TreeNode* inordertoBST(int s, int e, vector<int>& inorderVal) {
        // Base case
        if(s > e) return nullptr;

        int mid = (s + e) / 2;
        TreeNode* root = new TreeNode(inorderVal[mid]);
        root->left = inordertoBST(s, mid - 1, inorderVal);
        root->right = inordertoBST(mid + 1, e, inorderVal);

        return root;
    }

public:
    TreeNode* canMerge(TreeNode* root1, TreeNode* root2) {
        vector<int> bst1, bst2;
        inorder(root1, bst1);
        inorder(root2, bst2);

        vector<int> mergedArray = mergeArrays(bst1, bst2);

        int s = 0, e = mergedArray.size() - 1;
        return inordertoBST(s, e, mergedArray);
    }
};

int main(){

    return 0;
}
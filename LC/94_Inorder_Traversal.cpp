/* Given the root of a binary tree, return the inorder traversal of its nodes' values.



Example 1:


Input: root = [1,null,2,3]
Output: [1,3,2]
Example 2:

Input: root = []
Output: []
Example 3:

Input: root = [1]
Output: [1] */

#include <iostream>
#include <vector>
#include "BinaryTree.h"

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
class Solution
{
public:
    vector<int> res;
    vector<int> inorderTraversal(TreeNode *root)
    {

        if (root == nullptr)
        {
            return res;
        }

        inorderTraversal(root->left);
        res.push_back(root->val);
        inorderTraversal(root->right);

        return res;
    }
};
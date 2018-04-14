/*
 * =====================================================================================
 *
 *       Filename:  TreeNode.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2018年04月14日 12时33分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Charles Chiu (), charles.r.chiu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */




#include <iostream>
#include "TreeNode.h"


TreeNode* insertBST(TreeNode* root,int val)
{
    if(root == NULL)
    {
        return new TreeNode(val);
    }
    if(val > root->val)
    {
        root->right = insertBST(root->right, val);
    }
    else if(val < root->val)
    {
        root->left = insertBST(root->left, val);
    }

    return root;
}


TreeNode* createBST(const std::vector<int>& data)
{
    TreeNode* root = NULL;
    for(int ele : data)
    {
        root = insertBST(root,ele);
    }
    return root;
}


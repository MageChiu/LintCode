/*
 * =====================================================================================
 *
 *       Filename:  TreeNode.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2018年04月14日 12时28分32秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Charles Chiu (), charles.r.chiu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#ifndef __TREE_NODE_H__
#define __TREE_NODE_H__

#include <stdio.h>
#include <stdlib.h>

#include <vector>

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x),left(NULL),right(NULL){} 
};


TreeNode* insertBST(TreeNode* root, int val);
TreeNode* createBST(const std::vector<int>& data);


#endif //__TREE_NODE_H__



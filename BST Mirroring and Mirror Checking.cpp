#include<iostream>
using namespace std;


TreeNode* mirror(TreeNode* root)
{
	TreeNode* temp;
	if(root!=NULL)
	{
		temp=root->left;
		root->left=root->right;
		root->right=temp;
		mirror(root->left);
		mirror(root->right);
	}
}

bool mirrorCheck(TreeNode* root,TreeNode* root2)
{
	if(root==NULL || root2==NULL)
	{
		if(root==NULL && root2==NULL)
		{
			return true;
		}
		return false;
	}
	if(root!=NULL && root2!=NULL)
	{
		if(root->left->key!=root2->right->key && root->right->key!=root2->left->key)
		{
			return false;
		}
		mirrorCheck(root->left);
		mirrorCheck(root->right);
	}
}

int main ()
{
	
	return 0;
}


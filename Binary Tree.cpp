#include<iostream>
using namespace std;

struct TreeNode
{
	int key;
	TreeNode* left;
	TreeNode* right;
};

TreeNode* insert(int num)
{
	TreeNode* root=new TreeNode;
	root->key=num;
	root->left=root->right=NULL;
	return root;
}

void leafNodes(int height,TreeNode* root)
{
	if(root==NULL)
	{
		return;
	}
	else if(height==0 && root->left==NULL && root->right==NULL)
	{
		cout<<root->key<<"  ";
		return;
	}
	else
	{
		leafNodes(height-1,root->left);
		leafNodes(height-1,root->right);
	}
}

bool checkBST(TreeNode* root)
{
	if(root->left>root || root->right<root)
	{
		return false;
	}
	checkBST(root->left);
	checkBST(root->right);
	return true;
}

bool search(int num, TreeNode* root)
	{
		bool a,b;
		if(root==NULL){
			return false;
		}
		if(root->key==num)
		{
			return true;
		}
		a=search(num, root->left);
		b=search(num, root->right);
		return a||b;
	}

void mirror(TreeNode* root)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
		mirror(root->left);
		mirror(root->right);
		TreeNode* temp;
		temp=root->left;
		root->left=root->right;
		root->right=temp;
	}
}

bool mirrorCheck(TreeNode* root, TreeNode* root2)
{
	if(root==NULL && root2==NULL)
	{
		return true;
	}
	if(root==NULL || root2==NULL)
	{
		return false;
	}
	else
	{
		mirrorCheck(root->left,root2->left);
		mirrorCheck(root->right,root2->right);
		if(root->left!=root2->right || root->right!=root2->left)
		{
			return false;
		}
	}
}

void show(TreeNode* root)
{
	if(root!=NULL)
	{
		show(root->left);
		cout<<root->key<<"  ";
		show(root->right);
	}
}

int main()
{
	TreeNode* root, *root2;
	root=insert(5);
	root->left=insert(15);
	root->right=insert(4);
	root->left->left=insert(34);
	root->left->right=insert(25);
	root->left->right->left=insert(22);
	
	root2=insert(5);
	root2->left=insert(4);
	root2->right=insert(15);
	root2->right->left=insert(25);
	root2->right->right=insert(34);
	root2->right->left->right=insert(22);
	
	leafNodes(1,root);
	cout<<endl;
	cout<<checkBST(root)<<endl;
	search(15,root);
	cout<<search(25,root)<<endl;
	show(root);
	cout<<endl;
	mirror(root);
	show(root);
	cout<<endl;
	cout<<mirrorCheck(root,root)<<endl;
	cout<<mirrorCheck(root,root2);
	return 0;
}

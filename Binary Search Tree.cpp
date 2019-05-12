#include<iostream>
using namespace std;


struct TreeNode
{
	int key;
	TreeNode *left;
	TreeNode *right;
	int Height;
};

class AVL
{
	TreeNode *root,*tempo;

	TreeNode* Mini(TreeNode* root)
	{
		if (root == NULL)
		{
			return NULL;
		}
		else if (root->left == NULL)
		{
			return root;
		}
		else
		{
			return Mini(root->left);
		}
	}
	
	TreeNode* Maxi(TreeNode* root)
	{
		if (root == NULL)
		{
			return NULL;
		}
		else if (root->right == NULL)
		{
			return root;
		}
		else
		{
			return Maxi(root->right);
		}
	}
	
	TreeNode* insertion(int num, TreeNode* root)
	{
		if(root==NULL)
		{
			root = new TreeNode;
			root->key=num;
			root->left=root->right=NULL;
		}
		else if(num>root->key)
		{
			root->right = insertion(num,root->right);
		}
		else if(num<root->key)
		{
			root->left = insertion(num,root->left);
		}
		return root;
	}
	
	TreeNode* deletion(int num, TreeNode* root)
	{
		TreeNode *temp;
		if (root == NULL)
		{
			return NULL;
		}
		else if (num < root->key)
		{
			root->left = deletion(num,root->left);
		}
		else if (num > root->key)
		{
			root->right = deletion(num,root->right);
		}
		else if (root->left && root->right)
		{
			temp = Mini(root->right);
			root->key = temp->key;
			root->right = deletion(root->key, root->right);
		}
		else
		{
			temp = root;
			if (root->left == NULL)
			{
				root = root->right;
			}
			else if (root->right == NULL)
			{
				root = root->left;
			}
			delete(temp);
		}
		return root;
	}	
	
	TreeNode* delBST(TreeNode* root)
	{
		if (root==NULL)
		{
			return NULL;
		}
		else
		{
			delBST(root->left);
			delBST(root->right);
			delete (root);
		}
	}
		
	void InorderTraverse(TreeNode* root)
	{
		if(root!= NULL)
		{
			InorderTraverse(root->left);
			cout<<root->key<<"  ";
			InorderTraverse(root->right);
		}
	}
		
	void PreorderTraverse(TreeNode* root)
	{
		if(root!= NULL)
		{
			cout<<root->key<<"  ";
			PreorderTraverse(root->left);
			PreorderTraverse(root->right);
		}
	}
	
	void PostorderTraverse(TreeNode* root)
	{
		if(root!= NULL)
		{
			PostorderTraverse(root->left);
			PostorderTraverse(root->right);
			cout<<root->key<<"  ";
		}
	}
	
	
	int NodeSum(TreeNode* root)
	{
		if(root!= NULL)
		{
			int sum=root->key;
			if(root->left!=NULL)
			{
				sum += NodeSum(root->left);
			}
			if(root->right)
			{
				sum += NodeSum(root->right);
			}
			return sum;
		}
	}
	
	int Height(TreeNode *root)
	{
	    if(root==NULL)
		{
			return 0;
		}
	    int left=0,right=0;
	    left=Height(root->left);
	    right=Height(root->right);
	    if(left>right)
		{
			return left+1;
		}
		else
		{
			return right+1;
		}
	}
	
	
	public:
		AVL()
		{
			root==NULL;
		}
		~AVL()
		{
			root=delBST(root);
		}
		
		void insertion(int num)
		{
			root=insertion(num,root);
		}
		
		void deletion(int num)
		{
			root=deletion(num,root);
		}
		
		void Mini()
		{
			tempo = Mini(root);
			if(tempo==NULL)
			{
				cout<<"Root is Empty!"<<endl;
			}
			else
			{
				cout<<"Minimum = "<<tempo->key<<endl;
			}
		}
		
		void Maxi()
		{
			tempo = Maxi(root);
			if(tempo==NULL)
			{
				cout<<"Root is Empty!"<<endl;
			}
			else
			{
				cout<<"Maximum = "<<tempo->key<<endl;
			}
		}
		
		void preShow()
		{
			PreorderTraverse(root);
			cout<<"\n";
		}
		
		void postShow()
		{
			PostorderTraverse(root);
			cout<<"\n";
		}
		
		void inShow()
		{
			InorderTraverse(root);
			cout<<"\n";
		}


		void Height()
		{
			int ht= Height(root);
			cout<<"Height : "<<ht-1<<endl;
		}
};



int main()
{
	AVL apple;
	apple.insertion(5);
	apple.insertion(10);
	apple.insertion(15);
	apple.insertion(1);
	apple.insertion(0);
	apple.insertion(20);
	apple.deletion(0);
	apple.insertion(3);
	apple.inShow();
	apple.postShow();
	apple.preShow();
	apple.Maxi();
	apple.Mini();
	apple.Height();
	return 0;
}

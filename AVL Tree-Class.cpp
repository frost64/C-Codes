#include<iostream> 
using namespace std; 


struct Node{
    int key;  
    Node *left;  
    Node *right;  
    int height;  
};

class AVL
{
	private:
		int maxi(int a, int b)
		{  
			if(a>b)
			{
				return a;
			}
			else
			{
				return b;
			}  
		}
		
		int height(Node *root)
		{  
    		if (root == NULL)
			{
				return 0;
			}
			else
			{
				return root->height;
			}
		}
		
		Node* newNode(int key)
		{  
    		Node* node = new Node(); 
    		node->key = key;  
    		node->left = NULL;  
    		node->right = NULL;  
    		node->height = 1;
    		return(node);  
		}
		
		Node *rightRotation(Node *root)
		{  
   			Node *x = root->left;  
   			Node *T2 = x->right;
    		x->right = root;  
		    root->left = T2;
		    root->height = max(height(root->left), height(root->right)) + 1;  
		    x->height = max(height(x->left), height(x->right)) + 1;    
		    return x;
		}
		
		Node *leftRotation(Node *root)
		{  
    		Node *y = root->right;  
    		Node *T2 = y->left;
			y->left = root;  
		    root->right = T2;  
		    root->height = max(height(root->left), height(root->right)) + 1;  
		    y->height = max(height(y->left), height(y->right)) + 1;    
		    return y;  
		}
			
		int getBalance(Node *root)
		{  
	    	if (root == NULL)
			{
				return 0;
			}
			else
			{
				return height(root->left) - height(root->right);	
			}  
		}
	    
		Node* insertion(Node* root, int key){  
	    	if (root == NULL)
			{
				return newNode(key);
			}
		    if (key < root->key)
			{
				root->left = insertion(root->left, key);
			}  
		    else if (key > root->key)
			{
				root->right = insertion(root->right, key);
			}  
		    else
			{
				return root;
			}
		    root->height = 1 + max(height(root->left), height(root->right));  
		    int hdiff=getBalance(root);  
		    if (hdiff > 1 && key < root->left->key)
			{
				return rightRotation(root);
			}
		    if (hdiff < -1 && key > root->right->key)
			{
				return leftRotation(root);
			}
		    if (hdiff > 1 && key > root->left->key)
			{  
	    	    root->left = leftRotation(root->left);
		        return rightRotation(root);  
		    }
	    	if (hdiff < -1 && key < root->right->key)
			{  
		        root->right = rightRotation(root->right);  
	    	    return leftRotation(root);  
		    }
		    return root;  
		}
	
		Node* mini(Node* root) 
		{ 
			Node* position = root;
			while (position->left != NULL)
			{
				position = position->left;
			}  
		    return position; 
		}
	
		Node* deletion(Node* root, int key)
		{
			Node *temp;
		    if (root == NULL)
			{
				return root;
			}
		    else if (key < root->key)
			{
				root->left = deletion(root->left, key);
			}
		    else if( key > root->key )
			{
				root->right = deletion(root->right, key);
			}
		    else
			{
		        if((root->left == NULL)||(root->right == NULL))
				{ 
		            Node *temp;
					temp= root->left;
					temp= root->right; 
	    	        if (temp == NULL)
					{
	            	    temp = root; 
						root = NULL; 
	        	    } 
	        	    else
					{
						*root = *temp;
						delete(temp);
					}
	        	}
		        else
				{ 
	    	        Node* temp = mini(root->right); 
	        	    root->key = temp->key; 
	            	root->right = deletion(root->right, temp->key); 
	        	}
		    }
		    if (root == NULL)
			{
				return root;
			}
	    	root->height =1 + max(height(root->left), height(root->right));
	    	if (getBalance(root) > 1 && getBalance(root->left) >= 0)
			{
				return rightRotation(root);
			}
	    	else if (getBalance(root) > 1 && getBalance(root->left) < 0)
			{
	        	root->left =  leftRotation(root->left); 
		        return rightRotation(root); 
		    }
	    	else if (getBalance(root) < -1 && getBalance(root->right) <= 0)
			{
				return leftRotation(root);
			}
			else if (getBalance(root) < -1 && getBalance(root->right) > 0)
			{
	       		root->right = rightRotation(root->right); 
	        	return leftRotation(root); 
	    	} 
	    	return root; 
		}
		
		public:
			Node* root;
			AVL()
			{
				root=NULL;
			}
			~AVL()
			{
				while(root!=NULL)
				{
					root=deletion(root,root->key);
				}
				delete root;
			}
			
			void preOrder(Node *root)
			{  
   				if(root != NULL)
				{  
					cout << root->key << " ";  
    			    preOrder(root->left);  
    		    	preOrder(root->right);  
		    	}  
			}
		
			void inOrder(Node *root)
			{  
    			if(root != NULL)
				{   
    		    	inOrder(root->left);
					cout << root->key << " ";    
    		    	inOrder(root->right);  
		    	}  
			}
			
			void insertion(int key)
			{
				root=insertion(root, key);
			}
			
			void deletion(int key)
			{
				root=deletion(root,key);
			}
};


int main(){  
    AVL tree;
    tree.insertion(15);
	tree.insertion(8);  
    tree.insertion(14);
	tree.insertion(18);  
    tree.insertion(17);
	tree.insertion(4);  
    tree.insertion(16);
	tree.insertion(5);  
    tree.insertion(3);
	tree.insertion(2);  
	tree.insertion(9);
	tree.insertion(10);
	tree.insertion(1);
	tree.insertion(6);
	tree.insertion(7);
	tree.insertion(20);
	tree.insertion(24);
	tree.insertion(21);
	tree.insertion(11);
	tree.insertion(19); 
    
	cout << "pre order the tree is "<<endl;  
	tree.preOrder(tree.root);
	cout << endl<<"in order the tree is "<<endl;  
	tree.inOrder(tree.root);
    
	tree.deletion(4);
    tree.deletion(15);
    tree.deletion(14);
    tree.deletion(6);
    tree.deletion(10);
    tree.deletion(16);
    tree.deletion(19);
    tree.deletion(18);
    tree.deletion(17);
    tree.deletion(3);
    tree.deletion(1);
    tree.deletion(9);
    tree.deletion(2);
    tree.deletion(5);
    cout<<endl<<"Preorder after deletion of"<<endl; 
    tree.preOrder(tree.root);
    cout<<endl<<"in order after deletion of"<<endl; 
    tree.inOrder(tree.root);
    return 0;  
}  

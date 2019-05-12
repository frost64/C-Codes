int getLevelUtil(struct node *node, int data, int level) 
{ 
    if (node == NULL) 
	    return 0; 
  
    if (node -> data == data) 
        return level; 
  
    int downlevel = getLevelUtil(node -> left, data, level + 1); 
    if (downlevel != 0) 
        return downlevel; 
        
    downlevel = getLevelUtil(node->right, data, level + 1); 
    return downlevel; 
} 
  
/* Returns level of given data value */
int getLevel(struct node *node, int data) 
{ 
    return getLevelUtil(node, data, 1); 
} 
  

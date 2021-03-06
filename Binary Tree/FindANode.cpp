bool isNodePresent(BinaryTreeNode<int>* node, int key) 
{ 
    if (node == NULL) 
        return false; 
  
    if (node->data == key) 
        return true; 
  
    /* then recur on left sutree */
    bool res1 = isNodePresent(node->left, key); 
  
    if(res1) return true; // node found, no need to look further 
  
    /* node is not found in left, so recur on right subtree */
    bool res2 = isNodePresent(node->right, key); 
  
    return res2; 
}

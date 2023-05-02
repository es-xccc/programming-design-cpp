// forward declaration of class Tree
class Tree;  

// TreeNode class-template definition
class TreeNode 
{
   friend class Tree;
public:
	// constructor
	TreeNode( const int &value )   
	  : leftPtr( 0 ), // pointer to left subtree
	    data( value ), // tree node data
	    rightPtr( 0 ) // pointer to right substree
	{ 
	  // empty body 
	} // end TreeNode constructor
	
	// return copy of node's data
	int getData() const 
	{ 
	  return data; 
	} // end getData function
private:
	TreeNode *leftPtr; // pointer to left subtree
	int data;
	TreeNode *rightPtr; // pointer to right subtree
}; // end class TreeNode



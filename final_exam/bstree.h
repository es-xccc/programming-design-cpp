// Fig. 20.21: Tree.h
// Template Tree class definition.
#ifndef BSTREE_H
#define BSTREE_H

#include <iostream>
#include <new>
#include "bstnode.h"
using namespace std;

// Tree class-template definition
class Tree
{
public:
	Tree(){
		rootPtr=0;
	} // constructor
	
	void insertNode( const int & value){
		insertNodeHelper(&rootPtr,value);
	}
	
	void preOrderTraversal() const{
		preOrderHelper(rootPtr);
	}
	
	void inOrderTraversal() const{
		inOrderHelper(rootPtr);
	}
	
	void postOrderTraversal() const{
		postOrderHelper(rootPtr);
	}
	
	bool searchANode(int value) const{
		searchANodeHelper(value);
	}
	
private:
	TreeNode *rootPtr;
	
	// utility functions
	void insertNodeHelper( TreeNode **ptr, const int & value){
		if(*ptr==0)
			*ptr=new TreeNode(value);
		else{
			if(value<(*ptr)->data)
				insertNodeHelper(&((*ptr)->leftPtr),value);
			else{
				if(value>(*ptr)->data)
					insertNodeHelper(&((*ptr)->rightPtr),value);
				else
					cout<<"dup";
			}
		}
	}
	
	void preOrderHelper( TreeNode * ptr) const{
		if(ptr!=0){
			cout<<ptr->data<<' ';
			preOrderHelper(ptr->leftPtr);
			preOrderHelper(ptr->rightPtr);
		}
	}
	
	void inOrderHelper( TreeNode * ptr) const{
		if(ptr!=0){
			inOrderHelper(ptr->leftPtr);
			cout<<ptr->data<<' ';
			inOrderHelper(ptr->rightPtr);
		}
	}
	
	void postOrderHelper( TreeNode * ptr) const{
		if(ptr!=0){
			postOrderHelper(ptr->leftPtr);
			postOrderHelper(ptr->rightPtr);
			cout<<ptr->data<<' ';
		}
	}
	
	bool searchANodeHelper(int value) const{
		TreeNode *current = rootPtr;
	    while (current != NULL && value != current->data) {  
	        if (value < current->data){                      
	            current = current->leftPtr;
	        }
	        else {
	            current = current->rightPtr;
	        }
	    }
	    return current==NULL?false:true;
	}
}; // end class Tree

#endif

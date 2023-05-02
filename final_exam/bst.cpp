#include <bits/stdc++.h>
#include "bstree.h"

int main() {
	Tree test;
	srand(time(0));
	
	cout<<"insert: ";
	for(int i=0;i<20;i++){
		int value=rand()%101;
		test.insertNode(value);
		cout<<value<<" ";
	}
	
	cout<<endl<<endl<<"preorder: ";
	test.preOrderTraversal();
	cout<<endl<<"inorder: ";
	test.inOrderTraversal();
	cout<<endl<<"postorder: ";
	test.postOrderTraversal();
	cout<<endl;
	
	int inputValue;
	cout<<endl<<"input an integer:";
	cin>>inputValue;
	test.searchANode(inputValue)==true?(cout<<"Node "<<inputValue<<" has been found"<<endl):(cout<<"Node "<<inputValue<<" is not in the tree"<<endl);
	
	return 0;
}

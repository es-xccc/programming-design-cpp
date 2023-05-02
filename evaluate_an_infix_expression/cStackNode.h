// Exercise 20.12 Solution: StackNode.h
// Definition of class template StackNode.
#ifndef cSTACKNODE_H
#define cSTACKNODE_H
//E94106216

class cStack; // forward declaration

class cStackNode 
{
   friend class cStack;
public:
   cStackNode( const char & = 0, cStackNode * = 0 );
   char getData() const;

   // set point to next stack node
   void setNextPtr( cStackNode *nPtr ) 
   { 
      nextPtr = nPtr; 
   } // end function setNextPtr
   
   // get point to next stack node
   cStackNode *getNextPtr() const 
   { 
      return nextPtr; 
   } // end function getNextPtr

private:
   char data;
   cStackNode *nextPtr;
}; // end class StackNode

// member-function definitions for class StackNode
// constructor
cStackNode::cStackNode( const char &d, cStackNode *ptr )
{
   data = d;
   nextPtr = ptr;
} // end constructor

// get data
char cStackNode::getData() const 
{ 
   return data; 
} // end function getData

#endif

/**************************************************************************
 * (C) Copyright 1992-2011 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/

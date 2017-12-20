/*
 * CSCI-2421: Data Structures and Program Design
 * Last Updated 02/07/2016
 * Homework 5 
 (node.h)
 */
#ifndef NODE_H
#define NODE_H

#include <cstdlib>  //needed for NULL
#include <string>
#include <fstream>
using namespace std;
namespace HW4 {
	
class node {
public:
	// Node data type
	typedef string dataType;

    //Default Constructor
    node();
    
    //Constructor
    node(dataType &newData);
    
    //Accessor Functions
    dataType getData();
   const node * getNextPtr()const;
    node * getNextPtr();
    
	// Mutator Functions
    void setData(node::dataType &newData);
    void setNextPtr(node* newNextPtr);

    

private:
    dataType data;
    node* nextPtr;
};  //End of Class

/****************************************
 Non-member functions
 The Textbook chooses to make these functions instead of member functions.  This is a style call. I would have probably made them member functions, but kept them this way to match your book code.  Note that since they are not member functions, you will need to use member accessor and mutator functions in your code!
*****************************************/
    /*Returns value of the length of the list*/
    int listLength(const node* headPtr);
    
    /*Inserts a single node at the front of a list*/
    void insertAtFront(node*& headPtr,node::dataType &newData);
    
    /*Inserts a single node just after the pointer sent in the parameter */
    void insertAfterNode(node* previous_ptr,node::dataType &newData);
    
    /*Removes a node at the front of the list */
    void removeAtFront(node*& head_ptr);
    
    /*Remove a single node just after the pointer sent in the parameter*/
    void removeAtNode(node* previous_ptr);
    
    /*Displays to the stream listed, an entire list from the pointer location to the end of the list*/
    void printList(ofstream &stream, node* headPtr);
    
}  //End of Namespace

#endif
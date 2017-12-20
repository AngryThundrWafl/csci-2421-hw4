#include <iostream>
#include "node.h"




namespace HW4
{
    //default constructor for node class
    node::node()
    {
        data = "";         //initializes data to type dataType
        nextPtr = NULL;                      //the initial ptr will equal NULL
    }

    //constructor for node class
    node::node(node::dataType &newData)
    {
       data = newData;
        nextPtr = NULL;

    }

    //function will get data from list
    node::dataType node::getData()
    {
        return data;                                //returns the value of data
    }
    //get nextPtr
    node* node::getNextPtr()
    {
        return nextPtr;
    }
    //gets the next pointer in the list
    const node* node::getNextPtr() const
    {
        return nextPtr;                             //returns the value of nextPtr
    }

    //sets data
    void node::setData(node::dataType &newData)
    {
            data = newData;                         //data recieves the value of newdata
    }

    //sets  next pointer in linked list
    void node::setNextPtr(node *newNextPtr)
    {
        nextPtr = newNextPtr;                       //next poiinter is points to the same thing as newNextPtr
    }

    //returns the length of the link list
   int listLength(const node *headPtr)
    {
        const node *cursor;                         //will point to each link field in the link list
        size_t answer = 0;                          //this variable will hold the amount of nodes in the list

        //for loop that will iterate through each pointer until null is found
        for(cursor = headPtr; cursor != NULL; cursor = cursor->getNextPtr())
        {
            ++answer;                               //if the loop iterates we will increment answer until a null is found
        }

        return answer;                              //returns the value of answer(amount of nodes in list)
    }

    //inserts a node into the front of the link list
    void insertAtFront(node *&headPtr, node::dataType &newData)
    {
        headPtr = new node(newData);
    }


    void insertAfterNode(node *previous_ptr, node::dataType &newData)
    {
        node* insertPtr;
        insertPtr = new node;
        insertPtr->node::setData(newData);
        insertPtr->setNextPtr(previous_ptr->getNextPtr());
        previous_ptr->node::setNextPtr(insertPtr);
    }

    //removes node from front of list
    void removeAtFront(node *&head_ptr)
    {
        node* removePtr;
        removePtr = head_ptr;
        head_ptr = head_ptr->node::getNextPtr();
        delete removePtr;
    }

    //removes at a certain node in list
    void removeAtNode(node *previous_ptr)
    {
        node *removePtr;
        removePtr = previous_ptr->node::getNextPtr();
        previous_ptr->node::setNextPtr(removePtr->node::getNextPtr());
        previous_ptr->node::getNextPtr();
        delete removePtr;
    }

    void printList(ofstream &stream, node *headPtr)
    {
        while(headPtr->getNextPtr()!= NULL)
        {
            std::cout << headPtr->getData() << endl;
            stream << headPtr->getData()<< endl;
            headPtr = headPtr->getNextPtr();
        }

    }

}

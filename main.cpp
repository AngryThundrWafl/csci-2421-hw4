#include "node.h"
#include <iostream>

using namespace std;

int main()
{
    HW4:: node* headPtr = NULL;                          //empty list


    ifstream inputData;                                  //ifstream object called input data
    inputData.open("input.txt");                         //opens input.dat
    ofstream outputData;
    outputData.open("aoutput.txt");

    if(inputData.fail())
    {
        cout << "Sorry could not open file terminating program" << endl;
        return 0;
    }
    if(outputData.fail())
    {
        cout << "sorry could not open file termination program" << endl;
        return 0;
    }


    //gets input from inputData
    std::string string1;                                     //string object called string1

    while(!inputData.eof())
    {

        HW4::node *temp1 = headPtr;                     // create a temporary node
        getline(inputData, string1);                    //gets first line of data

      if(headPtr != NULL)
      {
          for(int i =1; i < HW4::listLength(headPtr);i++)
          {
              temp1 = temp1->getNextPtr();
          }
          HW4::insertAfterNode(temp1,string1);

      }
        else
          HW4::insertAtFront(headPtr,string1);
    }
    HW4::removeAtFront(headPtr);

    HW4::node* temp2 = headPtr;
    cout << "temp was made" << endl;

    if(headPtr != NULL)
    {

        for(int i =1; i < HW4::listLength(headPtr)-1;++i)
        {
            temp2 = temp2->getNextPtr();
        }
        HW4::removeAtFront(temp2);
    }
    else
        HW4::removeAtNode(headPtr);
    cout << "remove at node was called" << endl;


    HW4::printList(outputData,headPtr);                             //calls printlist fucntion
    cout << "printlist was called" << endl;







    delete headPtr;                                     //deletes headPtr

    //closes stream objects
    outputData.close();
    inputData.close();


    return 0;
}
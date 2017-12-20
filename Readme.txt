*******************************************************
*  Name      :  Brian Pina
*  Student ID:  104790387
*  Class     :  CSC 2421           
*  HW#       :  4
*  Due Date  :  FEb. 16, 2016
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

This program is an example of the use of a Link list data structure, In this program we have a class called node necessary to create a linked list, node will have a data field and pointers to the next node.
node.h has the class node.h and also has non-member functions that will insert, remove, add insert at head and remove at head, to add info and remove info in the linked list
node.cpp holds the implementation of node.h and main.cpp is the driver file that will open the a fstream object where we wil write the linked list to the stream object.


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls sub-functions, opens a stream object and has the headPtr of class node, this driver file will pass headPtr and a TempPtr to create alinked list

Name:  node.h
   Contains the definition for the class node.h.

Name: node.cpp
   Defines and implements the my_string class for implementing a strings.
   This class provides routines to construct and get the input from a heaPtr to create a linked list and place data from filestream object into each node of the linked list, as
   well as non-member functions that will insert, add , remove certain nodes or pointers in the linked list.

   
   
*******************************************************
*  Circumstances of programs
*******************************************************

   This program compiles but runs into a error after node* temp 2 was made
   This program was developed and run on Clion using minGw


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [PinaHW4]

   Now you should see a directory named homework with the files:
        main.cpp
        node.h
	    node.cpp
	    readme.txt
	    makefile

2. Build the program.

    Change to the directory that contains the file by:
    % cd [PinaHW4]

    Compile the program by:
    % make

3. Run the program by:
   % ./[node]

4. Delete the obj files, executables, and core dump by
   %./make clean

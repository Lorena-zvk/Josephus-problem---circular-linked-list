Program for the implementation of the Josephus Problem using circular linked lists
Main file is "main_program.cpp"
Definition of class Node and class List are in the file "list.h"
The functions of these classes are defined in "list.cpp"
***Class Node***
-has a variable of type int, data and onoe of type Node* next-
-has the following functions-
* void setNext(Node*) and Node* getNext() to change/retrieve the private data of the variable next
* void setData(int) and int getData() to change/retrieve the private information of the data variable
* constructors
***Class List***
-has only one variable head, of type Node that points to the first element of the list*-
-has the following functions-
* constructor List(int) creates the new Node head and sets the value of its data variable to the int
parameter received
* void setHead(Node*) makes the pointer head of the current list point to the one received
* Node* getHead() returns a pointer to the head of the list
* Node* getLast() returns a pointer to the last element of the list
* Node* getK(int) returns a pointer to the element found at distance int (int k) received
* void addNode(int) adds a new node at the end of the list, with the given data
* void removeNode(int) deletes node at position k in regards to the head of the list and moves the head
to point at the following element
* void printAll() prints all the elements currently in the list, starting at the head
***main_program.cpp***
Reads 3 variables:
1. The number of elements in the list (to be memorized starting from 1)
2. The position at which the game should start
3. The number of positions to be skipped
Functions:
1. void make_list(List* , int, int)
-first int is for the number of elements, second is for the starting position
-adds every element to the list and then moves the head pointer to the speficief location
2. void delete_nodes(List*, int, int)
- deletes one by one the elements until only one is left, the safe position for the particular
set of data
Some datasets and examples:


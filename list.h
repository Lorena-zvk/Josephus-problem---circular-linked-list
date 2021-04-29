#ifndef ALL_H_INCLUDED
#define ALL_H_INCLUDED

class Node
{
private:

    int data;
    Node* next;

public:

    Node(); //constructor
    Node(const Node&);
    void setNext(Node*);
    void setData(int);
    int getData();
    Node* getNext();
};

class List
{
private:

    Node *head;

public:

    List(int);//constructor
    ~List();//deconstructor
    Node* getHead();
    Node* getLast();
    Node* getK(int);
    void setHead(Node*);
    void addNode(int);
    void removeNode(int);
    void printAll();



};


#endif // ALL_H_INCLUDED

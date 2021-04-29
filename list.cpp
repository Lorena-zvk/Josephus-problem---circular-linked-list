#include <iostream>
#include "list.h"
using namespace std;
Node::Node()
{
   this->next = NULL;
}

Node::Node(const Node& p)
{
    this->data = p.data;
    this->next = p.next;
}

void Node::setNext(Node* p)
{
    this->next = p;
}

void Node::setData(int info)
{
    this->data = info;
}

int Node::getData()
{
    return this->data;
}

Node* Node::getNext()
{
    return this->next;
}
List::List(int d)
{
    head = new Node;
    head->setNext(head);
    head->setData(d);

}
Node* List::getLast()
{
    Node *p = new Node();
    p = head;
    while(p->getNext()!= head)
        p = p->getNext();
    return p;
}
void List::addNode(int d)
{
    Node *p = new Node();
    Node *q = this->getLast();
    q->setNext(p);
    p->setNext(head);
    p->setData(d);
}
void List::removeNode(int k)
{
    if (k!=1)
    {
    Node *q = this->getK(k-1);
    Node *p = q->getNext();
    q->setNext(p->getNext());
    this->setHead(q->getNext());
    delete p;
    }
    else
    {
    Node *q = this->getLast();
    Node *p = this->getHead();
    q->setNext(p->getNext());
    this->setHead(q->getNext());
    delete p;
    }

}
Node* List::getK(int k)
{
    Node *p = new Node();
    p = head;
    for (int i=1; i<k; i++)
        p = p->getNext();
    return p;
}
void List::printAll()
{
    Node *p = head;
    do{

        cout<<p->getData()<<' ';
        p = p->getNext();
    }while(p!=head);

    cout<<'\n';
}
Node* List::getHead()
{
    return this->head;
}
void List::setHead(Node* p)
{
    head = p;
}

List::~List()
{
    delete this->getHead();
}


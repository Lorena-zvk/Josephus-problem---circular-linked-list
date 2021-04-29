#include <iostream>
#include <stdlib.h>
#include "list.h"
#include "list.cpp"

using namespace std;


void make_list(List* lista, int n, int i)
{
    for (int i=2; i<=n; i++)
        lista->addNode(i);
    lista->setHead(lista->getK(i));
}
void delete_nodes(List *lista, int k, int n)
{
    for (int j=0; j<n-1; j++)
    {
        cout<<"is eliminated "<<(lista->getK(k))->getData()<<'\n';
        lista->removeNode(k);
    }

}

int main()
{
int n, k, i;
cout<<"Type in the total number."<<'\n';
cin>>n;
cout<<"Type in the starting position."<<'\n';
cin>>i;
cout<<"Type in the number of positions to be skipped."<<'\n';
cin>>k;
List *lista = new List(1);
make_list(lista, n, i);
delete_nodes(lista, k, n);
cout<<"The safe position is: ";
lista->printAll();
lista->~List();




}

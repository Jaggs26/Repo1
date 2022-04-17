//BT20CSE071

#include <iostream>
using namespace std;
#include "item.h"
#include "Stack.h"
#include <cstring>
item::item()
{
    //default constructor
	item_id=0;             //Initialising values
	Quantity=0;
	strcpy(item_Label,"");
}

item::item(const item &i)
{
	item_id=i.item_id;
	Quantity=i.Quantity;
    strcpy(item_Label,i.item_Label); 
}

item::item(int Itemid,int quantity,char* A)
{
	setId(Itemid);
	setQuantity(quantity);
	setLabel(A);
}

void item::setId(int Itemid)
{
	item_id=Itemid;
}
void item::setQuantity(int quantity)
{
	Quantity= quantity;
}
void item::setLabel(char *A)
{
	strcpy(item_Label,A);
}
int item::getId()
{
	return item_id;
}
int item::getQuantity()
{
	return Quantity;
}
char* item::getLabel()
{
	return item_Label;
}
item::~item()
{
    //Item Destructor
}

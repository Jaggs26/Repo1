//BT20CSE071

#include<iostream>
using namespace std;
#include "item.h"
#include "Stack.h"
#include<string>

stack :: stack()
{
    cout << "Stack created successfully."<<endl;
    top = -1;                               //initialize top and
    size=10;                                //size
    if (is_empty()==1)
        cout << "Stack is empty."<<endl;
}

stack :: stack(const stack &s)
{
    //copy constructor
}
    
    
void stack :: push(item itm1) 
{
    if (top == size - 1)
        cout << "Error stack overflow!\n";
    else
    {
        top++;
        ItemArray[top] = itm1;
    }
}
    
int stack :: is_empty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

item stack :: pop()
{    
    if (is_empty() == 0)
    {
        item temp=ItemArray[top];
        top--;
        return temp;
    }    
}



void stack :: display()
{
    if (is_empty() == 1)
        cout << "Stack is empty.";
    else
    {
        cout<<"\nDisplay: "<<endl;
        for (int i = top; i >= 0; i--)
            cout<<ItemArray[i].getId()<<" "<<ItemArray[i].getLabel()<<" "<<ItemArray[i].getQuantity()<<endl;
    }
}





stack :: ~stack()
{
    cout << "Stack Destructed successfully\n";
}




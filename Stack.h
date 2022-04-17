//BT20CSE071


#ifndef STACK_H
#define STACK_H
#include "item.h"

class stack 
{
  private:
    item ItemArray[10];               //ARRAY OF INTEGERS
    int size;
    int top;
  public:   
    stack();                          //default constructor
    stack(const stack &s);            //copy constructor
    void push(item i);                //Push Function
    int is_empty();                   //Empty function
    item pop();                       //pop Function
    void display();                   //Display Function
    
    
    
    ~stack();                         //Destructor
};

#endif

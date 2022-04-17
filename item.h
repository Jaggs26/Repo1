//BT20CSE071
#ifndef ITEM_H
#define ITEM_H

class item
{
  private:
    int item_id, Quantity;
    char item_Label[10];

  public:
    item();// Default constructor                                      
    item(const item &i);                      //copy constructor
    item(int Itemid,int quantity,char* A);   //Parametrized constructor
	  void setId(int Itemid);               //setters
	  void setQuantity(int quantity);
	  void setLabel(char* A);
	  int getId();                          //getters
	  int getQuantity();
	  char* getLabel();
    ~item();                              //destructor
};

#endif

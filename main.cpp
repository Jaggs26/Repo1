//BT20CSE071

#include <iostream>
using namespace std;
#include "item.h"
#include "Stack.h"


int main()
{
    int Itemid,quantity;
    char A[10];    
    stack s1;
    
    char ch;

    do {
        cout << "\nPress.. \n"
            << "1 to push\n"
            << "2 to pop\n"
            << "3 to display\n"
            << "4 to end\n\n";
        cin >> ch;
        
        if(ch=='1')
        {    
            cout<<"Enter ItemID, Quantity and ItemLabel: "<<endl;
            cin>>Itemid>>quantity>>A;
            item itm(Itemid,quantity,A);
            s1.push(itm); 
        }
        
        else if(ch=='2')
            s1.pop();
            
        else if(ch=='3')
            s1.display();
            
        
            
        else if(ch=='4')
            cout << "Exiting...\n\n";
            exit(0);
            
        else
            cout << "Invalid option!\n";
            
        
    } while (ch != '6');

    return 0;
}
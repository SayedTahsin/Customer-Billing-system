#include<bits/stdc++.h>
#include <cstring>
#include "windows.h"
using namespace std;
#include "intro.h"
#include "class.h"
#include "menu.h"
#include "add.h"
#include "search.h"
#include "bill.h"
#include "exit.h"
int main()
{
    system("color F4");
    int n;
    intro();
    while(1)
    {
        system("cls");
        menu();
        cin>>n;
        if(n==1)
        {
            add_account();
        }
        else if(n==2)
        {
            search_acc();
        }
        else if(n==3)
        {
            bill();
        }
        if(n==4)
        {
            system("cls");
            cout<<"\n\n\n\n";
            cout<<"     You want to quit?\n";
            char c;
            cout<<"     Y: Exit  N:  cancel\n";
            cout<<"     Choice: ";
            cin>>c;
            if(c=='y' || c=='Y')
            {
                atexit(p_exit);
                exit(0);
            }
        }
    }
    return 0;
}

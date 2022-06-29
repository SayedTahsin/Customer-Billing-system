#include<bits/stdc++.h>
using namespace std;
class account
{
    int acc_no;
    char name[50],mobile[15],address[100];
    double balance;
public:
    void add()
    {
        cout<<"         Account no: ";
        cin>>acc_no;
        cin.ignore();

        cout<<"         Name      : ";
        cin.getline(name,50);

        cout<<"         Mobile no : ";
        cin.getline(mobile,15);

        cout<<"         Address   : ";
        cin.getline(address,100);

        cout<<"         Balance   : ";
        cin>>balance;

        cin.ignore();
    }
    int retAcc()
    {
        return acc_no;
    }
    void show()
    {
        cout<<"     Account no: "<<acc_no<<endl;
        cout<<"     Name      : "<<name<<endl;
        cout<<"     Mobile no : "<<mobile<<endl;
        cout<<"     Address   : "<<address<<endl;
        cout<<"     Balance   : "<<balance<<" TK"<<endl;
        cout<<"     press Enter to continue...";
        cin.ignore();
        cin.get();
    }
    double Showbal(){
        return balance;
    }
    void getname(){
        cout<<"\n\tCustomer Name : "<<name<<endl;
    }

};


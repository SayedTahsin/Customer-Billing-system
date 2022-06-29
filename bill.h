void bill()
{
    time_t t=time(NULL);
    struct tm *a =localtime(&t);
    int day= a->tm_mday;
    int month=a->tm_mon;
    int year=a->tm_year+1900;
    int sec=a->tm_sec;
    int mint=a->tm_min;
    int hour=a->tm_hour;
    system("cls");

    int arr[100]= {0};
    string item[100]= {"","GTX 1650s","RAM 8GB  ","intel i5 ","PSU 550W ","Coller   ","HDD 1TB  ","SSD 240GB "};
    double price[100]= {0,18000,3700,17000,2900,500,3500,4200};
    int stock[100]= {0,1,4,2,6,2,9,1};

    int c,k,count=0;
    double x;
    account ac;
    char *name;

    cout<<"\n\tEnter account no.: ";
    cin>>c;

    ifstream file;
    file.open("account_info.txt",ios::binary|ios::app);

    while(file.read(reinterpret_cast<char*>(&ac),sizeof(account)))
    {
        if(c==ac.retAcc())
        {
            x=ac.Showbal();

            break;
        }
    }

    system("cls");

    double temp=0;
    while(1)
    {
        system("cls");
        cout<<"\n\tItem List"<<endl;
        cout<<"\t"<<"Item"<<"\t\t"<<"Stock "<<"\t"<<"Price"<<endl;
        for(int i=1; i<=7; i++)
        {
            cout<<"\t"<<i<<". "<<item[i]<<"\t"<<stock[i]<<"\t"<<price[i]<<" tk"<<endl;
        }
        cout<<"\n\tYour Balance: "<<x-temp<<" tk"<<endl;

        cout<<"\n\tAdd Item(Enter 0 to checkout)"<<endl;
        cout<<"\n\tItem Number: ";
        cin>>k;

        if(k==0)
            break;
        if(stock[k]!=0)
        {
            temp+=price[k];
            if(x-temp>=0)
            {
                stock[k]--;
                arr[k]++;
                count++;
            }
            else
            {
                system("cls");
                cout<<"\n\n\n\n\n\n               !!!INSUFFICIANT BALANCE!!!"<<endl;
                temp-=price[k];
                cin.ignore();
                cin.get();
            }
        }
        else
        {
            cout<<"\n     SORRY!!! This item is out of Stock."<<endl;
            cin.ignore();
            cin.get();
        }
    }
    system("cls");
    if(count>0)
    {

        double amt=0;
        cout<<"\t\t\t\t\t\t\DATE: "<<day<<"/"<<month<<"/"<<year<<endl;
        cout<<"\t\t\t\t\t\t\TIME: "<<hour<<":"<<mint<<":"<<sec<<endl;
        cout<<"\n\tAccount no.   : "<<c;
        ac.getname();
        cout<<"\n\tItem\t\t   Quantity\t\tPrice"<<endl;
        for(int j=1; j<=7; j++)
        {
            if(arr[j]!=0)
            {
                cout<<"\t"<<item[j]<<"\t\t"<<arr[j]<<"\t\t"<<price[j]*arr[j]<<" TK"<<endl;
                amt+=price[j]*arr[j];
            }
        }
        cout<<"\n\t\t\t\t\t\tTotal= "<<amt<<" TK"<<endl;
        cout<<"\n\t\t\t\t\t\tNew Balance= "<<x-amt<<"TK"<<endl;
    }
    else
    {
        cout<<"\n\n\t\tThanks for visiting\n\tHope you will buy Next time...";
    }
    file.close();
    cin.get();
    cin.get();
}



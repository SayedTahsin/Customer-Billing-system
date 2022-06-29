void search_acc()
{
    system("cls");
    account ac;
    int i,flag=1;
    cout<<"     Enter Account no. : ";
    cin>>i;
    ifstream file;
    file.open("account_info.txt",ios::binary|ios::app);
    while(file.read(reinterpret_cast<char*>(&ac),sizeof(account)))
    {
        if(i==ac.retAcc())
        {
            flag=0;
            ac.show();
            break;
        }
    }
    if(flag){
            system("cls");
        cout<<"\n\tNo such Account found\n";
        cout<<"\n\tCreate Account First\n";
        cin.ignore();
        cin.get();
        }
    file.close();
}

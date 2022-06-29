void add_account()
{
    system("cls");
    account ac;
    ofstream file;
    file.open("account_info.txt",ios::binary|ios::app);
    ac.add();
    file.write(reinterpret_cast<char*>(&ac),sizeof(account));
    file.close();
    cout<<"     Infomation Updated...";
    cin.get();
}


//Assignment 3.3
#include<iostream>
#include<string>
using namespace std;
class Account{
    private:
    int account_no;
    string account_holder_name;
    int balance;
    public:
    void store_acc();
    void retrive_acc();
};
int main(){
    Account customer1;
    Account customer2;
    Account customer3;
    customer1.store_acc();
    customer2.store_acc();
    customer3.store_acc();
    customer1.retrive_acc();
    customer2.retrive_acc();
    customer3.retrive_acc();
    return 0;
}
void Account::store_acc(){
    cout<<"Enter you full name.\t";
    getline(cin,account_holder_name);
    cout<<"Enter your account number\t";
    cin>>account_no;
    cout<<"enter your balance\t";
    cin>>balance;
    cin.ignore();
}
void Account::retrive_acc(){
    cout<<endl<<":::Your Bank Statement:::"<<endl;
    cout<<"Name: "<<account_holder_name<<endl<<"Account no: "<<account_no<<endl<<"Balance: "<<balance<<endl;

}
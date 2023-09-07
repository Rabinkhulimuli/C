//lab assignment 5
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class BankAccount{
    private:
    string name;
    int accountno;
    int balance=0,amount;
    public:
    static int depot,withdr;
    BankAccount();
    void deposit();
    void withdraw();
    void accinfo();
    static void total_ope();
};
int main(){
    int temp,x=0;
    BankAccount user,user2,user3;
    while(x==0){
        cout<<"Type corresponding number for task"<<endl;
        cout<<"1.Deposit"<<endl<<"2.Withdraw"<<endl<<"3.Display Balance"<<endl<<"4.Display Total Operations"<<endl<<"5.Exit"<<endl;
        cin>>temp;
        switch (temp){
            case 1:
            user.deposit();
            break;
            case 2:
            user.withdraw();
            break;
            case 3:
            user.accinfo();
            break;
            case 4:
            user.total_ope();
            break;
            case 5:
            x=10;
            break;
            default:
            cout<<"invalid input ";

        }
        cout<<"press any key to continue"<<endl;
        getch();
    }
    return 0;
}
int BankAccount::depot;
int BankAccount::withdr;
BankAccount::BankAccount(){
    cout<<"Enter your fullname"<<endl;
    getline(cin,name);
    cout<<"Account number"<<endl;
    cin>>accountno;
    cin.ignore();
}
void BankAccount::deposit(){
    cout<<"Enter your desired amount to deposit"<<endl;
    cin>>amount;
    balance +=amount;
    cout<<"You deposited "<<amount<<endl;
    cin.ignore();
    depot++;
}
void BankAccount::withdraw(){
    cout<<"Sellect amount"<<endl;
    cin>>amount;
    balance-=amount;
    cout <<"You withdrawn "<<amount<<endl;
    cin.ignore();
    withdr++;
}
void BankAccount::accinfo(){
    cout<<"Account no : "<<accountno<<endl <<"Name :"<<name<<endl<<"Balance :"<<balance<<endl;
}
void BankAccount::total_ope(){
    cout<<"You deposited "<<depot<<" times"<<endl<<"You withdrew "<<withdr<<" times"<<endl;
}

//assignment 3.1
#include <iostream>
using namespace std;
struct employee{
    char ename[20];
    char duration[20];
    int workinghr;
    char address[20];
};
struct pharmacomp{
char name[20];
int date;
char location[20];
char type[10]="branch";
struct employee pr[5];
}pc[3];
class Hcompany{
    public:
    void getter();
    void setter();
};
int main(){
    Hcompany h;
    h.setter();
    h.getter();
    
    return 0;
}
void Hcompany::setter(){
    int i,j;
    for(i=0;i<1;i++){
        cout<<"enter the name of the company and "<<endl;
        cin>>pc[i].name;
        cin.ignore();
        cout<<"location"<<endl;
        cin>>pc[i].location;
        cin.ignore();
        cout<<"established year"<<endl;
        cin>>pc[i].date;
        cin.ignore();
        cout<<"what kind of company is it write \"head\" or \"branch\""<<endl;
        cin>>pc[i].type;
        cin.ignore();
        for(j=0;j<1;j++){
            cout<<endl<<"enter the name of the employee and "<<endl;
            cin>>pc[i].pr[j].ename;
            cin.ignore();
            cout<<"address\t";
            cin>>pc[i].pr[j].address;
            cin.ignore();
            cout<<endl<<"shift day or night \t";
            cin>>pc[i].pr[j].duration;
            cin.ignore();
            cout<<endl<<"working hour in number\t";
            cin>>pc[i].pr[j].workinghr;
            cin.ignore();
        }
        cin.ignore();
    }
    cout<<"data entry completed."<<endl;
}
void Hcompany::getter(){
    int i,j;
    for(i=0;i<1;i++){
        cout<<"department "<<pc[i].type<<endl;
        for(j=0;j<1;j++){
            cout<<"name "<<pc[i].pr[j].ename<<endl<<"address "<<pc[i].pr[j].address<<endl<<"working shift "<<pc[i].pr[j].duration<<endl<<"working hour "<<pc[i].pr[j].workinghr<<endl;

        }
    }
    cout<<"data printed succesfully."<<endl;
    
}
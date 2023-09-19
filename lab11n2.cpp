//lab 11.2
#include <iostream>
#include<string>
using namespace std;
class fruits{
    private:
    string name;
    int load;
    const int max_load=1000;
    public:
    bool overload=false;
    void setter();
    void transfer();
};
int main(){
    fruits ob;
    try{
        ob.setter();
        ob.transfer();
        if(ob.overload==true){
            throw (ob);
        }
        else
        cout<<"your fruits will be delivered after 24 hour from now.";
    }
    catch(fruits){
        cout<<"the task cannot be executed due to overload of fruits"<<endl<<"weight should be less or equal to 1000kg"<<endl;
    }
   return 0;
}
void fruits::setter(){
      cout<<"enter the name of fruits"<<endl;
    getline(cin,name);
}
void fruits::transfer(){
    cout<<"enter the maximum weight of "<<name<<" to transfer "<<endl;
    cin>>load;
    overload=load>max_load? true:false;
}
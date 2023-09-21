//lab 12.1
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
class notebook{
    private:
    string sentence;
    string name;
    public:
    void setter();
    void startnote();
    void getter();
};
int main(){
   notebook ob;
   ob.setter();
    ob.startnote();
   ob.getter();
    return 0;
}
void notebook::setter(){
    cout<<"enter the headline of the note."<<endl;
    getline(cin,name);
    cin.ignore();
}
void notebook::startnote(){
    ofstream ofile;
    ofile.open("datasummery.txt",ios::app);
     cout<<"enter one sentence then enter to complete sentence"<<endl;
        getline(cin,sentence);
        ofile<<sentence;
        ofile.close();
}
void notebook::getter(){
    char ch[5];
    cout<<"title : "<<name<<endl;
    ifstream ifile("datasummery.txt");
    streampos current,end;
    current=ifile.tellg();
    ifile.seekg(0,ios::end);
    end=ifile.tellg();
    ifile.seekg(0,ios::beg);
    while(current<end){
        current=ifile.tellg();
        ifile.read((char*) &ch,5);
        ifile.seekg(5,ios::cur);
        cout<<ch<<"\t";
    }
    ifile.close();
}
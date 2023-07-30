#include<iostream>
using namespace std;
void max(int);
void (*pr)(int);
int main(){
    int n;
    pr=&max;
    cout<<"enter the size of array."<<endl;
    cin>>n;
    pr(n);
    return 0;
}
void max(int n){
    int arr[n],(*temp),a=0;
    temp=&a;
    for(int i=0;i<n;i++){
        cout<<"enter the "<<i+1<<" element of array"<<endl;
        cin>>arr[i];
        cin.ignore();
    }
    for(int i=0;i<n;i++){
        if((*temp)<*(arr+i)){
            *(temp)=*(arr+i);
        }
    }
    cout<<"maximum num is "<<(*temp);
}
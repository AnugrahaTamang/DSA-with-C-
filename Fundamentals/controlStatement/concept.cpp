#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age<13){
        cout<<"you are child";
    }
    else if(age<20){
        cout<<"you are teenager";
    }
    else if(age<60){
        cout<<"You are young man";
    }
    else{
        cout<<"you are old man";
    }
    return 0;
}
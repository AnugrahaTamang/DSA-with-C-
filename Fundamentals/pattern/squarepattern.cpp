#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<<j;
        }
        cout<<endl;
    }
    for(int i = 1; i<= n; i++){
        char ch = 'A';
        for(int j = 1; j<=n; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
   
   for(int i = 1; i<=n; i++){
    for(int j=1; j<=n; j++){
        cout<<j;
    }
    cout<<endl;
   }
   for(int i = 1; i<=n; i++){
    for(int j = 1; j<=i; j++){
        cout<<j;
    }
    cout<<endl;
   }
   
    return 0;
}
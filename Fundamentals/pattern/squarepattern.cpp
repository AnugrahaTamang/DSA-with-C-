#include<iostream>
using namespace std;
int main(){
      int n = 4;

      for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
      }
    
      for(int i = 0; i<n; i++){
          int a = 1;
        for(int j = 0; j<n; j++){
            cout<<a;
            a++;
        }
        cout<<endl;
      }

      for(int j =0; j<n; j++){
        char ch = 'A';
        for(int i = 0; i<n; i++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
      }

      int a = 1;
      for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
      }
      
      char ch = 'A';
       for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
       }

    return 0;
}
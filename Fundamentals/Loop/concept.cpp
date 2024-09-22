#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for (int i = 0; i<n; i++){
        cout<<i<<endl;
    }
    int j = 0;
    while (j < n)
    {
        cout<<"Hello sathi"<<endl;
        j++;
    }
    int k = 5;
    do{
        cout<<"Hello Nepal"<<endl;
        k++;
    }
    while (k>12);

    //Nested loop
    for (int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
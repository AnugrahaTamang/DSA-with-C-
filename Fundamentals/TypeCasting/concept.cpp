#include <iostream>
using namespace std;
int main(){
    int a = 21;
    cout<<a<<endl;
    cout<<sizeof(a)<<endl; //int 4 byte
    float ff = 12.22;
    cout<<ff<<endl;
    int ab = ff;
    cout<<ab<<endl;
    cout<<(5/2)<<endl;  //output is 2
    cout<<(5/(float)2)<<endl; //output is 2.5
    return 0;
}
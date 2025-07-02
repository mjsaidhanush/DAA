#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter first number:\n";
    cin >>num1;
    cout <<"Enter second number:\n";
    cin >>num2;
    if (num1>num2){
        cout<<"Maximum is:"<<num1<<endl;
    } else if (num2>num1){
        cout<<"Maximum is:"<<num2<<endl;
    } else {
    }
    return 0;
}

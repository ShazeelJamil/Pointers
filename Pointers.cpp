#include<iostream>
using namespace std;
int main(){
    int x=10;
    int* y=&x;
    // POINTERS
    // *******//  Here the sign "&" is use to show the addres of the Variable it is used with**********// 
    // pointers are also the data types which are used to show the address of the other variables
    // ""OR""
    // cout<< "The address of variable a is "<<y<<endl; 
    cout<< "The address of variable a is "<<&x<<endl;

    // Here the sign "*" is used to show the value which is stored at a variable or address with which it used 
     cout<<"The value at the address x is "<<*y<<endl;

    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int num, num1, num2;
    cout<< "Enter number here :";
    cin>> num;
    cout<< "Enter number is :"<<num<<endl;
    num1=num/60;
    num2=num%60;
    cout<< "Conversion into hour and mintue is : "<< num1<< " : "<<num2;
return 0;
}

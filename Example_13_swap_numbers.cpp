#include<iostream>
using namespace std;
int main(){
    int num1=25, num2=39, temp;
    cout<< "Input 1st number : "<<num1<<endl;
    cout<< "Input 2nd number : "<<num2<<endl;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<< "After swapping the 1st number is : "<<num1<<endl;
    cout<< "After swapping the 2nd number is : "<<num2<<endl;
return 0;
}

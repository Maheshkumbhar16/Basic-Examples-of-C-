#include <iostream>
using namespace std;
int main(){
    double num;
    cout<< "Enter number here : ";
    cin>>num;
    cout<< "Number is : "<<num<<endl;
    if(num==0){
        cout<< "Number is zero";
    }
    else if(num>=0){
        cout<< "Number is positive";
    }
    else
        cout<< "Number is negative";
return 0;
}

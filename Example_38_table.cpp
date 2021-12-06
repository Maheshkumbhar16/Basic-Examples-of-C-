#include<iostream>
using namespace std;
int main(){
    int num,i,num1;
    cout<< "Enter number here : ";
    cin>>num;
    cout<< "Table of "<<num<< " is given below : "<<endl;
    for(i=1;i<=10;i++){
        num1=num*i;
        cout<< num1<<endl;
    }
return 0;
}

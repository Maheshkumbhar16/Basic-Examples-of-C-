#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<< "Enter years here : ";
    cin>>num1>>num2;
    cout<< "Year 1 : "<<num1<<endl;
    cout<< "Year 2 : "<<num2<<endl;
    bool year_condition=false;
    for(int i=num1; i<=num2; i++){
        if(i%4==0){
            year_condition=true;
            cout<< i<< " is leap year"<<endl;
        }
    }
    if (year_condition==false){
        cout<< "No leap year found";
    }
return 0;
}

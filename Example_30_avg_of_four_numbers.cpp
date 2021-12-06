#include <iostream>
using namespace std;
int main(){
   double num1, num2, num3, num4, totaloffour, avgoffour;
   cout<<"Enter first two number here : ";
   cin>>num1;
   cin>>num2;
   cout<< "First two numbers are : "<<num1 <<" " <<num2<<endl;
   cout << "Enter last two numbers here : ";
   cin>>num3;
   cin>>num4;
   cout<< "Last two numbers are : "<<num3<< " " <<num4<<endl;
   cout<< "Addition is : "<<num1+num2+num3+num4<<endl;
   cout<< "Average is : " <<(num1+num2+num3+num4)/4;
return 0;
}

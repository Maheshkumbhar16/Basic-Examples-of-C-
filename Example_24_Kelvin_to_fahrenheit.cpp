#include <iostream>
#include<cmath>
using namespace std;
int main(){
//formula is f=(k-273.15)*1.8+32
double k=300,f;
f=(k-273.15)*1.8+32;
cout << "Temp in Kelvin is : "<<k<<endl;
cout << "Temp in Fahrenheit is : "<<f;
return 0;
}

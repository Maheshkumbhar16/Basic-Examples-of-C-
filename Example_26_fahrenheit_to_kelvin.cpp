#include <iostream>
#include<cmath>
using namespace std;
int main(){
//formula is k= (((f-32)*5)/9)+273.15
double f = 80.33,k;
k = (((f-32)*5)/9)+ 273.15;
cout << "Temp in Fahrenheit is : "<<f<<endl;
cout << "Temp in Kelvin is : "<<k;
return 0;
}


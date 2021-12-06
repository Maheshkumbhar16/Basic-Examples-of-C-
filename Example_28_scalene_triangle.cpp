#include <iostream>
#include<cmath>
using namespace std;
int main(){
   int a=5, b=6, angle=6;
   const double pi=3.14;
   double areaoftri;
   areaoftri=(a*b*sin((pi/180)*angle))/2;
   cout<< "Lenght of side of Triangle : "<<a<<endl;
   cout<< "Lenght of another side of Triangle : "<<b<<endl;
   cout<< "Area of Triangle is : "<<areaoftri;
return 0;
}


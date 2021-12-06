#include <iostream>
#include <cmath>
using namespace std;
int main(){
int r=5;
double areaofcircle, circumferenceofcircle;
const double pi = 3.14;
areaofcircle = pi*r*r;
circumferenceofcircle = 2*pi*r;
cout << "Radius of circle : " << r <<endl;
cout << "Area of circle : "<<areaofcircle<<endl;
cout << "circumference of circle : "<<circumferenceofcircle;
return 0;
}

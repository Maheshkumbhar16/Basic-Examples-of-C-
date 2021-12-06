#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int r=6;
    const double pi=3.14;
    double volofsphere;
    cout<<"Radius of sphere is : "<<r<<endl;
    volofsphere=(4*pi*r*r*r)/3;
    cout<<"Volume of sphere is : "<<volofsphere;
return 0;
}

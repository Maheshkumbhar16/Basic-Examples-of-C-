#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //area=((no. of sides)*(length of one side)*apothem)/2;
    //apothem=((length of one side)/(2*(tan(180/no.of sides))));
    int side=7,length=6;
    double apothem;
    apothem = ((length)/(2*(atan(180/side))));
    cout<< "Number of sides of the polygon : "<<side<<endl;
    cout<< "Length of each side of the polygon : "<<length<<endl;
    cout<< "Area of the polygon : "<<((side)*(length)*apothem)/2;
return 0;
}

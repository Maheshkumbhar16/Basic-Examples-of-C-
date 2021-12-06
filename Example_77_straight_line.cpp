#include <iostream>
using namespace std;
int main(){
    int x[4]={};
    int y[4]={};
    cout<< "Enter the value of x-coordinate and y-coordinate here : ";
    cin>> x[0]>> y[0];
    cout<< "x is : "<< x[0]<< "\t"<< " y is : "<<y[0]<<endl;

    int i=1;
    while(i<=4){
        for(int i=1; i<4; i++){
                cout<< "Enter the value of x-coordinate and y-coordinate here : ";
                cin >> x[i]>> y[i];
                cout<< "x is : "<< x[i]<< "\t"<< " y is : "<<y[i]<<endl;
        }
        if( (x[1]-x[0])*(x[3]-x[2])+(y[3]-y[2])*(y[1]-y[0])==0){
            cout<< "AB and CD are orthogonal";
            }
        else{
            cout << "AB and CD are not orthogonal";
        }
        break;
    }
    return 0;
}

#include <iostream>
using namespace::std;

double sisabagi(int a, int b){
    return (a%b);
}
main(){
    double x,y;
    cout<<" BAGI ";
    cout<<"\n Angka pertama   : ";cin>>x;
    cout<<" Pembagi         : ";cin>>y;
    cout<<" Sisa pembagian  : "<<sisabagi(x,y);
}

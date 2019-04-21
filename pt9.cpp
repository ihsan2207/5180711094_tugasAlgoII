#include <iostream>
using namespace::std;

double pembagian(int a, int b){
    return (a%b);
}
main(){
    double x,y;
    cout<<" BAGI ";
    cout<<"\n Angka pertama   : ";cin>>x;
    cout<<" Pembagi         : ";cin>>y;
    cout<<" Sisa pembagian  : "<<pembagian(x,y);
}

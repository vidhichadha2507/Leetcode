#include<iostream>

using namespace std;

int  main(){
    int p,r,t;
    float si;

    cout<<"Enter Principel amount : ";
    cin>>p;

    cout<<"Enter Rate of Interest : ";
    cin>>r;

    cout<<"Enter Time (in years) : ";
    cin>>t;

    si=(float)(p*r*t)/100;

    cout<<"The simple interest is : "<<si<<endl;
    return 0;
}

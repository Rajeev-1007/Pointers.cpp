#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr;
    aptr=&a;
    cout<<"The address before incrementing integer: "<<&a<<endl;
    aptr++;
    cout<<"The address after incrementing integer: "<<aptr<<endl;

    float f=3.9;
    float *fptr;
    fptr=&f;
    cout<<"The address before incrementing float: "<<&f<<endl;
    fptr++;
    cout<<"The address after incrementing float: "<<fptr<<endl;

    double d=9.432645;
    double *dptr;
    dptr=&d;
    cout<<"The address before incrementing double: "<<&d<<endl;
    dptr++;
    cout<<"The address after incrementing double: "<<dptr<<endl;

    bool b=true;
    bool *bptr;
    bptr=&b;
    cout<<"The address before incrementing bool: "<<&b<<endl;
    bptr++;
    cout<<"The address after incrementing bool: "<<bptr<<endl;


}
#include<iostream>
using namespace std;
int main()
{
  int arr[]={80,30,350,490,590};
  
  int* ptr1=&arr[2];
  int* ptr2=&arr[4];
  ptrdiff_t diff= *ptr2 - *ptr1;
  
  cout<<"The Difference is: "<<diff<<endl;
  
  ptrdiff_t add= *ptr2 + *ptr1;
  cout<<"The addition is: "<<add<<endl;


}


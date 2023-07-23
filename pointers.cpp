#include<iostream>
using namespace std;

void update(int *p)
{
    *p = *p+1;
}
int main()
{
    /*int arr[5]={0,1,3,4,5};
    cout<<"address of first location"<<arr<<endl;
    cout<<"address of first location"<<&arr[0]<<endl;
    cout<<"value at first location "<<*(arr+2)<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(*arr)<<endl;
    cout<<sizeof(&arr)<<endl;
    int *p = arr;
    cout<<p<<endl;
    cout<<*p;
    */
   int i = 5;
   int *p = &i;
   cout<<*p<<endl;
   update(p);
   cout<<*p<<endl;
    return 0;
}
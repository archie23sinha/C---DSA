#include<iostream>
using namespace std;
int main()
{
    int arr[]= { 11,22,56,78,90,66,45};
    int n =sizeof(arr)/sizeof(arr[0]);
    
 
    int max =INT16_MIN;
    int min= INT16_MAX;

    //MAXIMUM ELEMENT IN ARRAY
    for(int i=0;i<n;i++)
    {
        if(max<arr[i]) 
        max=arr[i];
    }
    cout<<"The maximum element is : "<<max<<endl;


    //MINIMUN ELEMENT IN ARRAY
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
         min=arr[i];
    }
    cout<<"The minimum element is :"<<min;  
    
}
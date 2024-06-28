#include<iostream>
using namespace std;

void printArr(int arr[] , int size)
{
for(int i=0;i<size;i++)
{
cout<< arr[i]<<" ";
}
}
int main()
{ int arr[5]={1,3,5,7,8};
  printArr(arr,5);
}
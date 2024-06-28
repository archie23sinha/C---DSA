#include<iostream>
using namespace std;
int main()
{
  // int arr[5] = {2,3,4,5,6};
  // // cout<<arr[4];

  // for(int item :arr)  // FOREACH LOOP
  // {
  //   cout<<item<<" ";
  //}
  int arr[5];
  arr[2]=1;
  cout<<"Enter array elements : ";
  
  for(int i=0;i<5;i++)
  {
    cin>>arr[i];
    cout<<arr[i];
  }
}

#include<iostream>
using namespace std;


void Pair( int arr[] , int size,int target )
{
  
  
  for ( int i=0; i<size;i++ )
  {
    for(int j=i+1;j<size;j++)
    {
      if(arr[i]+arr[j]==target)
      {
        cout<<"Present : "<< arr[i] <<" " << arr[j] ;
}
    }
  }
}
int main()
{

int arr[6]={3,2,5,10,1,7};

Pair(arr,6,17);

}


//hw
 //max subarray



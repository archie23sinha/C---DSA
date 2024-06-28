#include<iostream>
using namespace std;

void linearSearch(int arr[],int size,int key)
{
int x;
  for(int i=0;i<size;i++)
  {
    if(arr[i]==key)
    {
      x = 1;
      cout<<"present at"<<i;
    }
   

  }
  if(x == 0)
    {
      cout<<"not";
    
      
    }
  
} 
int main()
{
  int arr[5]={1,4,7,9,0};
linearSearch(arr,5,7);

}
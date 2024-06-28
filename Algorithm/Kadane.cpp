// arr=[-2,-3,4,-2,-2,1,5,-3]

// Find the subarray which has the max sum

#include <iostream>
using namespace std;

int maxSubArr(int arr[], int size)

{
  int max = INT16_MIN;
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];

    if (sum > max)
    {
      max = sum;
    }
    else
    {
      if (sum < 0)
      {
        sum = 0;
      }
    }
  }
  return max;
}
int main()
{

  int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << maxSubArr(arr, size);
}

  
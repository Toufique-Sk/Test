// Question: Recover an array form another array which is created by mid elements.
// Example :   Given array :  3 2 4 1 5
//             Output:        1 2 3 4 5

// Example 2: Given array:    3 4 2 5 1 6
//            output:         1 2 3 4 5 6


#include<iostream>
using namespace std;

void printArray(int *arr, int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void recoverArray(int *input, int n)
{
  int output[n];
  int mid=n/2,left,right,i=0;
  if (n%2!=0)
  {
    output[mid]=input[i];
    left=mid-1;
    right=mid+1;
    i++;
  }
  else
  {
    left=mid-1;
    right=mid;
  }
  while(i<n)
  {
    output[left]=input[i];
    left--;
    i++;
    output[right]=input[i];
    right++;
    i++;
  }

  printArray(output,n);
}

int main()
{
  int *arr, n;
  cin>> n;
  for(int i=0;i<n;i++)
  {
    cin>> arr[i];
  }
  printArray(arr,n);
  recoverArray(arr,n);


}

//Time Complexity: O(n)

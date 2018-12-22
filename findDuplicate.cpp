#include<iostream>
using namespace std;
int duplicateNumber(int arr[], int size){
  int sum=0;
  for (int i=0;i<size;i++)
  {
    sum+=arr[i];
  }

  int expected_sum=((size-2)*(size-1))/2;

  return (sum-expected_sum);
}

int main()
{
  int size,*arr;
  cin>>size;
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }

  cout<<duplicateNumber(arr,size)<<endl;
  return 0;
}

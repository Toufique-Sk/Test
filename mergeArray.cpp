#include<iostream>
using namespace std;
void merge(int arr1[], int size1, int arr2[], int size2, int ans[])
{

  int i=0,j=0,k=0;

  while(i<size1 && j<size2)
  {
    if(arr1[i]<=arr2[j])
    {
      ans[k]=arr1[i];
      k++;
      i++;
    }
    if(arr2[j]<=arr1[i])
    {
      ans[k]=arr2[j];
      k++;
      j++;
    }
  }
  while(i<size1)
  {
    ans[k]=arr1[i];
    k++;
    i++;
  }
  while(j<size2)
  {
    ans[k]=arr2[j];
    k++;
    j++;
  }
}
int main()
{
  int *arr1,*arr2,*ans;
  int size1,size2;
  cin>>size1;
  cin>>size2;
  for(int i=0;i<size1;i++)
  {
    cin>>arr1[i];
  }
  for(int j=0;j<size2;j++)
  {
    cin>>arr2[j];
  }
  merge(arr1,size1,arr2,size2,ans);

  for(int i=0;i<size1+size2;i++)
  {
    cout<<ans[i]<<" ";
  }
  cout<<endl;

  return 0;
}

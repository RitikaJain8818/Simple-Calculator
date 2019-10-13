#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int l,int r,int x){
  while(l<=r){
    int m = l + (r-l)/2;
    if(arr[m] == x)
      return m;
    if(arr[m]>x)
       l = m+1;
    else
      r = m-1;
  }
  return -1;
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int search_x;
  cin>>search_x;
  cout<<binary_search(arr,0,n-1,search_x);

	return 0;
}

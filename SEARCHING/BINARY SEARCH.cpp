#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key){

  int start =0;
  int end=n-1;
  int mid; 
  while( start <= end){
    mid = start + (end-start)/2;
  if (arr[mid] ==key)
  {
    return mid;
  }  
  else if (arr[mid] >key){
    end= mid -1;
    
  }
    else{
      start= mid+1;
      
    }
    mid = start + (end-start)/2;
  }
  return -1;
  
}



int main()
{
  int n;
  cout<<"Enter the size of array"<<endl;
  cin>>n;
  cout<<"Enter the elements of array"<<endl;
  int arr[n];
  
  for(int i=0;i<n; i++){
    cin>>arr[i];
  }

  int key;
  cout<<"Enter the key to be searched"<<endl;
  cin>>key;
  int ans;
  ans= binarySearch( arr,  n, key);
  cout<<ans;
}

#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int key){
  for( int i =0; i<n; i++){
    if(arr[i]==key){
      return i;
    }
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
  ans= linear_search( arr,  n, key);
  cout<<ans;
}

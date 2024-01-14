#include <bits/stdc++.h> 
using namespace std;
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int temp = arr[0];
    for(auto it= arr.begin(); it != arr.end()-1; ++it){
        *(it )= *(it+1) ;
    }

    arr[n-1]=temp;

    return arr;
    
}

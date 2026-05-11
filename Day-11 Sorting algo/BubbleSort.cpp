//worst time complexity is O(n^2)
#include<iostream>
using namespace std;
 int main()
 {
    int n =5;
    int arr[5]={5,4,3,2,1};

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=n-2; j++)       //(n-2)= index number consider kiya h 
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }

        }
    }

    //display sorted array
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
 }

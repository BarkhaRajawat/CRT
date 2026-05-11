#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {5,4,3,2,1};
    int n=5;

    for(int i=0; i<=n-1; i++)
    {
        int min_ele_index = i;

        for(int j=i+1; j<=n-1; j++)
        {
            if(arr[j]<arr[min_ele_index])
            {
                min_ele_index = j;
            }
        }

        swap(arr[i],arr[min_ele_index]);
    }


//display
for(int i=0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
}
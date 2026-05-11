#include<iostream>
using namespace std;

//CHAR ARRAY
int main()
{
    // char arr[5];       
    // for(int i=0; i<=4; i++)
    // {
    //     cin>>arr[i];
    // }

    // for(int i=0; i<=4; i++)
    // {
    //     cout<<arr[i];
    // }

//STRING
//    string str = "abcd";
//     for(int i=0; i<=str.length(); i++)
//     {
//         cout<<str[i];
//     }


//STRING: set of characters with null at the end
    //    char arr[6] = {'a', 'b','c','d','e','\0'};   //  '\0': REPRESENT STRING  
    //    for(int i=0; i<=5; i++)
    //    {
    //     cout<<arr[i];
    //    }


    //SUM OF ARRAY ELEMENTS
       int arr[4] = {3,4,5,6};
        int sum  = 0;
       for(int i=0; i<=4; i++){
        //int sum  = 0;
        sum += arr[i];
        
        cout<<sum<<endl;
       }
       }




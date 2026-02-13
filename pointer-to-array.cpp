#include<iostream>
using namespace std;

int main()
{
    int arr[5]= {10, 20, 30};
    cout<<*arr<<endl;

    for(int i=0; i<3; i++)
    {
        int *ptr=arr;
        for(int i=0;i<3;i++)
        {
            cout<<*(arr+i)<<endl;
            ptr++;
           
        }

     }


  return 0;
}

// note: * mtlab value at
//  mtlab dereferencing operator    





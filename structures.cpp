#include<iostream>
using namespace std;

struct{
    int mnum;
    string mstring;

} ms;

int main(){


    ms.mnum=40;
    ms.mstring="suhani";

    cout<<"The string is:"<<ms.mstring<<endl;
    cout<<"The number is:"<<ms.mnum<<endl;
    cout<<sizeof(ms)<<endl;

    cout << sizeof(int) << endl;
    cout << sizeof(string) << endl;
    cout << sizeof(ms) << endl;

    return 0;
}




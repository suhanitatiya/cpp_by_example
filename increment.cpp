#include<iostream>
using namespace std;
 
void inc(int a){
    ++a;  // copy=3
}

int main()
{
    int a=2; //main=2
    inc(a);  //copy=2
    cout<<a<<endl;
    

    return 0;
    

}

// note: output is 2 if ++a or a++ because here we have passed by values so therefore
// copies values get destroyed. only the main ki values is c







//In C, malloc() and free                        //In C++, new and delete
//malloc()- returns void *                       // new- returns exact type pointers
//malloc()- constructors destructors not called  // new- called automatically
//malloc()- on failure, returns NULL             // new- std::bad_alloc

#include<iostream>
using namespace std;

int main(){
    int* ptr = new int;
    *ptr = 35;
    //delete ptr;
    cout<<*ptr;
    return 0;




}
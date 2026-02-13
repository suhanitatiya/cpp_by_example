// #include<iostream>
// using namespace std;

// enum level{
//     LOW=89,
//     MEDIUM=28,
//     HIGH=99
// };

// int main(){
//     enum level lv= MEDIUM;
//     cout<<lv<<endl;
//     return 0;
// }


//note: the next items will update their numbers accordingly and
// initial element ki value is always zero 0 here low is 0 by default

#include<iostream>
using namespace std;

enum level{
    LOW,
    MEDIUM=89,
    HIGH
};

int main(){
    enum level lv= LOW;
    cout<<lv<<endl;
    return 0;
}















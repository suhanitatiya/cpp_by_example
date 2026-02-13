#include<iostream>
using namespace std;

int main()
{

    string food= "pizza";
    string &meal = food;

    meal="burger";

    cout<<food<<endl;
    cout<<&food<<endl;
    cout<<meal<<endl;

    return 0;
}    



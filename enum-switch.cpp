#include<iostream>
using namespace std;

enum Level{
    easy=38,
    mid,
    high
};

int main()
{
    enum Level myVar= mid;
    switch(myVar)
    {
        case 1:
            cout<<"The exam was easy level"<<endl;
            break;

        case 2:
            cout<<"The exam was mid level"<<endl;
            break;

        
        case 3:
            cout<<"The exam was high level"<<endl;
            break;

        default:
            cout<<"Out of syllabus"<<endl;
            break;    
            
    }   
    return 0; 
}    






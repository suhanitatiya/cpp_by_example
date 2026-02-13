#include<iostream>
using namespace std;

struct stud{
    string sname;
    int rno;
    char gender;
};

int main()
{
    struct stud st;
    st.sname="Geet";
    st.rno=30;
    st.gender='F';
    cout<<"The name is\t"<<st.sname<<endl;
    return 0;
}

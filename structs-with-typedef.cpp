#include<iostream>
using namespace std;

typedef struct{
    string sname;
    int rno;
    char gender;
} Student;

int main(){
    Student st;
    st.sname="yippi";
    st.rno=58;
    st.gender='M';
    cout<<"the rno is\t" <<st.rno<<endl;
    return 0;


}
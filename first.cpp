//Introduction to Pointers
#include<iostream>
using namespace std;
int main() {
    int a = 5;                    //assigning value to a
    int *p;
    p = &a;
    cout << &a << endl;           //address of a
    cout << &p << endl;           //address of p
    cout << sizeof(int) << endl;  //size of integer varible
    cout << &p+1 << endl;         // ++ size by 4 bytes
    cout << p << endl;            //address of a
    cout << *p << endl;           //value of a
    *p = 10;                      //assigning value through pointer
    cout << a << endl;            //value of a
    

    //Try using this snippet of code with other datatypes as well
    //©tanujdey7
}
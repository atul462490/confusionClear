#include <iostream>
using namespace std;

int main()
{
    cout<<"Hello World\n";
    int x=10;
    int *ptr = &x;
    int *pt = ptr;
    int **p = &ptr;
    int ***t = &p;
    cout<<&ptr<<"----"<<ptr<<"\n"
        <<&pt<<"----"<<pt<<"\n"
        <<&p<<"----"<<p<<"\n"
        <<&x<<"----"<<x<<"\n"
        <<&t<<"----"<<t;
        
    // int *ptr1=&x;
    // cout <<ptr<<*ptr<<&ptr;
    

    return 0;
}

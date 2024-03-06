
#include <iostream>
using namespace std;

void intergerPointers(){
    cout<<"\n------------------intergerPointers------------------\n";
    int x=10;
    int *ptr = &x;
    int *pt = ptr;
    int **p = &ptr;
    int ***t = &p;
    cout<<&x<<"----"<<x<<"\n"
        <<&ptr<<"----"<<ptr<<"\n"
        <<&pt<<"----"<<pt<<"\n"
        <<&p<<"----"<<p<<"\n"
        <<&t<<"----"<<t<<"\n";
        
}

void arrayPointers(){
    cout<<"\n-------------------arrayPointers--------------------\n";
    int arr[5] ={2,4,6,8,0};
    int arr1[5]={3,4,5,6,7};
    int* arrays[2] = {arr,arr1};
    int** array[1] = {arrays};
    
    cout<<"&arr--->"<<&arr<<"   arr[1]--->"<<arr[1]<<"\n"
        <<"&arr1--->"<<&arr1<<"   arr[1]--->"<<arr1[1]<<"\n"
        <<"&array--->"<<&array<<"   array[1]--->"<<array[1]<<"\n"
        <<"&arrays--->"<<&arrays<<"  arrays[1]--->"<<arrays[1]<<"\n"
        <<"&arr[2]--->"<<&arr[2]<<"   arr[2]--->"<<arr[2]<<"\n"
        <<"&arr1[2]--->"<<&arr1[2]<<"   arr1[2]--->"<<arr1[2]<<"\n"
        <<"&arrays[1]--->"<<&arrays[1]<<"   arrays[1]--->"<<arrays[1]<<"\n"
        <<"&arrays[1][2]--->"<<&arrays[1][2]<<"   arrays[1][2]--->"<<arrays[1][2]<<"\n"
        
        ;
}

int main()
{
    intergerPointers();
    arrayPointers();
    

    return 0;
}

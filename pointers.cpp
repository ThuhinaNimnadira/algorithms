#include <iostream>
using namespace std;

int main(){

//declare pointer variable
int *ptr;

//create an array
int arrayA[5]={10,20,30,40,50};

//store the address of first elemet of array in ptr
ptr = arrayA;
//ptr = &arrayA[0];(same thing)

cout << "Pointer 'ptr' points to the address:"<<ptr <<endl;

return 0;
}
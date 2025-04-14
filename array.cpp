#include <iostream>
using namespace std;

int main(){
    int Numbers[5];

    Numbers[0]=10;//manulay add the numbers to the array
    Numbers[1]=20;
    Numbers[2]=30;
    Numbers[3]=40;
    Numbers[4]=50;

    for(int i=0; i<5; i++){
        cout << "Number " << i+1 << ": " << Numbers[i] << endl;
    }
    return 0;
 }


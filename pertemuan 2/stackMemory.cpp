#include <iostream>
using namespace std;

int main(){
    int nilai = 80; // 80

    int* ptr = &nilai; // 0x1
    int** ptr2 = &ptr; // 0x2

    cout << *ptr << endl;  
    cout << *ptr2 << endl; 
    cout << **ptr2; 
    
}
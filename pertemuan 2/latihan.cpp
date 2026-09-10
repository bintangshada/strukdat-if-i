#include <iostream>
using namespace std;

void max(int* a, int n){
    int maks = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > maks){
            maks = a[i];
        }
    }
    cout << maks;
};

int main(){
    const int KAP = 3;
    int a[KAP] = {10,20,30};
    cout << *(a + 2) << endl; 
    cout << &(a[0]) << endl; 
    cout << &(a[1]) << endl; 
    cout << &(a[2]) << endl;
    max(a,KAP);
}

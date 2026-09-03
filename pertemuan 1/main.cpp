#include <iostream>
using namespace std;

void balikArray(int data[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int tmp = data[i];
        data[i] = data[n - 1 - i];
        data[n - 1 - i] = tmp;
    }
}

int main() {

    const int KAPASITAS = 4;
    int data[KAPASITAS] = {10,20,30,40};

    // mengumpulkan array
    int total = 0;

    for (int i = 0; i < KAPASITAS; i++)
    {
        total += data[i];
    }

    cout << "Total : " << total << endl;
    

    //mencari nilai terbesar dalam array

    int maks = data[0];
    for (int i = 0; i < KAPASITAS; i++)
    {
        if (data[i] > maks)
        {
            maks = data[i];
        }
        
    }

    cout << "Nilai terbesar : " << maks << endl;
    

    // mengubah tempat / reversal
    balikArray(data, KAPASITAS);

    for (int i = 0; i < KAPASITAS; i++)
    {
        cout << data[i] << " ";
    }
}
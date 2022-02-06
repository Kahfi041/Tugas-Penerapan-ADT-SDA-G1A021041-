#include <iostream>
using namespace std;

int main(){
    int La,t,volume;

    cout << "Masukkan Luas Alas Segitiga : ";
    cin >> La;
    cout << "Masukkan Tinggi Prisma : ";
    cin >> t;
    volume = La*t;
    cout << "Volume Prisma Segitiga adalah: " <<volume;

    return 0;

}

#include <iostream>
using namespace std;

// Variabel Global
int n;
int pilihan;

bool isPrima(int angka) {
    if (angka <= 1) return false;
    int i = 2;
    while (i * i <= angka) {
        if (angka % i == 0) return false;
        i++;
    }
    return true;
}

bool isFibonacci(int angka) {
    if (angka < 0) return false;
    int a = 0;
    int b = 1;
    while (a < angka) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return (a == angka);
}

void inputAngka() {
    cout << "Masukkan angka yang ingin dicek: ";
    cin >> n;
}

void tampilkanMenu() {
    cout << "\n===============================" << endl;
    cout << "   PROGRAM PENGECEK BILANGAN   " << endl;
    cout << "===============================" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu (0-2): ";
    cin >> pilihan;
}

void hasilPrima() {
    if (isPrima(n)) {
        cout << "Hasil: " << n << " adalah bilangan PRIMA." << endl;
    } else {
        cout << "Hasil: " << n << " BUKAN bilangan PRIMA." << endl;
    }
}

void hasilFibonacci() {
    if (isFibonacci(n)) {
        cout << "Hasil: " << n << " adalah bagian dari deret FIBONACCI." << endl;
    } else {
        cout << "Hasil: " << n << " BUKAN bagian dari deret FIBONACCI." << endl;
    }
}

int main() {



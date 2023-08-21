#include <iostream>
using namespace std;

int main(){
    int n, k;

    cout <<"jumlah soal terjawab: ";
    cin >>n;

    cout <<"jumlah durasi (menit): ";
    cin >>k;

    if (n >= 1 && k <= 30){
        cout <<"total point: "<<n * 200;
    } else if (n <= 0 || k <= 0){
        cout <<"total point: 0";
    } else {
        cout <<"total point: "<<n * 100;
    }
}
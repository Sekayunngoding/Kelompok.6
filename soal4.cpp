#include <iostream>
using namespace std;

int main(){
    int n, total = 2000;

    cout <<"durasi parkir (jam): ";
    cin >>n;

    if (n == 1){
        cout <<"total bayar : "<<total;
    } else if (n > 1) {
        total += (n - 1) * 1000;
        cout <<"total bayar : "<<total;
    } else {
        cout <<"total bayar : 0";
    }
}
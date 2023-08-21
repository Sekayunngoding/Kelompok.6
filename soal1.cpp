#include <iostream>
using namespace std;

int main(){
    int n,m;

    cin >>n>>m;

    if (n < 0 || m < 0){
        cout <<"masing-masing 0"<<endl;
        cout <<"bersisa 0"<<endl;
    } else {
        cout <<"masing-masing "<<n/m<<endl;
        cout <<"bersisa "<<n%m<<endl;
    }
}
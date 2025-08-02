#include <iostream>
using namespace std;

void digits(int N){
    while( N > 0){
        int num;
        num = N % 10;
        cout << num << endl ;
        N = N/10;

    }
}
int main(){
    int N;
    cin >> N;
    digits(N);
}
#include <iostream>
using namespace std;

void zeroes_ones(int n ){
    for( int i= 0 ; i <  n ; i++){
        int start;
        if ( i % 2 == 0 ){
            start = 0;
        }
        else start =1;
        for( int j = 0 ; j <= i ; j++){     
            cout << start << " ";
            start = 1 - start;
        }cout << endl;
    }

}
int main(){
    int n;
    cin >> n;
    zeroes_ones(n);
}
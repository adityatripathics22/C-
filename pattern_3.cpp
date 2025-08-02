#include <iostream>
using namespace std;
void pattern(int n){
    for (int i = 0 ; i <= n-1 ; i++){
        for (int j = 0 ; j<= i ; j++ ){
            cout << j+1 ;
        }cout << endl;
            
    }

}

int main(){
    int n;
    cin >> n;
    pattern(n);
}
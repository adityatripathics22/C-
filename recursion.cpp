#include <iostream>
using namespace std;

void recursion(int i ,int n){
    if ( i > n){
        return;
    }
    cout << " aditya";
    recursion(i +1 , n);


}
void recursion_2(int i ,int n){
    if ( i < 1){
        return;
    }cout << i;
    recursion_2 ( i -1 , n);

}



int main(){
    int n ;
    int i = 1;
    cin >>  n;
    i = n ;
    recursion_2(i, n);
}
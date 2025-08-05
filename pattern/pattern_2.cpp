#include <iostream> // Required for std::cout and std::endl
using namespace std;
void print1(int &n ){
    // Corrected loop conditions: i < n and j < n
    for( int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cout << "* " ; // Use std::cout
        }
        cout << endl ; // Use std::endl
    }
}

int main(){
    int n ;
    cout << "Enter a number for the pattern size: "; // Prompt for user input
    cin >> n; // Use std::cin
    print1(n);

    return 0; // Good practice to return 0 from main
}

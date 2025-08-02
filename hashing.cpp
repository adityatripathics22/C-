#include <iostream>
using namespace std;
#include <string>
#include <map>
// int main(){

//     string s ;
//     cin >> s;

//     int hash[26] = {0};
//     for(int i = 0; i< s.size() ; i++){
//         hash[s[i] -'a']++;

//     }




//     int q;
//     cin >> q;
//     while (q-->0)
//     {
//         char c;
//         cin>> c;
//         cout << hash[c-'a'] << endl ;

//     }
    


//}

int main(){
    int n;
    cin >> n;
    int arr[n];
    map<int ,int>mpp;
    for(int i= 0 ; i < n ; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    for (auto it : mpp){
        cout << it.first << "-->" << it.second << endl;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }
}




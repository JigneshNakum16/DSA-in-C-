#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;

    while(i <= n){
        int j = 0;
        // int value = i;
        while(j < i){
            cout << j + i ;
            // value = value + 1;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
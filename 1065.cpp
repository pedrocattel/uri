#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    
    int a[5],i,j;
    
    for(i = 0; i < 5; i++){
        cin >> a[i];
    }
    for(i = 0; i < 5; i++){
        if((a[i] % 2) == 0){
            j++;
        }
        
    }
    cout << j << " valores pares\n";
    return 0;
}



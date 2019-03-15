#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    
    float a[6];
    int i,j = 0;
    
    for(i = 0; i < 6; i++){
        cin >> a[i];
    }
    for(i = 0; i < 6; i++){
        if(a[i] > 0){
            j++;
        }
        
    }
    cout << j << " valores positivos\n";
    return 0;
}



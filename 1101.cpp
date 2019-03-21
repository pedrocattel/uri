#include <iostream>
#include <iomanip>
#define TAM 50

using namespace std;



int main()
{
    int n,i;
    char p[TAM], p2[TAM];

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> p[i];
        cout << p[i];
    }

    for(i = 0; i < n; i++){
        cout << p[i];
    }

    return 0;
}



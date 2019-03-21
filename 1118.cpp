#include <iostream>
#include <iomanip>

using namespace std;


int main ()
{

    int exit = 0;
    double n = 0,sum = 0,m = 0;

    while (exit !=2)
    {
        cin >> n;
        if(n < 0 || n > 10)
        {
            cout << "nota invalida\n";
            cin >> n;
        }
        cin >> m;
        while (m<0 || m > 10)
        {
            cout << "nota invalida\n";
            cin >> m;
        }
        sum = (m + n)/2.0;
        cout << fixed << setprecision(2) << "media = " << sum << "\n";
        cout << "novo calculo (1-sim 2-nao)" <<"\n";
        cin >> exit;
        if(exit == 2){
            return 0;
        }
        while (exit != 1)
        {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> exit;
            if(exit == 2){
                return 0;
            }
        }
    }
    return 0;
}

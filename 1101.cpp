#include <iostream>
#include <iomanip>
#define TAM 10

using namespace std;



int main()
{
    int m, n, aux, sum = 0;


    do
    {
        cin >> m >> n;
        sum = 0;
        if(m <= 0 || n <= 0){
            return 0;
        }

        if(m > n)
        {
            for(aux = n; aux <= m ; aux++)
            {
                sum = sum + aux;
                cout << aux << " ";
            }
            cout << "Sum=" << sum << "\n";
        }
        else if(n > m)
        {
            {
                for(aux = m; aux <= n ; aux++)
                {
                    sum = sum + aux;
                    cout << aux << " ";
                }
                cout << "Sum=" << sum << "\n";
            }
        }


    } while (1);
    return 0;
}



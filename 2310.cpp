#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int n = 0, s = 0, b = 0, a = 0, i = 0;
    double ss = 0, bs = 0, as = 0, auxss = 0,auxbs = 0, auxas = 0, auxs = 0,auxb = 0, auxa = 0;
    double sf = 0, af, bf;
    string nome;
    
    cin >> n;
    if(n >= 1 && n <= 100){
        for(i = 1; i <= n; i++){
            cin >> nome;
            cin >> s >> b >> a;    //armazena as informações dos saques...
            cin >> ss >> bs >> as;
            auxs += s;
            auxb += b;
            auxa += a;
            auxss += ss;
            auxbs += bs;
            auxas += as;
        }
        sf = (auxss/auxs) * 100.0;
        af = (auxas/auxa) * 100.0;
        bf = (auxbs/auxb) * 100.0;
        printf("Pontos de Saque: %.2lf %%.\n", sf);
        printf("Pontos de Bloqueio: %.2lf %%.\n", bf);
        printf("Pontos de Ataque: %.2lf %%.\n", af);
    }
    
    return 0;
}

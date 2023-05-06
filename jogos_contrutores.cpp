#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/* criacao da classe
class JogoAdivinhacao {
    
    private:
     int NumeroSecreto;
     int Tentativas;
     
    public:
     JogoAdivinhacao() {
         
         srand(time(0));
         NumeroSecreto = rand() % 100 + 1;
         Tentativas = 0;
        }
    /* usar o metodo para iniciar o jogo
    void Jogar() {
        /* usar a condicao do, while e if juntas para poder funcionar dentro das condicoes
        int palpite;
        do {
          /* interface de usuario
          cout << "Digite um numero entre 1 e 100 >>> ";
          /* leitura do numero chutado
          cin >> palpite;
          Tentativas++;
          /* caso o numero chutado seje maior que o numero sorteado
          if (palpite > NumeroSecreto) { 
              cout << "o numero secreto e menor!" << endl;
          }else if (palpite < NumeroSecreto) {
              /* caso o numero chutado seje maior que o numero sorteado
              cout << "o numero secreto e maior!" << endl;
          }else {
              /* caso o usuario acerte o numero sorteado e o numeros de tentativas 
              cout << "Parabens, voce acertou o numero em " << Tentativas << " tentativas!" << endl;
          }
          
        }while (palpite !=NumeroSecreto);
    }    
     
};
/* declaracao da variavel
int main () {
    JogoAdivinhacao jogo;
    /* construtor com o mesmo nome do metodo chamando a acao na linha 20
    jogo.Jogar();
    /* fechamento do programa com um retorno
    return 0;
}

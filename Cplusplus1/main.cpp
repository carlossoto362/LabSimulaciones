#include "functions.cpp"

using namespace std;

int main(){
Semaforo terminal;
Semaforo* trebol = new Semaforo(0);
terminal.VerColor();
trebol->VerColor();
terminal.VerSemaforoID();
trebol->VerSemaforoID();
trebol->ChangeColor();
trebol->VerColor();
delete trebol;
Semaforo *Guajitos = new Semaforo(1);
Guajitos->VerSemaforoID();
return 0;

}

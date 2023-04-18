#include<iostream> // entrada y salida.
#include<cstdlib> //string conversions, random numbers, integer aritmetics, etc. 

using namespace std; // para omitir std en los comandos de entrada y salida.

int semaforo_num = 0;

class Semaforo{
	private:
		enum semaforo {verde,amarillo,rojo};

		int *color;
		int *ID;


	public:
		Semaforo(void){  //constructor sin argumentos
			semaforo_num += 1;
			ID = new int(semaforo_num);
			color = new int( (rand()/RAND_MAX)*3 );
		}
		Semaforo(int valor){ // constructor con argumento
			semaforo_num+=1;
			ID = new int(semaforo_num);
			color = new int(valor);
		}
		void VerColor(){
			cout<<"El semaforo está en";
			switch (*color)
			{
				case rojo: cout<<" rojo"<<endl;break;
				case verde: cout<<" verde"<<endl;break;
				case amarillo: cout<<" amarillo"<<endl;break;
			}
		}
		void ChangeColor(){
			switch (*color)
			{
				case verde: *color+=1;break;
				case amarillo: *color+=1;break;
				case rojo: *color=0;
			}
		}
		void VerSemaforoID(){
			cout<<"El ID del semaforo es "<<*ID<<endl;
		}
		~Semaforo() {
		delete color;
		delete ID;
		if (semaforo_num!=0)
			semaforo_num -= 1;
		}

};

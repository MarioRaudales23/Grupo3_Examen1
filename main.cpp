#include <iostream>
#include <string>
#include "pokemon.h"
using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<pokemon> vector_poke;
	pokemon* poke=new pokemon();
	int op=0;
	while(op!=6){
		cout<<"**********************************************************"<<endl;
		cout<<"1.-Ingresar"<<endl<<"2.-Entrenar"<<endl<<"3.-Liberar"<<endl<<"4.-Ordenar"<<endl<<"5.-Buscar"<<endl<<"6.-Salir...";
		cin>>op;
		cout<<endl;
		switch(op){
			case 1_{
				string nombre,naturaleza,tipo1,tipo2;
				int nivel,hp,ataque,defensa,ataqueEspecial,defensaEspecial,rapidez;
				bool legendario;
				int numTipo,sumaStats=0;
				char temLegendario;
				cout<<"\tIngresar"<<endl;
				cout<<"----Datos Generales----"<<endl;
				cout<<"Nombre: ";
				cin>>nombre;
				cout<<"Naturaleza: ";
				cin>>naturaleza;
				cout<<"Es legendario (s/n): ";
				do
				{
					cin<<temLegendario;
					if (temLegendario!='s'||temLegendario!='n')
					{
						cout<<endl<<"Dato ingresado erroneo..."<<endl;
					}
				} while (temLegendario!='s'||temLegendario!='n');
				if (temLegendario=='s')
				{
					legendario=true;
				}else{
					legendario=false;
				}
				cout<<endl;
				cout<<"Cuantos tipos posee el pokemon (1 o 2): ";
				do
				{
					cin>>numTipo;
					if (numTipo!=1||numTipo!=2)
					{
						cout<<endl<<"-------------------------"<<endl<<"Error la cantidad de tipos no puede ser mayor que 2"<<endl<<"-------------------------"<<endl;
					}
				} while (numTipo!=1||numTipo!=2);
				if (numTipo==1)
				{
					cout<<"Tipo : ";
					cin>>tipo1;
					tipo2=0;
				}else if (tipo==2)
				{
					cout<<"Tipo 1: ";
					cin>>tipo1;
					cout<<"Tipo 2: ";
					cin>>tipo2;
				}
				cout<<"----Status----"<<endl;
				do
				{
					cout<<"HP: ";
					cin>>hp;
					sumaStats+=hp;
					cout<<"Ataque: ";
					cin>>ataque;
					sumaStats+=ataque;
					cout<<"Defensa: ";
					cin>>defensa;
					sumaStats+=defensa;
					cout<<"Ataque Especial: ";
					cin>>ataqueEspecial;
					sumaStats+=ataqueEspecial;
					cout<<"Defensa Especial: ";
					cin>>defensaEspecial;
					sumaStats+=defensaEspecial;
				} while (sumaStats<=780);
				poke=new pokemon(nombre,nivel,naturaleza,tipo1,tipo2,hp,ataque,defensa,ataqueEspecial,defensaEspecial,rapidez,legendario);
				vector_poke.push_back(poke);
				break;
			}
		}
	}
	/* code */
	return 0;
}
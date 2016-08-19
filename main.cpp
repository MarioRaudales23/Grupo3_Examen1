#include <iostream>
#include <string.h>
#include "pokemon.h"
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<pokemon*> vector_poke;
	pokemon* poke=new pokemon();
	int op=0;
	while(op!=6){
		cout<<"**********************************************************"<<endl;
		cout<<"1.-Ingresar"<<endl<<"2.-Entrenar"<<endl<<"3.-Liberar"<<endl<<"4.-Ordenar"<<endl<<"5.-Buscar"<<endl<<"6.-Salir...";
		cin>>op;
		cout<<endl;
		switch(op){
			case 1:{
				string nombre,naturaleza,tipo1,tipo2;
				int nivel,hp,ataque,defensa,ataqueEspecial,defensaEspecial,rapidez;
				bool legendario;
				int numTipo,sumaStats=0;
				char temLegendario;
				cout<<"\tIngresar"<<endl;
				cout<<"----Datos Generales----"<<endl;
				cout<<"Nombre: ";
				cin>>nombre;
				cout<<"\tNaturaleza: ";
				int opNaturaleza=0;
				do
				{
					cout<<"1.-Hardy\t2.-Lonely\t3.-Brave\t4.-Adamant"<<endl;
					cout<<"5.-Naughty\t6.-Bold\t7.-Docile\t8.-Relaxed"<<endl;
					cout<<"9.-Impish\t10.-Lax\t11.-Timid\t12.-Hasty"<<endl;
					cout<<"13.-Serious\t14.-Jolly\t15.-Naive\t16.-Modest"<<endl;
					cout<<"17.-Mild\t18.-Quiet\t19.-Bashful\t20.-Rash"<<endl;
					cout<<"21.-Calm\t22.-Gentle\t23.-Sassy\t24.-Careful"<<endl;
					cout<<"25.-Quirky"<<endl<<"...";
					cin>>opNaturaleza;
					if (opNaturaleza<0||opNaturaleza>25)
					{
						cout<<"Dato ingresado erroneo..."<<endl<<endl;
					}
				} while (opNaturaleza<0||opNaturaleza>25);
				
				cout<<"Es legendario (s/n): ";
				do
				{
					cin>>temLegendario;
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
					tipo2="0";
				}else if (numTipo==2)
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
			case 2:{
				int posicion;
				pokemon* temp;
				cout<<"Ingrese la posicion del pokemon: ";
				cin>>posicion;
				if (posicion <= vector_poke.size)
				{
					temp = vector_poke[posicion];
					string nombrenue;
					int nivel;
					int submenu = 0;
					cout<<"Opcion 1: Nombre\nOpcion 2: Nivel";
					cin>>submenu;
					switch(submenu){
						case 1:{
							cout<<"Ingrese el nombre nuevo";
							cin>>nombrenue;
							temp->setnombre(nombrenue);
							cout<<"Cambio realizado";
						}
						case 2:{
							cout<<"Ingrese el nuevo nivel: ";
							cin>>nivel;
							if (nivel <= 100 && nivel>=1)
							{
								temp->setnivel(nivel);
								cout<<"Cambio realizado";
							}
						}
					}
				}
				break;
			}
			case 3:{
				int posicion;
				cout<<"Ingrese la posicion del pokemon: ";
				cin>>posicion;
				if (posicion <= vector_poke.size)
				{				
					myvector.erase(myvector.begin()+posicion);
					cout<<"Borrado con exito";
				}
				break;
			}
			case 5:{
			}

		}
	}
	/* code */
	return 0;
}
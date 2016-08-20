#include <iostream>
#include <string.h>
#include "pokemon.h"
#include <vector>
using namespace std;

void tostring(pokemon*);
int opciones();
string tipos(int);
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
				int nivel=0,hp,ataque,defensa,ataqueEspecial,defensaEspecial,rapidez;
				bool legendario;
				int numTipo,sumaStats=0;
				char temLegendario;
				cout<<"\tIngresar"<<endl;
				cout<<"----Datos Generales----"<<endl;
				cout<<"Nombre: ";
				cin>>nombre;
				do
				{
					cout<<"Nivel: ";
					cin>>nivel;
				} while (nivel>100);
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
				if (opNaturaleza==1)
				{
					naturaleza="Hardy";
				}else if (opNaturaleza==2)
				{
					naturaleza="Lonely";
				}else if (opNaturaleza==3)
				{
					naturaleza="Brave";
				}else if (opNaturaleza==4)
				{
					naturaleza="Adamant";
				}else if (opNaturaleza==5)
				{
					naturaleza="Naughty";
				}else if (opNaturaleza==6)
				{
					naturaleza="Bold";
				}else if (opNaturaleza==7)
				{
					naturaleza="Docile";
				}else if (opNaturaleza==8)
				{
					naturaleza="Relaxed";
				}else if (opNaturaleza==9)
				{
					naturaleza="Impish";
				}else if (opNaturaleza==10)
				{
					naturaleza="Lax";
				}else if (opNaturaleza==11)
				{
					naturaleza="Timid";
				}else if (opNaturaleza==12)
				{
					naturaleza="Hasty";
				}else if (opNaturaleza==13)
				{
					naturaleza="Serious";
				}else if (opNaturaleza==14)
				{
					naturaleza="Jolly";
				}else if (opNaturaleza==15)
				{
					naturaleza="Naive";
				}else if (opNaturaleza==16)
				{
					naturaleza="Modest";
				}else if (opNaturaleza==17)
				{
					naturaleza="Mild";
				}else if (opNaturaleza==18)
				{
					naturaleza="Quiet";
				}else if (opNaturaleza==19)
				{
					naturaleza="Bashful";
				}else if (opNaturaleza==20)
				{
					naturaleza="Rash";
				}else if (opNaturaleza==21)
				{
					naturaleza="Calm";
				}else if (opNaturaleza==22)
				{
					naturaleza="Gentle";
				}else if (opNaturaleza==23)
				{
					naturaleza="Sassy";
				}else if (opNaturaleza==24)
				{
					naturaleza="Careful";
				}else if (opNaturaleza==25)
				{
					naturaleza="Quirky";
				}
				cout<<"Es legendario (s/n): ";
				cin>>temLegendario;
				
				if (temLegendario=='s')
				{
					legendario=true;
				}else{
					legendario=false;
				}
				cout<<endl;
				
				do
				{
					cout<<"Cuantos tipos posee el pokemon (1 o 2): ";
					cin>>numTipo;
					if (numTipo<1||numTipo>2)
					{
						cout<<endl<<"-------------------------"<<endl<<"Error la cantidad de tipos no puede ser mayor que 2"<<endl<<"-------------------------"<<endl;
					}
				} while (numTipo<1||numTipo>2);
				cout<<"\tTipos"<<endl;
				int opTipos=0;
				cout<<"1.-Bug\t2.-Dragon\t3.-Ice\t4.-Fighting"<<endl;
				cout<<"5.-Fire\t6.-Flying\t7.-Grass\t8.-Ghost"<<endl;
				cout<<"9.-Ground\t10.-Electric\t11.-Normal\t12.-Poison"<<endl;
				cout<<"13.-Phychic\t14.-Rock\t15.-Water\t16.-Dark"<<endl;
				cout<<"17.-Steel\t18.-Fairy\t19.-Bird\t20.-Shadow"<<endl;
				cout<<"..."<<endl;
				if (numTipo==2)
				{
					cout<<"Tipo 1: ";
					cin>>opTipos;
					tipo1=tipos(opTipos);
					int opTipos2;
					cout<<"Tipo 2: ";
					cin>>opTipos2;
					tipo2=tipos(opTipos);
				}else if (numTipo==1)
				{
					cout<<"Tipo 1: ";
					cin>>opTipos;
					tipo1=tipos(opTipos);
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
					cout<<"Velocidad: ";
					cin>>rapidez;
					sumaStats+=defensaEspecial;
				} while (sumaStats>780);
				poke=new pokemon(nombre,nivel,naturaleza,tipo1,tipo2,hp,ataque,defensa,ataqueEspecial,defensaEspecial,rapidez,legendario);
				vector_poke.push_back(poke);
				break;
			}
			case 2:{
				int posicion;
				pokemon* temp;
				for (int i = 0; i<vector_poke.size(); ++i)
				{
					temp = vector_poke[i];
					string nombre = temp->getnombre();
					int nivel = temp->getnivel();
					cout<<"Nombre: "<<nombre<<" Nivel: "<<nivel;
				}
				cout<<"Ingrese la posicion del pokemon: ";
				cin>>posicion;
				if (posicion <= vector_poke.size())
				{
					temp = vector_poke[posicion];
					string nombrenue;
					int nivel;
					int submenu = 0;
					cout<<"1-Nombre\n2- Nivel\n...";
					cin>>submenu;
					switch(submenu){
						case 1:{
							cout<<"Ingrese el nombre nuevo: ";
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
				if (posicion <= vector_poke.size())
				{				
					vector_poke.erase(vector_poke.begin()+posicion);
					cout<<"Borrado con exito";
				}
				break;
			}
			case 4:{
				cout<<"\tOrdenar"<<endl;
				int opOrdenar=0;
				cout<<"1.-Ordenar por nombre"<<endl<<"2.-Ordenar por nivel"<<endl<<"...";
				cin>>opOrdenar;
				switch(opOrdenar){
					case 1:{
						vector<pokemon*> vectorTemporal;
						char abc[]={'a','b','c','d','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
						int sizeAbc=25;

						for (int i = 0; i < sizeAbc; i++)
						{
							for (int j = 0; j < vector_poke.size(); j++)
							{
								if (vector_poke.at(j)->getnombre()[0]==abc[i]){
									vectorTemporal.push_back(vector_poke.at(j));
									cout<<vector_poke.at(j)->getnombre()<<endl;
								}								
							}
						}
						vector_poke=vectorTemporal;
						break;
					}
					case 2:{
						vector<pokemon*> vectorTemporal;
						pokemon* poke_debil; 
						for (int i = 0; i < vector_poke.size(); i++)
						{
							pokemon* tem=vector_poke.at(i);
							for (int j = 0; j < vector_poke.size(); j++)
							{
								if (tem->getnivel()<vector_poke.at(j)->getnivel()&&
									vector_poke.at(i)->getnombre()!=vector_poke.at(j)->getnombre())
								{
									poke_debil=tem;
									tem=vector_poke.at(j);
								}
								
							}
							//vectorTemporal.push_back(tem);
							//cout<<tem->getnombre()<<"\t"<<tem->getnivel()<<endl;
							
						}
						vectorTemporal.push_back(poke_debil);
						cout<<poke_debil->getnombre()<<"\t"<<poke_debil->getnivel()<<endl;
						vector_poke=vectorTemporal;
						break;
					}
				}
				break;

			}
			case 5:{
				int submenu;
				cout<<"1-Nombre\n2-Nivel\n3-Naturaleza\n4-Tipo\n5-Hp\n6-Ataque\n7-Defensa\n8-Ataque Especial\n9-Defensa Especial\n10-Rapidez\n11-Legendario\n...";
				cin>>submenu;
				switch(submenu){
					case 1:{
						string nombre;
						cout<<"Ingrese el nombre: ";
						cin>>nombre;
						for (int i = 0; i < vector_poke.size(); ++i)
						{
							if (vector_poke[i]->getnombre() == nombre)
							{
								tostring(vector_poke[i]);
							}
						}
						break;
					}
					case 2:{
						int valor;
						int menu = opciones();
						cout<<"Ingrese el valor de busqueda";
						cin>>valor;
						if (valor > 1 && valor < 100)
						{
						switch(menu){
								case 1:{
									for (int i = 0; i < vector_poke.size(); ++i)
										{
											if (vector_poke[i]->getnivel() > valor)
											{
												tostring(vector_poke[i]);
											}
										}
										break;
								}
								case 2:{
									for (int i = 0; i < vector_poke.size(); ++i)
									{
										if (vector_poke[i]->getnivel() < valor)
										{
											tostring(vector_poke[i]);
										}
									}
									break;
								}
								case 3:{
									for (int i = 0; i < vector_poke.size(); ++i)
									{
										if (vector_poke[i]->getnivel() == valor)
										{
											tostring(vector_poke[i]);
											}
										}
										break;
									}
								case 4:{
									for (int i = 0; i < vector_poke.size(); ++i)
									{
										if (vector_poke[i]->getnivel() <= valor)
										{
											tostring(vector_poke[i]);
										}
									}
									break;
								}
								case 5:{
									for (int i = 0; i < vector_poke.size(); ++i)
									{
										if (vector_poke[i]->getnivel() >= valor)
										{
											tostring(vector_poke[i]);
										}
									}
									break;
								}
								case 6:{
									for (int i = 0; i < vector_poke.size(); ++i)
									{
										if (vector_poke[i]->getnivel() != valor)
										{
											tostring(vector_poke[i]);
										}
									}
									break;
								}
							}
								
						}
						break;
					}
					case 3:{
						int opNaturaleza=0;
						string naturaleza;
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
						if (opNaturaleza==1)
						{
						naturaleza="Hardy";
						}else if (opNaturaleza==2)
						{
						naturaleza="Lonely";
						}else if (opNaturaleza==3)
						{
						naturaleza="Brave";
						}else if (opNaturaleza==4)
						{
						naturaleza="Adamant";
						}else if (opNaturaleza==5)
						{
						naturaleza="Naughty";
						}else if (opNaturaleza==6)
						{
						naturaleza="Bold";
						}else if (opNaturaleza==7)
						{
						naturaleza="Docile";
						}else if (opNaturaleza==8)
						{
						naturaleza="Relaxed";
						}else if (opNaturaleza==9)
						{
						naturaleza="Impish";
						}else if (opNaturaleza==10)
						{
						naturaleza="Lax";
						}else if (opNaturaleza==11)
						{
						naturaleza="Timid";
						}else if (opNaturaleza==12)
						{
						naturaleza="Hasty";
						}else if (opNaturaleza==13)
						{
						naturaleza="Serious";
						}else if (opNaturaleza==14)
						{
						naturaleza="Jolly";
						}else if (opNaturaleza==15)
						{
						naturaleza="Naive";
						}else if (opNaturaleza==16)
						{
						naturaleza="Modest";
						}else if (opNaturaleza==17)
						{
						naturaleza="Mild";
						}else if (opNaturaleza==18)
						{
						naturaleza="Quiet";
						}else if (opNaturaleza==19)
						{
						naturaleza="Bashful";
						}else if (opNaturaleza==20)
						{
						naturaleza="Rash";
						}else if (opNaturaleza==21)
						{
						naturaleza="Calm";
						}else if (opNaturaleza==22)
						{
						naturaleza="Gentle";
						}else if (opNaturaleza==23)
						{
						naturaleza="Sassy";
						}else if (opNaturaleza==24)
						{
						naturaleza="Careful";
						}else if (opNaturaleza==25)
						{
						naturaleza="Quirky";
						}
						for (int i = 0; i < vector_poke.size(); ++i)
						{
							if (vector_poke[i]->getnaturaleza() == naturaleza)
							{
								tostring(vector_poke[i]);
							}
						}
						break;
					}
					case 4:{
						int submenu = 0;
						cout<<"1-Por un tipo\n2-Por dos tipos\n...";
						cin>>submenu;
						switch(submenu){
							
							case 1:{
								int opTipos;
								string tipo1,tipo2;
							cout<<"1.-Bug\t2.-Dragon\t3.-Ice\t4.-Fighting"<<endl;
							cout<<"5.-Fire\t6.-Flying\t7.-Grass\t8.-Ghost"<<endl;
							cout<<"9.-Ground\t10.-Electric\t11.-Normal\t12.-Poison"<<endl;
							cout<<"13.-Phychic\t14.-Rock\t15.-Water\t16.-Dark"<<endl;
							cout<<"17.-Steel\t18.-Fairy\t19.-Bird\t20.-Shadow"<<endl;
							cout<<"..."<<endl;
								cout<<"Tipo 1: ";
								cin>>opTipos;
								tipo1=tipos(opTipos);
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->gettipo1() == tipo1 ||vector_poke[i]->gettipo2() == tipo1)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 2:{
							int opTipos=0;
							string tipo1,tipo2;
							cout<<"1.-Bug\t2.-Dragon\t3.-Ice\t4.-Fighting"<<endl;
							cout<<"5.-Fire\t6.-Flying\t7.-Grass\t8.-Ghost"<<endl;
							cout<<"9.-Ground\t10.-Electric\t11.-Normal\t12.-Poison"<<endl;
							cout<<"13.-Phychic\t14.-Rock\t15.-Water\t16.-Dark"<<endl;
							cout<<"17.-Steel\t18.-Fairy\t19.-Bird\t20.-Shadow"<<endl;
							cout<<"..."<<endl;
							cout<<"Tipo 1: ";
							cin>>opTipos;
							tipo1=tipos(opTipos);
							int opTipos2;
							cout<<"Tipo 2: ";
							cin>>opTipos2;
							tipo2=tipos(opTipos);
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if ((vector_poke[i]->gettipo1() == tipo1 && vector_poke[i]->gettipo2() == tipo2) ||(vector_poke[i]->gettipo1() == tipo2 && vector_poke[i]->gettipo2() == tipo1) )
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
						}
						break;
					}
					case 5:{
						int valor;
						int menu = opciones();
						cout<<"Ingrese el valor de busqueda";
						cin>>valor;
						switch(menu){
							case 1:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->gethp() > valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 2:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->gethp() < valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 3:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->gethp() == valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 4:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->gethp() <= valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 5:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->gethp() >= valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 6:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->gethp() != valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
						}
						break;
					}
					case 6:{
						int valor;
						int menu = opciones();
						cout<<"Ingrese el valor de busqueda";
						cin>>valor;
						switch(submenu){
							case 1:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getataque() > valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 2:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getataque() < valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 3:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getataque() == valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 4:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getataque() <= valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 5:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getataque() >= valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 6:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getataque() != valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
						}
						break;
					} 
					case 7:{
						int valor;
						int menu = opciones();
						cout<<"Ingrese el valor de busqueda";
						cin>>valor;
						switch(menu){
							case 1:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getdefensa() > valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 2:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getdefensa() < valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 3:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getdefensa() == valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 4:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getdefensa() <= valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 5:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getdefensa() >= valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 6:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getdefensa() != valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
						}
						break;
					}
					case 8:{
						int valor;
						int menu = opciones();
						cout<<"Ingrese el valor de busqueda";
						cin>>valor;
						switch(menu){
							case 1:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getataquesp() > valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 2:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getataquesp() < valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 3:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getataquesp() == valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 4:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getataquesp() <= valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 5:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getataquesp() >= valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 6:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getataquesp() != valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
						}
						break;
					}
					case 9:{
						int valor;
						int menu = opciones();
						cout<<"Ingrese el valor de busqueda";
						cin>>valor;
						switch(menu){
							case 1:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getdefensaesp() > valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 2:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getdefensaesp() < valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 3:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getdefensaesp() == valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 4:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getdefensaesp() <= valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 5:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getdefensaesp() >= valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 6:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getdefensaesp() != valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
						}
						break;
					}
					case 10:{
						int valor;
						int menu = opciones();
						cout<<"Ingrese el valor de busqueda";
						cin>>valor;
						switch(menu){
							case 1:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getrapidez() > valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 2:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getrapidez() < valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 3:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getrapidez() == valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 4:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getrapidez() <= valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 5:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getrapidez() >= valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
							case 6:{
								for (int i = 0; i < vector_poke.size(); ++i)
								{
									if (vector_poke[i]->getrapidez() != valor)
									{
										tostring(vector_poke[i]);
									}
								}
								break;
							}
						}
						break;
					}
					case 11:{
						for (int i = 0; i < vector_poke.size(); ++i)
						{
							if (vector_poke[i]->getlegendario())
							{
								tostring(vector_poke[i]);
							}
						}
						break;
					}
				}
			}
		}
	}
	delete poke;
	for (int i = 0; i < vector_poke.size(); i++)
	{
		delete vector_poke.at(i);
	}
	return 0;
}
void tostring(pokemon* poke){
	string nombre,naturaleza,tipo1,tipo2;
	int nivel,hp,ataque,defensa,ataqueEspecial,defensaEspecial,rapidez;
	bool legendario;
	char leg;
	nombre = poke->getnombre();
	naturaleza = poke->getnaturaleza();
	tipo1 = poke->gettipo1();
	tipo2 = poke->gettipo2();
	nivel = poke->getnivel();
	hp= poke->gethp();
	ataque= poke->getataque();
	defensa= poke->getdefensa();
	ataqueEspecial= poke->getataquesp();
	defensaEspecial= poke->getdefensaesp();
	rapidez = poke->getrapidez();
	legendario= poke->getlegendario();
	if (legendario)
	{
		leg = 's';
	}else{
		leg = 'n';
	}
	cout<<"Nombre: "<<nombre<<"\nNivel: "<<nivel<<"\nNaturaleza: "<<naturaleza<<"\nLegendario: "<<leg<<endl;
	cout<<"HP: "<<hp<<"\tTipo1: "<<tipo1<<"\tTipo2: "<<tipo2<<endl;
	cout<<"Ataque: "<<ataque<<"\tDefensa: "<<defensa<<"\tAtaque Especial: "<<ataqueEspecial<<endl;
	cout<<"Defensa Especial: "<<defensaEspecial<<"\tRapidez: "<<rapidez<<endl;
}
int opciones(){
	int submenu;
	cout<<"1-Mayor a\n2-Menor a\n3-Igual a\n4-Menor o igual\n5-Mayor o igual\n6-Diferente de\n...";
	cin>>submenu;
	return submenu;
}
string tipos(int op){

	if (op==1)
	{
		return "Bug";
	}else if (op==2)
	{
		return "Dragon";
	}else if (op==3)
	{
		return "Ice";
	}else if (op==4)
	{
		return "Fighting";
	}else if (op==5)
	{
		return "Fire";
	}else if (op==6)
	{
		return "Flying";
	}else if (op==7)
	{
		return "Grass";
	}else if (op==8)
	{
		return "Ghost";
	}else if (op==9)
	{
		return "Ground";
	}else if (op==10)
	{
		return "Electric";
	}else if (op==11)
	{
		return "Normal";
	}else if (op==12)
	{
		return "Poison";
	}else if (op==13)
	{
		return "Phychic";
	}else if (op==14)
	{
		return "Rock";
	}else if (op==15)
	{
		return "Water";
	}else if (op==16)
	{
		return "Dark";
	}else if (op==17)
	{
		return "Steel";
	}else if (op==18)
	{
		return "Fairy";
	}else if (op==19)
	{
		return "Bird";
	}else if (op==20)
	{
		return "Shadow";
	}
}

#include "pokemon.h"
#include <string.h>
using namespace std;
pokemon::pokemon(){

}
pokemon::pokemon(string nombre,int nivel,string naturaleza,string tipoa,string tipob,int hp ,int ataque,int defensa,int ataqueesp,int defensesp,int rapidez,bool legendario){
	nom_poke = nombre;
	nivel_poke = nivel;
	natur_poke = naturaleza;
	tipo1_poke = tipoa;
	tipo2_poke = tipob;
	hp_poke = hp;
	ataque_poke = ataque;
	defensa_poke = defensa;
	ataqesp_poke = ataqueesp;
	defesp_poke = defensesp;
	rapid_poke = rapidez;
	legend_poke = legendario;
}

string pokemon::getnombre(){
	return nom_poke;
}

void pokemon::setnombre(string nombre){
	nom_poke = nombre;
}

int	pokemon::getnivel(){
	return nivel_poke;
}

void pokemon::setnivel(int nivel){
	nivel_poke = nivel;
}
string pokemon::gettipo1(){
	return tipo1_poke;
}

void pokemon::settipo1(string tipoa){
	tipo1_poke = tipoa;
}
string pokemon::gettipo2(){
	return tipo2_poke;
}

void pokemon::settipo2(string tipob){
	tipo2_poke = tipob;
}
string pokemon::getnaturaleza(){
	return natur_poke;
}

void pokemon::setnaturaleza(string naturaleza){
	natur_poke = naturaleza;
}
int	pokemon::gethp(){
	return hp_poke;
}

void pokemon::sethp(int hp){
	hp_poke = hp;
}
int	pokemon::getataque(){
	return ataque_poke;
}

void pokemon::setataque(int ataque){
	ataque_poke = ataque;
}
int	pokemon::getdefensa(){
	return defensa_poke;
}

void pokemon::setdefensa(int defensa){
	defensa_poke = defensa;
}
int	pokemon::getdefensaesp(){
	return defesp_poke;
}

void pokemon::setdefensaesp(int defensesp){
	defesp_poke = defensesp;
}
int	pokemon::getataquesp(){
	return ataqesp_poke;
}

void pokemon::setataquesp(int ataqueesp){
	ataqesp_poke = ataqueesp;
}
int	pokemon::getrapidez(){
	return rapid_poke;
}

void pokemon::setrapidez(int rapidez){
	rapid_poke = rapidez;
}
bool pokemon::getlegendario(){
	return legend_poke;
}

void pokemon::setlegendario(bool legendario){
	legend_poke = legendario;
}
pokemon::~pokemon(){

}
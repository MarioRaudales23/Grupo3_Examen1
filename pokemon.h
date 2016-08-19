#pragma once
#include <string>
using namespace std;
class pokemon{
	private:
		string nom_poke;
		int nivel_poke;
		string natur_poke;
		string tipo1_poke;
		string tipo2_poke;
		int hp_poke;
		int ataque_poke;
		int defensa_poke;
		int ataqesp_poke;
		int defesp_poke;
		int rapid_poke;
		bool legend_poke;
	public:
		pokemon(string,int,string,string,string,int,int,int,int,int,int,bool);	
		pokemon();
		~pokemon();
		string getnombre();
		void setnombre(string);
		string getnaturaleza();
		void setnaturaleza(string);
		int getnivel();
		void setnivel(int);
		void settipo1(string);
		string gettipo1();
		void settipo2(string);
		string gettipo2();
		int gethp();
		void sethp(int);
		int getataque();
		void setataque(int);
		int getdefensa();
		void setdefensa(int);
		int getdefensaesp();
		void setdefensaesp(int);
		int getataquesp();
		void setataquesp(int);
		int getrapidez();
		void setrapidez(int);
		bool getlegendario();
		void setlegendario(bool);
};
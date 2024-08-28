#ifndef CLASSES_H
#define CLASSES_H


#include <chrono>
#include <ctime>
#include <string>
#include <iostream>
#include <vector>


//Tema persoana si ziua de nastere
struct ziuaDeNastere
{
private: 
	//Variabile membru
	unsigned an{};
	unsigned zi{};
	std::string luna{};
	std::chrono::time_point<std::chrono::system_clock> momentNastere{};

public: 
	//Constructori
	ziuaDeNastere() = default;
	ziuaDeNastere(const unsigned& an, const unsigned& zi, const std::string& luna);

	//Metode
	const std::chrono::duration<double> calculVarsta() const;

	static bool esteAnBisect(int an);
	static unsigned luna_to_num(const std::string& luna);

	const unsigned get_an() const;
	const unsigned get_zi() const;
	const unsigned get_luna() const;
};


class Persoana
{
private:
	//Variabile membru
	std::string nume{};
	std::string prenume{};
	ziuaDeNastere birthday{};

public:
	//Constructori
	Persoana() = default;
	Persoana(const std::string& nume, const std::string& prenume, const unsigned& zi,
			 const std::string& luna, const unsigned& an);

	//Metode
	void afisareVarsta() const; 
};


#endif //CLASSES_H




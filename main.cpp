#include "classes.h"

int main()
{   
    std::string nume, prenume, luna; 
	short an, zi; 

	std::cout << "\t *******Tema varsta unei persoane******" << std::endl;

	std::cout << "\tIntrodu numele persoanei: "; 
	std::cin >> nume; 
	std::cout << "\tIntrodu prenumele persoanei: "; 
	std::cin >> prenume; 
	std::cout << "\tIntrodu data de nastere (de exemplu \"1 ianuarie 2024\"): ";
	std::cin >> zi >> luna >> an; 

	Persoana persoana(nume, prenume, zi, luna, an);

	std::cout << "\tAre loc calcularea..." << std::endl;
	std::cout << std::endl;
	
	persoana.afisareVarsta();
}
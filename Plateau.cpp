#include "Plateau.h"

Plateau::Plateau(){
	plateau.push_back(new Tour(Cote::Noir));
	plateau.push_back(new Cavalier(Cote::Noir));
	plateau.push_back(new Fou(Cote::Noir));
	plateau.push_back(new Reine(Cote::Noir));
	plateau.push_back(new Roi(Cote::Noir));
	plateau.push_back(new Fou(Cote::Noir));
	plateau.push_back(new Cavalier(Cote::Noir));
	plateau.push_back(new Tour(Cote::Noir));
	for (int i = 0; i < 8; i++)
		plateau.push_back(new Pion(Cote::Noir));
	for (int i = 0; i < 32; i++)
		plateau.push_back(new Piece());
	for (int i = 0; i < 8; i++)
		plateau.push_back(new Pion(Cote::Blanc));
	plateau.push_back(new Tour(Cote::Blanc));
	plateau.push_back(new Cavalier(Cote::Blanc));
	plateau.push_back(new Fou(Cote::Blanc));
	plateau.push_back(new Reine(Cote::Blanc));
	plateau.push_back(new Roi(Cote::Blanc));
	plateau.push_back(new Fou(Cote::Blanc));
	plateau.push_back(new Cavalier(Cote::Blanc));
	plateau.push_back(new Tour(Cote::Blanc));

}

void Plateau::jouer()
{
}

std::string Plateau::toString() const{
	std::string res = "---------------------------------\n|";
	int j = 0;
	for (Piece const* i : this->plateau) {		
		if (j == 8) {
			j = 0;
			res += "\n---------------------------------\n|";
		}
		j++;
		res += " " + i->toString() + " |";
	}
	res += "\n---------------------------------";
	return res;
}

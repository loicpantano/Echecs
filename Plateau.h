#pragma once
#include "Piece.h"
#include <vector>
#include <iostream>
#include <string>

class Plateau {
public:
	std::vector<Piece*> plateau;

	Plateau();
	std::string toString() const;
private:
	void jouer();
};
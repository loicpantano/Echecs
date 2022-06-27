#include "Piece.h"

Piece::Piece() = default;

Piece::Piece(Cote cote):cote(cote) {
}

bool Piece::deplacer()
{
	return false;
}

std::string Piece::toString() const{
	return " ";
}

Piece::~Piece() = default;



Pion::Pion(Cote cote) :Piece(cote) {}

std::string Pion::toString() const
{
    if (cote == Cote::Blanc)
        return "p";
    else
        return "P";
}

Cavalier::Cavalier(Cote cote) :Piece(cote) {}

std::string Cavalier::toString() const
{
    if (cote == Cote::Blanc)
        return "c";
    else
        return "C";
}

Fou::Fou(Cote cote) :Piece(cote) {}

std::string Fou::toString() const
{
    if (cote == Cote::Blanc)
        return "f";
    else
        return "F";
}

Tour::Tour(Cote cote) :Piece(cote) {}

std::string Tour::toString() const
{
    if (cote == Cote::Blanc)
        return "t";
    else
        return "T";
}

Reine::Reine(Cote cote) :Piece(cote) {}

std::string Reine::toString() const
{
    if (cote == Cote::Blanc)
        return "r";
    else
        return "R";
}

Roi::Roi(Cote cote) :Piece(cote) {}

std::string Roi::toString() const
{
    if (cote == Cote::Blanc)
        return "k";
    else
        return "K";
}
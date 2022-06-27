#pragma once
#include <string>

enum class Cote {
	Blanc = 0,
	Noir = 1,
	Neutre = -1,
};

struct coords {
	char c;
	int i;
};

class Piece {
public:
	Cote cote = Cote::Neutre;
	Piece();
	explicit Piece(Cote cote);
	virtual bool deplacer();
	virtual std::string toString() const;
	~Piece();
	
};

class Pion :public Piece {
public:
	explicit Pion(Cote cote);
	std::string toString() const final;
};

class Cavalier:public Piece {
public:
	explicit Cavalier(Cote cote);
	std::string toString() const final;
};

class Fou :public Piece {
public:
	explicit Fou(Cote cote);
	std::string toString() const final;
};

class Tour :public Piece {
public:
	explicit Tour(Cote cote);
	std::string toString() const final;
};

class Reine :public Piece {
public:
	explicit Reine(Cote cote);
	std::string toString() const final;
};

class Roi :public Piece {
public:
	explicit Roi(Cote cote);
	std::string toString() const final;
};
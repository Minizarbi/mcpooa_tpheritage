#ifndef LIVRE_H_INCLUDED
#define LIVRE_H_INCLUDED

#include <string>
using namespace std;

#include "document.h"

class Livre : public Document {
	string editeur_;
	int anParu_;
public:
	Livre(string& titre,
			string *resume = NULL,
			const string& auteur = "Inconnu",
			const string& editeur = "Inconnu",
			int anneeParution = 0);
	Livre(const Livre& livre);
	friend ostream& operator<<(ostream& os, const Livre &livre);
	Livre& operator=(const Livre& l);
};

#endif // LIVRE_H_INCLUDED

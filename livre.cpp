#include "livre.h"

#include <string>
#include <iostream>

using namespace std;

Livre::Livre(string& t, string *r, const string& a, const string& e, int ap) :
	Document(t, r, a), editeur_(e), anParu_(ap) {}

Livre::Livre(const Livre& l) :
	Document(l), editeur_(l.editeur_), anParu_(l.anParu_) {}

ostream& operator<<(ostream& os, const Livre &l) {
	/* We call parent contructor, saying that livre is a Document */
    os << static_cast<const Document &>(l);
    os << "Éditeur : " << l.editeur_ << endl;
    os << "Année de parution : " << l.anParu_ << endl;

    return os;
}

Livre& Livre::operator=(const Livre& l) {
	if (this != &l) { /* Ensure this is not the same Article */
		*this = l;
		this->editeur_ = l.editeur_;
		this->anParu_ = l.anParu_;
	}

	return *this;
}

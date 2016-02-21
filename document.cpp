#include "document.h"

#include <string>
#include <iostream>

using namespace std;

Document::Document(string& t, string *r, const string& a) :
	titre_(t), resume_(r), auteur_(a) {}

Document::Document(const Document& d) :
	titre_(d.titre_), resume_(d.resume_), auteur_(d.auteur_) {}

ostream& operator<<(ostream& os, const Document &d) {
    os << "Titre : " << d.titre_ << endl;
    os << "Resume : " << d.resume_[0] << endl;
    os << "Auteur : " << d.auteur_ << endl;

    return os;
}

Document& Document::operator=(const Document& d) {
	if (this != &d) { /* Ensure this is not the same Document */
		this->titre_ = d.titre_;
		this->resume_ = d.resume_;
		this->auteur_ = d.auteur_;
	}

	return *this;
}

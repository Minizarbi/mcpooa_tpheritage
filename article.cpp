#include "article.h"

#include <string>
#include <iostream>

using namespace std;

Article::Article(string& t, string *res, const string& a, const string& rev, const string& e, int ne) :
	Document(t, res, a), revue_(rev), editeur_(e), numEd_(ne) {}

Article::Article(const Article& a) :
	Document(a), revue_(a.revue_), editeur_(a.editeur_), numEd_(a.numEd_) {}

ostream& operator<<(ostream& os, const Article &a) {
	/* We call parent contructor, saying that a is a Document */
    os << static_cast<const Document &>(a);
    os << "Titre de la revue : " << a.revue_ << endl;
    os << "Éditeur : " << a.editeur_ << endl;
    os << "Numéro de l'éditeur : " << a.numEd_ << endl;

    return os;
}

Article& Article::operator=(const Article& a) {
	if (this != &a) { /* Ensure this is not the same Article */
		*this = a;
		this->revue_ = a.revue_;
		this->editeur_ = a.editeur_;
		this->numEd_ = a.numEd_;
	}

	return *this;
}

#ifndef ARTICLE_H_INCLUDED
#define ARTICLE_H_INCLUDED

#include <string>
using namespace std;

#include "document.h"

class Article : public Document {
	string revue_;
	string editeur_;
	int numEd_;
public:
	Article(string& titre,
			string *resume = NULL,
			const string& auteur = "Inconnu",
			const string& revue = "Inconnu",
			const string& editeur = "Inconnu",
			int numEditeur = 0);
	Article(const Article& a);
	friend ostream& operator<<(ostream& os, const Article &a);
	Article& operator=(const Article& a);
};

#endif // ARTICLE_H_INCLUDED

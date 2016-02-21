#ifndef DOCUMENT_H_INCLUDED
#define DOCUMENT_H_INCLUDED

#include <string>
using namespace std;

class Document {
protected:
	string &titre_;
	string *resume_;
	string auteur_;
public:
	Document(string& titre,
			string *resume = NULL,
			const string& auteur = "Inconnu");
	Document(const Document& d);
	friend ostream& operator<<(ostream& os, const Document &doc);
	Document& operator=(const Document& copie);
};

#endif // DOCUMENT_H_INCLUDED

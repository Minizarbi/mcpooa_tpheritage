#include <iostream>
#include <string>

#include "document.h"
#include "livre.h"
#include "article.h"

using namespace std;

int main() {
	string titre1("YoloDoc"), titre2("YoloLivre"), titre3("YoloArticle");
	string resume = "Mon super résumé, youpiii";
	Document yolo(titre1, &resume, "AlexDocMaker");
	cout << yolo << endl;
	Livre yolobook(titre2, &resume, "AlexBookMaker", "SuperEditeur", 2016);
	cout << yolobook << endl;
	Livre copyyolobook(yolobook);
	cout << copyyolobook << endl;
	Article yoloarticle(titre3, &resume, "AlexArtMaker");
	cout << yoloarticle << endl;
	resume = "Mon résumé changé :O";
	titre1 = "YoloDocV2";
	cout << yoloarticle << endl;

	Document d = yolo;
	cout << d << endl;
	Livre l = yolobook;
	cout << l << endl;
	Article a = yoloarticle;
	cout << a << endl;
	d = yolobook;
	cout << d << endl;

	/* Tests de suppression */
	string titre = "Mon titre référencé";
	string *ptrres = new string("Mon résumé pointé");
	Document *ptrdoc = new Document(titre, ptrres, "Auteur");
	cout << *ptrdoc << endl;
	delete ptrdoc;
	cout << titre << endl;
	cout << *ptrres << endl;
}

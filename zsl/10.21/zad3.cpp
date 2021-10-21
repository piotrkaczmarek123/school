#include <iostream>
using namespace std;

class Book{
	public:
	string title,authors;
	getTitle();
	getAuthors();
	addAuthor();
	
	Book(string ptitle="brak", string pauthors="autor");
		

};
Book::getTitle(){
	cout<<"tytul "<<title<<endl;
	
}

Book::getAuthors(){
	cout<<"autor "<<authors<<endl;
	
}



Book::Book(string ptitle, string pauthors){
	title=ptitle;
	authors=pauthors;
}



int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Book tytus;
	tytus.getTitle();
	tytus.getAuthors();
	return 0;
}

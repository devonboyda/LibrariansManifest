#include <iostream>
#include <string>

using namespace std;

class Book {
public: Book(string Language, string Author, string Edition, string Publication_date, int Pages, string Isbn, string Location) {
	language = Language;
	author = Author;
	edition = Edition;
	publication_date = Publication_date;
	pages = Pages;
	isbn = Isbn;
	location = Location;
}
public:
	string language;
	string author;
	string edition;
	string publication_date;
	int pages;
	string isbn;
	string location;

	/*genre lists
	Fiction
	N_Fiction
	Mystery
	Thriller
	Horror
	Comedy
	Historical
	Romance
	Science_Fiction
	Fantasy
	Dystopian
	*/
};
class Fiction : public Book {
public: Fiction(string language, string author, string edition, string publication_date, int pages, string isbn, string location, string Genre) : Book(language, author, edition, publication_date, pages, isbn, location) {
	genre = Genre;
}
private:
	string genre = "Fiction";
};
class N_Fiction : public Book {
public: N_Fiction(string language, string author, string edition, string publication_date, int pages, string isbn, string location, string Genre) : Book(language, author, edition, publication_date, pages, isbn, location)) {
	genre = Genre;
}
private:
	string genre = "N_Fiction";
};
class Mystery : public Book {
public: Mystery(string language, string author, string edition, string publication_date, int pages, string isbn, string location, string Genre) : Book(language, author, edition, publication_date, pages, isbn, location)) {
	genre = Genre;
}
private:
	string genre = "Mystery";
};
class Thriller : public Book {
public: Thriller(string language, string author, string edition, string publication_date, int pages, string isbn, string location, string Genre) : Book(language, author, edition, publication_date, pages, isbn, location) {
	genre = Genre;
}
private:
	string genre = "Thriller";
};
class Horror : public Book {
public: Horror(string language, string author, string edition, string publication_date, int pages, string isbn, string location, string Genre) : Book(language, author, edition, publication_date, pages, isbn, location) {
	genre = Genre;
}
private:
	string genre = "Horror";
};
class Comedy : public Book {
public: Comedy(string language, string author, string edition, string publication_date, int pages, string isbn, string location, string Genre) : Book(language, author, edition, publication_date, pages, isbn, location) {
	genre = Genre;
}
private:
	string genre = "Comedy";
};
class Historical : public Book {
public: Historical(string language, string author, string edition, string publication_date, int pages, string isbn, string location, string Genre) : Book(language, author, edition, publication_date, pages, isbn, location) {
	genre = Genre;
}
private:
	string genre = "Historical";
};
class Romance : public Book {
public: Romance(string language, string author, string edition, string publication_date, int pages, string isbn, string location, string Genre) : Book(language, author, edition, publication_date, pages, isbn, location) {
	genre = Genre;
}
private:
	string genre = "Romance";
};
class Science_Fiction : public Book {
public: Science_Fiction(string language, string author, string edition, string publication_date, int pages, string isbn, string location, string Genre) : Book(language, author, edition, publication_date, pages, isbn, location) {
	genre = Genre;
}
private:
	string genre = "Science_Fiction";
};
class Fantasy : public Book {
public: Fantasy(string language, string author, string edition, string publication_date, int pages, string isbn, string location, string Genre) : Book(language, author, edition, publication_date, pages, isbn, location) {
	genre = Genre;
}
private:
	string genre = "Fantasy";
};
class Dystopian : public Book {
public: Dystopian(string language, string author, string edition, string publication_date, int pages, string isbn, string location, string Genre) : Book(language, author, edition, publication_date, pages, isbn, location) {
	genre = Genre;
}
private:
	string genre;
};

void programStart() {
	int entry;
	for (int i = 0; i < 100; i++) {
		cout << "Enter 1 to add a new book or 2 to search for a book" << endl;
		cin >> entry;
		if (entry == 1) {
			addNewBook();
		}
		else if (entry == 2) {
			searchBook();
		}
		else {
			cout << "Sorry, you have entered an incorrect value. Please try again." << endl;
			continue;
		}
	}

}
void addNewBook() {
	string language;
	cout << "You're creating a new book" << endl;
	cout << "Enter the language of the book: " << endl;
	cin >> language;


	//Fantasy(language, etc.etc.);



	/*
		string language;
	string author;
	string edition;
	string publication_date;
	int pages;
	string isbn;
	string location;
	*/

}

void searchBook() {
	/*print out member variables*/
}
int main() {
	Book book("English", "Cowan", "8th", "10/12/2001", 230, "123-333-333-333", "Test");
	Dystopian d1("English", "Cowan", "8th", "10 / 12 / 2001", 230, "123 - 333 - 333 - 333", "Test", "Dystopian");
	programStart();
	return 0;
}

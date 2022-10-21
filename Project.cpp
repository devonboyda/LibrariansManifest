#include <iostream>
#include <string>

using namespace std;

class LibraryItem {
public: LibraryItem(bool On_Hand) {
	on_hand = On_Hand;
}
public:
	bool on_hand;
};

class Book : public LibraryItem {
public: Book(string Name, string Language, string Author, int Pages, string Isbn, string Location, string Genre, string previous_owner, bool On_Hand) : LibraryItem(on_hand) {
	name = Name;
	language = Language;
	author = Author;
	pages = Pages;
	isbn = Isbn;
	location = Location;
	genre = Genre;
	on_hand = On_Hand;
}
public:
	string name;
	string language;
	string author;
	int pages;
	string isbn;
	string location;
	string genre;

private:
	string previous_owner;
};

class Audio_Book : public LibraryItem {
public: Audio_Book(string Name, string Language, string Author, string Speaker, int Pages, string Isbn, string Location, string Genre, string previous_owner, bool on_hand) : LibraryItem(on_hand) {
	name = Name;
	language = Language;
	author = Author;
	speaker = Speaker;
	pages = Pages;
	isbn = Isbn;
	location = Location;
	genre = Genre;
}
public:
	string name;
	string language;
	string author;
	string speaker;
	int pages;
	string isbn;
	string location;
	string genre;

private:
	string previous_owner;
};

class DVD : public LibraryItem {
public: DVD(string Name, string Language, string Release_Date, string Duration, string Location, string Genre, string previous_owner, bool on_hand) : LibraryItem(on_hand) {
	name = Name;
	language = Language;
	release_date = Release_Date;
	duration = Duration;
	location = Location;
	genre = Genre;
}
public:
	string name;
	string language;
	string release_date;
	string duration;
	string location;
	string genre;

private:
	string previous_owner;
};

class VHS : public LibraryItem {
public: VHS(string Name, string Language, string Release_Date, string Duration, string Location, string Genre, string previous_owner, bool on_hand) : LibraryItem(on_hand) {
	name = Name;
	language = Language;
	release_date = Release_Date;
	duration = Duration;
	location = Location;
	genre = Genre;
}
public:
	string name;
	string language;
	string release_date;
	string duration;
	string location;
	string genre;

private:
	string previous_owner;
};
//Book, audio book, dvd, vhs
void help_info() {
	cout << "If you would like to add an item to the Library's Manifest, please press 1." << endl;
	cout << "If you would like to search for an item in the Library's Manifest, please press 2." << endl;
	cout << "If you are finished and want to exit the program, please press 3." << endl;
}
void item_create_info() {
	cout << "What item would you like to add?" << endl;
	cout << "Press 1 for a book. Press 2 for an audio book. Press 3 for a DVD. Press 4 for a VHS. Press 5 to exit." << endl;
}
Book createBookScript(Storage storage) {
	string name;
	string language;
	string author;
	int pages;
	string isbn;
	string location;
	string genre;
	string previous_owner;
	bool on_hand = true;

	cout << "You are adding a book to the Library Manifest" << endl;
	cout << "Enter the name of the book: " << endl;
	cin >> name;
	cout << "Enter the language of the book: " << endl;
	cin >> language;
	cout << "Enter the author of the book: " << endl;
	cin >> author;
	cout << "Enter the number of pages of the book: " << endl;
	cin >> pages;
	cout << "Enter the isbn of the book: " << endl;
	cin >> isbn;
	cout << "Enter the location of the book: " << endl;
	cin >> location;
	cout << "Enter the genre of the book: " << endl;
	cin >> genre;
	cout << "Enter the previous owner's information: " << endl;
	cin >> previous_owner;

	int len = sizeof(storage.bookStorage) / sizeof(storage.bookStorage[0]);
	switch (len) {
	case 1: {
		Book book1(name, language, author, pages, isbn, location, genre, previous_owner, on_hand);
		return book1;
		break;}
	case 2: {
		Book book2(name, language, author, pages, isbn, location, genre, previous_owner, on_hand);
		return book2;}
	case 3: {
		Book book3(name, language, author, pages, isbn, location, genre, previous_owner, on_hand);
		return book3;}
	case 4: {
		Book book4(name, language, author, pages, isbn, location, genre, previous_owner, on_hand);
		return book4;}
	case 5: {
		Book book5(name, language, author, pages, isbn, location, genre, previous_owner, on_hand);
		return book5;}
	default:
		break;
	}

}
Audio_Book createAudioBookScript() {
	string name;
	string language;
	string author;
	string speaker;
	int pages;
	string isbn;
	string location;
	string genre;
	string previous_owner;
	bool on_hand = true;

	cout << "You are adding an audio book to the Library Manifest" << endl;
	cout << "Enter the name of the book: " << endl;
	cin >> name;
	cout << "Enter the language of the audio book: " << endl;
	cin >> language;
	cout << "Enter the author of the audio book: " << endl;
	cin >> author;
	cout << "Enter the speaker of the audio book: " << endl;
	cin >> speaker;
	cout << "Enter the number of pages of the audio book: " << endl;
	cin >> pages;
	cout << "Enter the isbn of the audio book: " << endl;
	cin >> isbn;
	cout << "Enter the location of the audio book: " << endl;
	cin >> location;
	cout << "Enter the genre of the audio book: " << endl;
	cin >> genre;
	cout << "Enter the previous owner's information: " << endl;
	cin >> previous_owner;
	Audio_Book audiobook(name, language, author, speaker, pages, isbn, location, genre, previous_owner, on_hand);
	return audiobook;
}
DVD createDVDScript() {
	string name;
	string language;
	string release_date;
	string duration;
	string location;
	string genre;
	string previous_owner;
	bool on_hand = true;

	cout << "You are adding a DVD to the Library Manifest" << endl;
	cout << "Enter the name of the DVD: " << endl;
	cin >> name;
	cout << "Enter the language of the DVD: " << endl;
	cin >> language;
	cout << "Enter the release date of the DVD: " << endl;
	cin >> release_date;
	cout << "Enter the duration of the DVD: " << endl;
	cin >> duration;
	cout << "Enter the location of the DVD: " << endl;
	cin >> location;
	cout << "Enter the genre of the DVD: " << endl;
	cin >> genre;
	cout << "Enter the previous owner's information: " << endl;
	cin >> previous_owner;
	DVD dvd(name, language, release_date, duration, location, genre, previous_owner, on_hand);
	return dvd;
}
VHS createVHSScript() {
	string name;
	string language;
	string release_date;
	string duration;
	string location;
	string genre;
	string previous_owner;
	bool on_hand = true;

	cout << "You are adding a VHS to the Library Manifest" << endl;
	cout << "Enter the name of the VHS: " << endl;
	cin >> name;
	cout << "Enter the language of the VHS: " << endl;
	cin >> language;
	cout << "Enter the release date of the VHS: " << endl;
	cin >> release_date;
	cout << "Enter the edition of the VHS: " << endl;
	cin >> duration;
	cout << "Enter the location of the VHS: " << endl;
	cin >> location;
	cout << "Enter the genre of the VHS: " << endl;
	cin >> genre;
	cout << "Enter the previous owner's information: " << endl;
	cin >> previous_owner;
	VHS vhs(name, language, release_date, duration, language, genre, previous_owner, on_hand);
	return vhs;
}

class Storage {
public:
	Storage() {}
	Book bookStorage[100];
	Audio_Book audioBookStorage[100];
	DVD dvdStorage[100];
	VHS vhsStorage[100];
public:
	void storeItem(Book book) {
		int len = sizeof(bookStorage) / sizeof(bookStorage[0]);
		bookStorage[len + 1] = book;
	}
	void storeItem(Audio_Book audiobook) {
		int len = sizeof(audioBookStorage) / sizeof(audioBookStorage[0]);
		audioBookStorage[len + 1] = audiobook;
	}
	void storeItem(DVD dvd) {
		int len = sizeof(dvdStorage) / sizeof(dvdStorage[0]);
		dvdStorage[len + 1] = dvd;
	}
	void storeItem(VHS vhs) {
		int len = sizeof(vhsStorage) / sizeof(vhsStorage[0]);
		vhsStorage[len + 1] = vhs;
	}
	void spillBookStorage() {
		cout << "Books on hand: " << bookStorage;
	}
	void spillAudioBookStorage() {
		cout << "Audio books on hand: " << audioBookStorage;
	}
	void spillDVDStorage() {
		cout << "DVD's on hand: " << dvdStorage;
	}
	void spillVHSStorage() {
		cout << "VHS's on hand: " << vhsStorage;
	}
	void printItemInfo(Book book) {
		cout << "Name: " << book.name << endl;
		cout << "Language: " << book.language << endl;
		cout << "Author: " << book.author << endl;
		cout << "Pages: " << book.pages << endl;
		cout << "ISBN: " << book.isbn << endl;
		cout << "Location" << book.location << endl;
		cout << "Genre: " << book.genre << endl;
		cout << "Is it on hand: " << book.on_hand << endl;
	}
	void printItemInfo(Audio_Book audiobook) {
		cout << "Name: " << audiobook.name << endl;
		cout << "Language: " << audiobook.language << endl;
		cout << "Author: " << audiobook.author << endl;
		cout << "Speaker: " << audiobook.speaker << endl;
		cout << "Pages: " << audiobook.pages << endl;
		cout << "ISBN: " << audiobook.isbn << endl;
		cout << "Location" << audiobook.location << endl;
		cout << "Genre: " << audiobook.genre << endl;
		cout << "Is it on hand: " << audiobook.on_hand << endl;
	}
	void printItemInfo(DVD dvd) {
		cout << "Name: " << dvd.name << endl;
		cout << "Language: " << dvd.language << endl;
		cout << "Release date: " << dvd.release_date << endl;
		cout << "Duration: " << dvd.duration << endl;
		cout << "Location" << dvd.location << endl;
		cout << "Genre: " << dvd.genre << endl;
		cout << "Is it on hand: " << dvd.on_hand << endl;
	}
	void printItemInfo(VHS vhs) {
		cout << "Name: " << vhs.name << endl;
		cout << "Language: " << vhs.language << endl;
		cout << "Release date: " << vhs.release_date << endl;
		cout << "Duration: " << vhs.duration << endl;
		cout << "Location" << vhs.location << endl;
		cout << "Genre: " << vhs.genre << endl;
		cout << "Is it on hand: " << vhs.on_hand << endl;
	}
	void searchBook(string name) {
		bool found = false;
		int len = sizeof(bookStorage) / sizeof(bookStorage[0]);
		for (int i = 0; i < len; i++) {
			Book temp = bookStorage[i];
			if (temp.name == name) {
				printItemInfo(temp);
				bool found = true;
			}
		}
		if (!found) {
			cout << "The book name that you entered was not found" << endl;
		}
	};
};

int main() {
	int userInput;
	bool runningProgram = true;
	bool runningAddBook = true;
	Storage storage;
	cout << "Welcome to the Library's Manifest!" << endl;
	help_info();
	while (runningProgram) {
		cin >> userInput;
		if (userInput == 1) {
			cout << "You have selected 1 to add an item to the Library Manifest" << endl;
			item_create_info();
			while (runningAddBook) {
				cin >> userInput;
				if (userInput == 1) {
					createBookScript(storage);
				}
				else if (userInput == 2) {
					continue;
				}
				else if (userInput == 3) {
					continue;
				}
				else if (userInput == 4) {
					continue;
				}
				else if (userInput == 5) {
					runningAddBook = false;
					help_info();
					break;
				}
				else {
					cout << "You have entered an incorrect value, please try again." << endl;
					item_create_info();
				}
			}
		}
		else if (userInput == 2) {
			continue;
		}
		else if (userInput == 3) {
			runningProgram = false;
		}
		else {
			cout << "You have entered an incorrect value, please try again." << endl;
			help_info();
		}
	}

	return 0;
}

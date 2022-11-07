#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;



/*
These are all of the classes:
Parent class: LibraryItem
Children classes: Book, Audio_Book, DVD, VHS
*/

class LibraryItem {
public: LibraryItem() {}
public: LibraryItem(bool On_Hand) {
	on_hand = On_Hand;
}
public:
	bool on_hand;
	void check_out() {
		on_hand = false;
	}
};

class Book : public LibraryItem {
	Book() {}
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
	Audio_Book() {}
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
	DVD() {}
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
public: VHS() {}
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


/*
help_info, item_create_info, search_info, category_search_info and specific_search_info functions will print out directions/information for the user
*/


void help_info() {
	cout << "If you would like to add an item to the Library's Manifest, please press 1." << endl;
	cout << "If you would like to search for an item in the Library's Manifest, please press 2." << endl;
	cout << "If you are finished and want to exit the program, please press 3." << endl;
}
void item_create_info() {
	cout << "What item would you like to add?" << endl;
	cout << "Press 1 for a book. Press 2 for an audio book. Press 3 for a DVD. Press 4 for a VHS. Press 5 to exit." << endl;
}
void search_info() {
	cout << "Press 1 to see all available items for a category" << endl;
	cout << "Press 2 to search a cateogory for a specific name" << endl;
	cout << "Press 3 to exit the search" << endl;
}
void category_search_info() {
	cout << "Press 1 to see all available books" << endl;
	cout << "Press 2 to see all availble audio books" << endl;
	cout << "Press 3 to see all available dvds" << endl;
	cout << "Press 4 to see all available vhs's" << endl;
	cout << "Press 5 to exit category search" << endl;
}
void specific_search_info() {
	cout << "Press 1 to search for a book" << endl;
	cout << "Press 2 to search for a audio book" << endl;
	cout << "Press 3 to search for a dvd" << endl;
	cout << "Press 4 to search for a vhs" << endl;
	cout << "Press 5 to exit category search" << endl;
}
/*
These are functions create the item by taking in a vector and it's size then returning the new vector.
*/

vector<Book> createBookScript(vector<Book>bookStorage, int size) {
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
	switch (size) {
		case 0: {
			Book book(name, language, author, pages, isbn, location, genre, previous_owner, on_hand);
			bookStorage.push_back(book);
			cout << endl << endl << "You have successfully added \"" << book.name << "\" to the Library's Manifest" << endl << endl;
			return bookStorage;
			break;
		}
		case 1: {
			Book book1(name, language, author, pages, isbn, location, genre, previous_owner, on_hand);
			bookStorage.push_back(book1);
			cout << endl << endl << "You have successfully added \"" << book1.name << "\" to the Library's Manifest" << endl << endl;
			return bookStorage;
			break;
		}
		case 2: {
			Book book2(name, language, author, pages, isbn, location, genre, previous_owner, on_hand);
			bookStorage.push_back(book2);
			cout << endl << endl << "You have successfully added \"" << book2.name << "\" to the Library's Manifest" << endl << endl;
			return bookStorage;
			break;
		}
		case 3: {
			Book book3(name, language, author, pages, isbn, location, genre, previous_owner, on_hand);
			bookStorage.push_back(book3);
			cout << endl << endl << "You have successfully added \"" << book3.name << "\" to the Library's Manifest" << endl << endl;
			return bookStorage;
			break;
		}
		case 4: {
			Book book4(name, language, author, pages, isbn, location, genre, previous_owner, on_hand);
			bookStorage.push_back(book4);
			cout << endl << endl << "You have successfully added \"" << book4.name << "\" to the Library's Manifest" << endl << endl;
			return bookStorage;
			break;
		}
		case 5: {
			Book book5(name, language, author, pages, isbn, location, genre, previous_owner, on_hand);
			bookStorage.push_back(book5);
			cout << endl << endl << "You have successfully added \"" << book5.name << "\" to the Library's Manifest" << endl << endl;
			return bookStorage;
			break;
		}
	}
}
vector<Audio_Book> createAudioBookScript(vector<Audio_Book> audioBookStorage, int size) {
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

	switch (size) {
		case 0: {
			Audio_Book audiobook(name, language, author, speaker, pages, isbn, location, genre, previous_owner, on_hand);
			audioBookStorage.push_back(audiobook);
			cout << endl << endl << "You have successfully added \"" << audiobook.name << "\" to the Library's Manifest" << endl << endl;
			return audioBookStorage;
			break;
		}
		case 1: {
			Audio_Book audiobook1(name, language, author, speaker, pages, isbn, location, genre, previous_owner, on_hand);
			audioBookStorage.push_back(audiobook1);
			cout << endl << endl << "You have successfully added \"" << audiobook1.name << "\" to the Library's Manifest" << endl << endl;
			return audioBookStorage;
			break;
		}
		case 2: {
			Audio_Book audiobook2(name, language, author, speaker, pages, isbn, location, genre, previous_owner, on_hand);
			audioBookStorage.push_back(audiobook2);
			cout << endl << endl << "You have successfully added \"" << audiobook2.name << "\" to the Library's Manifest" << endl << endl;
			return audioBookStorage;
			break;
		}
		case 3: {
			Audio_Book audiobook3(name, language, author, speaker, pages, isbn, location, genre, previous_owner, on_hand);
			audioBookStorage.push_back(audiobook3);
			cout << endl << endl << "You have successfully added \"" << audiobook3.name << "\" to the Library's Manifest" << endl << endl;
			return audioBookStorage;
			break;
		}
		case 4: {
			Audio_Book audiobook4(name, language, author, speaker, pages, isbn, location, genre, previous_owner, on_hand);
			audioBookStorage.push_back(audiobook4);
			cout << endl << endl << "You have successfully added \"" << audiobook4.name << "\" to the Library's Manifest" << endl << endl;
			return audioBookStorage;
			break;
		}
		case 5: {
			Audio_Book audiobook5(name, language, author, speaker, pages, isbn, location, genre, previous_owner, on_hand);
			audioBookStorage.push_back(audiobook5);
			cout << endl << endl << "You have successfully added \"" << audiobook5.name << "\" to the Library's Manifest" << endl << endl;
			return audioBookStorage;
			break;
		}
	}
}
vector<DVD> createDVDScript(vector<DVD>dvdStorage, int size) {
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

	switch (size) {
		case 0: {
			DVD dvd(name, language, release_date, duration, location, genre, previous_owner, on_hand);
			dvdStorage.push_back(dvd);
			cout << endl << endl << "You have successfully added \"" << dvd.name << "\" to the Library's Manifest" << endl << endl;
			return dvdStorage;
			break;
		}
		case 1: {
			DVD dvd1(name, language, release_date, duration, location, genre, previous_owner, on_hand);
			dvdStorage.push_back(dvd1);
			cout << endl << endl << "You have successfully added \"" << dvd1.name << "\" to the Library's Manifest" << endl << endl;
			return dvdStorage;
			break;
		}
		case 2: {
			DVD dvd2(name, language, release_date, duration, location, genre, previous_owner, on_hand);
			dvdStorage.push_back(dvd2);
			cout << endl << endl << "You have successfully added \"" << dvd2.name << "\" to the Library's Manifest" << endl << endl;
			return dvdStorage;
			break;
		}
		case 3: {
			DVD dvd3(name, language, release_date, duration, location, genre, previous_owner, on_hand);
			dvdStorage.push_back(dvd3);
			cout << endl << endl << "You have successfully added \"" << dvd3.name << "\" to the Library's Manifest" << endl << endl;
			return dvdStorage;
			break;
		}
		case 4: {
			DVD dvd4(name, language, release_date, duration, location, genre, previous_owner, on_hand);
			dvdStorage.push_back(dvd4);
			cout << endl << endl << "You have successfully added \"" << dvd4.name << "\" to the Library's Manifest" << endl << endl;
			return dvdStorage;
			break;
		}
		case 5: {
			DVD dvd5(name, language, release_date, duration, location, genre, previous_owner, on_hand);
			dvdStorage.push_back(dvd5);
			cout << endl << endl << "You have successfully added \"" << dvd5.name << "\" to the Library's Manifest" << endl << endl;
			return dvdStorage;
			break;
		}
	}
}
vector<VHS> createVHSScript(vector<VHS>vhsStorage, int size) {
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

	switch (size) {
		case 0: {
			VHS vhs(name, language, release_date, duration, language, genre, previous_owner, on_hand);
			vhsStorage.push_back(vhs);
			cout << endl << endl << "You have successfully added \"" << vhs.name << "\" to the Library's Manifest" << endl << endl;
			return vhsStorage;
			break;
		}
		case 1: {
			VHS vhs1(name, language, release_date, duration, language, genre, previous_owner, on_hand);
			vhsStorage.push_back(vhs1);
			cout << endl << endl << "You have successfully added \"" << vhs1.name << "\" to the Library's Manifest" << endl << endl;
			return vhsStorage;
			break;
		}
		case 2: {
			VHS vhs2(name, language, release_date, duration, language, genre, previous_owner, on_hand);
			vhsStorage.push_back(vhs2);
			cout << endl << endl << "You have successfully added \"" << vhs2.name << "\" to the Library's Manifest" << endl << endl;
			return vhsStorage;
			break;
		}
		case 3: {
			VHS vhs3(name, language, release_date, duration, language, genre, previous_owner, on_hand);
			vhsStorage.push_back(vhs3);
			cout << endl << endl << "You have successfully added \"" << vhs3.name << "\" to the Library's Manifest" << endl << endl;
			return vhsStorage;
			break;
		}
		case 4: {
			VHS vhs4(name, language, release_date, duration, language, genre, previous_owner, on_hand);
			vhsStorage.push_back(vhs4);
			cout << endl << endl << "You have successfully added \"" << vhs4.name << "\" to the Library's Manifest" << endl << endl;
			return vhsStorage;
			break;
		}
		case 5: {
			VHS vhs5(name, language, release_date, duration, language, genre, previous_owner, on_hand);
			vhsStorage.push_back(vhs5);
			cout << endl << endl << "You have successfully added \"" << vhs5.name << "\" to the Library's Manifest" << endl << endl;
			return vhsStorage;
			break;
		}
	}
}

void spillBookStorage(vector<Book>bookStorage) {
	cout << "------------------------------------------" << endl;
	cout << "Books on hand: " << endl;
	for (int i = 0; i < bookStorage.size(); i++) {
		Book temp = bookStorage.at(i);
		cout << temp.name << "    ";
	}
	cout << "------------------------------------------" << endl;
}
void spillAudioBookStorage(vector<Audio_Book> audioBookStorage) {
	cout << "------------------------------------------" << endl;
	cout << "Audio Book on hand: " << endl;
	for (int i = 0; i < audioBookStorage.size(); i++) {
		Audio_Book temp = audioBookStorage.at(i);
		cout << temp.name << "    ";
	}
	cout << "------------------------------------------" << endl;
}
void spillDVDStorage(vector<DVD> dvdStorage) {
	cout << "------------------------------------------" << endl;
	cout << "DVD on hand: " << endl;
	for (int i = 0; i < dvdStorage.size(); i++) {
		DVD temp = dvdStorage.at(i);
		cout << temp.name << "    ";
	}
	cout << "------------------------------------------" << endl;
}
void spillVHSStorage(vector<VHS> vhsStorage) {
	cout << "------------------------------------------" << endl;
	cout << "VHS's on hand: " << endl;
	for (int i = 0; i < vhsStorage.size(); i++) {
		VHS temp = vhsStorage.at(i);
		cout << temp.name << "    ";
	}
	cout << "------------------------------------------" << endl;
}
void printItemInfo(Book book) {
	cout << "------------------------------------------" << endl;
	cout << "Name: " << book.name << endl;
	cout << "Language: " << book.language << endl;
	cout << "Author: " << book.author << endl;
	cout << "Pages: " << book.pages << endl;
	cout << "ISBN: " << book.isbn << endl;
	cout << "Location: " << book.location << endl;
	cout << "Genre: " << book.genre << endl;
	cout << "How many on hand: " << book.on_hand << endl;
	cout << "------------------------------------------" << endl;
}
void printItemInfo(Audio_Book audiobook) {
	cout << "------------------------------------------" << endl;
	cout << "Name: " << audiobook.name << endl;
	cout << "Language: " << audiobook.language << endl;
	cout << "Author: " << audiobook.author << endl;
	cout << "Speaker: " << audiobook.speaker << endl;
	cout << "Pages: " << audiobook.pages << endl;
	cout << "ISBN: " << audiobook.isbn << endl;
	cout << "Location: " << audiobook.location << endl;
	cout << "Genre: " << audiobook.genre << endl;
	cout << "How many on hand: " << audiobook.on_hand << endl;
	cout << "------------------------------------------" << endl;
}
void printItemInfo(DVD dvd) {
	cout << "------------------------------------------" << endl;
	cout << "Name: " << dvd.name << endl;
	cout << "Language: " << dvd.language << endl;
	cout << "Release date: " << dvd.release_date << endl;
	cout << "Duration: " << dvd.duration << endl;
	cout << "Location: " << dvd.location << endl;
	cout << "Genre: " << dvd.genre << endl;
	cout << "How many on hand: " << dvd.on_hand << endl;
	cout << "------------------------------------------" << endl;
}
void printItemInfo(VHS vhs) {
	cout << "------------------------------------------" << endl;
	cout << "Name: " << vhs.name << endl;
	cout << "Language: " << vhs.language << endl;
	cout << "Release date: " << vhs.release_date << endl;
	cout << "Duration: " << vhs.duration << endl;
	cout << "Location: " << vhs.location << endl;
	cout << "Genre: " << vhs.genre << endl;
	cout << "How many on hand: " << vhs.on_hand << endl;
	cout << "------------------------------------------" << endl;
}

void searchSpecificBook(vector<Book> &bookStorage, string userInputName) {
	bool found = false;
	int size = bookStorage.size();
	for (int i = 0; i < size; i++) {
		if (bookStorage.at(i).name == userInputName) {
			printItemInfo(bookStorage.at(i));
			found = true;
			if (bookStorage.at(i).on_hand == true) {
				cout << "Press 1 to check this book out or press anything else to exit to main menu: " << endl;
				string uinput;
				cin >> uinput;
				if (uinput == "1") {
					bookStorage.at(i).check_out();
					cout << "You have checked out \"" << bookStorage.at(i).name << "\"." << endl;
				}
				else {
					break;
				}
			}
		}
	}
	if (!found) {
		cout << endl << "----------------------------------------------------------------------------------------" << endl;
		cout << "The book name that you entered was not found" << endl;
		cout << "----------------------------------------------------------------------------------------" << endl << endl;
	}
}
void searchSpecificAudioBook(vector<Audio_Book> &audioBookStorage, string userInputName) {
	bool found = false;
	int size = audioBookStorage.size();
	for (int i = 0; i < size; i++) {
		if (audioBookStorage.at(i).name == userInputName) {
			printItemInfo(audioBookStorage.at(i));
			found = true;
			if (audioBookStorage.at(i).on_hand == true) {
				cout << "Press 1 to check this audio book out or press anything else to exit to main menu: " << endl;
				string uinput;
				cin >> uinput;
				if (uinput == "1") {
					audioBookStorage.at(i).check_out();
					cout << "You have checked out \"" << audioBookStorage.at(i).name << "\"." << endl;
				}
				else {
					break;
				}
			}
		}
	}
	if (!found) {
		cout << endl << "----------------------------------------------------------------------------------------" << endl;
		cout << "The audio book name that you entered was not found" << endl;
		cout << "----------------------------------------------------------------------------------------" << endl << endl;
	}
}
void searchSpecificDVD(vector<DVD>& dvdStorage, string userInputName) {
	bool found = false;
	int size = dvdStorage.size();
	for (int i = 0; i < size; i++) {
		if (dvdStorage.at(i).name == userInputName) {
			printItemInfo(dvdStorage.at(i));
			found = true;
			if (dvdStorage.at(i).on_hand == true) {
				cout << "Press 1 to check this dvd out or press anything else to exit to main menu: " << endl;
				string uinput;
				cin >> uinput;
				if (uinput == "1") {
					dvdStorage.at(i).check_out();
					cout << "You have checked out \"" << dvdStorage.at(i).name << "\"." << endl;
				}
				else {
					break;
				}
			}
		}
	}
	if (!found) {
		cout << endl << "----------------------------------------------------------------------------------------" << endl;
		cout << "The dvd name that you entered was not found" << endl;
		cout << "----------------------------------------------------------------------------------------" << endl << endl;
	}
}
void searchSpecificVHS(vector<VHS> &vhsStorage, string userInputName) {
	bool found = false;
	int size = vhsStorage.size();
	for (int i = 0; i < size; i++) {
		if (vhsStorage.at(i).name == userInputName) {
			printItemInfo(vhsStorage.at(i));
			found = true;
			if (vhsStorage.at(i).on_hand == true) {
				cout << "Press 1 to check this vhs out or press anything else to exit to main menu: " << endl;
				string uinput;
				cin >> uinput;
				if (uinput == "1") {
					vhsStorage.at(i).check_out();
					cout << "You have checked out \"" << vhsStorage.at(i).name << "\"." << endl;
				}
				else {
					break;
				}
			}
		}
	}
	if (!found) {
		cout << endl << "----------------------------------------------------------------------------------------" << endl;
		cout << "The vhs name that you entered was not found" << endl;
		cout << "----------------------------------------------------------------------------------------" << endl << endl;
	}
}

int main() {
	vector <Book> bookStorage;
	vector <Audio_Book> audiobookStorage;
	vector <DVD> dvdStorage;
	vector <VHS> vhsStorage;
	int userInput;
	bool runningProgram = true;

	cout << "Welcome to the Library's Manifest!" << endl;
	help_info();
	while (runningProgram) {
		cin >> userInput;
		bool runningAddItem = true;
		bool runningSearch = true;
		bool runningSpecificSearch = true;
		if (userInput == 1) {
			cout << "You have selected 1 to add an item to the Library Manifest" << endl;
			item_create_info();
			while (runningAddItem) {
				cin >> userInput;
				if (userInput == 1) {
					bookStorage = createBookScript(bookStorage, bookStorage.size());
					help_info();
					runningAddItem = false;
					break;
				}
				else if (userInput == 2) {
					audiobookStorage = createAudioBookScript(audiobookStorage, audiobookStorage.size());
					help_info();
					runningAddItem = false;
					break;
				}
				else if (userInput == 3) {
					dvdStorage = createDVDScript(dvdStorage, dvdStorage.size());
					help_info();
					runningAddItem = false;
					break;
				}
				else if (userInput == 4) {
					vhsStorage = createVHSScript(vhsStorage, vhsStorage.size());
					help_info();
					runningAddItem = false;
					break;
				}
				else if (userInput == 5) {
					runningAddItem = false;
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
			cout << "You have selected 2 to search for an item in the Library Manifest" << endl;
			search_info();
			while (runningSearch) {
				cin >> userInput;
				if (userInput == 1) {
					cout << "You selected 1 to search categories." << endl;
					category_search_info();
					cin >> userInput;
					if (userInput == 1) {
						spillBookStorage(bookStorage);
						help_info();
						runningSearch = false;
						break;
					}
					else if (userInput == 2) {
						spillAudioBookStorage(audiobookStorage);
						help_info();
						runningSearch = false;
						break;
					}
					else if (userInput == 3) {
						spillDVDStorage(dvdStorage);
						help_info();
						runningSearch = false;
						break;
					}
					else if (userInput == 4) {
						spillVHSStorage(vhsStorage);
						help_info();
						runningSearch = false;
						break;
					}
					else if (userInput == 5) {
						runningSearch = false;
						help_info();
						break;
					}
					else {
						cout << "You have entered an incorrect value, please try again." << endl;
						category_search_info();
					}
				}
				else if (userInput == 2) {
					cout << "You selected 2 to search for a specific item." << endl;
					specific_search_info();
					while (runningSpecificSearch) {
						cin >> userInput;
						string userInputName;
						if (userInput == 1) {
							cout << "Enter the name of the book that you are searching for" << endl;
							cin >> userInputName;
							searchSpecificBook(bookStorage, userInputName);
							help_info();
							runningSpecificSearch = false;
							break;
						}
						else if (userInput == 2) {
							cout << "Enter the name of the audio book that you are searching for" << endl;
							cin >> userInputName;
							searchSpecificAudioBook(audiobookStorage, userInputName);
							help_info();
							runningSpecificSearch = false;
							break;
						}
						else if (userInput == 3) {
							cout << "Enter the name of the dvd that you are searching for" << endl;
							cin >> userInputName;
							searchSpecificDVD(dvdStorage, userInputName);
							help_info();
							runningSpecificSearch = false;
							break;
						}
						else if (userInput == 4) {
							cout << "Enter the name of the vhs that you are searching for" << endl;
							cin >> userInputName;
							searchSpecificVHS(vhsStorage, userInputName);
							help_info();
							runningSpecificSearch = false;
							break;
						}
						else if (userInput == 5) {
							runningSearch = false;
							runningSpecificSearch = false;
							help_info();
							break;
						}
						else {
							cout << "You have entered an incorrect value, please try again." << endl;
							specific_search_info();
						}
					}
				}
				else if (userInput == 3) {
					help_info();
					runningSearch = false;
					break;
				}
				else {
					cout << "You have entered an incorrect value, please try again." << endl;
					search_info();
				}
			}
		}
		else if (userInput == 3) {
			runningProgram = false;
			break;
		}
		else {
			cout << "You have entered an incorrect value, please try again." << endl;
			help_info();
		}
	}
	return 0;
}

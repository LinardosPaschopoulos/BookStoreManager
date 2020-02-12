#ifndef BIBELEMENT_H
#define BIBELEMENT_H
#include <string>
using namespace std;

using namespace std;

class BibElement
{

	private:
		string Type, Id, Author, Title, Journal, Volume, Booktitle, Publisher, Pages, Year;	
	public:
		BibElement(string = "", string = "", string = "", string = "", string = "", string = "", string = "", string = "", string = "", string = "");
		~BibElement();
		void setType(string);
		void setId(string);
		void setAuthor(string);
		void setTitle(string);
		void setJournal(string);
		void setVolume(string);
		void setBooktitle(string);
		void setPublisher(string);
		void setPages(string);
		void setYear(string);
		string getType();
		string getId();
		string getAuthor();
		string getTitle();
		string getJournal();
		string getVolume();
		string getBooktitle();
		string getPublisher();
		string getPages();
		string getYear();
		void print();
};
#endif


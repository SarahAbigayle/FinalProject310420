#ifndef JOURNAL_H
#define JOURNAL_H

#include "Page.h"

using namespace std;

class Journal
{
private:
	string journalName;
	int numberOfPages = 0;
	Color coverColor;

	vector<Page> categorySort;
	vector<Page> userSort;

public:

	Journal(string name);

	~Journal();

	void rearrangePages();
	int getNumberOfPages();
	string getJournalName() { return this->journalName; };

	void changeJournalName(string newName);
	void changeJournalColor(string newColor);

	void sortByPageCategory();
	void sortByUser();

};

Journal::Journal(string journalName) 
{
	this->journalName = journalName;
	cout << "Journal created with the name: " << getJournalName() << endl;
}

Journal::~Journal()
{
	cout << "Journal destroyed" << endl;
}

#endif
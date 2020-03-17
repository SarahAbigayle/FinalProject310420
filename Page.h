#ifndef PAGE_H
#define PAGE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Page
{
private:
	string pageName;
	string pageCategory;
	string pageType;
	int pageNumber;
	string image;

public:
	Page(string pageName, string pageCategory, string pageType);

	~Page();


	string getPageName() { return this->pageName; };
	void changeTitle(string newTitle);
	void changeCategory(string newCategory);
	void changePageType();
	void addComponent();
	void addStatistics();
};

Page::Page(string pageName, string pageCategory, string pageType)
{
	this->pageName = pageName;
	this->pageCategory = pageCategory;
	this->pageType = pageType;
	cout << "Page created with the name " << getPageName() << endl;
}

Page::~Page()
{
	cout << "Page destroyed" << endl;
}



//Defined as an abstract class
class Planner : public Page
{
private:
	vector<Page> plannerTemplates;
public:
	void displayPlannerTemplates();
};

class DailyPlanner : public Planner
{
private:
	Date day;
public:
	void selectDay();
};

class WeeklyPlanner : public Planner
{
private:
	Date weekStart;
	Date weekEnd;
public:
	void selectWeek();
};

class MonthlyPlanner : public Planner
{
private:
	Date month;
public:
	void selectMonth();
};



//Defined as an abstract class
class Grid : public Page
{
private:
	int rows;
	int columns;
public:
	void changeGrid(int rows, int columns);
	void transposeGrid();
	void displayGridTemplates();
};

class CustomGrid : public Grid
{
};

class YearlyGrid : Grid
{
	int rows = 31;
	int columns = 12;
};



//Defined as an abstract class
class Collection : public Page
{
private:
	vector<Page> collectionTemplates;
public:
	void displayCollectionTemplates();
};

class ToDoList : public Collection
{
};

class List : public Collection
{
};

#endif
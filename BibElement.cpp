#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
#include "BibElement.h"

BibElement::BibElement(string temp1, string temp2, string temp3, string temp4, string temp5, string temp6, string temp7, string temp8, string temp9, string temp10)
{
	BibElement::setType(temp1);
	BibElement::setId(temp2);
	BibElement::setAuthor(temp3);
	BibElement::setTitle(temp4);
	BibElement::setJournal(temp5);
	BibElement::setVolume(temp6);
	BibElement::setBooktitle(temp7);
	BibElement::setPublisher(temp8);
	BibElement::setPages(temp9);
	BibElement::setYear(temp10);
}

BibElement::~BibElement()
{
}

void BibElement::setType(string temp1)
{
	Type=temp1;
}

void BibElement::setId(string temp2)
{
	Id=temp2;
}

void BibElement::setAuthor(string temp3)
{
	Author=temp3;
}

void BibElement::setTitle(string temp4)
{
	Title=temp4;
}

void BibElement::setJournal(string temp5)
{
	Journal=temp5;
}

void BibElement::setVolume(string temp6)
{
	Volume=temp6;
}

void BibElement::setBooktitle(string temp7)
{
	Booktitle=temp7;
}

void BibElement::setPublisher(string temp8)
{
	Publisher=temp8;
}

void BibElement::setPages(string temp9)
{
	Pages=temp9;
}

void BibElement::setYear(string temp10)
{
	Year=temp10;
}

string BibElement::getType()
{
	return Type;
}

string BibElement::getId()
{
	return Id;
}

string BibElement::getAuthor()
{
	return Author;
}

string BibElement::getTitle()
{
	return Title;
}

string BibElement::getJournal()
{
	return Journal;
}

string BibElement::getVolume()
{
	return Volume;
}

string BibElement::getBooktitle()
{
	return Booktitle;
}

string BibElement::getPublisher()
{
	return Publisher;
}

string BibElement::getPages()
{
	return Pages;
}

string BibElement::getYear()
{
	return Year;
}

void BibElement::print()
{
	cout<<"\nBook Type: "<<getType();
	if(getId()!="")
		cout<<"\nBook Id: "<<getId();
	if(getAuthor()!="")
		cout<<"\nAuthor: "<<getAuthor();
	if(getVolume()!="")
		cout<<"\nVolume: "<<getVolume();
	if(getBooktitle()!="")
		cout<<"\nBook Title: "<<getBooktitle();
	if(getPages()!="")
		cout<<"\nPages: "<<getPages();
	if(getYear()!="")
		cout<<"\nYear: "<<getYear();
	if(getPublisher()!="")
		cout<<"\nPublisher: "<<getPublisher();
	if(getJournal()!="")
		cout<<"\nJournal: "<<getJournal();
	if(getTitle()!="")
		cout<<"\nTitle: "<<getTitle();
	cout<<"\n\n";
}

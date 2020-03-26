#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;
#include "BibElement.h"

string text;

void type_sort (BibElement *Library, int size)
{
	int i, j=0, bookstart[size]={text.length()}, bookend[size]={0};
	string Book[size];
	
	for(i = 0; i<text.length(); i++)		
	{
		if(text[i] == '@')
			bookstart[j] = i;
		if(text[i] == '}')
			bookend[j] = i;
		if(bookstart[j] != text.length() && bookend[j] != 0)
			j++;
	} 
	
	for(i=0;i<size;i++)		
	{
		Book[i] = text.substr(bookstart[i], bookend[i]-bookstart[i]+1);
	}
	
	for (i = 0; i < size-1; i++) 
	{ 
	for (j = 0; j < size-i-1; j++)  
    	if (Library[j].getType() > Library[j+1].getType()) 
        { 
        	swap(Library[j], Library[j+1]); 
        	swap(Book[j], Book[j+1]);
		} 
    } 
    text="";
	for (i = 0; i < size; i++) 
	{
		text+=Book[i];
		text+='\n';
		text+='\n';
	}
}

void id_sort (BibElement *Library, int size)
{
	int i, j=0, bookstart[size]={text.length()}, bookend[size]={0};
	string Book[size];
	
	for(i = 0; i<text.length(); i++)		
	{
		if(text[i] == '@')
			bookstart[j] = i;
		if(text[i] == '}')
			bookend[j] = i;
		if(bookstart[j] != text.length() && bookend[j] != 0)
			j++;
	} 
	
	for(i=0;i<size;i++)		
	{
		Book[i] = text.substr(bookstart[i], bookend[i]-bookstart[i]+1);
	}
	
	for (i = 0; i < size-1; i++) 
	{ 
	for (j = 0; j < size-i-1; j++)  
    	if (Library[j].getId() > Library[j+1].getId()) 
        { 
        	swap(Library[j], Library[j+1]); 
        	swap(Book[j], Book[j+1]);
		} 
    } 
    text="";
	for (i = 0; i < size; i++) 
	{
		text+=Book[i];
		text+='\n';
		text+='\n';
	}
}

void author_sort (BibElement *Library, int size)
{
	int i, j=0, bookstart[size]={text.length()}, bookend[size]={0}; 
	string Book[size];
	
	for(i = 0; i<text.length(); i++)		
	{
		if(text[i] == '@')
			bookstart[j] = i;
		if(text[i] == '}')
			bookend[j] = i;
		if(bookstart[j] != text.length() && bookend[j] != 0)
			j++;
	} 
	
	for(i=0;i<size;i++)		
	{
		Book[i] = text.substr(bookstart[i], bookend[i]-bookstart[i]+1);
	}
	
	for (i = 0; i < size-1; i++) 
	{ 
	for (j = 0; j < size-i-1; j++)  
    	if (Library[j].getAuthor() > Library[j+1].getAuthor()) 
        { 
        	swap(Library[j], Library[j+1]); 
        	swap(Book[j], Book[j+1]);
		} 
    } 
    text="";
	for (i = 0; i < size; i++) 
	{
		text+=Book[i];
		text+='\n';
		text+='\n';
	}
}

void year_sort (BibElement *Library, int size)
{
	int i, j=0, bookstart[size]={text.length()}, bookend[size]={0}; 
	string Book[size];
	
	for(i = 0; i<text.length(); i++)		
	{
		if(text[i] == '@')
			bookstart[j] = i;
		if(text[i] == '}')
			bookend[j] = i;
		if(bookstart[j] != text.length() && bookend[j] != 0)
			j++;
	}
	
	for(i=0;i<size;i++)		
	{
		Book[i] = text.substr(bookstart[i], bookend[i]-bookstart[i]+1);
	}
	
	for(i=0;i<size;i++)		
	{
		Book[i] = text.substr(bookstart[i], bookend[i]-bookstart[i]+1);
	}

	for (i = 0; i < size-1; i++) 
	{ 
	for (j = 0; j < size-i-1; j++)  
    	if (Library[j].getYear() > Library[j+1].getYear()) 
        { 
        	swap(Library[j], Library[j+1]); 
        	swap(Book[j], Book[j+1]);
		} 
    } 
	text="";
	for (i = 0; i < size; i++) 
	{
		text+=Book[i];
		text+='\n';
		text+='\n';
	}
}

void sort_menu (BibElement *Library, int size)
{
	int primary, secondary, bookstart[size]={text.length()}, bookend[size]={0}, i, j;
	string Book[size];
	
	cout<<"SORTING MENU\n____________\n\n1. SORT BY TYPE\n2. SORT BY ID\n3. SORT BY AUTHOR\n4. SORT BY YEAR\n0. BACK TO BASIC MENU\n\n\nPlease make a choice from the menu above for the primary sorting value: ";
	cin>>primary;
	while (primary < 0 || primary > 4)
	{
		system("cls");
		cout<<"Please make a choice from 0-4!\n";
		system("pause");
		system("cls");
		cout<<"SORTING MENU\n____________\n\n1. SORT BY TYPE\n2. SORT BY ID\n3. SORT BY AUTHOR\n4. SORT BY YEAR\n0. BACK TO BASIC MENU\n\n\nPlease make a choice from the menu above for the primary sorting value: ";
		cin>>primary;
	}
	
	if (primary != 0)
	{
		cout<<"Please make a choice from the menu above for the secondary sorting value: ";
		cin>>secondary;
		while( secondary < 0 || secondary > 4 || secondary == primary)
		{
			if(primary == secondary)
			{
				system("cls");
				cout<<"Secondary sorting value must be different from the primary.\n";
				system("pause");
			}
			cout<<"Please make a choice from 0-4!\n";
			system("pause");
			system("cls");
			cout<<"SORTING MENU\n____________\n\n1. SORT BY TYPE\n2. SORT BY ID\n3. SORT BY AUTHOR\n4. SORT BY YEAR\n0. BACK TO BASIC MENU\n\n\nPlease make a choice from the menu above for the secondary sorting value: ";
			cin>>secondary;
		}
	}
	
	if (primary != 0 && secondary != 0)
	{
		if (secondary == 1)
		type_sort(Library, size);
		if (secondary == 2)
		id_sort(Library, size);
		if (secondary == 3)
		author_sort(Library, size);
		if (secondary == 4)
		year_sort(Library, size);
		if (primary == 1)
		type_sort(Library, size);
		if (primary == 2)
		id_sort(Library, size);
		if (primary == 3)
		author_sort(Library, size);
		if (primary == 4)
		year_sort(Library, size);
	}
}

void Librarian (BibElement *Library, int size)
{
	int i, j=0, bookstart[size]={text.length()}, bookend[size]={0}, spot;
	string  Book[size], temp;
	
	for(i = 0; i<text.length(); i++)		
	{
		if(text[i] == '@')
			bookstart[j] = i;
		if(text[i] == '}')
			bookend[j] = i;
		if(bookstart[j] != text.length() && bookend[j] != 0)
			j++;
	}
		
	for(i=0;i<size;i++)		
	{
		Book[i] = text.substr(bookstart[i], bookend[i]-bookstart[i]+1);	
	}
	
	for(j=0; j<size; j++)		
	{
		for(i=0; i<Book[j].length(); i++)
		{
			if(Book[j][i] == '{')
			{
				temp = Book[j].substr(1, i-1);
				spot = i + 1;
			}
			Library[j].setType(temp);
			if(Book[j][i] == ',' && Library[j].getType()!="")
			{
				Library[j].setId(Book[j].substr(spot, i-spot));
				break;
			}
		}
		spot=-1;
		for(i=0; i<Book[j].length(); i++)
		{
			if(Book[j][i] == 'a' && Book[j][i+1] == 'u' && Book[j][i+2] == 't' && Book[j][i+3] == 'h' && Book[j][i+4] == 'o' && Book[j][i+5] == 'r' && Book[j][i+7] == '=' && Book[j][i+9] == '"')
			{
				spot = i + 9;
			}
			if(Book[j][i] == '"' && i>spot)
			{
				Library[j].setAuthor(Book[j].substr(spot, i-spot+1));
				break;
			}
		}
		spot=-1;
		for(i=0; i<Book[j].length(); i++)
		{
			if(Book[j][i] == 't' && Book[j][i+1] == 'i' && Book[j][i+2] == 't' && Book[j][i+3] == 'l' && Book[j][i+4] == 'e' && Book[j][i+6] == '=' && Book[j][i+8] == '"' && Book[j][i-1] == '\n')
			{
				spot = i + 8;
			}
			if(Book[j][i] == '"' && i>spot && spot != -1)
			{
				Library[j].setTitle(Book[j].substr(spot, i-spot+1));
				break;
			}
		}
		spot=-1;
		for(i=0; i<Book[j].length(); i++)
		{
			if(Book[j][i] == 'j' && Book[j][i+1] == 'o' && Book[j][i+2] == 'u' && Book[j][i+3] == 'r' && Book[j][i+4] == 'n' && Book[j][i+5] == 'a' && Book[j][i+6] == 'l' && Book[j][i+8] == '=' && Book[j][i+10] == '"')
			{
				spot = i + 10;
			}
			if(Book[j][i] == '"' && i>spot && spot != -1)
			{
				Library[j].setJournal(Book[j].substr(spot, i-spot+1));
				break;
			}
		}
		spot=-1;
		for(i=0; i<Book[j].length(); i++)
		{
			if(Book[j][i] == 'v' && Book[j][i+1] == 'o' && Book[j][i+2] == 'l' && Book[j][i+3] == 'u' && Book[j][i+4] == 'm' && Book[j][i+5] == 'e' && Book[j][i+7] == '=' && Book[j][i+9] == '"')
			{
				spot = i + 9;
			}
			if(Book[j][i] == '"' && i>spot && spot != -1)
			{
				Library[j].setVolume(Book[j].substr(spot, i-spot+1));
				break;
			}
		}
		spot=-1;
		for(i=0; i<Book[j].length(); i++)
		{
			if(Book[j][i] == 'b' && Book[j][i+1] == 'o' && Book[j][i+2] == 'o' && Book[j][i+3] == 'k' && Book[j][i+4] == 't' && Book[j][i+5] == 'i' && Book[j][i+6] == 't' && Book[j][i+7] == 'l' && Book[j][i+8] == 'e' && Book[j][i+10] == '=' && Book[j][i+12] == '"')
			{
				spot = i + 12;
			}
			if(Book[j][i] == '"' && i>spot && spot != -1)
			{
				Library[j].setBooktitle(Book[j].substr(spot, i-spot+1));
				break;
			}
		}
		spot=-1;
		for(i=0; i<Book[j].length(); i++)
		{
			if(Book[j][i] == 'p' && Book[j][i+1] == 'u' && Book[j][i+2] == 'b' && Book[j][i+3] == 'l' && Book[j][i+4] == 'i' && Book[j][i+5] == 's' && Book[j][i+6] == 'h' && Book[j][i+7] == 'e' && Book[j][i+8] == 'r' && Book[j][i+10] == '=' && Book[j][i+12] == '"')
			{
				spot = i + 12;
			}
			if(Book[j][i] == '"' && i>spot && spot != -1)
			{
				Library[j].setPublisher(Book[j].substr(spot, i-spot+1));
				break;
			}
		}
		spot=-1;
		for(i=0; i<Book[j].length(); i++)
		{
			if(Book[j][i] == 'p' && Book[j][i+1] == 'a' && Book[j][i+2] == 'g' && Book[j][i+3] == 'e' && Book[j][i+4] == 's' && Book[j][i+6] == '=' && Book[j][i+8] == '"')
			{
				spot = i + 8;
			}
			if(Book[j][i] == '"' && i>spot && spot != -1)
			{
				Library[j].setPages(Book[j].substr(spot, i-spot+1));
				break;
			}
		}
		spot=-1;
		for(i=0; i<Book[j].length(); i++)
		{
			if(Book[j][i] == 'y' && Book[j][i+1] == 'e' && Book[j][i+2] == 'a' && Book[j][i+3] == 'r' && Book[j][i+5] == '=' && Book[j][i+7] == '"')
			{
				spot = i + 7;
			}
			if(Book[j][i] == '"' && i>spot && spot != -1)
			{
				Library[j].setYear(Book[j].substr(spot, i-spot+1));
				break;
			}
		}
	}
}

int main()
{
	string temp;
	char filename[64];
	int i, n=0, size=0, choice;
	fstream fileRead, fileWrite;
	
	cout<<"Please enter files exact name: ";
	cin>>filename;
	fileRead.open(filename,ios::in);
	if(!fileRead)
	{
		cerr<<"file not found...\n";
		exit(1);
	}
	do
	{
		getline(fileRead,temp);
		n++;
	}
	while(!fileRead.eof());
	fileRead.close();
	fileRead.open(filename,ios::in);
	for(i=0; i<n; i++)
	{
		if(i>0)
		text += '\n';
		getline(fileRead,temp);
		text = text + temp;
	}
	fileRead.close();
	for(i=0;i < text.length() ; i++)	
	{
		if(text[i] == '@')
			size++;
	}	
	
	BibElement Library[size];
	
	Librarian(Library, size);
	cout<<"Import has been completed successfully.\n";
	system("pause");

	do
	{
		system("cls");
		cout<<"BASIC MENU\n____________\n\n1. DISPLAY CONTENTS\n2. CLASSIFY CONTENTS\n3. CREATE FILE\n0. EXIT PROGRAM\n\n\nPlease make a choice: \n";
	    cin>>choice;
		switch(choice) 
		{
			case 1:
			system("cls");
	      	for(i=0; i<size; i++)
				Library[i].print();
	        system("pause");
	       	break;
	     	
			case 2:
			system("cls");
	      	sort_menu(Library, size);
	    	break;  			  	
			
			case 3:
	      	system("cls");
	    	fileWrite.open("output.txt",ios::out);
			if(!fileWrite)
				cerr<<"File is busy...\n";
			if(fileWrite)
				cout<<"File exported.\n";
			fileWrite<<text;
			fileWrite.close();
	      	system("pause");
	        break;
	      	
			case 0:
	        cout<<("Have a nice day\n" );
	        break;
	  	}
	}
	while(choice);	
	
	system("pause");
	return 0;
}

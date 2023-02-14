#include "stdafx.h"
#include "Publication.h"
#include "Book.h"
#include <string>
#include <iostream>
using namespace std;

Book::Book(string t, string a, double c, string i, int p) : Publication(t, a, c, i)
{
	nPages = p;
}

Book::Book() : Publication()
{
	nPages = 0;
}

void Book::showBook()
{
	cout << "Title: " << titsyle;
	cout << "Author: " << author;
	cout << "Cost: " << cost;
	cout << "isbn: " << isbn;
	cout << "pages: " << nPages;
	cout << endl;
}

void Book::GetUserData()
{
	cout << "Title??";
	getline(cin, title);
	cout << "Author?'";
	getline(cin, author);
	cout << "Cost$$";
	cin >> cost;
	cin.ignore();
	cin.clear();
	cout << "isbn??";
	getline(cin, isbn);
	cout << "pages?";
	cin >> nPages;
	cin.ignore();
	cin.clear();
}
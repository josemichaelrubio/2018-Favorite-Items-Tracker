#include "stdafx.h"
#include "Publication.h"
#include "Audio.h"
#include <iostream>
using namespace std;

Audio::Audio(string t, string a, double c, string i, int m) : Publication(t, a, c, i)
{
	nMinutes = m;
}

Audio::Audio() : Publication()
{
	nMinutes = 0;
}

void Audio::showAudio()
{
	cout << "Title: " << title;
	cout << "Author: " << author;
	cout << "Cost: " << cost;
	cout << "isbn: " << isbn;
	cout << "minutes: " << nMinutes;
	cout << endl;
}

void Audio::GetUserData()
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
	cout << "minutes?";
	cin >> nMinutes;
	cin.ignore();
	cin.clear();
}
#pragma once
#include <string>
using namespace std;

class Publication
{
protected:
	string title;
	string author;
	double cost;
	string isbn;
public:
	Publication(string t, string a, double c, string i);
	Publication();

};
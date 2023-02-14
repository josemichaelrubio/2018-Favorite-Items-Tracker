#pragma once
#include "Publication.h"
using namespace std;

class Book : public Publication
{
private:
	int nPages;
public:
	Book(string t, string a, double c, string i, int p);
	Book();
	void showBook();
	void GetUserData();

};
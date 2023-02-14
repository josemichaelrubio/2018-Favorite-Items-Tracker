#include "stdafx.h"
#include "Publication.h"
using namespace std;

Publication::Publication(string t, string a, double c, string i)
{
	title = t;
	author = a;
	cost = c;
	isbn = i;
}

Publication::Publication()
{
	title = "";
	author = "";
	cost = 0;
	isbn = "";
}
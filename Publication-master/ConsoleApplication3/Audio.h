#pragma once
#include "Publication.h"
using namespace std;

class Audio : public Publication
{
private:
	int nMinutes;
public:
	Audio(string t, string a, double cost, string isbn, int m);
	Audio();
	void showAudio();
	void GetUserData();
};
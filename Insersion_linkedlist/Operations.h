#pragma once
#include"List.h"

class Operations:public List
{
public:
	Operations();
	~Operations();
	void addnode(int);
	void delnodedata(int);
	void delnodeindex(int);
	void insert(int index, int number);
	void searchnum(int);
	void searchindex(int);
};


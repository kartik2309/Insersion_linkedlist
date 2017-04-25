#pragma once
#include<iostream>
using namespace std;
class List
{
protected:
	typedef struct node {
		int index;
		int num;
		node* next;
	}*nodeptr; nodeptr head, curr, temp;
public:
	List();
	~List();
	void printlist();
};


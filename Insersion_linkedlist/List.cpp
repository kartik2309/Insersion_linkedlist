#include "stdafx.h"
#include "List.h"

List::List()
{
	head = NULL;
	curr = NULL;
	temp = NULL;
}


List::~List()
{
}


void List::printlist()
{
	cout << "List looks like:" << endl;
	if (head == NULL) {
		cout << "List is Empty" << endl;
	}
	else {
		curr = head;
		while (curr != NULL)
		{
			cout << curr->index << " " << curr->num << endl;
			curr = curr->next;
		}
	}
}

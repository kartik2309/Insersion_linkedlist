#include "stdafx.h"
#include "Operations.h"


Operations::Operations()
{
}


Operations::~Operations()
{
}

void Operations::addnode(int addnum)
{
	nodeptr n = new node;
	n->next = NULL;
	n->num = addnum;
	if (head != NULL) {
		curr = head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = n;
		n->index = curr->index + 1;
	}
	else {
		head = n;
		n->index = 0;
	}
}

void Operations::delnodedata(int deldata)
{
	nodeptr delptr; delptr = NULL;
	curr = head;
	temp = head;
	while (curr != NULL&&curr->num != deldata) {
		temp = curr;
		curr = curr->next;
	}
	if (curr == NULL) {
		cout << "Your number wasn't found in the list!" << endl;
		delete delptr;
	}
	else {
		delptr = curr;
		curr = curr->next;
		temp->next = curr;
		if (delptr == head) {
			head = head->next;
			temp = NULL;
		}
		curr = delptr;
		curr = curr->next;
		delete delptr;
		cout << deldata <<" has Been Deleted from the Linked List!" << endl;
	}
	while (curr != NULL) {
		curr->index = curr->index - 1;
		curr = curr->next;
	}
}

void Operations::delnodeindex(int delindex)
{
	nodeptr delptr; delptr = NULL;
	curr = head;
	temp = head;
	while (curr != NULL&&curr->index != delindex) {
		temp = curr;
		curr = curr->next;
	}
	if (curr == NULL) {
		cout << "Invalid Index for the Linked List!" << endl;
		delete delptr;
	}
	else {
		delptr = curr;
		curr = curr->next;
		temp->next = curr;
		if (delptr == head) {
			head = head->next;
			temp = NULL;
		}
		curr = delptr;
		curr = curr->next;
		delete delptr;
		cout << "The Number associated with the Index " << delindex << " has been Deleted!" << endl;
	}
	while (curr != NULL) {
		curr->index = curr->index - 1;
		curr = curr->next;
	}
}

void Operations::insert(int insertindex, int num)
{
	nodeptr n = new node;
	n->num = num;
	n->index = insertindex;
	curr = head;
	while (curr != NULL && curr->index != insertindex)
		curr = curr->next;
	if (curr == NULL)
		cout << "Invalid Index!" << endl;
	else {
		if (curr == head) {
			n->next = head;
			head = n;
			curr = n->next;
		}
		else {
			n->next = curr;
			curr = head;
			while (curr != NULL && curr->next->index != insertindex)
				curr = curr->next;
			curr->next = n;
			curr = n->next;
		}
		while (curr != NULL) {
			curr->index = curr->index + 1;
			curr = curr->next;
		}
	}
}

void Operations::searchnum(int searchnum)
{
	curr = head;
	while (curr != NULL && curr->num != searchnum)
		curr = curr->next;
	if (curr == NULL)
		cout << "Your number wasn't found in the Linked List" << endl;
	else cout << "Your Number " << curr->num << " was found at index " << curr->index << endl;
}

void Operations::searchindex(int index)
{
	curr = head;
	while (curr != NULL && curr->index != index)
		curr = curr->next;
	if (curr == NULL)
		cout << "Invalid Index!" << endl;
	else cout << "The number at Index " << index << " is " << curr->num << endl;
}
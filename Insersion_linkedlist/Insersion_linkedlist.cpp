// Insersion_linkedlist.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string>
#include"associative.h"

int main()
{
	int num1, num2; string input;
	while (true) {
		cout << "\nTo Add Number press 'a'" << endl;
		cout << "To Delete a Node by number press 'dn' " << endl;
		cout << "To Delete a Node by Index Press 'di'" << endl;
		cout << "To Insert a node press 'i'" << endl;
		cout << "To Search a node by Number press 'sn'" << endl;
		cout << "To Search a node by Index press 'si'" << endl;
		cout << "To Print the List" << endl;
		cout << "To Stop press 'x'" << endl;
		cin >> input;
		if (input == "a") {
			cout << "Hit the Number you want Add:";
			cin >> num1;
			list->addnode(num1);
		}
		else if (input == "dn") {
			cout << "Hit the Number you want to Delete:";
			cin >> num1;
			list->delnodedata(num1);
		}
		else if (input == "di") {
			cout << "Press the Index of the Node you want to Delete:";
			cin >> num1;
			list->delnodeindex(num1);
		}
		else if (input == "i") {
			cout << "Hit the Index to which you want to add the number:";
			cin >> num1;
			cout << "Hit the Number you want to add to your chosen Index:";
			cin >> num2;
			list->insert(num1, num2);
		}
		else if (input == "sn") {
			cout << "Hit the Number you want to Search:";
			cin >> num1;
			list->searchnum(num1);
		}
		else if (input == "si") {
			cout << "Hit the Index You want to Search for:";
			cin >> num1;
			list->searchindex(num1);
		}
		else if (input == "p") {
			list->printlist();
		}
		else if (input == "x") {
			list->printlist();
			break;
		}
		else cout<<"Invalid Input!" << endl;
	}
	system("Pause");
    return 0;

}


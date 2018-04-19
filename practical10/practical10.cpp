//================================================================================
// Name        : practical10.cpp
// Author      :
// Version     : 1.0
// Description : practical 10 test program to utilise HashTable class
//================================================================================

#include <iostream>
#include <string>
#include "HashTableOpen.h"

// for optional question comment out previous include and uncomment this include
//#include "HashTableChaining.h"

using namespace std;


void testHash() {

    // create a table of size 5
	HashTable<string> table(5);

    // add 4 entries so table is full -not good practice!
	table.add("Noah", "noah@gmail.com");
	table.add("Dyl", "dyl@gmail.com");
	table.add("Tom", "tom@gmail.com");
	table.add("Charls", "charls@gmail.com");
	table.add("Person5", "person@gmail.com");

    // print the table
	cout << table << endl;

    // create a sentinel controlled loop to repeatedly prompt for a key, search table and
    // print result if found or not found, until sentinel key 'quit' is entered
	string key = "";
	string returnValue = "";
	do {
		cout << "Enter key (quit to finish): ";
		cin >> key;
		if(table.find(key, returnValue)){
			cout << "Found " << returnValue << endl;
		}else{
			cout << "Not found" << endl;
		}
		

	} while (key != "quit");

}


// Main method.
int main()
{
    testHash();

    // ---------------------------------------------------
    std::cout << std::endl << "Press enter to quit";
    std::cin.sync(); // flush input buffer
    std::cin.ignore(); // ignore what user enters

    return 0;
}
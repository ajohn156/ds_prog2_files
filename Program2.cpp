#include <iostream>
#include <string>
#include <fstream>
#include "Timer.h"
#include "Tree.h"

using namespace std;

void cleanWord()
{

	//input the word into function
	//check for numbers
	// remove numbers
	//check for non letters beside apostrophe 
	//toLowerCase(linefile);  change all letters to lowercase
	//return the new word, calling method needs to handle if a word is blank

}

void print()
{
	cout << "Dictionary Size: " << endl;
	cout << "Done checking and these are the results" << endl;
	cout << "---------------------------------------" << endl;
	cout << "Finished in Time: " << endl;
	cout << "There are " << endl;
	cout << " compares. " << endl;
	cout << "There are " << endl;
	cout << " compares." << endl;
	cout << "There are " << endl;

}

int main()
{
	ifstream dict;
	dict.open("test.txt");
	if (dict.is_open())
	{
		string word;
		while (dict >> word)
		{
			//BinarySearchTree<T>* insert(word);

			cleanWord();
		}
	}
	dict.close();

	print();

	
}


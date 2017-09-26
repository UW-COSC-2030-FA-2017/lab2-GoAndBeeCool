// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl << endl;

	cout << "Number of items in list cows: " << cows.size() << endl << endl;


	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;

	cout << "Number of items in list cows: " << cows.size() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	cout << "Number of items in list cows: " << cows.size() << endl;
	cout << "Number of items in list horses: " << horses.size() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	cout << "Number of items in list hourses: " << horses.size() << endl;
	cout << "Number of items in list cows: " << cows.size() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "Number of items in list cows: " << cows.size() << endl;
	cout << "Number of items in list horses: " << horses.size() << endl;
	cout << "Number of items in list pigs: " << pigs.size() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "Number of items in list cows: " << cows.size() << endl;
	cout << "Number of items in list horses: " << horses.size() << endl;
	cout << "Number of items in pigs: " << pigs.size() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "Number of items in list cows: " << cows.size() << endl;
	cout << "Number of items in list horses: " << horses.size() << endl;
	cout << "Number of items in pigs: " << pigs.size() << endl << endl;

	cout << "End of code" << endl;

	system("pause");
	return 0;
}

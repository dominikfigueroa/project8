#ifndef CLASSES_H
#define CLASSES_H
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class card{
	public:
		card();
		card(const card&);
		~card();

		card& operator=(const card&);

		friend ostream& operator<<(ostream&, card&);
		friend ifstream& operator>>(ifstream&, card&);

	private:
		string suit;
		string rank;
		string location; 
};

class player{
	public:
		player();
		~player();

		friend ostream& operator<<(ostream&, player&);
		friend ifstream& operator>>(ifstream&, player&);

	private:
		string name;
		card* hand;
		float bet;
};

#endif
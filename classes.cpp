#include "classes.h"

using namespace std;

//constuctors
	card::card(){
		suit = "suit";
		rank = "rank";
		location = "location";
	}

	player::player(){
		name = "first last";
		bet = 0.0;
	}
//COPY card constructor
	card::card(const card& src){
		suit = src.suit;
		rank  = src.rank;
		location = src.location;
	}
//deconstructors
	card::~card(){
	}
	player::~player(){
	}

//OPERATORS
	//assignment operator
	card& card::operator=(const card &newCard){
		suit = newCard.suit;
		rank = newCard.rank;
		location = newCard.location;
	}	

	//OSTREAM operator
	//for cards
	ostream& operator <<(ostream& outs, card& obj){
		cout << obj.suit << " ";
		cout << obj.rank << " ";
		cout << obj.location << " ";
		return outs;
	}
	//for players
	ostream& operator<<(ostream& outs, player& obj){
		cout << obj.name << " ";
		cout << obj.hand << " ";
		cout << obj.bet << " ";
		return outs;
	}


	//IFSTREAM operator
	//for cards
	ifstream& operator>>(ifstream& in, card& obj){
		in >> obj.suit;
		in >> obj.rank;
		return in;
	}
	//for players
	ifstream& operator>>(ifstream& in, player& obj){
		in >> obj.name;
		return in;
	}




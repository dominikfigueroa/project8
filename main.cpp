#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "classes.h"

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void shuffle(card src[]){
	int j;
	for(int i = 51; i > 0; i--){
		int randNum = rand()%(i+1);
		swap(&src[i], &src[j]);
		cout << src[i];
		cout << endl;
	}
}


int main(){
	srand(time(NULL));

	int numPlayers = 8;

	card cards[52];
	player players[8];

	ifstream fin;

	fin.open("cards");
	for (int i = 0; i < 52; i++){
		fin >> cards[i];
		cout << cards[i];
		cout << endl;
	}
	fin.close();

	fin.open("players");
	for(int i = 0; i < numPlayers; i++){
		fin >> players[i] >> players[i];
		cout << players[i];
		cout << endl;
	}
	fin.close();

	cout << endl;
	shuffle(cards);

}
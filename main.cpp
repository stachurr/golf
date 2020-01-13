#include <iostream>
#include <string>
#include <vector>
using namespace std;

//headers
#include "headers/card.h"
#include "headers/pile.h"
#include "headers/draw_pile.h"
#include "headers/hand.h"

//prototypes
void deal(Hand&, Pile&);
void print_hand(Hand&);

int main() {

	//create objects
	Draw_Pile	drp;
	Pile		dcp;
	Hand		h1, h2, h3, h4;

	int players;
	vector<Hand> hands_in_use;

	//choose number of players (2-4)
	while (players < 2 || players > 4) {
		cout << "How many players? (2-4): ";
		cin >> players;
	}

	//deal hands
	switch (players) {
		case 4:
			hands_in_use.push_back(h4);
			deal(h4, drp);
		case 3:
			hands_in_use.push_back(h3);
			deal(h3, drp);
		case 2:
			hands_in_use.push_back(h2);
			deal(h2, drp);
		default:
			hands_in_use.push_back(h1);
			deal(h1, drp);
	}

	//set names
	string name;
	for (int i = 0; i < hands_in_use.size(); i++) {
		cout << "Player " << i+1 << "'s name: ";
		cin >> name;
		hands_in_use.at(i).set_owner(name);
	}

	return 0;
}

//deal hand
void deal(Hand &h, Pile &dp) {
	for (int i = 0; i < 6; i++) {
		Card top = dp.top_card();
		dp.erase_top();
		h.set_card(top, i);
	}
}

//print hand
void print_hand(Hand &h) {
	cout << h.get_card(0).get_value() << " of " << h.get_card(0).get_suit() << endl;
	cout << h.get_card(1).get_value() << " of " << h.get_card(1).get_suit() << endl;
	cout << h.get_card(2).get_value() << " of " << h.get_card(2).get_suit() << endl;
	cout << h.get_card(3).get_value() << " of " << h.get_card(3).get_suit() << endl;
	cout << h.get_card(4).get_value() << " of " << h.get_card(4).get_suit() << endl;
	cout << h.get_card(5).get_value() << " of " << h.get_card(5).get_suit() << endl;
	cout << endl;
}
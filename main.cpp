#include <iostream>
#include <string>
using namespace std;

//headers
#include "headers/card.h"
#include "headers/pile.h"
#include "headers/draw_pile.h"
#include "headers/hand.h"

//prototypes
void deal(Hand&, Pile&);

int main() {

	//create objects
	Draw_Pile	draw_pile;
	Pile			discard_pile;
	Hand			hand1, hand2;

	//deal hands
	deal(hand1, draw_pile);
	deal(hand2, draw_pile);

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
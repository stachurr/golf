#include <vector>
#include <algorithm>
#include <random>

class Pile {
	public:
		vector<Card> pile;

		//funcs
		Pile() {}
		~Pile() {}
		Card top_card();
		void erase_top();
		void shuffle();

};

//return top card of pile
Card Pile::top_card() {
	return pile.front();
}

//erase top card of pile
void Pile::erase_top() {
	pile.erase(pile.begin()+0);
}

//shuffle pile
void Pile::shuffle() {
	srand(time(0));
	random_shuffle(pile.begin(), pile.end());
}
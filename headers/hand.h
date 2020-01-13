/*
	hand structure by index:
		0	1	2
		3	4	5
*/

class Hand {
	private:
		Card hand[6];
		Card drawn;
		string owner;

	public:
		Hand() {}
		~Hand() {}
		Card get_drawn();
		Card get_card(int);
		string get_owner();
		void set_drawn(Card);
		void set_card(Card, int);
		void set_owner(string);
};

//get drawn card
Card Hand::get_drawn() {
	return drawn;
}

//get card at index
Card Hand::get_card(int idx) {
	return hand[idx];
}

//set drawn card
void Hand::set_drawn(Card c) {
	drawn = c;
}

//set card in hand
void Hand::set_card(Card c, int idx) {
	hand[idx] = c;
}

//set name
void Hand::set_owner(string o) {
	owner = o;
}

//get name
string Hand::get_owner() {
	return owner;
}
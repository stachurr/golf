class Card {
	private:
		string suit;
		string value;
		int point_value;

	public:
		//constructors
		Card() {}
		~Card() {}
		Card(string s, string v, int pv) {
			suit = s;
			value = v;
			point_value = pv;
		}

		//functions
		string get_suit()			{ return suit; }
		string get_value()		{ return value; }
		int get_point_value()	{ return point_value; }
};
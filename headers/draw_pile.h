class Draw_Pile : public Pile {
	public:
		//funcs
		Draw_Pile();
		~Draw_Pile() {}
};

//initialize pile with cards including 2 jokers
Draw_Pile::Draw_Pile() {
	string suit, value;
	int point_value;

	//create and push all cards to draw pile
	for (int i = 0; i < 4; i++) {
		switch (i) {
			case 0:
				suit = "hearts";
				break;
			case 1:
				suit = "clubs";
				break;
			case 2:
				suit = "diamonds";
				break;
			case 3:
				suit = "spades";
				break;
		}

		for (int j = 1; j <= 13; j++) {
			switch (j) {
				case 1:
					value = "A";
					point_value = 1;
					break;
				case 11:
					value = "J";
					point_value = 10;
					break;
				case 12:
					value = "Q";
					point_value = 10;
					break;
				case 13:
					value = "K";
					point_value = 0;
					break;
				default:
					value = to_string(j);
					point_value = j;
			}

			Card c(suit, value, point_value);
			pile.push_back(c);
		}
	}

	//insert 2 jokers
	Card joker("star", "JOKER", -3);
	pile.push_back(joker);
	pile.push_back(joker);

	//shuffle when created
	shuffle();
}
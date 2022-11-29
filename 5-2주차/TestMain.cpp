#include <iostream>
#include "Player.h"
#include "Dice.h"
#include <ctime>

using namespace std;

int main() {
	cout << "202014191 ÀüÀ¯Á¤" << endl;

	srand((unsigned)time(NULL));
	Dice dice1, dice2;
	Player player1("±è±æµ¿"), player2("È«±æµ¿");
	player1.roll(dice1, dice2);
	player2.roll(dice1, dice2);
	if (player1.getTotal() > player2.getTotal()) {
		cout << player1.getName() << "´Ô ½Â¸® ==> Á¡¼ö " << 
			player1.getTotal() << ", " << player2.getTotal() << endl;
	}
	else if (player1.getTotal() < player2.getTotal()) {
		cout << player2.getName() << "´Ô ½Â¸® ==> Á¡¼ö " <<
			player1.getTotal() << ", " << player2.getTotal() << endl;
	}
	else {
		cout << "µ¿Á¡ÀÔ´Ï´Ù ==> Á¡¼ö " <<
			player1.getTotal() << ", " << player2.getTotal() << endl;
	}
}
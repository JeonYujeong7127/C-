#include <iostream>
#include "Player.h"
#include "Dice.h"
#include <ctime>

using namespace std;

int main() {
	cout << "202014191 ������" << endl;

	srand((unsigned)time(NULL));
	Dice dice1, dice2;
	Player player1("��浿"), player2("ȫ�浿");
	player1.roll(dice1, dice2);
	player2.roll(dice1, dice2);
	if (player1.getTotal() > player2.getTotal()) {
		cout << player1.getName() << "�� �¸� ==> ���� " << 
			player1.getTotal() << ", " << player2.getTotal() << endl;
	}
	else if (player1.getTotal() < player2.getTotal()) {
		cout << player2.getName() << "�� �¸� ==> ���� " <<
			player1.getTotal() << ", " << player2.getTotal() << endl;
	}
	else {
		cout << "�����Դϴ� ==> ���� " <<
			player1.getTotal() << ", " << player2.getTotal() << endl;
	}
}
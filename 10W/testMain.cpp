#include <iostream>
#include "Product.h"
#include "TV.h"
#include "Vegetable.h"
#include "Customer2.h"
using namespace std;

int main() {
	Customer2 greenjoa("ȫ�浿", 5);
	greenjoa.buy(make_unique<TV>("�Ǳ�TV", 100, 20));
	greenjoa.buy(make_unique<TV>("����TV", 200, 40));
	greenjoa.buy(make_unique<Vegetable>("�ñ�ġ", 50, "����", 5));
	greenjoa.buy(make_unique<TV>("����TV", 100, 15));
	//greenjoa.showlist();
	greenjoa.showTVlist();
	greenjoa.showVegetablelist();
	/*Customer2 greenjoa("ȫ�浿", 5);
	greenjoa.buy(new TV("�Ǳ�TV", 100, 20));
	greenjoa.buy(new TV("����TV", 200, 40));
	greenjoa.buy(new Vegetable("�ñ�ġ", 50, "����", 5));
	greenjoa.buy(new TV("����TV", 100, 15));
	greenjoa.showlist();*/
}
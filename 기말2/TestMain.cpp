#include <iostream>
#include <vector>
using namespace std;
#pragma once

class Product {
public:
	virtual ~Product() = default;
}; // virtual class
class TV: Product {};
class Cloth: Product {};
class Manager {
private:
	vector<unique_ptr<Product>> item;
public:
	void additem(TV tv) {
		item.push_back(make_unique<TV>(tv));
	};
	void additem(Cloth cloth) {
		item.push_back(make_unique<Cloth>(cloth));
	};
};



int main() {
	Manager manager;
	manager.additem(TV());
	manager.additem(Cloth());
}
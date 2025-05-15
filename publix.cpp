#include "publix.h"
using namespace std;

GroceryItem::GroceryItem() {	//defining default constructor
	name = " ";
	description = " ";
	price = 0.0;
	quantity = 0;
}

GroceryItem::GroceryItem(string name, string description, double price, int quantity) {
	this -> name = name;
	this -> description = description;
	this -> price = price;
	this -> quantity = quantity;
}

string GroceryItem::getName() const {	//getters
	return name;
}

string GroceryItem::getDescription() const {
	return description;
}

double GroceryItem::getPrice() const {
	return price;
}

int GroceryItem::getQuantity() const {
	return quantity;
}

void GroceryItem::setName(string name) {	//setters
	this -> name = name;
}

void GroceryItem::setDescription(string description) {
	this -> description = description;
}

void GroceryItem::setPrice(double price) {
	this -> price = price;
}

void GroceryItem::setQuantity(int quantity) {
	this -> quantity = quantity;
}

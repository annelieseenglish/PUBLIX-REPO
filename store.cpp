#include<iomanip>
#include<iostream>
#include "publix.h"
using namespace std;

void add(GroceryItem *items);
void remove(GroceryItem *items);
void change(GroceryItem *items);
void receipt(GroceryItem *items);
void printMenu();

int main() {

	int choice;
	int num = 5;	//number of items in array
	GroceryItem *items = new GroceryItem[num];	//dynamically allocated array

	items[0] = GroceryItem("Cereal","A breakfast staple", 3.50, 0);	//creating objects with values
	items[1] = GroceryItem("Milk", "To accompany the cereal", 4.75,0);
	items[2] = GroceryItem("Apples", "To keep the doctor away", 0.50, 0);
	items[3] = GroceryItem("Ranch", "A popular condiment", 2.00, 0);
	items[4] = GroceryItem("Dino nuggets", "A yummy and fun classic", 7.25, 0);

	do {
	cout << "1.Add items to your cart" << endl;
	cout << "2.Remove items from your cart" << endl;
	cout << "3.Change the quantity of an item" << endl;
	cout << "4.Print an itemized receipt for your cart" << endl;
	cout << "5.Check-out" << endl;

	cout << "\nPlease choose a menu item: ";
	cin >> choice;

	switch(choice) {
	   case 1:
		printMenu();
		add(items);
		break;
	   case 2:
		printMenu();
		remove(items);
		break;
	   case 3:
		printMenu();
		change(items);
		break;
	   case 4:
		receipt(items);
		break;
	   case 5:
		receipt(items);
		cout << "\nThanks for shopping!" << endl;
		delete [] items;
		return 1;;	//exit program
	   default:
		cout << "Invalid choice. Try again." << endl;
	}

	} while(true);

     return 0;
}

void add(GroceryItem *items) {
        int item;

        cout << "What would you like to add to your cart?: ";
        cin >> item;

        if (item >= 1 && item <= 5) {
		items[item - 1].setQuantity(items[item - 1].getQuantity() + 1);
		cout << "\nAdding " << items[item - 1].getName() << " to your cart...." << endl;
		cout << "You have " << items[item - 1].getQuantity()
		     << " " << items[item - 1].getName() << " in your cart.\n" << endl;
	}
	else {
		cout << "Invalid item number." << endl;
		return;
        }
}

void remove(GroceryItem *items) {
        int item;

        cout << "What would you like to remove from your cart?: ";
        cin >> item;

	if (item >= 1 && item <= 5) {
		items[item - 1].setQuantity(0);
		cout << "\nRemoving " << items[item - 1].getName() << " from your cart...." << endl;
		cout << "You have " << items[item - 1].getQuantity()
		     << " " << items[item - 1].getName() << " in your cart.\n" << endl;
	}
	else {
		cout << "Invalid item number." << endl;
		return;
	}
}

void change(GroceryItem *items) {
	int item, quantity;

	cout << "Which item would you like to change the quantity of? " << endl;
	cin >> item;
	cout << "How many do you want? " << endl;
	cin >> quantity;

	if (item >= 1 && item <= 5) {
		items[item - 1].setQuantity(quantity);
		cout << "\nYou now have " << items[item - 1].getQuantity()
		     << " " << items[item - 1].getName() << " in your cart.\n" << endl;
	}
	else {
		cout << "Invalid item number." << endl;
		return;
	}
}

void receipt(GroceryItem *items) {
	double total = 0.0;

	cout << right << setw(20) << "Receipt" << endl;
	cout << "-------------------------------------" << endl;
	cout << setw(15) << left << "Item" << setw(15) << left << "Qty" << setw(15) << left << "Price\n" << endl;

	for (int i = 0; i < 5; i++) {
	   double itemTotal = items[i].getPrice() * items[i].getQuantity();
	   cout << setw(15) << left << items[i].getName() << setw(15) << left << items[i].getQuantity() << left << fixed << setprecision(2) << "$" << itemTotal << endl;
	   total += itemTotal;
	}

	cout << "-------------------------------------" << endl;
	cout << "Total                        $" << total << endl;
}

void printMenu() {

        cout << right << setw(25) << "\nSupermarket Items" << endl;
        cout << "-----------------------------------" << endl;
        cout << "1) Cereal - $3.50" << endl;
        cout << "2) Milk - $4.75" << endl;
        cout << "3) Apples - $0.50" << endl;
        cout << "4) Ranch - $2.00" << endl;
        cout << "5) Dino nuggets - $7.25" << endl;
}

using namespace std;
#include<iostream>

class GroceryItem {
	private:
	   string name;		//private values
	   string description;
	   double price;
	   int quantity;
	public:
	   GroceryItem();	//def constructor
	   GroceryItem(string name, string description, double price, int quantity);	//4-parameter constructor

	   string getName() const;	//getters
	   string getDescription() const;
	   double getPrice() const;
	   int getQuantity() const;

	   void setName(string name);	//setters
	   void setDescription(string description);
	   void setPrice(double price);
	   void setQuantity(int quantity);
};

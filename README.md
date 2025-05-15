# 🛒 Publix Shopping Simulation (C++ Console App)

Welcome to the **Publix Shopping Simulation** — a simple, interactive C++ console application that mimics a real-world grocery shopping experience. This project was developed as part of a course assignment for COP3330 at Florida State University.

## 📋 Features

- Add grocery items to your cart
- Remove items from your cart
- Update the quantity of items
- View an itemized receipt
- Checkout and exit the simulation

## 🛍️ Sample Items Available

- Cereal
- Milk
- Apples
- Ranch
- Dino Nuggets

## 💡 How It Works

Users interact with a menu-driven console interface where they can:

1. Add items to their virtual shopping cart  
2. Remove items  
3. Change quantities  
4. View total prices with descriptions  
5. Checkout with a final receipt  

Each item is represented as a `GroceryItem` object with attributes like name, description, price, and quantity.

## 🧾 Example Output

1. Add items to your cart
2. Remove items from your cart
3. Change the quantity of an item
4. Print an itemized receipt for your cart
5. Check-out

Please choose a menu item: 1

Supermarket Items
-----------------------------------
1) Cereal - $3.50
2) Milk - $4.75
...

Adding Cereal to your cart...
You have 1 Cereal in your cart.

#How to Run

1. Clone the repository:
git clone https://github.com/annelieseenglish/PUBLIX-REPO.git
cd PUBLIX-REPO

2. Compile the project:
g++ store.cpp Publix.cpp -o publix

3. Run the app:
./publix

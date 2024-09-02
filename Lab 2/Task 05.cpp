#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Product {
    int productId;
    string productName;
    double price;
    int quantity;
    string description;
};

vector<Product> inventory;

void addProduct(int id, string name, double cost, int qty, string desc) {
    Product newProduct = {id, name, cost, qty, desc};
    inventory.push_back(newProduct);
}

void displayProduct(int id) {
    for (const auto &item : inventory) {
        if (item.productId == id) {
            cout << "ID: " << item.productId << ", Name: " << item.productName << ", Price: $" << item.price
                 << ", Quantity: " << item.quantity << ", Description: " << item.description << endl;
            return;
        }
    }
    cout << "Product not found." << endl;
}

void updateProduct(int id, string name, double cost, int qty, string desc) {
    for (auto &item : inventory) {
        if (item.productId == id) {
            item.productName = name;
            item.price = cost;
            item.quantity = qty;
            item.description = desc;
            return;
        }
    }
    cout << "Product not found." << endl;
}

int main() {
    addProduct(101, "Laptop", 899.99, 50, "High-performance laptop");
    addProduct(102, "Smartphone", 599.99, 150, "Latest model smartphone");
    addProduct(103, "Headphones", 199.99, 80, "Noise-cancelling headphones");

    displayProduct(101);

    updateProduct(101, "Gaming Laptop", 999.99, 45, "High-performance gaming laptop");
    displayProduct(101);

    displayProduct(104);

    return 0;
}

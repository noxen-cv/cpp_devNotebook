#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


class Product {
private:
    string prodID;
    string name;
    int quantity;
    double price;

public:
// constructor that sets up as the default selection when someone choses an option
    Product() : prodID(""), name(""), quantity(0), price(0.0) {}

    void addProduct(string id, string n, int q, double p) {
        prodID = id;
        name = n;
        quantity = q;
        price = p;
    }

    void restock(int q) {
        quantity += q;
    }

    void updatePrice(double p) {
        price = p;
    }

    void displayProduct() {
        cout << "\n-------------------------\n";
        cout << "Product ID: " << prodID << endl;
        cout << "Name: " << name << endl; 
        cout << "Quantity" << quantity << endl;
        cout << "Price: " << fixed << setprecision(2) << price << endl;
    }

    string getID() { 
        return prodID; 
    }
};

class Supplier {
private:
    string supID;
    string name;
    string contact;

public:
    Supplier() : supID(""), name(""), contact("") {}

    void addSupplier(string id, string n, string input) {
        supID = id;
        name = n;
        contact = input;
    }

    void updateContact(string input) {
        contact = input;
    }

    void displaySupplier() {
        cout << "\n-------------------------\n";
        cout << "Product ID: " << supID << endl;
        cout << "Name: " << name << endl; 
        cout << "Price: " << contact << endl;
    }

    string getID() { 
        return supID; 
    }
};

class Warehouse {
private:
    string warehouseID;
    string location;

public:
    Warehouse() : warehouseID(""), location("") {}

    void addWarehouse(string id, string loc) {
        warehouseID = id;
        location = loc;
    }

    void displayWarehouse() {
        cout << "\n-------------------------\n";
        cout << "Warehouse ID: " << warehouseID << endl;
        cout << "Location: " << location << endl;
    }

    string getID() { 
        return warehouseID; 
    }
};

int main() {
    Product products[10];
    Supplier suppliers[5];
    Warehouse warehouses[3];
    int prodCount = 0, suppCount = 0, wareCount = 0;

    int choice;
    do {
        cout << "\nWelcome to my noxenventory Management System\n";
        cout << "===================================================================\n";
        cout << "Product" << setw(26) << "Supplier" << setw(30) << "Warehouse\n";
        cout << "1. Add Product" << setw(26) << "5. Add Suplier" << setw(32) << "8. Add Warehouse\n";
        cout << "2. View Products" << setw(26) << "6. View Supplier" << setw(32) << "9. View Warehouses\n";
        cout << "3. Restock Product" << setw(35) << "7. Update Supplier Contact\n";
        cout << "4. Update Product Price\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1 && prodCount < 10) {
            string id, name;
            int qty;
            double price;
            cout << "Enter Product ID: ";
            getline(cin, id);
            cout << "Enter Product Name: ";
            getline(cin, name);
            cout << "Enter Quantity: ";
            cin >> qty;
            cout << "Enter Price: ";
            cin >> price;
            cin.ignore();
            products[prodCount++].addProduct(id, name, qty, price);
        } else if (choice == 2) {
            cout << "\nProduct List:\n";
            for (int i = 0; i < prodCount; i++)

                products[i].displayProduct();
                cout << "-------------------\n";
        } else if (choice == 3) {
            string id;
            int qty;
            cout << "Enter Product ID to Restock: ";
            getline(cin, id);
            cout << "Enter Quantity to Add: ";
            cin >> qty;
            cin.ignore();
            for (int i = 0; i < prodCount; i++) {
                if (products[i].getID() == id) {
                    products[i].restock(qty);
                    cout << "Restocked successfully.\n";
                    break;
                }
            }
        } else if (choice == 4) {
            string id;
            double newPrice;
            cout << "Enter Product ID to Update Price: ";
            getline(cin, id);
            cout << "Enter New Price: ";
            cin >> newPrice;
            cin.ignore();
            for (int i = 0; i < prodCount; i++) {
                if (products[i].getID() == id) {
                    products[i].updatePrice(newPrice);
                    cout << "Price updated.\n";
                    break;
                }
            }
        } else if (choice == 5 && suppCount < 5) {
            string id, name, contact;
            cout << "Enter Supplier ID: ";
            getline(cin, id);
            cout << "Enter Supplier Name: ";
            getline(cin, name);
            cout << "Enter Contact Info: ";
            getline(cin, contact);
            suppliers[suppCount++].addSupplier(id, name, contact);
        } else if (choice == 6) {
            cout << "\nSupplier List:\n";
            for (int i = 0; i < suppCount; i++)
                suppliers[i].displaySupplier();
                cout << "-------------------\n";
        } else if (choice == 7) {
            string id, contact;
            cout << "Enter Supplier ID to Update: ";
            getline(cin, id);
            cout << "Enter New Contact Info: ";
            getline(cin, contact);
            for (int i = 0; i < suppCount; i++) {
                if (suppliers[i].getID() == id) {
                    suppliers[i].updateContact(contact);
                    cout << "Contact info updated.\n";
                    break;
                }
            }
        } else if (choice == 8 && wareCount < 3) {
            string id, loc;
            cout << "Enter Warehouse ID: ";
            getline(cin, id);
            cout << "Enter Location: ";
            getline(cin, loc);
            warehouses[wareCount++].addWarehouse(id, loc);
        } else if (choice == 9) {
            cout << "\nWarehouse List:\n";
            for (int i = 0; i < wareCount; i++)
                warehouses[i].displayWarehouse();
                cout << "-------------------------";
        } else if (choice == 0) {
            cout << "Exiting program.\n";
        } else {
            cout << "Invalid or full entry.\n";
        }

    } while (choice != 0);

    return 0;
}

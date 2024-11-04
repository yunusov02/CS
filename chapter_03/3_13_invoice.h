#include <iostream>
#include <string>

using namespace std;

class Invoice {
    private:
        string partNumber;
        string partDescription;
        int quantity;
        int price;

  public:
    Invoice(string partNumber, string partDescription, int quantity, int price) {
        set_partNumber(partNumber);
        set_partDescription(partDescription);
        set_quantity(quantity);
        set_price(price);
    }

    int getInvoiceAmount() {
        return quantity * price;
    }

    void set_partNumber(string pNumber) {
        partNumber =pNumber;
    }

    void set_partDescription(string pDescription) {
        partDescription = pDescription;
    }

    void set_quantity(int q) {
        if (q > 0) {
            quantity = q;
        } else {
            quantity = 0;
        }
    }

    void set_price(int pr) {
        if (pr > 0) {
            price = pr;
        } else {
            price = 0;
        }
    }

    string get_partNumber() {
        return partNumber;
    }

    string get_partDescription() {
        return partDescription;
    }

    int get_quantity() {
        return quantity;
    }

    int get_price() {
        return price;
    }

};

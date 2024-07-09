#include <bits/stdc++.h>
using namespace std;

map<string, map<string, double>> items;
map<pair<int, int>, string> names;

void fillItems()
{
    items["Mobile"]["Samsung"] = 15000;
    items["Mobile"]["Redmi"] = 12000;
    items["Mobile"]["Apple"] = 100000;
    items["Laptop"]["HP"] = 40000;
    items["Laptop"]["Lenovo"] = 35000;
    items["Laptop"]["Macbook"] = 250000;
    items["Course"]["C"] = 1000;
    items["Course"]["C++"] = 3000;
}

class customer
{
public:
    void printBill()
    {
        double total_amount = 0;
        cout << "-------------------------------\n";
        cout << "Purchased Items:\n";
        for (auto &it : cart)
        {
            cout << it.first << ": Rs. " << it.second << "/-\n";
            total_amount += it.second;
        }
        cout << "-------------------------------\n";
        cout << "Total amount: Rs. " << total_amount << "/-\n";
        cout << "-------------------------------\n";
        cout << "***** THANK YOU & HAPPY ONLINE SHOPPING *****" << endl;
    }

    void addToCart(string category, string item)
    {
        cart[category + " - " + item] = items[category][item];
    }

private:
    map<string, double> cart;
};

class shop
{
public:
    shop() {}
    virtual void show() {}
    virtual void select(customer &obj) {}
    void showMenu()
    {
        cout << "                 Menu\n";
        cout << " -----------------------------------------\n";
        cout << "1.Mobile\n2.Laptop\n3.Programming Courses\n4.Checkout\n\n";
        cout << " -----------------------------------------\n";
    }
};

class mobile : public shop
{
public:
    void show()
    {
        cout << "- - - - - - - - - - - - -\n";
        cout << "Item    Cost\n";
        int cnt = 1;
        for (auto &it : items["Mobile"])
        {
            cout << cnt++ << ". " << it.first << " --- Rs. " << it.second << "/-\n";
        }
        cout << "- - - - - - - - - - - - -\n\n";
    }

    void select(customer &obj)
    {
        cout << "These are the smartphone categories we have....\n";
        int num;
        cout << "Enter your selection\n";
        cin >> num;
        if (num < 1 || num > 3)
        {
            cout << "Wrong Input\n";
            return;
        }
        cout << "\n\nPURCHASE SUCCESSFUL!! ";
        cout << names[{1, num}] << " IS ADDED TO THE CART\n\n";
        obj.addToCart("Mobile", names[{1, num}]);
    }
};

class laptop : public shop
{
public:
    void show()
    {
        cout << "- - - - - - - - - - - - -\n";
        cout << "Item    Cost\n";
        int cnt = 1;
        for (auto &it : items["Laptop"])
        {
            cout << cnt++ << ". " << it.first << " --- Rs. " << it.second << "/-\n";
        }
        cout << "- - - - - - - - - - - - -\n\n";
    }

    void select(customer &obj)
    {
        cout << "These are the laptop categories we have....\n";
        int num;
        cout << "Enter your selection\n";
        cin >> num;
        if (num < 1 || num > 3)
        {
            cout << "Wrong Input\n";
            return;
        }
        cout << "\n\nPURCHASE SUCCESSFUL!! ";
        cout << names[{2, num}] << " IS ADDED TO THE CART\n\n";
        obj.addToCart("Laptop", names[{2, num}]);
    }
};

class course : public shop
{
public:
    void show()
    {
        cout << "- - - - - - - - - - - - -\n";
        cout << "Item    Cost\n";
        int cnt = 1;
        for (auto &it : items["Course"])
        {
            cout << cnt++ << ". " << it.first << " --- Rs. " << it.second << "/-\n";
        }
        cout << "- - - - - - - - - - - - -\n\n";
    }

    void select(customer &obj)
    {
        cout << "These are the programming courses we have....\n";
        int num;
        cout << "Enter your selection\n";
        cin >> num;
        if (num < 1 || num > 2)
        {
            cout << "Wrong Input\n";
            return;
        }
        cout << "\n\nPURCHASE SUCCESSFUL!! ";
        cout << names[{3, num}] << " IS ADDED TO THE CART\n\n";
        obj.addToCart("Course", names[{3, num}]);
    }
};

int main()
{
    fillItems();
    names[{1, 1}] = "Samsung";
    names[{1, 2}] = "Redmi";
    names[{1, 3}] = "Apple";
    names[{2, 1}] = "HP";
    names[{2, 2}] = "Lenovo";
    names[{2, 3}] = "Macbook";
    names[{3, 1}] = "C";
    names[{3, 2}] = "C++";

    customer c;
    while (1)
    {
        shop s;
        s.showMenu();
        cout << "Please select an option to proceed further. If you choose to checkout, shopping will end and bill will be generated for the items bought so far...\n";
        int val;
        cin >> val;
        if (val == 1)
        {
            mobile mb;
            mb.show();
            mb.select(c);
        }
        else if (val == 2)
        {
            laptop lp;
            lp.show();
            lp.select(c);
        }
        else if (val == 3)
        {
            course cs;
            cs.show();
            cs.select(c);
        }
        else if (val == 4)
        {
            c.printBill();
            break;
        }
        else
        {
            cout << "Invalid option. Please try again.\n";
        }
    }
    return 0;
}

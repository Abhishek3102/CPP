#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct Product
{
    int productID;
    string name;
    string category;
};

struct Order
{
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main()
{
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "Shoes", "Fashion"},
        {103, "Medicine", "Health"},
        {104, "Bat", "Sports"},
        {105, "Mobile", "Electronics"},
    };

    deque<string> recentCustomers = {"C001", "C002", "C003"};

    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    list<Order> orderHistory;

    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 103, 5, "C004", time(0)});
    orderHistory.push_back({3, 103, 2, "C003", time(0)});

    set<string> categories;
    for (const auto &product : products)
    {
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 13},
        {103, 19},
        {104, 17},
        {105, 12},
    };

    multimap<string, Order> customerOrders;
    for (const auto &order : orderHistory)
    {
        customerOrders.insert({order.customerID, order});
    }

    unordered_map<string, string> customerData = {
        {"C001", "Alice"},
        {"C002", "Bob"},
        {"C003", "Ricky"},
        {"C004", "Jones"},
        {"C005", "Jack"},
    };

    unordered_set<int> uniqueProductIDs;
    for (const auto &product : products)
    {
        uniqueProductIDs.insert(product.productID);
    }

    cout << "\nProducts:\n";
    for (const auto &p : products)
    {
        cout << "ID: " << p.productID << ", Name: " << p.name << ", Category: " << p.category << endl;
    }

    // Print recent customers
    cout << "\nRecent Customers:\n";
    for (const auto &cust : recentCustomers)
    {
        cout << cust << " ";
    }
    cout << endl;

    // Print order history
    cout << "\nOrder History:\n";
    for (const auto &o : orderHistory)
    {
        cout << "Order ID: " << o.orderID << ", Product ID: " << o.productID << ", Quantity: " << o.quantity
             << ", Customer ID: " << o.customerID << ", Date: " << ctime(&o.orderDate);
    }

    // Print categories
    cout << "\nProduct Categories:\n";
    for (const auto &cat : categories)
    {
        cout << cat << " ";
    }
    cout << endl;

    // Print product stock
    cout << "\nProduct Stock:\n";
    for (const auto &[pid, stock] : productStock)
    {
        cout << "Product ID: " << pid << ", Stock: " << stock << endl;
    }

    // Print customer orders
    cout << "\nCustomer Orders:\n";
    for (const auto &[custID, ord] : customerOrders)
    {
        cout << "Customer: " << custID << " -> OrderID: " << ord.orderID << ", ProductID: " << ord.productID
             << ", Qty: " << ord.quantity << endl;
    }

    // Print customer data
    cout << "\nCustomer Data:\n";
    for (const auto &[id, name] : customerData)
    {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    // Print unique product IDs
    cout << "\nUnique Product IDs:\n";
    for (int id : uniqueProductIDs)
    {
        cout << id << " ";
    }
    cout << endl;

    return 0;
}
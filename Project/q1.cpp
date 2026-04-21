#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

bool login();
void menu();
void addItem(string names[], int prices[], int& count);
void viewItems(string names[], int prices[], int count);
void addCategory(string categories[], int& categoryCount);

int main()
{
    if (!login())
        return 0;

    string itemNames[MAX];
    int itemPrices[MAX];
    string categories[MAX];
    int itemCount = 0;
    int categoryCount = 0;
    int choice;

    while (true)
    {
        menu();
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input! Please enter a number." << endl;
            continue;
        }

        if (choice == 1)
        {
            addItem(itemNames, itemPrices, itemCount);
        }
        else if (choice == 2)
        {
            viewItems(itemNames, itemPrices, itemCount);
        }
        else if (choice == 3)
        {
            addCategory(categories, categoryCount);
        }
        else if (choice == 4)
        {
            cout << "Program Exit" << endl;
            return 0;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    }
}

bool login()
{
    string username, password;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        if (username == "customer" && password == "1234")
        {
            cout << "Login Successful" << endl;
            return true;
        }
        else
        {
            cout << "Wrong Login" << endl;
        }
    }
    cout << "Too many attempts. Program End." << endl;
    return false;
}

void menu()
{
    cout << "\n---- Grocery Store Management System ----" << endl;
    cout << "1. Add Item" << endl;
    cout << "2. View Items" << endl;
    cout << "3. Add Category" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter Choice: ";
}

void addItem(string names[], int prices[], int& count)
{
    if (count >= MAX)
    {
        cout << "Storage Full!" << endl;
        return;
    }

    cout << "Enter Item Name: ";
    cin.ignore();
    getline(cin, names[count]);

    cout << "Enter Item Price: ";
    cin >> prices[count];

    count++;
    cout << "Item Added Successfully" << endl;
}

void viewItems(string names[], int prices[], int count)
{
    if (count == 0)
    {
        cout << "No Item Record Found" << endl;
        return;
    }
    cout << "\n--- Inventory List ---" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << "Item " << i + 1 << endl;
        cout << "Name: " << names[i] << endl;
        cout << "Price: $" << prices[i] << endl;
        cout << "-------------------" << endl;
    }
}

void addCategory(string categories[], int& categoryCount)
{
    if (categoryCount >= MAX)
    {
        cout << "Category Storage Full!" << endl;
        return;
    }

    cout << "Enter Category Name: ";
    cin.ignore();
    getline(cin, categories[categoryCount]);

    categoryCount++;
    cout << "Category Added Successfully" << endl;
}
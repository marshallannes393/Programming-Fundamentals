#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int MAX = 100;

bool login();
void menu();
void addStuffInInventory();
void loadData(string names[], int prices[], string itemCats[], int& count, string categories[], int catCounts[], int& categoryCount);
void viewItems(string names[], int prices[], string itemCats[], int count, string categories[], int catCounts[], int categoryCount);

int main()
{
    if (!login())
        return 0;

    string itemNames[MAX];
    int itemPrices[MAX];
    string itemCategories[MAX];
    string categories[MAX];
    int categoryItemCounts[MAX];

    int choice;

    while (true)
    {
        menu();
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout << "Invalid input! Please enter a number." << endl;
            continue;
        }

        if (choice == 1)
        {
            addStuffInInventory();
        }
        else if (choice == 2)
        {
            int itemCount = 0;
            int categoryCount = 0;

            loadData(itemNames, itemPrices, itemCategories, itemCount, categories, categoryItemCounts, categoryCount);

            viewItems(itemNames, itemPrices, itemCategories, itemCount, categories, categoryItemCounts, categoryCount);
        }
        else if (choice == 3)
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
    cout << "1. Add Stuff in Inventory" << endl;
    cout << "2. Display All Items in Inventory" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter Choice: ";
}

void addStuffInInventory()
{
    string category, item;
    int price;

    cout << "Enter Category Name: ";
    cin.ignore();
    getline(cin, category);

    cout << "Enter Item Name: ";
    getline(cin, item);

    cout << "Enter Item Price: ";
    cin >> price;

    fstream file("list.txt", ios::app);
    if (file)
    {
        file << category << "," << item << "," << price << "\n";
        file.close();
        cout << "Item Added to Inventory Successfully!" << endl;
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
}

void loadData(string names[], int prices[], string itemCats[], int& count, string categories[], int catCounts[], int& categoryCount)
{
    fstream file;
    file.open("list.txt", ios::in);
    if (!file)
        return;

    string line;
    while (getline(file, line))
    {
        if (line.empty() || count >= MAX)
            continue;

        string cat = "", itm = "", prcStr = "";
        int commas = 0;

        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == ',')
            {
                commas++;
            }
            else
            {
                if (commas == 0)
                    cat += line[i];
                else if (commas == 1)
                    itm += line[i];
                else if (commas == 2)
                    prcStr += line[i];
            }
        }

        if (cat == "" || itm == "" || prcStr == "")
            continue;

        bool catExists = false;
        int cIndex = -1;
        for (int i = 0; i < categoryCount; i++)
        {
            if (categories[i] == cat)
            {
                catExists = true;
                cIndex = i;
                break;
            }
        }

        if (!catExists && categoryCount < MAX)
        {
            categories[categoryCount] = cat;
            catCounts[categoryCount] = 0;
            cIndex = categoryCount;
            categoryCount++;
        }

        names[count] = itm;
        itemCats[count] = cat;

        int p = 0;
        for (int i = 0; i < prcStr.length(); i++)
        {
            if (prcStr[i] >= '0' && prcStr[i] <= '9')
            {
                p = p * 10 + (prcStr[i] - '0');
            }
        }
        prices[count] = p;

        catCounts[cIndex]++;
        count++;
    }
    file.close();
}

void viewItems(string names[], int prices[], string itemCats[], int count, string categories[], int catCounts[], int categoryCount)
{
    if (count == 0 && categoryCount == 0)
    {
        cout << "No Items Found in Inventory" << endl;
        return;
    }

    cout << "\n--- Inventory List ---" << endl;

    for (int c = 0; c < categoryCount; c++)
    {
        cout << "[" << categories[c] << "] - Total Items: " << catCounts[c] << endl;

        for (int i = 0; i < count; i++)
        {
            if (itemCats[i] == categories[c])
            {
                cout << "  - " << names[i] << " : $" << prices[i] << endl;
            }
        }
        cout << "-------------------" << endl;
    }
}
#include <iostream>
#include <string>
#include <fstream>
#include<cstdio>
using namespace std;

const int MAX = 100;

bool login();
void menu();
void addStuffInInventory();
void loadData(string names[], int prices[], string itemCats[], int& count, string categories[], int catCounts[], int& categoryCount);
void Sale(string toBuy, int amount, string names[], int prices[], string itemCats[], int& count, string categories[], int catCounts[], int& categoryCount, int categorySales[]);
void viewItems(string names[], int prices[], string itemCats[], int count, string categories[], int catCounts[], int categoryCount);
void topSales(string categories[], int categoryCount, int categorySale[]);

int main()
{
    if (!login())
        return 0;

    string itemNames[MAX];
    int itemPrices[MAX];
    string itemCategories[MAX];
    string categories[MAX];
    int categoryItemCounts[MAX];
    int categorySale[MAX];
    int salesCount = 0;
    int salecounter = 0;
    for (int i = 0;i < MAX;i++)
        categorySale[i] = 0;

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
            salesCount++;
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
            if (salesCount < 2)
            {
                cout << "\nNot Enough Stuff In Stock" << endl;
                continue;
            }
            int itemCount = 0;
            int categoryCount = 0;

            loadData(itemNames, itemPrices, itemCategories, itemCount, categories, categoryItemCounts, categoryCount);
            string toBuy;
            cout << "Enter The Name of The Product You Want To Buy";
            cin.ignore();
            getline(cin, toBuy);
            int amount;
            cout << "Enter The Amount of Said Product You Want to Buy";
            cin >> amount;
            bool eligible = false;
            for (int i = 0;i < itemCount;i++)
            {
                if (toBuy == itemNames[i])
                {
                    eligible = true;
                    break;
                }
            }
            cout << "\nChecking Inventory for Your Desired Product" << endl;
            if (eligible)
            {
                Sale(toBuy,amount,itemNames, itemPrices, itemCategories, itemCount, categories, categoryItemCounts, categoryCount,categorySale);
                salecounter++;
            }
            else
            {
                cout << "Your Desired Product is not Available" << endl;
                continue;
            }
        }
        else if (choice == 4)
        {
            int itemCount = 0;
            int categoryCount = 0;
            if (salecounter < 1)
            {
                cout << "\nThere Have Been No Sales As of Now" << endl;
                continue;
            }
            cout << "\nHere You will Find the Top Performing Category in Total Sales" << endl;
            loadData(itemNames, itemPrices, itemCategories, itemCount, categories, categoryItemCounts, categoryCount);
            topSales(categories,categoryCount,categorySale);

        }
        else if (choice == 5)
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
    cout << "3. Buy Something From the Store(Must Add Atleast 5 Items to Inventory)" << endl;
    cout << "4. Top Sales" << endl;
    cout << "5. Exit" << endl;
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
void topSales(string categories[], int categoryCount, int categorySale[])
{
    string temp[MAX];
    int tempsale[MAX];
    for (int i = 0;i < categoryCount;i++)
    {
        temp[i] = categories[i];
        tempsale[i] = categorySale[i];
    }
    for (int i = 0;i < categoryCount;i++)
    {
        for (int j = 0;j < categoryCount - i - 1;j++)
        {
            if (tempsale[j] > tempsale[j + 1])
            {
                swap(tempsale[j], tempsale[j + 1]);
                swap(temp[j], temp[j + 1]);
            }
        }
    }
    cout << "\nThe Category Most Sold According to Our Records is:- " << temp[categoryCount - 1] << " -with - " << tempsale[categoryCount - 1] << " -sales" << endl;
}
void deleteLineFromFile(string filename, int targetLine) {
    ifstream inFile(filename);
    ofstream tempFile("temp.txt");
    if (!inFile || !tempFile) {
        cout << "Error opening files!" << endl;
        return;
    }
    string line;
    int currentLine = 1;
    while (getline(inFile, line)) {

        
        if (currentLine != targetLine) {
            tempFile << line << "\n";
        }

        currentLine++; 
    }
    inFile.close();
    tempFile.close();
    if (remove(filename.c_str()) != 0) {
        cout << "Error deleting the original file!" << endl;
        return;
    }
    if (rename("temp.txt", filename.c_str()) != 0) {
        cout << "Error renaming the temporary file!" << endl;
    }
    
}
void Sale(string toBuy, int amount, string names[], int prices[], string itemCats[], int& count, string categories[], int catCounts[], int& categoryCount, int categorySales[])
{
    int fileIndex[MAX];
    int counter = 0;
    string category;
    int totalPrice = 0;

    for (int i = 0; i < count; i++)
    {
        if (toBuy == names[i] && counter < amount)
        {
            fileIndex[counter] = i + 1;
            category = itemCats[i];
            totalPrice += prices[i];
            counter++;
        }
    }

    int k = 0;
    while (k < categoryCount)
    {
        if (categories[k] == category)
        {
            categorySales[k] += counter;
            catCounts[k] -= counter;
        }
        k++;
    }

    int itemsDeleted = 0;
    for (int i = 0; i < count; )
    {
        if (names[i] == toBuy && itemsDeleted < counter)
        {
            for (int j = i; j < count - 1; j++)
            {
                names[j] = names[j + 1];
                prices[j] = prices[j + 1];
                itemCats[j] = itemCats[j + 1];
            }
            count--;
            itemsDeleted++;
        }
        else
        {
            i++;
        }
    }

    if (counter == 0)
    {
        cout << "\nItem not found in inventory." << endl;
        return;
    }
    else if (counter < amount)
    {
        cout << "\nNot enough Stuff in Stock, Everything Available (" << counter << ") Will be Sold To You" << endl;
    }
    else
    {
        cout << "\nAll requested items have been sold to you." << endl;
    }

    cout << "Product(s) Transferred to You" << endl;
    cout << "This is The Total Bill, Pay At The Counter - Rs." << totalPrice << endl;
    cout << "\nThank You For Shopping Here" << endl;

    for (int i = counter - 1; i >= 0; i--)
    {
        deleteLineFromFile("list.txt", fileIndex[i]);
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
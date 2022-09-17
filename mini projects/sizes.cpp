#include <iostream>
#include <string>
using namespace std;

void message(string size)
{
    cout << "The size of your shirt is " << size << endl;
}

void shirtSize(int width, int length, int sleeve)
{
    string size;

    if (width <= 18)
    {
        if (length <= 28)
        {
            if (sleeve <= 8.13)
            {
                string = "S";
                return;
            }
            else
                string = "N/A" return;
        }
        else
            return "N/A";
    }
    else if (width > 18 && width <= 20)
    {
        if (length > 28 && <= 29)
        {
            if (sleeve > 8.13 && 8.38)
            {
                return "M";
            }
            else
                return "N";
        }
        else
            return "N/A";
    }
    else if (width > 20 && width <= 22)
    {
        if (length > 29 && <= 30)
        {
            if (sleeve > 8.38 && 8.63)
            {
                return "L";
            }
            else
                return "N";
        }
        else
            return "N/A";
    }
    else if (width > 22 && width <= 24)
    {
        if (length > 30 && <= 31)
        {
            if (sleeve > 8.63 && 8.88)
            {
                return "XL";
            }
            else
                return "N";
        }
        else
            return "N/A";
    }
}

int main()
{

    char choise = 'y';
    int shirtWidth, shirtLength, shirtSleeve;

    do
    {
        // Ask user for shirt details
        cout << " Enter a Shirt details" << endl;
        cout << "Shirt width: ";
        cin >> shirtWidth;
        cout << endl
             << "Shirt Length: ";
        cin >> shirtLength;
        cout << endl
             << "Shirt Sleeve: ";
        cin >> shirtSleeve;

        // Ask user whether they want to check another shirt size
        cout << " DO you want to check another T-sirt size? ";
        cin >> choise;
    } while (choise != 'n');
}
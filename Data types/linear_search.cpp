#include <iostream>
using namespace std;

// Function Prototypes
void display(int[], int);
void input(int[], int &);
int lsearch(int a[], int n, int data);

int main()
{
    // Variable and array declrations
    int a[10], n, data;

    input(a, n);

    cout << " \n The Array ->" << endl;
    display(a, n);

    cout << " \n Enter element to be searched for: ";
    cin >> data;

    int x = lsearch(a, n, data);

    if (x != -1)
    {
        cout << data << " Present at location " << x << endl;
    }
    else
    {
        cout << " Not present";
    }

    /***************** 
 Function:lsearch 
 Parameters: a[], n, data 
 Purpose: To search for the desired data element 
 entered by the user in the array 
*/
    int lsearch(int a[], int n, int data)
    {
        int c = 0, found = 0;

        while ((c < n) && !(found))
        {
            if (a[c] == data)
            {
                found++;
            }
            else
                c++;
        }

        if (found)
        {
            return (c + 1);
        }
        else
        {
            return (-1);
        }
    }

    /***************** 
 Function:input 
 Parameters: a[], n 
 Purpose: To enter the elements of the array 
 *********************************************/
    void input(int a[], int &n)
    {
        int i;
        do
        {
            cout << " Enter the number of elements <= 10:";
            cin >> n;
        }

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    /***************** 
 Function:display 
 Parameters: a[], n 
 Purpose: To display the elements of the array 
 **********************************************/

    void display(int a[], int n)
    {
        int i;
        cout << " The elements of the array are: \n";
        for (i = 0; i < n; i++)
        {
            cout << a[i] << endl;
        }
    }
}
#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int values[15], i, max, min;
    float sum = 0;
   
    for (i = 0; i < 15; i++)
	{
        cout << "Enter the values: ";
        cin >> values[i]; 
    }
        
    max = values[0];
    for (i = 0; i < 15; i++)
    {
        if (max < values[i])
            max = values[i];
    }
    
    min = values[0];
    for (i = 0; i < 15; i++)
    {
        if (min > values[i])
            min = values[i];
    }
    
    for (i = 0; i < 15; i++)
    {
        sum = sum + values[i];
    }
    
    cout << endl << "Largest element: " << max << endl;
    cout << "Smallest element: " << min << endl;
    cout << "Total Sum: " << sum << endl;
    cout << "Average: " << sum/15 << endl;
    
    getch ();
    return 0;
}

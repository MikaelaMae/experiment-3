#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i;
    
    int provA[7];
    for (int i = 0; i < 7; i++) 
	{
        cout << "Province A, Day " << i + 1 << ": ";
        cin >> provA[i];
    }
    
    int provB[7];
    for (int i = 0; i < 7; i++) 
	{
        cout << "Province B, Day " << i + 1 << ": ";
        cin >> provB[i];
    }
    
    int provC[7];
    for (int i = 0; i < 7; i++) 
	{
        cout << "Province C, Day " << i + 1 << ": ";
        cin >> provC[i];
    }
    
    cout << "  " << endl;
    
    cout << "Displaying Values: " << endl;
    for (int i = 0; i < 7; i++) 
	{
        cout << "Province A, Day " << i + 1 << " = " << provA[i] << endl; 
    }
    
    for (int i = 0; i < 7; i++) 
	{
        cout << "Province B, Day " << i + 1 << " = " << provB[i] << endl; 
    }
    
    for (int i = 0; i < 7; i++) 
	{
        cout << "Province C, Day " << i + 1 << " = " << provC[i] << endl; 
    }
    
    getch();
    return 0;
}

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i, j, size;
	char input[10];

	cout << "Enter Array Elements: ";
		cin >> input;

	for (i = 0; input[i] != '\0'; i++)
	{
		size = i;
	}

	j = i - 1;
	i = 0;

	while (input[i] > input[j])
	{
		char temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		i++;
		j--;
	}

	cout << "Reversed Elements: ";
	for (i = 0; i <= size; i++)
	{
		cout << input[i];
	}

	cout << " " << endl;
	cout << "Array Size: " << size + 1;

	getch();
	return 0;
}

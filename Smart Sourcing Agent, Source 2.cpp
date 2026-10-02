#include <iostream>
using namespace std;

struct Item
{
	string name;
	double cost = 0.0;
	double sellingPrice = 0.0;
	double platformFee = 0.0;
	double netProfit = 0.0;
};

int main()
{
	const int OPTION_EXIT = 3;
	int selection = 0; // This variable will control the options menu

	do
	{
		// Here we start showing the menu to the user
		cout << "--- MAIN MENU ---\n";
		cout << "1. Source New Item\n";
		cout << "2. View Sourcing History\n";
		cout << "3. Exit\n";
		cout << "Select an option: ";

		cin >> selection; // Here we prompt the user for input

		if (cin.fail())
		{
			cin.clear(); // Clean the error state
			cin.ignore(1000, '\n'); // Ignore invalid characters
			selection = 0; // Set the variable to 0 again
			cout << "\n Invalid input. Please enter a number (1-3). \n\n";
			continue; // Skip everything else and go back to the beginning of the loop
		}

		// Here we evaluate user's input
		if (selection == 1)
		{
			cout << "\n[Opening your Smart Sourcing Assistant...]\n\n";
			// Block 2 will be added here later
			Item newItem;
		}
		else if (selection == 2)
		{
			cout << "\n[Showing Sourcing History...]\n\n";
			//Block 4 will be added here
		}

	} while (selection != OPTION_EXIT); // We repeat the cycle as long as user does not choose to exit the program

	cout << "Goodbye!\n";
	return 0;
}

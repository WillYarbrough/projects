/*Calculator for nutrition.  Author: Will Y.
This calculator will calculate daily totals for Calories, Protein, Fats, and Carbohydrates.*/

#include<iostream>
#include<string>
#include<vector>
#include<numeric>

using namespace std;

int main() {
	vector<int> dailyMeals;
	vector<int> totCals;
	vector<int> totProtein;
	vector<int> totFats;
	vector<int> totCarbs;

	string i;
	int cals = 0;
	int protein = 0;
	int fats = 0;
	int carbs = 0;

	//Get user input for nutritional values.
	cout << "Hi!! I can help you calculate your daily calories and macronutrients. After all, a balanced diet is vital for one's health. Please fill in the values. \n\n";
	while (i != "done") {
		cout << "Calories:  " << endl;
		cin >> cals;
		cout << "Protein: " << endl;
		cin >> protein;
		cout << "Fats: " << endl;
		cin >> fats;
		cout << "Carbohydrates: " << endl;
		cin >> carbs;

		//Push nutritional values into the appropriate vector.
		totCals.push_back(cals);
		totProtein.push_back(protein);
		totFats.push_back(fats);
		totCarbs.push_back(carbs);

		cout << "Is this everything? Type 'done' if finished, or any key to enter another meal." << endl;
		cin >> i;
		
	}
	    //Display total daily values for the user.
	    cout << "Daily Total Calories: " << accumulate(totCals.begin(), totCals.end(), 0) << endl;
		cout << "Daily Total Protein: " << accumulate(totProtein.begin(), totProtein.end(), 0) << endl;
		cout << "Daily Total Fats: " << accumulate(totFats.begin(), totFats.end(), 0) << endl;
		cout << "Daily Total Carbs: " << accumulate(totCarbs.begin(), totCarbs.end(), 0) << endl;




	return 0;
}
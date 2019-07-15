#include <iostream>
using namespace std;
int main()
{
	int score;
	cout << "Enter your score : ";
	cin >> score;
	cout << "Your Grade is : ";
	if (score <=100 && score >=90)
	{
		cout << "A" << endl;
	}
	else if (score <= 89 && score >= 80)
	{
		cout << "B" << endl;
	}
	else if (score <= 79 && score >= 70)
	{
		cout << "C" << endl;
	}
	else if (score <= 69 && score >= 60)
	{
		cout << "D" << endl;
	}
	else if (score <= 59 && score >= 0)
	{
		cout << "F" << endl;
	}
	else 
	{
		cout << "Error, Please enter your new score.Using a score of 0-100." << endl;
	}
	return(0);
}
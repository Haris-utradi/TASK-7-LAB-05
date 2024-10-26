#include<iostream>
using namespace std;
int main()
{
	int s, i, n, sum = 0, j, Avg; //tm;
	cout << "How many subjects you  have:";
	cin >> n;
	if (n <= 0)
	{
		cout << "Invaid number" << endl;
		return 0;
	}

	for (i = 1; i <= n; i++)
	{
		cout << "Enter the marks of subjects " << i << ":";
		cin >> s;
		sum = sum + s;
	}
	cout << "The Sum is:" << sum << "\n";
	Avg = sum / n;
	cout << "Your Average is : " << Avg << "\n";
	cout << "\n";
	if (Avg >= 90 && Avg <= 100)
		cout << "You got Grade A" << "\n";
	else if (Avg >= 75 && Avg <= 89)
		cout << "You got GradeB" << "\n";
	else if (Avg >= 50 && Avg <= 74)
		cout << "You got Grade C" << "\n";
	else if (Avg < 50)
		cout << "You got Grade F" << "\n";
	else
		cout << "invalid average";
	return 0;
}
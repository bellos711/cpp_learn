#include <iostream>

using namespace std;

const int num_of_questions = 20;

class TestGrader
{
private:
	char correct_answers[num_of_questions];
public:

	void setKey(char the_correct_answers[])
	{
		for (int i = 0; i < num_of_questions; i++)
		{
			correct_answers[i] = the_correct_answers[i];
		}
	}
	void grade(char your_answers_array[])
	{
		int passed = 15;
		int num_of_correct = 0;
		int num_of_incorrect = 0;

		for (int i = 0; i < num_of_questions; i++)
		{
			if (your_answers_array[i] == correct_answers[i])
			{
				num_of_correct++;
			}
			else
			{
				num_of_incorrect++;
				cout << "You answered Number " << i + 1 << " wrong" << endl;
			}
		}
		if (num_of_correct >= passed)
		{
			cout << "You passed. You scored " << num_of_correct << " out of " << num_of_questions << endl;
		}
		else
		{
			cout << "You failed. You scored " << num_of_correct << " out of " << num_of_questions << endl;
			cout << "You missed " << num_of_incorrect << endl;
		}


	}
};

int main()
{
	
	TestGrader grader;
	char your_answers[num_of_questions];
	char the_correct_answers[num_of_questions] = { 'B','D','A', 'A', 'C', 'A', 'B', 'A', 'C', 'D', 'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A' };
	grader.setKey(the_correct_answers);

	char tempYourAnswer;

	char again = 'y';

	do
	{
		for (int i = 0; i < num_of_questions; i++)
		{
			cout << "Enter your answer for Number" << " " << (i + 1) << endl;
			cin >> tempYourAnswer;//your_answers[i];
			while (tempYourAnswer != 'A' && tempYourAnswer != 'B' && tempYourAnswer != 'C' && tempYourAnswer != 'D')
			{
				cout << "Enter either A, B, C, or D. . .\n";
				cin >> tempYourAnswer;
			}
			your_answers[i] = tempYourAnswer;
		}
		grader.grade(your_answers);

		cout << "Would you like to take the test again? (y/n)? ";
		cin >> again;
	} while (again=='y' || again=='Y');
	system("pause");
}
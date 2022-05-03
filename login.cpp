#include "Class_user.h"
#include "Class_Project.h"
int main()
{
	ClassUser::loadData();
	while (1)
	{
		ClassUser::saveData();
		int input;
		//system("cls");
		cout << "Press 1 for Login" << endl;
		cout << "Press 2 for Signup" << endl;
		cout << "Press 3 to Exit" << endl;
		cin >> input;
		switch (input)
		{
		case 1:
			if (int i = ClassUser::login())
				ClassProject::userOptions(i-1);
			else
				cout << "UserName or Password wrong if you dont have an account please SignUp" << endl << endl;
			break;
		case 2:
			ClassUser::signUp();
			break;
		default:
			ClassUser::displayData();
			return 0;
		}
	}
	ClassUser::displayData();
	return 0;
}
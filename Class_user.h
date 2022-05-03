#include<iostream>
#include<string>
#include<fstream>
#include "user.pb.h"

using namespace std;
int uniqueId = 1001;
static userData::Users users;
class ClassUser
{
public:
	static string encrypt(string a)
	{
		for (int i = 0; i < a.size() - 1; i+=2)
		{
			char temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
		return a;
	}
	static void signUp()
	{
		int Id;
		string name, password, email,father,mother,location;
		Id = uniqueId++;
		cout << "Enter you Name : ";
		cin >> name;
		cout << "Enter a valid Email address : ";
		cin >> email;
		getline(cin, password);
		while (1)
		{
			cout << "Type 'Exit' to close signup" << endl << endl;
			cout << "Enter a password : ";
			getline(cin,password);
			if (password.size() < 8)
			{
				if (password == "Exit") return;
				cout << "Password should be atleast eight characters" << endl;
				continue;
			}
			break;
		}
		cout << "Enter Father's Name : ";
		cin >> father;
		cout << "Enter Mother's Name : ";
		cin >> mother;
		cout << "Enter Your Location : ";
		cin >> location;
		userData::User* u = users.add_person();
		u->set_id(Id);
		u->set_email(email);
		u->set_name(name);
		u->set_password(encrypt(password));
		u->set_father(father);
		u->set_mother(mother);
		u->set_location(location);
	}
	static void saveData()
	{
		fstream output("userData.bin", ios::out | ios::trunc | ios::binary);
		if (!users.SerializeToOstream(&output))
			cerr << "Failed to write User Data." << endl;
	}
	static void loadData()
	{
		fstream input("userData.bin", ios::in | ios::binary);
		if (!users.ParseFromIstream(&input))
			cerr << "File is Empty" << endl;
		uniqueId += users.person_size();
	}
	static void displayData()
	{
		for (int i = 0; i < users.person_size(); i++)
		{
			userData::User u = users.person(i);
			cout << "ID : " << u.id() << endl;
			cout << "Name : " << u.name() << endl;
			cout << "Email : " << u.email() << endl;
			cout << "Password : " << u.password() << endl;
			cout << "Father's Name : " << u.father() << endl;
			cout << "Mother's Name : " << u.mother() << endl;
			cout << "Location : " <<u.location()<< endl << endl << endl;
		}
	}
	static int checkMail(string a)
	{
		int i;
		for (i = 0; i < users.person_size(); i++)
			if (users.person(i).email() == a)
				return i+1;
		return 0;
	}
	static bool checkPass(int a, string b)
	{
		if (encrypt(b) == users.person(a - 1).password())
			return true;
		return false;
	}
	static int login()
	{
		int index;
		string mail, pass;
		cout << "Enter Email ID : ";
		cin >> mail;
		if (!(index = checkMail(mail)))
		{
			cout << "Email Does not Exist" << endl << endl;
			return 0;
		}
		cout << "Enter PassWord : ";
		cin >> pass;
		if (checkPass(index, pass))
		{
			cout<<"Login Success!"<<endl<<endl;
			return index;
		}
		cout<<"Password Wrong! "<<endl<<endl;
		return 0;
	}
};

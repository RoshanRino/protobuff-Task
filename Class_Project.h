#include<iostream>
#include<string>
#include<fstream>
#include<ctime>
#include "Project.pb.h"
#include "Class_File.h"

using namespace std;
static projectdata::myProjects projects;

class ClassProject
{
public:
	static bool check(string a)
	{
		for (int i = 0; i < projects.project_size(); i++)
			if (a == projects.project(i).projectname())
				return false;
		return true;
	}
	static void saveData(int id)
	{
		fstream output(to_string(id+1) + ".bin", ios::out | ios::trunc | ios::binary);
		if (!projects.SerializeToOstream(&output))
			cerr << "Failed to write User Data." << endl;
	}
	static void loadData(int id)
	{
		fstream input(to_string(id+1) + ".bin", ios::in | ios::binary);
		if (!projects.ParseFromIstream(&input))
			cerr << "File is Empty" << endl;
	}
	static void createNewProject()
	{
		system("cls");
		string name,temp,temp2;
		const time_t now = time(0);
		char now1[26];
		ctime_s(now1, 26, &now);
		projectdata::myProject* p = projects.add_project();
		p->set_projectid(projects.project_size());
		p->set_currentversion(1);
		p->set_datecreated((string)now1);
		p->set_timecreated("18:00");
		getline(cin, name);
		while (1)
		{
			cout << "Enter a Name for your File : ";
			getline(cin, name);
			if (check(name))
			{
				p->set_projectname(name);
				break;
			}
			else
				cout << "There is already a file with this name choose a different name" << endl << endl << endl;
		}

	}
	static int openProject(int projectId)
	{
		system("cls");
		int fileee,i;
		if (projects.project_size() < 1)
		{
			cout << "You do not have any Files Create a new One" << endl << endl;
			return 0;
		}
		cout << "P.Id     Project Name                    TimeCreated"<< endl;
		for ( i = 0; i < projects.project_size(); i++)
		{
			if (!projects.project(i).projectid() == 0)
			{
				cout.width(4); cout.fill(' ');
				cout << left << projects.project(i).projectid();
				cout << "     ";
				cout.width(20); cout.fill(' ');
				cout << projects.project(i).projectname() << "     ";
				cout << projects.project(i).datecreated() << endl;
			}
		}
		while (1)
		{
			cout << endl << endl << "Enter the Id of the project u want to Open";
			cin >> fileee;
			if (fileee <= i && fileee>0)
			{
				int a = ClassFiles::fileOperations(projectId, (fileee-1));
				projects.mutable_project(projectId)->set_currentversion(a);
				return fileee;
			}
			else
				cout << "The id you have entered does not Exist" << endl << endl;
		}
	}
	static int deleteProject(int projectId)
	{
		system("cls");
		int input, i;
		if (projects.project_size() < 1)
		{
			cout << "You do not have any Files Create a new One" << endl << endl;
			return 0;
		}
		cout << "S.No     Project Name                    TimeCreated" << endl;
		for (i = 0; i < projects.project_size(); i++)
		{
			cout.width(4); cout.fill(' ');
			cout << left << projects.project(i).projectid();
			cout << "     ";
			cout.width(20); cout.fill(' ');
			cout << projects.project(i).projectname() << "     ";
			cout << projects.project(i).datecreated() << endl;
		}
		cout << endl << endl<<"Enter the Id of the File you want to delete : ";
		cin >> input;
		if (input > 0 && input <= projects.project_size())
		{
			projects.mutable_project(input)->Clear();
		}
	}
	static void userOptions(int id)
	{
		loadData(id);
		while (1)
		{
			saveData(id);
			loadData(id);
			cout << "Press 1 to create a new File" << endl;
			cout << "Press 2 to open an existing File" << endl;
			cout << "Press 3 to delete a File" << endl;
			cout << "Press 4 to Logout" << endl;
			int input,fileId;
			cin >> input;
			switch (input)
			{
			case 1:
				createNewProject();
				break;
			case 2:
				fileId = openProject(id);
				break;
			case 3:
				deleteProject(id);
				break;
			case 4:
				return;
			default:
				break;
			}
		}
	}
};
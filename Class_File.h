#include<iostream>
#include<string>
#include<fstream>
#include "Files.pb.h"

using namespace std;
static fileData::myFiles versions;
class ClassFiles
{
public:
	static void saveData(int projectId, int fileId)
	{
		fstream output(to_string(projectId + 1) + "_" + to_string(fileId + 1) + ".bin", ios::out | ios::trunc | ios::binary);
		if (!versions.SerializeToOstream(&output))
			cerr << "Failed to write User Data." << endl;
	}
	static void loadData(int projectId, int fileId)
	{
		fstream input(to_string(projectId + 1) + "_" + to_string(fileId + 1) + ".bin", ios::in | ios::binary);
		if (!versions.ParseFromIstream(&input))
			cerr << "File is Empty" << endl;
	}
	static void createNewfile()
	{
		string name;
		fileData::File* p = versions.add_files();
		p->set_versionnumber(versions.files_size());
		const time_t now = time(0);
		char now1[26];
		ctime_s(now1, 26, &now);
		p->set_time((string)now1);
		p->set_operationcount(0);
		cout << "Created new File" << endl << endl;
	}
	static void add(int number)
	{
		system("cls");
		string a;
		cin.ignore();
		cout << "Enter the line to be added"<<endl;
		getline(cin, a);
		fileData::Line* L;
		L=versions.mutable_files(number)->add_data();
		L->set_line(a);
		
		versions.mutable_files(number)->set_operationcount(versions.files(number).operationcount() + 1);
	}
	static void display(int number)
	{
		system("cls");
		cout << "version Number : " << versions.files(number).versionnumber() <<"     "<<"CreatedTime:"<<versions.files(number).time()<< endl << endl;
		if (versions.files(number).data_size() < 1)
		{
			cout<<"File is empty"<<endl<<endl;
			return;
		}
		fileData::File f;
		f = versions.files(number);
		for (int i = 0; i <f.data_size(); i++)
		{
			cout.width(3); cout.fill(' ');
			cout << (i+1) << " ";
			cout << f.data(i).line()<<endl;
		}
		cout << endl << endl << endl << endl;
	}
	static void deleteAll(int number)
	{
		versions.mutable_files(number)->clear_data();
		versions.mutable_files(number)->set_operationcount(versions.files(number).operationcount() + 1);
	}
	static void update(int number)
	{
		system("cls");
		string a;
		int lineCount = versions.files(number).data_size(),updateLine;
		cout << "Enter the line you want to Update : ";
		cin >> updateLine;
		if (updateLine <= lineCount && updateLine>0)
		{
			cout<< "Enter the Text to Replace the line : ";
			cin.ignore();
			getline(cin, a);
			versions.mutable_files(number)->mutable_data(updateLine-1)->set_line(a);
			versions.mutable_files(number)->set_operationcount(versions.files(number).operationcount() + 1);
		}
	}
	static void deleteLine(int number)
	{ 
		system("cls");
		int lineCount = versions.files(number).data_size(), deleteLine;
		cout << "Enter the line you want to delete : ";
		cin >> deleteLine;
		
		for (auto iter = versions.mutable_files(number)->mutable_data()->begin(); iter != versions.mutable_files(number)->mutable_data()->end(); iter++)
		{
			if (versions.files(number).data(deleteLine - 1).line() == iter->line())
				versions.mutable_files(number)->mutable_data()->erase(iter);
		}
	}
	static void updateVersion(int i)
	{
		system("cls");
		createNewfile();
		for (int j = 0; j < versions.files(i).data_size(); j++)
			versions.mutable_files(i+1)->add_data()->set_line(versions.files(i).data(j).line());
		versions.mutable_files(i+1)->set_versionnumber(i + 2);
	}
	static int fileOperations(int projectId, int fileId)
	{
		int input,revert;
		versions.clear_files();
		loadData(projectId,fileId);
		int currentVersion = versions.files_size()-1;
		while (1)
		{
			saveData(projectId,fileId);
			loadData(projectId, fileId);
			if (versions.files_size()==0)
			{
				createNewfile();
				currentVersion++;
				continue;
			}
			if (versions.files(currentVersion).operationcount() > 4)
			{
				updateVersion(currentVersion);
				cout << "Version Updated" << endl << endl;
				currentVersion++;
			}
			cout << "Press 1 to Display file" << endl;
			cout << "Press 2 to add a line" << endl;
			cout << "Press 3 to update a line" << endl;
			cout << "Press 4 to delete a line" << endl;
			cout << "Press 5 to delete whole text" << endl;
			cout << "Press 6 to revert to older version" << endl;
			cout << "Press 7 to exit" << endl;
			cin >> input;
			switch (input)
			{
			case 1:
				display(currentVersion);
				break;
			case 2:
				add(currentVersion);
				break;
			case 3:
				update(currentVersion);
				break;
			case 4:
				deleteLine(currentVersion);
				break;
			case 5:
				deleteAll(currentVersion);
				break;
			case 6:
				system("cls");
				cout << "Enter the Version you Want to Revert to : ";
				cin >> revert;
				if (revert > currentVersion)
					cout << "Connot revert to That version" << endl << endl;
				else
				{
					currentVersion = revert-1;
					versions.mutable_files(currentVersion)->set_operationcount(0);
				}
				break;
			case 7:
				return currentVersion;
			default:
				break;

			}

		}

	}
};
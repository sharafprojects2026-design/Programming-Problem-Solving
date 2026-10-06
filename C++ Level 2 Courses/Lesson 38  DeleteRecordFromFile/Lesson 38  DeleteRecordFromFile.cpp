#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

void LoadDataFromFileToVector(string FileName, vector <string> &vFileContent)
{
	fstream MyFile;
	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		string line;
		while (getline(MyFile, line))
		{
			vFileContent.push_back(line);
		}
		MyFile.close();
	}


}

void SaveVectorToFile(string FileName, vector <string>vFileContent)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out);

	if (MyFile.is_open());
	{
		for (string& line : vFileContent)
		{
			if (line != "")
			{
				MyFile << line << endl;
			}
		}
	}
}

void DeleteRecordFromFile(string FileName, string Record)
{
	vector <string>vFileContent;

	LoadDataFromFileToVector(FileName, vFileContent);

	for (string& Line : vFileContent)
	{
		if (Line == Record)
		{
			Line = "";
		}
	}
	SaveVectorToFile(FileName, vFileContent);

}


void PrintFileContent(string FileName)
{
	fstream MyFile;
	MyFile.open(FileName, ios::in);
	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			cout << Line << endl;
		}
		MyFile.close();
	}
}
int main()
{
	vector <string> vFileContent;
	cout << "File Contet Before Delete:\n";
	PrintFileContent("MyFile.txt");

	DeleteRecordFromFile("MyFile.txt", "Ali");

	cout << "\n File Content After Delete:\n";

	PrintFileContent("MyFile.txt");
	


	return 0;
   
}


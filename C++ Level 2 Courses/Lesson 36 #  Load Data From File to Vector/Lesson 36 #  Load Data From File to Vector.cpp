#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void LoadDataFromFileToVector(string FileName, vector<string>& vFileContent)
{
	fstream MyFiles;
	MyFiles.open(FileName, ios::in);
	if (MyFiles.is_open())
	{
		string line;
		while (getline(MyFiles,line))
		{
			vFileContent.push_back(line);

		}
		MyFiles.close();
	}
}


int main()
{
	vector <string> cFilcontent;

	LoadDataFromFileToVector("MyFiles.txt", cFilcontent);

	for (string& line : cFilcontent)
	{
		cout << line << endl;
	}
	return 0;


}
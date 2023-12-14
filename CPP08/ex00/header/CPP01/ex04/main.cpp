#include "header/main.h"

int return_error(std::string text)
{
	std::cout << text;
	return (1);
}

int	main(int argc, char *argv[])
{
	std::string filename;					// original file name
	std::string newname;					// new file for replaced text
	std::string s1;							// text to replace
	std::string s2;							// text after replaced
	std::string data;						// stores temporaly data for each line
	std::string alldata;					// concatinated data (all adta)
	std::string::size_type	point = 0;		// index for finding the replace text

	if (argc != 4)
		return (return_error("This program needs 3 arguments.\n"));
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1 == s2)
		return (return_error("The two strings are same.\n"));
	if (filename.empty() || s1.empty())
		return (return_error("Argument not valid.\n"));
	newname = filename + ".replace";

	std::ifstream ifs(filename);							//check file to read
	if (!ifs)
		return (return_error("can't open originalfile\n"));
	std::ofstream nfs(newname);								//check file to write
	if (!nfs)
		return (return_error("can't open newfile\n"));
	while (!ifs.eof())										//read data by line and concatinate
	{
		std::getline(ifs, data);
		if (!ifs.eof())
			data += "\n";
		alldata += data;
	}
	while(point != std::string::npos)						//find the replacable string one by one
	{
		point = alldata.find(s1);
		if (point == std::string::npos)
			break;
		alldata.erase(point, s1.length());
		alldata.insert(point, s2);
		point += s2.length();
	}
	nfs << alldata;											//write the data to file
	return (0);
}

#include <fstream>
#include <iostream>
#include <string>

int find_string(std::string line,std::string s1)
{
    int i = 0;

    while(line[i])
    {
        if(s1[i] != line[i])
            break;
        i++;
    }
    if(s1[i] == '\0')
        return i-1;
    return 0;
}
int replace_string(std::string filename,std::string s1,std::string s2)
{
    std::ifstream old_file(filename);
    if (!old_file) {
        std::cerr << "Error: unable to open input file: " << filename << std::endl;
        return 1;
    }
    std::ofstream new_file(filename + ".replace");
    if (!new_file) {
        std::cerr << "Error: unable to open input file: " << filename + ".replace" << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(old_file, line)) {
        for(int i=0;line[i];i++)
        {
            int result = find_string(&line[i],s1);
            if(!result)
            {
                new_file << line[i];
            }
            else
            {
                new_file << s2;
                i += result;
            }
        }
        if(old_file.peek() != EOF)
        {
            new_file << "\n";
        }
    }
    new_file.close();
	old_file.close();
    return (0);
}
int main(int argc,char **argv)
{
    if (argc != 4)
    {
        std::cout << "Invalid args: format : ./SED_IS_FOR_LUSERS filename str1 str2" << std::endl;
	    return 1; 
    } else if (*argv[2] == '\0' || *argv[3] == '\0') {
		std::cout << "Invalid args: str1 and str2 must not be \\0" << std::endl;
		return 1;
	}
    std::string filename = argv[1];
    std::string s1= argv[2];
    std::string s2= argv[3];
    return (replace_string(filename,s1,s2));
}
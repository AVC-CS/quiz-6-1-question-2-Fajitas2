#include "main.hpp"

int main()
{
   string filename = "employee.txt";
    int empN = 0;

    writeFile(filename, empN);
    cout << "File created with " << empN << " employee records\n";

    readFile(filename, empN);
    cout << "The total number of employees read " << empN << endl;
    return 0;
    
    
    
}
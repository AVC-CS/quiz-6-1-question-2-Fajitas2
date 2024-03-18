#include "main.hpp"

int main()
{

    
    
    string filename = "employee.txt";
    int empN;

    writeFile(filename, empN);
    cout << "File created with " << empN << " employee records\n";

    readFile(filename, empN);
    cout << "The total number of employees read " << empN << endl;
    return 0;
    
}
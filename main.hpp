/***************************************************
 * Code your program here
 ***************************************************/
 #include <iostream> 
 #include <fstream>
 using namespace std;

 void writeFile(const string& filename, int& empN) {
    ofstream ofs(filename);
    if (!ofs.is_open()) {
        cout << "File Open Error\n";
        exit(0);
    }
    int N;
    cout << "Enter the number of employees: ";
    cin >> N;
    ofs << N << endl;
    for (int i = 0; i < N; i++) {
        int id;
        string names, department;
        double salary;
        cout << "Enter employee details (id name department salary): ";
        cin >> id >> names >> department >> salary;
        ofs << id << " " << names << " " << department << " " << salary << endl;
    }
    ofs.close();
    empN = N;
}

void readFile(const string& filename, int& empN) {
    ifstream ifs(filename);
    if (!ifs.is_open()) {
        cout << "File Open Error\n";
        exit(0);
    }
    int N;
    string names, department;
    double salary;
    int id;
    int sum = 0;
    float avg;
    ifs >> N;
    for (int i = 0; i < N; i++) {
        ifs >> id >> names >> department >> salary;
        sum += salary;
        cout << " id: " << id << ", Name: " << names << ", Department: " << department << ", Salary: " << salary << endl;
    }
    avg = static_cast<float>(sum) / N;
    cout << " Total of salaries: " << sum << ", Average of salaries: " << avg << endl;
    empN = N;
}

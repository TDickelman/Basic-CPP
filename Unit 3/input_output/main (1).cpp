#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
    string inputFile,fname,lname;
    ofstream fout;
    ifstream fin;
    double salary, raise;
    cin>>inputFile;
    fin.open(inputFile.c_str());
    fout.open("Ch3_Ex5Output.dat");
    while (fin>>lname>>fname>>salary>>raise){
        double updatedSalary=salary+(raise*salary/100.0);
        fout<<fname<<" "<<lname<<" "<<setprecision(2)<<fixed<<updatedSalary<<"\n";
    }
  
    fin.close();
    fout.close();
    return 0;
}

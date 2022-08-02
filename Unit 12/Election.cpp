#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
int* votes = NULL; // Pointer to int, initialize to nothing.
int n; // Size needed for array
cout <<"Enter the number of candidates"<<"\n";
cin >> n; // Read in the size
votes = new int[n];
string* names = NULL;
names = new string[n];
int total = 0, max = 0;
cout << "Enter candidate's name and the votes received by the candidate:\n";
for (int i = 0; i < n; i++) {

cin >> names[i] >> votes[i];
total += votes[i];
if (votes[i] > votes[max]) max = i;
}
cout << "\nCandidate" << "\t" << "Votes Received " << "\t" << "% of total votes\n";
for (int i = 0; i < n; i++) {
cout <<names[i] <<"\t" << votes[i] <<"\t" << setprecision(4) << (((double)votes[i]/total)*100) <<"%\n" ;
}
cout << "Total = " << total << "\n\n";
cout << "The winner of the Election is " << names[max] << "\n\n";
}

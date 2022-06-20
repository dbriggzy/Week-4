#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;

//constants
const char aconstant = 'a';
const char econstant = 'e';
const char iconstant = 'i';
const char oconstant = 'o';
const char uconstant = 'u';
const char bconstant = 'b';
const char cconstant = 'c';
const char dconstant = 'd';

int main(int argc, char* argv[])
{
    //error if a second argument is not given
    if (argc < 2)
    {
        cout << "Error... You must give a file to determine vowel count" << endl;
        return 1;
    }

    ifstream inFile;
    inFile.open(argv[1]);

    //error condition for file name
    if (!inFile)
    {
        cout << "Error with file name.." << endl;
        return 2;
    }

    //Output lines for initial statements
    cout << setfill('*') << setw(60) << "*" << endl;
    cout << setfill('*') << setw(48) << " Welcome to my Letter Count Program " << setw(12) << "*" << endl;
    cout << setfill('*') << setw(60) << "*" << endl;
    cout << setfill(' ') << setw(60) << " " << endl;
    cout << "Analyzing file " << "'" << argv[1] << "'..." << endl;
    cout << setfill(' ') << setw(60) << " " << endl;

    //define vowels and total variable
    int numa = 0;
    int nume = 0;
    int numi = 0;
    int numo = 0;
    int numu = 0;
    int numb = 0;
    int numc = 0;
    int numd = 0;
    int vowtot = 0;

    //loop vowel counter through entire text file
    char letter;
    while(inFile.get(letter))
    {
        letter = tolower(letter);
        if(letter == aconstant)
            numa = numa + 1;
        else if(letter == econstant)
            nume = nume + 1;
        else if(letter == iconstant)
            numi = numi + 1;
        else if(letter == oconstant)
            numo = numo + 1;
        else if(letter == uconstant)
            numu = numu + 1;
        else if(letter == bconstant)
            numb = numb + 1;
        else if(letter == cconstant)
            numc = numc + 1;
        else if(letter == dconstant)
            numd = numd + 1;
    }

    vowtot = numa + nume + numi + numo + numu;
   
    //Output lines for vowel and letter counts
    cout << setfill('.') << setw(60) << left << "The number of A's: " << numa << endl;
    cout << setfill('.') << setw(60) << left << "The number of E's: " << nume << endl;
    cout << setfill('.') << setw(60) << left << "The number of I's: " << numi << endl;
    cout << setfill('.') << setw(60) << left << "The number of O's: " << numo << endl;
    cout << setfill('.') << setw(60) << left << "The number of U's: " << numu << endl;
    cout << setfill('.') << setw(60) << left << "The number of B's: " << numb << endl;
    cout << setfill('.') << setw(60) << left << "The number of C's: " << numc << endl;
    cout << setfill('.') << setw(60) << left << "The number of D's: " << numd << endl;
    cout << setfill('.') << setw(60) << left << "The vowel count is: " << vowtot << endl;

    inFile.close();

    return 0;
}
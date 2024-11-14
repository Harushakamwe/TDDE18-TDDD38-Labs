//io.cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    int integer{0};
    double dbl{0.0};
    char c{'.'};
    string str{""};

    //Printout 1
    cout << "Enter one integer: ";
    cin >> integer;
    cin.ignore(1000, '\n');
    cout << "You entered the number: " << integer << endl;

    //Printout 2
    cout << "Enter four integer: ";
    cin >> integer;
    cout << "You entered the numbers: " << integer;
    cin >> integer;
    cout << " " << integer;
    cin >> integer;
    cout << " " << integer;
    cin >> integer;
    cout << " " << integer << endl;

    //Printout 3
    /*cout << "Enter one integer and one real number: ";
    cin >> integer;
    cin >> dbl;
    cout << "The real is:" /*<< setw(12) << setprecision(4) << dbl << endl;
    cout << "The integer is:" /*<< setw(9) << integer << endl;

    //Printout 4
    cout << "Enter one real and one integer number: ";
    cin >> dbl;
    cin >> integer;
    cout << "The real is: " << setw(12) << setfill('.') << setprecision(4) << dbl << endl;
    cout << "The integer is: " << setw(9) << setfill('.') << integer << endl;

    //Printout 4
    cout << "Enter a character: ";
    cin >> c;
    cout << "You entered: " << c << endl;

    //Printout 5
    cout << "Enter a word: " << flush;
    cin >> str;
    cout << "The word '" << str <<"' has " << str.size() << " character(s)." << endl;

    //Printout 6
    cout << "Enter an integer and a word: ";
    cin >> integer;
    cin >> str;
    cout << "You entered '" << integer << "' and '" << str << "'." << endl;

    //Printout 7
    cout << "Enter a character and a word: ";
    cin >> c;
    cin >> str;
    cout << "You entered the string " << '"' << str << '"' << " and '" << "the character '" << c << "'." << endl;

    //Printout 8
    cout << "Enter a word and a real number: ";
    cin >> str;
    cin >> dbl;
    cout << "You entered " << '"' << str << '"' << " and " << '"' << dbl << '"' << '.' << endl;

    //Printout 9
    cout << "Enter a text-line: ";
    getline(cin, str);
    cout << "You entered: " << '"' << str << '"' << endl;

    //Printout 10
    cout << "Enter a second line of text: ";
    getline(cin, str);
    cout << "You entered: " << '"' << str << '"' << endl;

    //printout 11
    cout << "Enter three words: ";
    cin >> str;
    cout << "You entered: '" << str << " ";
    cin >> str;
    cout << str << " ";
    cin >> str;
    cout << str << "'" << endl;*/


    
    return 0;
}
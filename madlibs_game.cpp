#include <iostream>

using namespace std;

int main()
{
    string colour, plural, celeb;

    cout << "Enter the colour: ";
    getline(cin, colour);
    cout << "Enter the plural noun: ";
    getline(cin, plural);
    cout << "Enter the Celebrity: ";
    getline(cin, celeb);

    cout << "Roses are " << colour << endl;
    cout << plural << " are blue" << endl;
    cout << "I love yellow" << celeb << endl;

    return 0;
}
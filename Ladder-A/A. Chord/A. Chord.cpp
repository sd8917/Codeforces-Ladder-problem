#include <iostream>
#include <map>
#include <string>
using namespace std;

map<string,int> values;
int distbetween(int a, int b)
{
    if(b >= a) return b - a;
    return 12 - (a - b);
}
int main()
{
    values["C"] = 0; values["C#"] = 1; values["D"] = 2; values["D#"] = 3; values["E"] = 4; values["F"] = 5;
    values["F#"] = 6; values["G"] = 7; values["G#"] = 8; values["A"] = 9; values["B"] = 10; values["H"] = 11;

    string temp;
    int notes[3];
    for(int i = 0; i < 3; i ++)
    {
        cin >> temp;
        notes[i] = values[temp];
    }
    for(int i = 0; i < 3; i ++)
    {
        for(int j = 0; j < 3; j ++)
        {
            if(i == j) continue;
            for(int k = 0; k < 3; k ++)
            {
                if(k == j || k == i) continue;
                if(distbetween(notes[i], notes[j]) == 4 && distbetween(notes[j], notes[k]) == 3)
                {
                    cout << "major"<<endl; return 0;
                }
                else if(distbetween(notes[i], notes[j]) == 3 && distbetween(notes[j], notes[k]) == 4)
                {
                    cout << "minor" << endl; return 0;
                }
            }
        }
    }
    cout << "strange" << endl; return 0;
}


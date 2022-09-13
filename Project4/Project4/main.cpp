#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct base
{
    string name;
    string state;
    string group;
    string factor;
};
struct after
{
    string namee;
    string statee;
    string groupp;
    string factorr;
};
int main()
{
    int const MAX = 100; //кол-во экземпляров структуры//
    base b[MAX];
    after c[MAX];
    int n,sum=0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter name :" << endl;
        cin >> b[i].name;
        cout << "Enter sex :" << endl;
        cin >> b[i].state;
        cout << "Enter group of blood :" << endl;
        cin >> b[i].group;
        cout << "Enter factor :" << endl;
        cin >> b[i].factor;
        if ((b[i].group == "1") && (b[i].factor=="+"))
        {
            sum++;
            for (int j = 0; j < sum; j++)
            {
                c[j].namee = b[i].name;
                c[j].statee = b[i].state;
                c[j].groupp = b[i].group;
                c[j].factorr = b[i].factor;
            }
        }
    }

    ofstream outfile;
    outfile.open("INFO.DAT");
    for (int i = 0; i < n; ++i)
        outfile << b[i].name << " " << b[i].state << " " << b[i].group << " " << b[i].factor << endl;
    outfile.close();
    cout << endl;
    for (int j = 0; j < sum; j++)
    {
        cout << "Name: " << c[j].namee << endl << "Sex: " << c[j].statee << endl << "Group: " << c[j].groupp << endl << "Factor: " << c[j].factorr << endl;
    }
    return 0;
}
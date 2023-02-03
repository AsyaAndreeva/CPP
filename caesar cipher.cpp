#include <iostream>
#include <cstdlib>
#include<string>

using namespace std;

void KodiraneWithSteps(string VhodenNiz, int steps);

int main()
{
    cout<<"Write text:"<<endl;
	string vhodenniz;
	getline(cin,vhodenniz);
	int n;
    cout<<"Choose steps from 0 to 25:"<<endl;
	cin >> n;
    cout<<"Cipher:"<<endl;
    KodiraneWithSteps(vhodenniz, n);
}

void KodiraneWithSteps(string VhodenNiz, int steps)
{
    int lenght = VhodenNiz.length();
    char* KodiranNiz = new char[lenght];
    string VhodeNizCopy = VhodenNiz;
    string result;
    int pr;
    if (steps <= 25 && steps >= 0) {
        for (int i = 0; i < lenght; i++)
        {
            pr = (int)VhodeNizCopy[i] + steps;
            if ((VhodenNiz[i] >= 65 && VhodenNiz[i] <= 90) || (VhodenNiz[i] >= 97 && VhodenNiz[i] <= 122))
            {
                if (((int)VhodeNizCopy[i] >= 65 && pr <= 90) || ((int)VhodeNizCopy[i] >= 97 && pr <= 122))
                {
                    KodiranNiz[i] = (char)((int)VhodenNiz[i] + steps);
                }
                else
                {
                    KodiranNiz[i] = (char)(((int)VhodenNiz[i] + steps) - 26);
                }
            }
            else
                KodiranNiz[i] = VhodenNiz[i];
        }
    }
    for (int i = 0; i < lenght; i++)
    {
        cout << KodiranNiz[i];
    }
}

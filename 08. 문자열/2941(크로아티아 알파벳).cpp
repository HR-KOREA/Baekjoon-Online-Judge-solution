#include <string>
#include <iostream>
using namespace std;

int main()
{
    string word;
    int count = 0;
    cin >> word;

    for (int i = 0; i < word.size(); i++)
    {
        string alpabet = { word[i] , word[i + 1] };
        string alpabet_3;
        if (i < word.size() - 1)
        {
            alpabet_3 = { word[i] , word[i + 1] , word[i + 2] };
        }
        if (alpabet == "c=")
        {
            count++;
            i++;
        }
        else if (alpabet == "c-")
        {
            count++;
            i++;
        }
        else if (alpabet == "d-")
        {
            count++;
            i++;
        }
        else if (alpabet == "lj")
        {
            count++;
            i++;
        }
        else if (alpabet == "nj")
        {
            count++;
            i++;
        }
        else if (alpabet == "s=")
        {
            count++;
            i++;
        }
        else if (alpabet == "z=")
        {
            count++;
            i++;
        }
        else if (alpabet_3 == "dz=")
        {
            count++;
            i++;
            i++;
        }
        else
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}
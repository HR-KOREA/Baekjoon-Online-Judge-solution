#include <string>
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    char check[101] = { 0 };
    int check_index = 0;
    int k = 0;
    int count = 0;
    string word;

    cin >> n;
    count = n;
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        check_index = 0;
        for (int j = 0; j < word.size(); j++)
        {
            if (word[j] != word[j + 1])
            {
                check[check_index] = word[j];
                for (k = j + 1; k < word.size(); k++)
                {
                    if (word[k] == check[check_index])
                    {
                        count--;
                        break;
                    }
                }
                check_index++;
                if (k != word.size())
                    break;
            }
        }
    }
    cout << count << "\n";

    return 0;
}
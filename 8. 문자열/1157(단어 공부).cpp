#include <string>
#include <iostream>
using namespace std;

int main()
{
    string word;
    int count[27] = { 0, };
    int max = 0;
    int max_index = -1;
    cin >> word;

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] > 96 && word[i] < 123)
            word[i] = word[i] - 32;//대문자 만들기ㅣ
        count[word[i] - 'A']++;
    }
    for (int i = 0; i < 27; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            max_index = i;
        }
    }
    for (int i = 0; i < 27; i++)
    {
        if (i == max_index)
            i++;
        else if (count[i] == count[max_index])
        {
            cout << "?" << "\n";
            return 0;
        }
    }
    cout << char(max_index + 'A') << "\n";
    return 0;
}
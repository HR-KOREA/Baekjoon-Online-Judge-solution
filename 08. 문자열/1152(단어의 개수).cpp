#include <string>
#include <iostream>
using namespace std;

int main()
{
    string sentence;
    int wordcount = 0;

    getline(cin, sentence);

    for (int i = 0; i < sentence.size(); i++)
    {
        if (i == 0 && sentence[i] == ' ')
            i++;//�պκ� ���鿬�ӵ���� ������ üũ
        if (i != 0 && sentence[i] == ' ')
        {
            wordcount++;//���鳪���� ī��Ʈ
            if (sentence[i + 1] == ' ')
                break;//�޺κ� ���鿬�ӳ����� ī��Ʈ����
        }
        else if (i == sentence.size() - 1)
            wordcount++;//���� ������ ī��Ʈ �ѹ���

    }
    cout << wordcount << "\n";

    return 0;
}
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
            i++;//앞부분 공백연속등장시 다음꺼 체크
        if (i != 0 && sentence[i] == ' ')
        {
            wordcount++;//공백나오면 카운트
            if (sentence[i + 1] == ' ')
                break;//뒷부분 공백연속나오면 카운트종료
        }
        else if (i == sentence.size() - 1)
            wordcount++;//문장 끝에서 카운트 한번더

    }
    cout << wordcount << "\n";

    return 0;
}
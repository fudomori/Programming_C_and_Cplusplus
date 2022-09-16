#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
    
    cout <<"Введите произвольный текст, состоящий из слов, разделенных пробелами " <<endl;
    cout <<"Закончить ввод можно нажав Ctrl+D или написав слово !!!" <<endl <<endl;
    
    map<string, int> count_word;
    
    string word;
    
    while (cin >> word)
    {
        if (word == "!!!")
        {
            break;
        }
        
        //удаляем все символы пунктуации
        word.erase ( remove_if (word.begin(), word.end(), [](const char& c) {
            return ispunct(c);
        }), word.end());
        
        if (!word.empty())
        {
            count_word[word]++;
        }
        
    }
    
    for (const auto& [key, value] : count_word)
    {
        cout <<"Слово " <<setw(15) <<key << " встретилось " 
             <<setw(15) <<value <<" раз." <<endl;
    }

    return 0;
}

#include <iostream>
#include <map>
#include <vector>
#include <set>

using namespace std;

int main() {

  /* C++ */
  string str; //C++ строка - длина не ограничена
  getline(cin, str); //читаем строку с клавиатуры
  int count_sym[128] = {0}; //массив с количествами символов (только для ASCII символов)

  for (char ch : str) { //перебираем все символы строки
    count_sym[ch]++; //для простоты считаем, что только ASCII символы встретятся
  }

  /* C */
  char str[1000]; //строка максимум на 999 символов + терминирующий ноль-символ
  gets(str); //читаем строку с клавиатуры
  int count_sym[128] = {0}; //массив с количествами символов (только для ASCII символов)

  for (int i=0; str[i]; i++) {
    count_sym[str[i]]++; //для простоты считаем, что только ASCII символы встретятся
  }

  /* Сколько раз каждое слово вектора words повторяется раз */
  vector<string> words; //некоторый текст
  //заполняем переменную words...

  map<string, int> count_word; //изначально ассоциативный массив пустой
  for (const auto& word : words) {
    count_word[word]++;
  }

  /* Словарь */
  map<string, string> dict;
  // 1 var
  dict.insert(pair<string, string> ("orange", "апельсин"));
  // 2 var
  dict.insert(make_pair ("orange", "апельсин"));
  // 3 var
  dict.insert({"orange", "апельсин"});
  // 4 var
  dict["table"] = "стол";
  dict["table"] = "таблица"; // перезапишет слово

  /* Несколько слов в одном ключе */
  // 1 var
  multimap <string, string> dict_multi;
  dict_multi.insert({"word","translation"});

  // 2 var
  map <string, set<string>> dict_map_set;
  dict_map_set["word"].insert("translation");
  // в векторе переводы не будут упорядочены по алфавиту и могут дублироваться

  map <string, vector<string>> dict_map_vector;
  dict_map_vector["word"].push_back("translation");
  // а в множестве - будут упорядочены лексикографически (по алфавиту) и не будут дублироваться.

  return 0;
}

#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <windows.h>

using namespace std;

int main() {
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);

  map<string, string> dict = {{"student", "студент"}};
  dict["apple"] = "яблоко";
  dict["document"] = "документ";
  dict.insert({"pear", "груша"});
  cout <<dict["animal"];
  if (dict.find("play") == dict.end())
  {
      cout <<"Слово play не найдено в словаре!" <<endl;
  }
  dict["apple tree"] = "яблоня";
      
  dict.erase("document");
      
  dict.insert({"table", "таблица"});
  dict["table"] = "стол";
      
  dict["long"] = "длинный";
  dict.insert({"long", "долго"});

  for (const auto& key_value : dict) {
    cout << key_value.first << " -> " << key_value.second << endl;
  }

  return 0;
}

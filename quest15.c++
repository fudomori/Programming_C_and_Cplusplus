/* Вам необходимо заменить в строке первую встречу некоторой заданной подстроки на другую подстроку. */

#include <iostream>

using namespace std;

int main() {
  string str;
  getline(cin, str);
  string findStr;
  getline(cin, findStr);
  string replaceStr;
  getline(cin, replaceStr);

  if (str.find(findStr) != string::npos)
  str.replace(str.find(findStr), findStr.length(), replaceStr);

  cout << str << endl;
  
  return 0;
}

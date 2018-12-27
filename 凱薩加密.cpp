#include <iostream>
using namespace std;

int secret (int, int);

int main() {
  string str;
  int key = 0;
  cout << "輸入要加密的訊息:";
  cin >> str;
  cout << "請輸入密鑰:";
  cin >> key;
  for (int i = 0;(int)str [i] != '\0';i++) {
    cout << (char)secret((int) str [i], key);
  }
}

int secret(int a, int key) {
  if (a >= 'A' && a <= 'Z') {
    if (a + key <= 'Z') {
      a = a + key;
    } else if (a + key % 26 > 'Z') {
      a = a + key % 26 - 26;
    }
  } else if (a >= 'a' && a <= 'z') {
    if (a + key <= 'z') {
      a = a + key;
    } else if (a + key % 26 > 'z') {
      a = a + key % 26 - 26;
    }
  }
  return a;
}

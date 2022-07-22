#include <iostream>
#include <unordered_map>
using namespace std;

bool generateDocument(string characters, string document)
{
  unordered_map<char, int> chars;
  unordered_map<char, int> doc;
  for (int i = 0; i < characters.length(); i++)
  {
    chars[characters[i]] += 1;
  }
  for (int i = 0; i < document.length(); i++)
  {
    chars[document[i]] -= 1;
    if (chars[document[i]] < 0){
      return false;
    } 
  }
  return true;
}

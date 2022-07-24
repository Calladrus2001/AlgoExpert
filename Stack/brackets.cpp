#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool balancedBrackets(string str)
{
  stack<char> brackets;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == '(' || str[i] == '{' || str[i] == '[')
    {
      brackets.push(str[i]);
    }
    else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
    {
      if (brackets.empty())
        return false;
      if (brackets.top() == str[i])
      {
        brackets.pop();
      }
    }
  }
  if (brackets.size() != 0)
  {
    return false;
  }
  return true;
}

int main()
{
  string str = "{[[[[({(}))]]]]}";
  bool res = balancedBrackets(str);
  cout << res << endl;
}

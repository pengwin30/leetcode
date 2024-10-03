class Solution {
public:
  bool isValid(string s) {
    string close_parentheses = "";

      for (int i = 0; i < s.length(); i++) {
          if (s[i] == '(') close_parentheses += ')';
          else if (s[i] == '{') close_parentheses += '}';
          else if (s[i] == '[') close_parentheses += ']';
          else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
              if (!close_parentheses.empty()) {
                  if (close_parentheses.back() == s[i]) close_parentheses.pop_back();
                  else return false;
              }
              else return false;
          }
      }
      if (!close_parentheses.empty()) return false;
      else return true;
  }
};

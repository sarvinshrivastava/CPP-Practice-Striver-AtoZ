bool isPalindrome(string &str) {
  if (str.size() >= 2) {
    if (str[0] == str[str.size() - 1]) {
      str.erase(str.begin());
      str.erase(str.end() - 1);
      return isPalindrome(str);
    } else {
      return false;
    }
  }
  return true;
}
vector<int> div(const vector<int>& a, int b, int& t) {
  vector<int> c;
  for (int i = a.size() - 1; i >= 0; i--) {
    t = t * 10 + a[i];
    c.push_back(t / b);
    t %= b;
  }
  reverse(c.begin(), c.end());
  while (c.size() > 1 && c.back() == 0) c.pop_back();
  return c;
}
// a>=b
vector<int> sub(const vector<int> &a, const vector<int> &b) {
  vector<int> c;
  int t = 0;
  for (int i = 0; i < a.size() || t; i++) {
    t += a[i];
    if (i < b.size()) t -= b[i];
    c.push_back((t + 10) % 10);
    if (t < 0)
      t = -1;
    else
      t = 0;
  }
  while (c.size() > 1 && c.back() == 0) c.pop_back();
  return c;
}
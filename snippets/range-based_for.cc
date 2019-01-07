std::vector<int> v;

for (int x : v) {
  std::cout << x << '\n';
}

for (int x : { 1, 2, 3, 4 }) {
  std::cout << x << '\n';
}

int a[] = { 1, 2, 3, 4 };

for (int x : a) {
  std::cout << x << '\n';
}

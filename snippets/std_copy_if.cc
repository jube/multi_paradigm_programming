std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

std::vector<int> out;

std::copy_if(v.begin(), v.end(), std::back_inserter(out),
  [](int x) {
    return x % 2 == 0;
  }
);

// out = { 2, 4, 6, 8, 10 }

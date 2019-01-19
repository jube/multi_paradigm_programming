std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int sum = std::accumulate(v.begin(), v.end(), 0); // 55

int product = std::accumulate(v.begin(), v.end(), 1,
      std::multiplies<int>()); // 3628800

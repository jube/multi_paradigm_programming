void S::f(int i) {
  [&]() {};          // OK: by-reference capture default
  [&, i]() {};       // OK: by-reference capture, except i by copy
  [&, &i]() {};      // Error: by-reference is already the default
  [&, this]() {};    // OK, equivalent to [&]
  [&, this, i]() {}; // OK, equivalent to [&, i]

  [=]() {};          // OK: by-copy capture default
  [=, &i]() {};      // OK: by-copy capture, except i by reference
  [=, *this]() {};   // until C++17: Error: invalid syntax
                     // since c++17: OK: captures S by copy
  [=, this]() {};    // until C++20: Error: this when = is default
                     // since C++20: OK, same as [=]
}

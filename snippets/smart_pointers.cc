std::unique_ptr<int> p0(new int); // OK until C++14
auto p1 = std::make_unique<int>(); // better
auto p2 = std::make_unique<int>(42);
auto a1 = std::make_unique<double[]>(5);

auto p3 = std::make_shared<int>();
auto a2 = std::make_shared<double[]>(5); // C++20

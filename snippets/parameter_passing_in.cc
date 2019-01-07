void f1(const std::string& s);  // OK: always cheap
void f2(std::string s);         // KO: maybe expensive to copy

void f3(int x);                 // OK: unbeatable
void f4(const int& x);          // KO: overhead

void sink(std::unique_ptr<widget> w); // transfer ownership

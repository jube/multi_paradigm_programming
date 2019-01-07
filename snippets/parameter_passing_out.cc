std::vector<int> f1();                // OK: cheap to move
void f2(std::vector<int>& out);       // KO: already empty?

int f3();                             // OK: cheap to copy
void f4(int& out);                    // KO: can be read

std::array<int, 4096> f5();           // KO: too large
void f6(std::array<int, 4096>& out);  // OK

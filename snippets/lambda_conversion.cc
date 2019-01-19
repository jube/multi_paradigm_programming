auto l = [](int a) -> int { return a; }

using FuncType = int (*)(int);
FuncType f = l; // OK!

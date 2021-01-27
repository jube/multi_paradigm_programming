void f(int x);
void f(double x);
void f(int *x);

template<typename T>
void f(T x);

f(1);       // calls f(int)
f(1.0);     // calls f(double)
f(true);    // calls f(T) with T = bool
f(1.0f);    // calls f(T) with T = float
f(nullptr); // calls f(T) with T = std::nullptr_t

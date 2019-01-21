int f(int x, int& y);
template<typename X, typename Y>
int wrapper_f(X&& x, Y&& y) {
  return f(std::forward<X>(x), std::forward<Y>(y));
}

int x = 3;
wrapper_f(4, x); // OK! X = int,  Y = int&
wrapper_f(x, x); // OK! X = int&, Y = int&
wrapper_f(x, 4); // KO! X = int&, Y = int

template<class T, class... U>
std::unique_ptr<T> make_unique(U&&... u) {
  return std::unique_ptr<T>(new T(std::forward<U>(u)...));
}

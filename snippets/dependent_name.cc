template <typename T>
void foo(const std::vector<T> &v) {
  // std::vector<T>::const_iterator is a dependent name,
  typename std::vector<T>::const_iterator it = v.begin(); // OK

  typedef typename std::vector<T>::const_iterator iter_t; // OK
  iter_t * p;
  // iter_t is a dependent name, but it's known to be a type name
}

template<typename T>
struct S {
    template<typename U> void foo() { }
};
template<typename T>
void bar() {
    S<T> s;
    s.template foo<T>(); // OK
}

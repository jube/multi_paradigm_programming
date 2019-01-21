template <class T>
struct Base {
  void interface() {
    static_cast<T*>(this)->implementation();
  }

  static void static_func() {
    T::static_sub_func();
  }
};

struct Derived : Base<Derived> { // CRTP is here
  void implementation();
  static void static_sub_func();
};

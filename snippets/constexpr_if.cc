template <typename T>
auto get_value(T t) {
  if constexpr (std::is_pointer_v<T>) {
    return *t; // deduces return type to int for T = int*
  } else {
    return t;  // deduces return type to int for T = int
  }
}

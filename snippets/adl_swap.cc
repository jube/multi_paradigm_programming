template<typename T>
void maybe_swap(bool b, T& a, T& b) {
  using std::swap;
  if (b) {
    swap(a, b);
  }
}

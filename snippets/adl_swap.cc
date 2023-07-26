template<typename T>
void maybe_swap(bool cond, T& a, T& b) {
  using std::swap;
  if (cond) {
    swap(a, b);
  }
}

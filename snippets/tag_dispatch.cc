template <typename Iter, typename Distance>
void advance_impl(Iter& it, Distance n, forward_iterator_tag) {
  while (--n >= 0) {
    ++it;
  }
}

template <typename Iter, typename Distance>
void advance_impl(Iter& it, Distance n, random_iterator_tag) {
  it += n;
}

template <typename Iter, typename Distance>
void advance(Iter& it, Distance n) {
  return advance_impl(it, n,
      typename std::iterator_traits<Iter>::iterator_category());
}

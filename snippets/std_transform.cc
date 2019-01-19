std::string rot13(const std::string& in) {
  std::string out;

  std::transform(in.begin(), in.end(), std::back_inserter(out),
    [](char c) -> char {
      if ('a' <= c && c <= 'm') {
        return c + 13;
      }
      if ('n' <= c && c <= 'z') {
        return c - 13;
      }
      return c;
    }
  );

  return out;
}

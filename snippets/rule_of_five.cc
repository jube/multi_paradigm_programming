class five {
  const char *m_str;
  five(const char *str, std::size_t n) : m_str(new char[n])
  { std::memcpy(m_str, str, n); }
public:
  five(const char* s = "") : five(s, std::strlen(s) + 1) { }
  ~five() { delete [] m_str; }
  five(const five& other) // copy constructor
  : five(other.m_str) { }
  five(five&& other) noexcept // move constructor
  : m_str(std::exchange(other.m_str, nullptr)) { }
  five& operator=(const five& other) { // copy assignment
    return *this = five(other);
  }
  five& operator=(five&& other) noexcept { // move assignment
    std::swap(m_str, other.m_str);
    return *this;
  }
};

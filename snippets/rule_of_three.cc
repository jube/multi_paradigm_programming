class three {
  const char *m_str;
  three(const char *str, std::size_t n) : m_str(new char[n])
  { std::memcpy(m_str, str, n); }
public:
  three(const char* s = "") : three(s, std::strlen(s) + 1) { }
  ~three() { delete [] m_str; }
  three(const three& other) // copy constructor
  : three(other.m_str) { }
  three& operator=(const three& other) { // copy assignment
    std::size_t n = strlen(other.m_str) + 1;
    auto str = new char[n];
    std::memcpy(str, other.m_str, n);
    delete [] m_str;
    m_str = str;
    return *this;
  }
};

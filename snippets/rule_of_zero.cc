class zero {
  std::string m_str;
public:
  zero(std::string str)
  : m_str(std::move(str))
  { }
};

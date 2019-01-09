using string_id = uint64_t;

constexpr string_id fnv1a_hash(const char *str, std::size_t sz) {
  string_id value = UINT64_C(0xcbf29ce484222325);

  for (std::size_t i = 0; i < sz; ++i) {
    value ^= static_cast<unsigned char>(str[i]);
    value *= UINT64_C(0x100000001b3);
  }

  return value;
}

string_id fnv1a_hash(const std::string& str) {
  return fnv1a_hash(str.data(), str.size());
}

constexpr string_id operator "" _id(const char *str, std::size_t sz) {
  return fnv1a_hash(str, sz);
}

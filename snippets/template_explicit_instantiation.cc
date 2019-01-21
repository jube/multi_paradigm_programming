// declarations (in header)
extern template struct Array<float, 2>;
extern template std::size_t size<std::string>(
                                    const std::string& container);
extern template std::size_t size(const std::string& container);
extern template float pi<float>;

// definitions (in source)
template struct Array<float, 2>;
template std::size_t size<std::string>(
                                    const std::string& container);
template std::size_t size(const std::string& container);
template float pi<float>;

void operator "" _km(long double);

std::string operator "" _i18n(const char*, std::size_t);

constexpr long double operator"" _deg(long double deg) {
    return deg * 3.141592 / 180;
}

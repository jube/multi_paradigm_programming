std::vector<std::string> v;
std::string str = "Hello";

v.push_back(str);             // str is copied
v.push_back(std::move(str));  // str is moved
// here str is in an unspecified state, maybe ""

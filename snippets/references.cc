std::string s1 = "Test";
std::string& r0 = s1;
    // ok: r0 refers to s1
const std::string& r1 = s1;
    // ok: r1 refers to s1 (can not modify s1 through r1)
/* std::string&& r2 = s1; */
    // error: can not bind to lvalue
const std::string& r3 = s1 + s1;
    // okay: lvalue reference to const extends lifetime
/* r3 += "Test"; */
    // error: can not modify through reference to const
std::string&& r4 = s1 + s1;
    // okay: rvalue reference extends lifetime
r4 += "Test";
    // okay: can modify through reference to non-const
std::string& r5 = r4;
    // okay: r4 is a lvalue

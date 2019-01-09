std::cout << "Test\n";
// There is no operator<< in global namespace, but ADL
// examines std namespace because the left argument is in
// std and finds std::operator<<(std::ostream&, const char*)

operator<<(std::cout, "Test\n");
// same, using function call notation

endl(std::cout);
// OK: this is a function call: ADL examines std namespace
// because the argument of endl is in std, and finds std::endl

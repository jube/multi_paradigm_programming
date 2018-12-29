struct A { double x; }
const A* a;

decltype(a->x) y;
    // type of y is double (declared type)
decltype((a->x)) z = y;
    // type of z is const double& (lvalue expression)

struct B { int n; };
class X : public virtual B { };
class Y : virtual public B { };
class Z : public B {};
// every object of type AA has one X, one Y, one Z, and two B's:
// one that is the base of Z and one that is shared by X and Y
struct AA : X, Y, Z {
  AA() {
    X::n = 1; // modifies the virtual B subobject's member
    Y::n = 2; // modifies the same virtual B subobject's member
    Z::n = 3; // modifies the non-virtual B subobject's member
    std::cout << X::n << Y::n << Z::n << '\n'; // prints 223
  }
};

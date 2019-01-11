struct Base {}
   virtual void f() { std::cout << "base\n"; }
};
struct Derived : Base {
  void f() override { std::cout << "derived\n"; }
};
int main() {
    Base b;
    Derived d;

    Base& br = b; // the type of br is Base&
    Base& dr = d; // the type of dr is Base& as  well
    br.f(); // prints "base"
    dr.f(); // prints "derived"
    Base* bp = &b; // the type of bp is Base*
    Base* dp = &d; // the type of dp is Base* as  well
    bp->f(); // prints "base"
    dp->f(); // prints "derived"
}

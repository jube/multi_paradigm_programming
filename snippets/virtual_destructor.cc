class Base {
public:
  virtual ~Base() { /* releases Base's resources */ }
};

class Derived : public Base {
  ~Derived() { /* releases Derived's resources */ }
};

int main() {
  Base* b = new Derived;

  delete b;
  // Makes a virtual function call to Base::~Base()
  // since it is virtual, it calls Derived::~Derived() which can
  // release resources of the derived class, and then calls
  // Base::~Base() following the usual order of destruction
}

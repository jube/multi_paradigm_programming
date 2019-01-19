struct V {
    virtual void f() { };
};
struct A : virtual V { };
struct B : virtual V { };
struct D : A, B { };
struct E : V { };

int main() {
    D d;        // the most derived object
    A* a = &d;  // upcast, dynamic_cast may be used
    D* new_d = dynamic_cast<D*>(a); // downcast
    B* new_b = dynamic_cast<B*>(a); // sidecast
    E* e = dynamic_cast<E*>(e);     // = nullptr
}

struct Base {
    int a, b, c;
};

// every object of type Derived includes Base as a subobject
struct Derived : Base {
    int b;
};

// every object of type DerivedAgain includes
// Derived and Base as subobjects
struct DerivedAgain : Derived {
    int c;
};

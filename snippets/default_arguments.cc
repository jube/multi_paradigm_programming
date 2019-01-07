void f(int x, int y = 42, int z = 69);

f(1, 2, 3); // calls f(1, 2, 3)
f(1, 2);    // calls f(1, 2, 69)
f(1);       // calls f(1, 42, 69)
/* f(); */  // error

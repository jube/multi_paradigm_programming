std::mutex m;

void bad() {
  m.lock();                    // acquire the mutex
  f();                         // f() may throw, KO!
  if(!everything_ok()) return; // early return, KO!
  m.unlock();                  // the mutex is released
}

void good() {
  std::lock_guard<std::mutex> lk(m); // RAII class
  f();                               // f() may throw, OK!
  if(!everything_ok()) return;       // early return, OK!
}                                    // the mutex is released

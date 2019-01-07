{
  auto && __range = $range$ ;
  for (auto __begin = $b$, __end = $e$; __begin != __end; ++__begin) {
    $decl$ = *__begin;
    $loop$
  }
}

{
  auto && __range = $range$ ;
  auto __begin = $b$ ;
  auto __end = $e$ ; // not necessarily the same type as __begin
  for ( ; __begin != __end; ++__begin) {
    $decl$ = *__begin;
    $loop$
  }
}

{
  $init$
  auto && __range = $range$ ;
  auto __begin = $b$ ;
  auto __end = $e$ ;
  for ( ; __begin != __end; ++__begin) {
    $decl$ = *__begin;
    $loop$
  }
}

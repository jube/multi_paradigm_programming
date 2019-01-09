constexpr string_id id = "Foobar"_id;

/* ... */

switch (fnv1a_hash(str)) {
  case "Toto"_id:
    std::cout << "Toto\n";
    break;

  case "Titi"_id:
    std::cout << "Titi\n";
    break;

  default:
    std::cout << "Someone else\n";
    break;
}

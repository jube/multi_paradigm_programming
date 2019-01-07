std::map<int, std::string> m;

if (auto it = m.find(10); it != m.end()) {
  return it->second.size();
}

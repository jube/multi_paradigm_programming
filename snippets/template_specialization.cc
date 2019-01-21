template<typename T>   // primary template
struct is_void : std::false_type {
};

template<>  // explicit specialization for T = void
struct is_void<void> : std::true_type {
};

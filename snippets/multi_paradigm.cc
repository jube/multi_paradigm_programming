void drawAll(const std::vector<Shape*>& shapes) {
  std::for_each(shapes.begin(), shapes.end(),
      [](const Shape *shape) { shape->draw(); }
  );
}

struct point {
  int x;
  int y;
};
int main() {
  struct point p, *q = &p;
  int * r;
  p.x = 1;
  q->y = 2;
  r = &p.x;
  *r = 3;
  r = &q->y;
  *r = 4;
  return p.x + p.y;
}

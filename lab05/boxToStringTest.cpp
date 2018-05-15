#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"

int main() {
  // SAMPLE FORMAT: [ul=(3.4,-5),w=5,h=7]
  struct Box b1, b2;

  initBox(&b1,1.0,2.0,3.0,4.0);  
  assertEquals("ul=(1,2),w=3,h=4", boxToString(b1), "boxToString(b1)");

  initBox(&b2,0.12345,5.12345,8.31415,2.4678);
  assertEquals("ul=(0.123,5.12),w=8.31,h=2.47", boxToString(b2), "boxToString(b2)");
  assertEquals("ul=(0.1,5),w=8,h=2", boxToString(b2,1), "boxToString(b2,1)");
  assertEquals("ul=(0.1235,5.123),w=8.314,h=2.468", boxToString(b2,4), "boxToString(b2,4)");
  assertEquals("ul=(0.12345,5.1235),w=8.3141,h=2.4678", boxToString(b2,5), "boxToString(b2,5)");

  return 0;
}

/*
~/cppcheck/cppcheck --dump misra-test.c
python misra.py misra-test.c.dump
*/

void misra_5_1() {
  int a123456789012345678901234567890; // no-warning
  int a1234567890123456789012345678901; // 5.1
}

void misra_7_1() {
  int x = 066; // 7.1
}

void misra_7_3() {
  int x = 12l; // 7.3
  int x = 12lu; // 7.3
}

void misra_12_1() {
  sz = sizeof x + y; // 12.1
  a = (b * c) + d;
  a = b << c + d; // 12.1
}

void misra_13_5() {
  if (x && (y++ < 123)){} // 13.5
}

void misra_14_4() {
  if (x+4){} // 14.4
}

void misra_15_1() {
  goto a1; // 15.1
}

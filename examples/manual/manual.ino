#include <ArduinoTap.h>

void setup() {
#ifdef ARDUINO
  Serial.begin(9600);
#endif
}

void loop() {
  plan(5);
  ok(true, "true");
  ok(1, "1 is true");
  nok(false, "false");
  nok(0, "0 is false");
  is(1 + 1, 2, "addition");
  done_testing();
}

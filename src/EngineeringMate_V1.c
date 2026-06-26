/* EngineeringMate 
  Version 1 Source Code
*/

struct Concept {
  String keyword;
  String answer;
};

Concept concepts[] = {
  {"PWM", "Pulse Width Modulation controls average power."},
  {"UART", "UART is a serial communication protocol."},
  {"SPI", "SPI is a synchronous communication protocol."}
};

String question = "";

void setup() {
  Serial.begin(9600);

  Serial.println("EngineerMate Ready");
  Serial.println("Ask: PWM, UART, or SPI");
}

void loop() {

  while (Serial.available() > 0) {

    char inByte = Serial.read();

    if (inByte != '\n' && inByte != '\r') {
      question += inByte;
    }

    else if (question.length() > 0) {

      bool found = false;

      question.toUpperCase();

      for (int i = 0; i < 3; i++) {

        if (question.indexOf(concepts[i].keyword) != -1) {

          Serial.println(concepts[i].answer);
          found = true;
          break;
        }
      }

      if (!found) {
        Serial.println("I don't know that concept yet.");
      }

      question = "";
    }
  }
}

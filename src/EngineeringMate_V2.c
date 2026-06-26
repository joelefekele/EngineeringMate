/* EngineeringMate 
EngineeringMate Version 2 Source Code
*/

struct Concept {
  String keyword;
  String definition;
  String function;
  String advantages;
  String disadvantages;
  String application;
  String History;
};

Concept concepts[] = {

{
  "PWM",

  "PWM stands for Pulse Width Modulation.",

  "PWM controls average power by varying the duty cycle of a digital signal.",

  "Simple, efficient, and widely supported by microcontrollers.",

  "Can introduce electrical noise and may require filtering.",

  "Motor speed control, LED dimming, power regulation, and signal generation.",

  "PWM became widely used in power electronics and control systems during the 20th century."
},

{
  "UART",

  "UART stands for Universal Asynchronous Receiver Transmitter.",

  "UART enables serial communication between devices using TX and RX lines.",

  "Simple to implement and requires only two communication wires.",

  "Limited communication speed and no built-in error correction.",

  "Microcontroller communication, GPS modules, Bluetooth modules, and debugging.",

  "UART was developed for serial data communication in computer and embedded systems."
},

{
  "SPI",

  "SPI stands for Serial Peripheral Interface.",

  "SPI provides high-speed synchronous communication between a master and slave devices.",

  "Very fast communication and supports full-duplex data transfer.",

  "Requires more wires than UART and I2C.",

  "Displays, SD cards, sensors, ADCs, DACs, and memory devices.",

  "SPI was developed by Motorola in the 1980s for embedded communication."
}

};
String question = "";

void setup() {
  Serial.begin(9600);

  Serial.println("EngineerMate Ready");
  Serial.println("Ask: PWM, UART, or SPI");
  Serial.println(concepts[0].function);
}

void loop() {

  while (Serial.available() > 0) {

    char inByte = Serial.read();

    if (inByte != '\n' && inByte != '\r') {

      Serial.print(inByte); // prints the question to the screen so the system can read it
      Serial.print("");
      question += inByte;


    }
    else if (question.length() > 0) {

      bool found = false;

      question.toUpperCase();
      Serial.println();
      Serial.print("Question = ");
      Serial.println(question);

    int numConcepts = sizeof(concepts) / sizeof(concepts[0]);

    for (int i = 0; i < numConcepts; i++) {

        if (question.indexOf(concepts[i].keyword) != -1 &&
            question.indexOf("WHAT IS") != -1) {

          Serial.println("Definition Match Found");    
          Serial.println(concepts[i].definition);

          found = true;
          break;
        }

     if (question.indexOf(concepts[i].keyword) != -1 &&
            question.indexOf("WHAT DO") != -1) {

          Serial.println("Definition Match Found");    
          Serial.println(concepts[i].function);

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

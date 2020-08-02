#include "Receiver.h"

#define RECEIVER_COUNT 8
#define RECEIVER_SPI_CLK_PIN 18
#define RECEIVER_SPI_DATA_PIN 23
#define RECEIVER_SPI_SS_1 13
#define RECEIVER_SPI_SS_2 12
#define RECEIVER_SPI_SS_3 14
#define RECEIVER_SPI_SS_4 27
#define RECEIVER_SPI_SS_5 26
#define RECEIVER_SPI_SS_6 25
#define RECEIVER_SPI_SS_7 33
#define RECEIVER_SPI_SS_8 32

Receiver receivers[RECEIVER_COUNT];

void setup(void) {
  pinMode(RECEIVER_SPI_CLK_PIN, OUTPUT);
  pinMode(RECEIVER_SPI_DATA_PIN, OUTPUT);
  digitalWrite(RECEIVER_SPI_CLK_PIN, LOW);
  digitalWrite(RECEIVER_SPI_DATA_PIN, LOW);
  pinMode(RECEIVER_SPI_SS_1, OUTPUT);
  digitalWrite(RECEIVER_SPI_SS_1, HIGH);
  pinMode(RECEIVER_SPI_SS_2, OUTPUT);
  digitalWrite(RECEIVER_SPI_SS_2, HIGH);
  pinMode(RECEIVER_SPI_SS_3, OUTPUT);
  digitalWrite(RECEIVER_SPI_SS_3, HIGH);
  pinMode(RECEIVER_SPI_SS_4, OUTPUT);
  digitalWrite(RECEIVER_SPI_SS_4, HIGH);
  pinMode(RECEIVER_SPI_SS_5, OUTPUT);
  digitalWrite(RECEIVER_SPI_SS_5, HIGH);
  pinMode(RECEIVER_SPI_SS_6, OUTPUT);
  digitalWrite(RECEIVER_SPI_SS_6, HIGH);
  pinMode(RECEIVER_SPI_SS_7, OUTPUT);
  digitalWrite(RECEIVER_SPI_SS_7, HIGH);
  pinMode(RECEIVER_SPI_SS_8, OUTPUT);
  digitalWrite(RECEIVER_SPI_SS_8, HIGH);
      receivers[1].init(
          RECEIVER_SPI_CLK_PIN,
          RECEIVER_SPI_DATA_PIN,
          RECEIVER_SPI_SS_1
      );
       receivers[2].init(
          RECEIVER_SPI_CLK_PIN,
          RECEIVER_SPI_DATA_PIN,
          RECEIVER_SPI_SS_2
      );
        receivers[3].init(
          RECEIVER_SPI_CLK_PIN,
          RECEIVER_SPI_DATA_PIN,
          RECEIVER_SPI_SS_3
      );
       receivers[4].init(
          RECEIVER_SPI_CLK_PIN,
          RECEIVER_SPI_DATA_PIN,
          RECEIVER_SPI_SS_4
      );
       receivers[5].init(
          RECEIVER_SPI_CLK_PIN,
          RECEIVER_SPI_DATA_PIN,
          RECEIVER_SPI_SS_5
      );
       receivers[6].init(
          RECEIVER_SPI_CLK_PIN,
          RECEIVER_SPI_DATA_PIN,
          RECEIVER_SPI_SS_6
      );
       receivers[7].init(
          RECEIVER_SPI_CLK_PIN,
          RECEIVER_SPI_DATA_PIN,
          RECEIVER_SPI_SS_7
      );
       receivers[8].init(
          RECEIVER_SPI_CLK_PIN,
          RECEIVER_SPI_DATA_PIN,
          RECEIVER_SPI_SS_8
      );
  receivers[1].setFrequency(5800);
  receivers[2].setFrequency(5820);
  receivers[3].setFrequency(5840);
  receivers[4].setFrequency(5840);
  receivers[5].setFrequency(5840);
  receivers[6].setFrequency(5840);
  receivers[7].setFrequency(5840);
  receivers[8].setFrequency(5840);
}

void loop()
{
}

#include <IRremote.h>
#include <Keypad.h>

#define IR_PIN 2

IRrecv irrecv(IR_PIN);
decode_results results;

const byte SATIR = 3;
const byte SUTUN = 3;
char keys[SATIR][SUTUN] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'}
};
byte rowPins[SATIR] = {A2, A1, A0};
byte colPins[SUTUN] = {A3, A4, A5};
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, SATIR, SUTUN );

int Buzzer = 13;

#define BUTON1 16746615 // Kumanda 1 nolu Buton
#define BUTON2 16730295 // Kumanda 2 nolu Buton
#define BUTON3 16762935 // Kumanda 3 nolu Buton
#define BUTON4 16722135 // Kumanda 4 nolu Buton
#define BUTON5 16754775 // Kumanda 5 nolu Buton
#define BUTON6 16738455 // Kumanda 6 nolu Buton
#define BUTON7 16771095 // Kumanda 7 nolu Buton
#define BUTON8 16718055 // Kumanda 8 nolu Buton
#define BUTON9 16750695 // Kumanda 9 nolu Buton
#define BUTON10 16728255 // Kumanda ON/OFF Buton

#define Priz_1 3
#define Priz_2 4
#define Priz_3 5
#define Priz_4 6
#define Priz_5 7
#define Priz_6 8
#define Priz_7 9
#define Priz_8 10

void setup() {
  pinMode(Priz_1, OUTPUT);
  pinMode(Priz_2, OUTPUT);
  pinMode(Priz_3, OUTPUT);
  pinMode(Priz_4, OUTPUT);
  pinMode(Priz_5, OUTPUT);
  pinMode(Priz_6, OUTPUT);
  pinMode(Priz_7, OUTPUT);
  pinMode(Priz_8, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  irrecv.enableIRIn();
}

void loop() {


  if (irrecv.decode(&results))
    //------------------------------------------------------------------------------------------------------
    //Buton-1_Priz-1
  {
    if (results.value == BUTON1)
    {
      digitalWrite(Priz_1, !digitalRead(Priz_1));
      if (digitalRead(Priz_1) == HIGH)
      {
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
      }
      else
      {
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
      }
    }
    //------------------------------------------------------------------------------------------------------
    //Buton-2_Priz-2
    if (results.value == BUTON2)
    {
      digitalWrite(Priz_2, !digitalRead(Priz_2));
      if (digitalRead(Priz_2) == HIGH)
      {
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
      }
      else
      {
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
      }
    }
    //------------------------------------------------------------------------------------------------------
    //Buton-3_Priz-3
    if (results.value == BUTON3)
    {
      digitalWrite(Priz_3, !digitalRead(Priz_3));
      if (digitalRead(Priz_3) == HIGH)
      {
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
      }
      else
      {
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
      }
    }
    //------------------------------------------------------------------------------------------------------
    //Buton-4_Priz_4
    if (results.value == BUTON4)
    {
      digitalWrite(Priz_4, !digitalRead(Priz_4));
      if (digitalRead(Priz_4) == HIGH)
      {
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
      }
      else
      {
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
      }
    }
    //------------------------------------------------------------------------------------------------------
    //Buton-5_Priz-5
    if (results.value == BUTON5)
    {
      digitalWrite(Priz_5, !digitalRead(Priz_5));
      if (digitalRead(Priz_5) == HIGH)
      {
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
      }
      else
      {
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
      }
    }
    //------------------------------------------------------------------------------------------------------
    //Buton-6_Priz-6
    if (results.value == BUTON6)
    {
      digitalWrite(Priz_6, !digitalRead(Priz_6));
      if (digitalRead(Priz_6) == HIGH)
      {
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
      }
      else
      {
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
      }
    }
    //------------------------------------------------------------------------------------------------------

    if (results.value == BUTON7)
    {
      digitalWrite(Priz_7, !digitalRead(Priz_7));
      if (digitalRead(Priz_7) == HIGH)
      {
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
      }
      else
      {
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
      }
    }
    //------------------------------------------------------------------------------------------------------
    //Buton-8_Priz-8
    if (results.value == BUTON8)
    {
      digitalWrite(Priz_8, !digitalRead(Priz_8));
      if (digitalRead(Priz_8) == HIGH)
      {
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
      }
      else
      {
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
      }
    }
    //------------------------------------------------------------------------------------------------------
    //Buton-9_Komple Aç
    if (results.value == BUTON9)
    {
      digitalWrite(Priz_1, HIGH);
      digitalWrite(Priz_2, HIGH);
      digitalWrite(Priz_3, HIGH);
      digitalWrite(Priz_4, HIGH);
      digitalWrite(Priz_5, HIGH);
      digitalWrite(Priz_6, HIGH);
      digitalWrite(Priz_7, HIGH);
      digitalWrite(Priz_8, HIGH);
      digitalWrite(Buzzer, HIGH);
      delay(100);
      digitalWrite(Buzzer, LOW);
    }
    //-------------------------------------------------------------------------------------------------------
    //Buton-10_Komple Kapat
    if (results.value == BUTON10)
    {
      digitalWrite(Priz_1, LOW);
      digitalWrite(Priz_2, LOW);
      digitalWrite(Priz_3, LOW);
      digitalWrite(Priz_4, LOW);
      digitalWrite(Priz_5, LOW);
      digitalWrite(Priz_6, LOW);
      digitalWrite(Priz_7, LOW);
      digitalWrite(Priz_8, LOW);
      digitalWrite(Buzzer, HIGH);
      delay(100);
      digitalWrite(Buzzer, LOW);
    }
    //------------------------------------------------------------------------------------------------------
    irrecv.resume();
    delay(100);
  }
  //------------------------------------------------------------------------------------------------------
  char key = kpd.getKey();
  if (key) 
  {
    //------------------------------------------------------------------------------------------------------
    //Key - 1_Priz - 1
    switch (key)
    {
      case '1':
        digitalWrite(Priz_1, !digitalRead(Priz_1));
        if (digitalRead(Priz_1) == HIGH);
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
        break;
    }
    //------------------------------------------------------------------------------------------------------
    //Key - 2_Priz - 2
    switch (key)
    {
      case '2':
        digitalWrite(Priz_2, !digitalRead(Priz_2));
        if (digitalRead(Priz_2) == HIGH);
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
        break;
    }
    //------------------------------------------------------------------------------------------------------
    //Key - 3_Priz - 3
    switch (key)
    {
      case '3':
        digitalWrite(Priz_3, !digitalRead(Priz_3));
        if (digitalRead(Priz_3) == HIGH);
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
        break;
    }
    //------------------------------------------------------------------------------------------------------
    //Key - 4_Priz - 4
    switch (key)
    {
      case '4':
        digitalWrite(Priz_4, !digitalRead(Priz_4));
        if (digitalRead(Priz_4) == HIGH);
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
        break;
    } switch (key)
      //------------------------------------------------------------------------------------------------------
      //Key - 5_Priz - 5
    {
      case '5':
        digitalWrite(Priz_5, !digitalRead(Priz_5));
        if (digitalRead(Priz_5) == HIGH);
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
        break;
    }
    //------------------------------------------------------------------------------------------------------
    //Key - 6_Priz - 6
    switch (key)
    {
      case '6':
        digitalWrite(Priz_6, !digitalRead(Priz_6));
        if (digitalRead(Priz_6) == HIGH);
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
        break;
    }
    //------------------------------------------------------------------------------------------------------
    //Key - 7_Priz - 7
    switch (key)
    {
      case '7':
        digitalWrite(Priz_7, !digitalRead(Priz_7));
        if (digitalRead(Priz_7) == HIGH);
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
        break;
    }
    //------------------------------------------------------------------------------------------------------
    //Key - 8_Priz - 8
    switch (key)
    {
      case '8':
        digitalWrite(Priz_8, !digitalRead(Priz_8));
        if (digitalRead(Priz_8) == HIGH);
        digitalWrite(Buzzer, HIGH);
        delay(100);
        digitalWrite(Buzzer, LOW);
        break;
    }
  }
}

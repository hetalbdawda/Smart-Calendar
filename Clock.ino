#include "SevSeg.h"
#include "pitches.h"

SevSeg sevseg; 

int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};


void setup(){
  
  byte numDigits = 4;
  byte digitPins[] = {10, 11, 12, 13};
  byte segmentPins[] = {9, 2, 3, 5, 6, 8, 7, 4};

  bool resistorsOnSegments = true; 
  bool updateWithDelaysIn = true;
  byte hardwareConfig = COMMON_CATHODE; 
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(90);

  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(1, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(1);
  }
delay(2000);
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(1, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(1);
  }
}

int time1 = 730;
void loop(){
  
    sevseg.setNumber(time1, 2);
    delay(5000);
    sevseg.refreshDisplay(); 
    sevseg.setNumber(22, 0);
    delay(5000);
    sevseg.refreshDisplay();
    sevseg.setNumber(time1, 2);
    delay(5000);
    sevseg.refreshDisplay(); 
    sevseg.setNumber(22, 0);
    delay(5000);
    sevseg.refreshDisplay(); 
    sevseg.setNumber(time1, 2);
    delay(5000);
    sevseg.refreshDisplay(); 
    sevseg.setNumber(22, 0);
    delay(5000);
    sevseg.refreshDisplay(); 
    sevseg.setNumber(time1, 2);
    delay(5000);
    sevseg.refreshDisplay(); 
    sevseg.setNumber(22, 0);
    delay(5000);
    sevseg.refreshDisplay(); 
    sevseg.setNumber(time1, 2);
    delay(5000);
    sevseg.refreshDisplay(); 
    sevseg.setNumber(22, 0);
    delay(5000);
    sevseg.refreshDisplay(); 
    sevseg.setNumber(time1, 2);
    delay(5000);
    sevseg.refreshDisplay(); 
    sevseg.setNumber(22, 0);
    delay(5000);
    sevseg.refreshDisplay(); 
    time1++; 
    
}

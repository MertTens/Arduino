/*************************************************
 * WORK IN PROGRESS
 * ideally, you would be able to play a series of 3 notes and
 * have the arduino play them back to you
 * there would be sensors connected to analong inputs 1-3
 *************************************************/
#include "pitches.h"

const int threshold = 10;

int note1 = 0, note2 = 0, note3 = 0;

bool allAssigned = false;

int notes[] = {
  NOTE_A4, NOTE_B4, NOTE_C3
};

void setup() {
  

}

void loop() {
  for(int thisSensor = 0; thisSensor < 3; thisSensor++) {
    //get reading
    int sensorReading = analogRead(thisSensor);

    //if the sensor is pressed hard enough, store the note
    //also vill variables appropriately
    if(sensorReading > threshold) {
      tone(8, notes[thisSensor], 20);
      if (note1 = 0)
        note1 = notes[thisSensor];
      else if (note2 = 0)
        note2 = notes[thisSensor];
      else if (note3 = 0)  {
        note3 = notes[thisSensor];
        allAssigned = true;
      }
    }
  }
  //after all notes have been assigned, play them in order
  //then clear them for the next assignment
  if (allAssigned)  {
    delay(500);
    tone(8, note1, 500);
    delay(500);
    tone(8, note2, 500);
    delay(500);
    tone(8, note3, 500);
    delay(500);
    note1 = 0;
    note2 = 0;
    note3 = 0;
    allAssigned = false;
  }

  
}

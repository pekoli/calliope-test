#include "MicroBit.h"

MicroBit uBit;

int messeEntfernung(){
  // sende Trigger-Signal
  uBit.io.P12.setDigitalValue(0);
  wait_us(2);
  uBit.io.P12.setDigitalValue(1);
  wait_us(10);
  uBit.io.P12.setDigitalValue(0);
  // empfange Echo
  while(0 == uBit.io.P0.getDigitalValue() );
  int k = 0;
  while(1 == uBit.io.P0.getDigitalValue() ){
    k++; // Entfernung ~ Dauer HI an Echo-Pin 
  }
  return k;
}

int main(){

    uBit.init();

    while(1){
      int e = messeEntfernung();
      if( e > 4000 ){
	uBit.rgb.setColour(0, 0, 0x20, 0);
      }else if ( e > 3000 ){
	uBit.rgb.setColour(0, 0x30, 0, 0);
      }else if ( e > 2000 ){
	uBit.rgb.setColour(0, 0xbb, 0, 0);
      }else if ( e > 1000 ){
	uBit.rgb.setColour(0x20, 0, 0, 0);
      }else{
	uBit.rgb.setColour(0xFF, 0, 0, 0);
      }
      uBit.sleep(100);
    }
}

/*
  uBit.rgb.setColour(0x33, 0x00, 0x00, 0x00); // rot mit Intensität ~1/5
  uBit.rgb.setColour(0x00, 0xFF, 0x00, 0x00); // grün 100%
*/

// #include "MicroBit.h"

// MicroBit uBit;
// MicroBitMessageBus bus; 
// MicroBitPin P0(MICROBIT_ID_IO_P12, MICROBIT_PIN_P12, PIN_CAPABILITY_DIGITAL); // P0 = P12 
// MicroBitPin P1(MICROBIT_ID_IO_P0, MICROBIT_PIN_P0, PIN_CAPABILITY_DIGITAL); 

// void onPulse(MicroBitEvent evt) { 
//   int duration = evt.timestamp;
//   uBit.display.scroll(duration);
//   uBit.rgb.setColour(0xff, 0x00, 0x00, 0x00);
// }

// int main(){

//     uBit.init();
//     uBit.display.clear();

//     scheduler_init(bus);
  
//     P1.eventOn(MICROBIT_PIN_EVENT_ON_PULSE);
//     bus.listen(MICROBIT_ID_IO_P0, MICROBIT_PIN_EVT_PULSE_HI, onPulse, MESSAGE_BUS_LISTENER_IMMEDIATE);
    
//     while(1){
//       fiber_sleep(1000);
//       uBit.display.scroll(">");
//       // sende Trigger-Signal
//       P0.setDigitalValue(0);
//       wait_us(2);
//       P0.setDigitalValue(1);
//       wait_us(10);
//       P0.setDigitalValue(0);
//       // empfange Echo
      
//     }
//     release_fiber();
// }




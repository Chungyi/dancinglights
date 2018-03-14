// ***************************************************
//     DancingLights - First trial for Maker-UNO
// ***************************************************
// target: Arduino UNO
// v.1.0.0
// 2018.03. by Bird

//***********************************************************************************************

#define maxDelay 50
byte LEDindex[12] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};    // index array for LED pin assignment
int delaytime=maxDelay;

//***********************************************************************************************

void initIO()             // pin mode setip
{
  int i;
  for(i=0;i<=11;i++)
    pinMode(LEDindex[i], OUTPUT);
    digitalWrite(LEDindex[i], LOW);
}

//***********************************************************************************************

void setup()
{
  initIO();
}

void loop()
{
  
  int i;
  for(i=0;i<11;i++)
  {
    digitalWrite(LEDindex[i], HIGH);
    delay(delaytime);
    if(delaytime >1)
      delaytime*=0.999;
    else
      delaytime=maxDelay;
    digitalWrite(LEDindex[i], LOW);
  }

  for(i=11;i>0;i--)
  {
    digitalWrite(LEDindex[i], HIGH);
    delay(delaytime);
    if(delaytime >1)
      delaytime*=0.999;
    else
      delaytime=maxDelay;
    digitalWrite(LEDindex[i], LOW);
  }
}

#include "Arduino.h"
#include "Mot.h"
int V1=0, V2=0;
void MotStart(int P1, int P2, int V){
	if(V<0)
	{
		V1 = map(V, -100, 0, 255, 15);
		digitalWrite(P1, LOW);
		analogWrite(P2, V1);
	}
	if(V>0)
	{
		V2 = map(V, 0, 100, 15, 255);
		digitalWrite(P2, LOW);
		analogWrite(P1, V2);
	}
}

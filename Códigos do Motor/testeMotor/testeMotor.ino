int Entrada1 = 0; //Entrada do terminal do motor ligado ao pino 2 do L293D e a Digital 2 do Arduino 
int Entrada2 = 2; //Entrada do terminal do motor ligado ao pino 7 do L293D e a Digital 7 do Arduino 
 
void setup( ) 
{
    //Define os pinos como saida 
    pinMode(Entrada1, OUTPUT); 
    pinMode(Entrada2, OUTPUT); 
 
} 
 
void loop( ) 
{  
        digitalWrite(Entrada1, HIGH); 
        digitalWrite(Entrada2, LOW);
        delay (100);
}

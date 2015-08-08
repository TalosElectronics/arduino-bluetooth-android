int Carga=13;
int estado=0;

void setup()
{
  Serial.begin(9600);
  pinMode(Carga,OUTPUT);
}

void loop(){
 if(Serial.available()>0){
 estado = Serial.read();
 }
 
if (estado =='1')
  {
   digitalWrite(Carga,HIGH);
  }
if(estado=='2')
  {
   digitalWrite(Carga,LOW);
  }
  
}

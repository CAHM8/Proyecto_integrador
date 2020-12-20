void setup() 
{
  
  Serial.begin(9600);       //iniciamos la comunicacion serial a una velocidad de 9600 baudios
   
}

void loop() 
{
  
  int lectura;              //Variable donde se guardara el valor de la lectura
  lectura = analogRead(0);  //se realiza la lectura y se almacena en la variable lectura
  Serial.print(lectura);    //se envia el valor guardado a traves del puerto serial
  delay(500);

}

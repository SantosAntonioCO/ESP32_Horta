//Utilizando o Sensor de Luminosidade LDR no Arduino
//https://www.blogdarobotica.com/2020/09/29/utilizando-o-sensor-de-luminosidade-ldr-no-arduino/
int ldr = A0;//Atribui A0 a variável ldr
int valorldr = 0;//Declara a variável valorldr como inteiro

void setup() {
  pinMode(ldr, INPUT);//Define ldr (pino analógico A0) como saída
  Serial.begin(9600);//Inicialização da comunicação serial, com taxa de transferência em bits por segundo de 9600
}
void loop() {
   valorldr=analogRead(ldr);//Lê o valor do sensor ldr e armazena na variável valorldr
   //Serial.print("Valor lido pelo LDR = ");//Imprime na serial a mensagem Valor lido pelo LDR
   Serial.println(valorldr);//Imprime na serial os dados de valorldr, lembre-se que e um mapa, ou seja varia de 0 (minimo) a 1024 (valor máximo=5V)
   delay(100); //INTERVALO DE 2 SEGUNDOS
}

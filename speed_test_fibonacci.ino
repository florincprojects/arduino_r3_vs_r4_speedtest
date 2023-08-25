
uint32_t startTimeMicros = 0;
uint32_t endTimeMicros = 0;
uint32_t startTimeMillis = 0;
uint32_t endTimeMillis = 0;


void setup() {
  Serial.begin(115200);

  startTimeMicros = micros();
  startTimeMillis = millis();
  /* Code to measure: */
  printFibonacci(10000);
  /* End of code to measure */
  endTimeMicros = micros();
  endTimeMillis = millis();


  while (!Serial) ;
  Serial.println("\nTime Micros: ");
  Serial.print(endTimeMicros - startTimeMicros);
  Serial.println("\nTime Millis: ");
  Serial.print((float)endTimeMillis - startTimeMillis);
}


void loop() {}


void printFibonacci(int n){    
    static int n1=0,n2=1,n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;      
         printFibonacci(n-1);    
    }    
}   
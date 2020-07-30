//------------------------------------------------Definições------------------------------------------------//
#define valor_x A0
#define valor_y A1

#define dir_d 6
#define step_d 7

#define dir_e 8
#define step_e 9
//------------------------------------------------Definições------------------------------------------------//





//--------------------------------------------------Setup--------------------------------------------------//
void setup(){
  Serial.begin(9600);
  
  pinMode(valor_x, INPUT);
  pinMode(valor_y, INPUT);

  pinMode(dir_d, OUTPUT);
  pinMode(step_d, OUTPUT);
  
  pinMode(dir_e, OUTPUT);
  pinMode(step_e, OUTPUT);
}
//--------------------------------------------------Setup--------------------------------------------------//




//--------------------------------------------------Loop---------------------------------------------------//
void loop(){
//------------------------------------------------Frente---------------------------------------------------//
  while((analogRead(valor_x)) > 700 && (analogRead(valor_y)) > 300 && (analogRead(valor_y)) < 700){
    Serial.println("Frente");
    
    digitalWrite(dir_d, HIGH); //Motor direito no sentido horário
    digitalWrite(dir_e, HIGH); //Motor esquerdo no sentido horário

    digitalWrite(step_d, HIGH); //Passo do motor direito em HIGH
    digitalWrite(step_e, HIGH); //Passo do motor esquerdo em HIGH
    delayMicroseconds(500);

    digitalWrite(step_d, LOW); //Passo do motor direito em LOW
    digitalWrite(step_e, LOW); //Passo do motor esquerdo em LOW
    delayMicroseconds(500);
  }
//------------------------------------------------Frente---------------------------------------------------//





//------------------------------------------------Trás-----------------------------------------------------//
  while((analogRead(valor_x)) < 300 && (analogRead(valor_y)) > 300 && (analogRead(valor_y)) < 700){
    Serial.println("Trás");
    
    digitalWrite(dir_d, LOW); //Motor direito no sentido anti horário
    digitalWrite(dir_e, LOW); //Motor esquerdo no sentido anti horário

    digitalWrite(step_d, HIGH); //Passo do motor direito em HIGH
    digitalWrite(step_e, HIGH); //Passo do motor esquerdo em HIGH
    delayMicroseconds(500);

    digitalWrite(step_d, LOW); //Passo do motor direito em LOW
    digitalWrite(step_e, LOW); //Passo do motor esquerdo em LOW
    delayMicroseconds(500);
  }
//------------------------------------------------Trás-----------------------------------------------------//





//------------------------------------------------Direita---------------------------------------------------//
  while((analogRead(valor_x)) > 300 && (analogRead(valor_x)) < 700 && (analogRead(valor_y)) > 700){
    Serial.println("Direita");
    
    digitalWrite(dir_d, LOW); //Motor direito no sentido anti horário
    digitalWrite(dir_e, HIGH); //Motor esquerdo no sentido horário

    digitalWrite(step_d, HIGH); //Passo do motor direito em HIGH
    delayMicroseconds(500); //Delay menor para girar mais rápido
    digitalWrite(step_d, LOW); //Passo do motor direito em LOW
    delayMicroseconds(500); //Delay menor para girar mais rápido


    digitalWrite(step_e, HIGH); //Passo do motor esquerdo em HIGH
    delayMicroseconds(500); //Delay maior para girar mais devagar
    digitalWrite(step_e, LOW); //Passo do motor esquerdo em LOW
    delayMicroseconds(500); //Delay maior para girar mais devagar
  }
//------------------------------------------------Direita---------------------------------------------------//





//----------------------------------------------Esquerda---------------------------------------------------//
  while((analogRead(valor_x)) > 300 && (analogRead(valor_x)) < 700 && (analogRead(valor_y)) < 300){
    Serial.println("Esquerda");
    
    digitalWrite(dir_d, HIGH); //Motor direito no sentido horário
    digitalWrite(dir_e, LOW); //Motor esquerdo no sentido anti horário
    
    digitalWrite(step_e, HIGH); //Passo do motor esquerdo em HIGH
    delayMicroseconds(500); //Delay menor para girar mais rápido
    digitalWrite(step_e, LOW); //Passo do motor esquerdo em LOW
    delayMicroseconds(500); //Delay menor para girar mais rápido

    digitalWrite(step_d, HIGH); //Passo do motor direito em HIGH
    delayMicroseconds(500); //Delay maior para girar mais devagar
    digitalWrite(step_d, LOW); //Passo do motor direito em LOW
    delayMicroseconds(500); ///Delay maior para girar mais devagar
    
  }
//----------------------------------------------Esquerda---------------------------------------------------//





//-------------------------------------------Frente e Direita----------------------------------------------//
  while((analogRead(valor_x)) > 700 && (analogRead(valor_y)) > 700){
    Serial.println("Frente e Direita");
    
    digitalWrite(dir_d, HIGH); //Motor direito no sentido horário
    digitalWrite(dir_e, HIGH); //Motor esquerdo no sentido horário
    
    
    digitalWrite(step_d, HIGH); //Passo do motor direito em HIGH
    delayMicroseconds(500); //Delay menor para girar mais rápido
    digitalWrite(step_d, LOW); //Passo do motor direito em LOW
    delayMicroseconds(500); //Delay menor para girar mais rápido
    
  digitalWrite(step_e, HIGH); //Passo do motor esquerdo em HIGH
    delayMicroseconds(800); //Delay maior para girar mais devagar
    digitalWrite(step_e, LOW); //Passo do motor esquerdo em LOW
    delayMicroseconds(800); //Delay maior para girar mais devagar
    
  }
//-------------------------------------------Frente e Direita----------------------------------------------//






//-------------------------------------------Frente e Esquerda--------------------------------------------//
  while((analogRead(valor_x)) > 700 && (analogRead(valor_y)) < 300){
    Serial.println("Frente e Esquerda");
     
    digitalWrite(dir_d, HIGH); //Motor direito no sentido horário
    digitalWrite(dir_e, HIGH); //Motor esquerdo no sentido anti horário
    
    digitalWrite(step_e, HIGH); //Passo do motor esquerdo em HIGH
    delayMicroseconds(500); //Delay menor para girar mais rápido
    digitalWrite(step_e, LOW); //Passo do motor esquerdo em LOW
    delayMicroseconds(500); //Delay menor para girar mais rápido

    digitalWrite(step_d, HIGH); //Passo do motor direito em HIGH
    delayMicroseconds(800); //Delay maior para girar mais devagar
    digitalWrite(step_d, LOW); //Passo do motor direito em LOW
    delayMicroseconds(800); ///Delay maior para girar mais devagar
    
  }
//-------------------------------------------Frente e Esquerda--------------------------------------------//





//-------------------------------------------Trás e Direita----------------------------------------------//
  while((analogRead(valor_x)) < 300 && (analogRead(valor_y)) > 700){
    Serial.println("Trás e Direita");
    
    digitalWrite(dir_d, LOW); //Motor direito no sentido horário
    digitalWrite(dir_e, LOW); //Motor esquerdo no sentido horário
    
    
    digitalWrite(step_d, HIGH); //Passo do motor direito em HIGH
    delayMicroseconds(500); //Delay menor para girar mais rápido
    digitalWrite(step_d, LOW); //Passo do motor direito em LOW
    delayMicroseconds(500); //Delay menor para girar mais rápido
    
  digitalWrite(step_e, HIGH); //Passo do motor esquerdo em HIGH
    delayMicroseconds(800); //Delay maior para girar mais devagar
    digitalWrite(step_e, LOW); //Passo do motor esquerdo em LOW
    delayMicroseconds(800); //Delay maior para girar mais devagar
    
  }
//-------------------------------------------Trás e Direita----------------------------------------------//





//-------------------------------------------Trás e Esquerda---------------------------------------------//
  while((analogRead(valor_x)) < 300 && (analogRead(valor_y)) < 300){
    Serial.println("Trás e Esquerda");
     
    digitalWrite(dir_d, LOW); //Motor direito no sentido anti horário
    digitalWrite(dir_e, LOW); //Motor esquerdo no sentido anti horário
    
    digitalWrite(step_e, HIGH); //Passo do motor esquerdo em HIGH
    delayMicroseconds(500); //Delay menor para girar mais rápido
    digitalWrite(step_e, LOW); //Passo do motor esquerdo em LOW
    delayMicroseconds(500); //Delay menor para girar mais rápido

    digitalWrite(step_d, HIGH); //Passo do motor direito em HIGH
    delayMicroseconds(800); //Delay maior para girar mais devagar
    digitalWrite(step_e, LOW); //Passo do motor direito em LOW
    delayMicroseconds(800); ///Delay maior para girar mais devagar
    
  }
//-------------------------------------------Trás e Esquerda--------------------------------------------//
}

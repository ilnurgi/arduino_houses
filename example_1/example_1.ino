/*
 * 1. посекундно мигает
 */
 
// номер светового индикатора
int ledPin =  13;      

// функция, настройка окужения
void setup() {
  // пин у нас на выход
  pinMode(ledPin, OUTPUT);      
}

// бесконечный цикл работы устройства
void loop()
{
  // включаем индикатор
  digitalWrite(ledPin, HIGH);
  
  // спим 500 мсек
  delay(500);
  
  // выключаем индикатор
  digitalWrite(ledPin, LOW);
  
  // спим 500 сек
  delay(500);
}


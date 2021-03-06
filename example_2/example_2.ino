/*
 * 1. посекундно мигает
 * 2. и отпраялет по сериному порту время работы устройства
 */
 
// номер светового индикатора
int ledPin =  13;      

// время работы устройства
unsigned long time;

// функция, настройка окужения
void setup() {
  // пин у нас на выход
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);  
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
  
  // получаем время работы устройства, в миллисекундах
  // и отправялем данные по сериному порту, по USB
  time = millis();
  Serial.println(time);
}


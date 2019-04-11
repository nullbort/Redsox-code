// Jan 3, 2019
	
const int cycles = 10000;

	
void setup() {                
	pinMode(0, OUTPUT);     
	pinMode(1, OUTPUT);
	pinMode(2, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
}
	
void loop() {
	clockwise(cycles);
	counterClockwise(cycles);
  swingFail(2000);
	swingClockwise(5000);
	swingCounterClockwise(5000);
}

void clockwise(int speed) {
    for (int i = 0; i<= speed; i++) showRow(B00100000,B00000000);
    for (int i = 0; i<= speed; i++) showRow(B00001000,B00000000);
    for (int i = 0; i<= speed; i++) showRow(B00000100,B00000000);
    for (int i = 0; i<= speed; i++) showRow(B00000001,B00000000);
    for (int i = 0; i<= speed; i++) showRow(B00000000,B00000001);
    for (int i = 0; i<= speed; i++) showRow(B01000000,B00000000);
    for (int i = 0; i<= speed; i++) showRow(B00010000,B00000000);
    for (int i = 0; i<= speed; i++) showRow(B00000010,B00000000);
    for (int i = 0; i<= speed; i++) showRow(B10000000,B00000000);
    for (int i = 0; i<= speed; i++) showRow(B00000000,B00000010);
}

void counterClockwise(int speed) {
	for (int i = 0; i<= speed; i++) showRow(B00000000,B00000010);
	for (int i = 0; i<= speed; i++) showRow(B10000000,B00000000);
	for (int i = 0; i<= speed; i++) showRow(B00000010,B00000000);
	for (int i = 0; i<= speed; i++) showRow(B00010000,B00000000);
	for (int i = 0; i<= speed; i++) showRow(B01000000,B00000000);
	for (int i = 0; i<= speed; i++) showRow(B00000000,B00000001);
	for (int i = 0; i<= speed; i++) showRow(B00000001,B00000000);
	for (int i = 0; i<= speed; i++) showRow(B00000100,B00000000);
	for (int i = 0; i<= speed; i++) showRow(B00001000,B00000000);
	for (int i = 0; i<= speed; i++) showRow(B00100000,B00000000);
}

void swingClockwise(int speed) {
    for (int i = 0; i<= speed; i++) showRow(B00100000,B00000000);
    for (int i = 0; i<= speed; i++) showRow(B00001000,B00000000);
    for (int i = 0; i<= speed; i++) showRow(B00000100,B00000000);
    for (int i = 0; i<= speed; i++) showRow(B00000001,B00000000);
    for (int i = 0; i<= speed; i++) showRow(B00000000,B00000001);
    speed = 1300;
    for (int i = 0; i<= speed; i++) showRow(B01000000,B00000000);
    for (int i = 0; i<= speed; i++) showRow(B00010000,B00000000);
    for (int i = 0; i<= speed; i++) showRow(B00000010,B00000000);
    for (int i = 0; i<= speed; i++) showRow(B10000000,B00000000);
    for (int i = 0; i<= speed; i++) showRow(B00000000,B00000010);
    clockwise(speed);	
}

void swingCounterClockwise(int speed) {
	for (int i = 0; i<= speed; i++) showRow(B00000000,B00000010);
	for (int i = 0; i<= speed; i++) showRow(B10000000,B00000000);
	for (int i = 0; i<= speed; i++) showRow(B00000010,B00000000);
	for (int i = 0; i<= speed; i++) showRow(B00010000,B00000000);
	for (int i = 0; i<= speed; i++) showRow(B01000000,B00000000);
	speed = 1300;
	for (int i = 0; i<= speed; i++) showRow(B00000000,B00000001);
	for (int i = 0; i<= speed; i++) showRow(B00000001,B00000000);
	for (int i = 0; i<= speed; i++) showRow(B00000100,B00000000);
	for (int i = 0; i<= speed; i++) showRow(B00001000,B00000000);
	for (int i = 0; i<= speed; i++) showRow(B00100000,B00000000);
	counterClockwise(speed);
}

void swingFail(int speed) {
    for (int i = 0; i<= speed; i++) showRow(B00100000,B00000000); //1
    for (int i = 0; i<= speed; i++) showRow(B00001000,B00000000); //2
    for (int i = 0; i<= speed; i++) showRow(B00000100,B00000000); //3
    for (int i = 0; i<= speed; i++) showRow(B00000001,B00000000); //4
    for (int i = 0; i<= speed; i++) showRow(B00000000,B00000001); //5
    for (int i = 0; i<= speed; i++) showRow(B01000000,B00000000); //6
    for (int i = 0; i<= speed; i++) showRow(B00010000,B00000000); //7
    for (int i = 0; i<= speed; i++) showRow(B00000010,B00000000); //8
    for (int i = 0; i<= speed; i++) showRow(B10000000,B00000000); //9
    delay(300);
    speed = speed / 2;
    for (int i = 0; i<= speed; i++) showRow(B00000010,B00000000); //8
    for (int i = 0; i<= speed; i++) showRow(B00010000,B00000000); //7
    for (int i = 0; i<= speed; i++) showRow(B01000000,B00000000); //6
    for (int i = 0; i<= speed; i++) showRow(B00000000,B00000001); //5
    speed = speed * 2;
    for (int i = 0; i<= speed; i++) showRow(B00000001,B00000000); //4
    for (int i = 0; i<= speed; i++) showRow(B00000100,B00000000); //3
    for (int i = 0; i<= speed; i++) showRow(B00001000,B00000000); //2
    delay(300);
    for (int i = 0; i<= speed; i++) showRow(B00000100,B00000000); //3
    for (int i = 0; i<= speed; i++) showRow(B00000001,B00000000); //4
    for (int i = 0; i<= speed; i++) showRow(B00000000,B00000001); //5
    for (int i = 0; i<= speed; i++) showRow(B01000000,B00000000); //6
    for (int i = 0; i<= speed; i++) showRow(B00010000,B00000000); //7
    for (int i = 0; i<= speed; i++) showRow(B00000010,B00000000); //8
    delay(300);
    speed = speed / 2;
    for (int i = 0; i<= speed; i++) showRow(B00010000,B00000000); //7
    for (int i = 0; i<= speed; i++) showRow(B01000000,B00000000); //6
    for (int i = 0; i<= speed; i++) showRow(B00000000,B00000001); //5
    speed = speed * 2;
    for (int i = 0; i<= speed; i++) showRow(B00000001,B00000000); //4
    for (int i = 0; i<= speed; i++) showRow(B00000100,B00000000); //3
    delay(300);
    for (int i = 0; i<= speed; i++) showRow(B00000001,B00000000); //4
    for (int i = 0; i<= speed; i++) showRow(B00000000,B00000001); //5
    for (int i = 0; i<= speed; i++) showRow(B01000000,B00000000); //6
    for (int i = 0; i<= speed; i++) showRow(B00010000,B00000000); //7
    delay(300);
    speed = speed / 2;
    for (int i = 0; i<= speed; i++) showRow(B01000000,B00000000); //6
    for (int i = 0; i<= speed; i++) showRow(B00000000,B00000001); //5
    speed = speed * 2;
    for (int i = 0; i<= speed; i++) showRow(B00000001,B00000000); //4
    delay(300);
    for (int i = 0; i<= speed; i++) showRow(B00000000,B00000001); //5
    for (int i = 0; i<= speed; i++) showRow(B01000000,B00000000); //6
    delay(300);
    speed = speed / 2;
    for (int i = 0; i<= speed; i++) showRow(B00000000,B00000001); //5
    speed = speed * 2;
    for (int i = 0; i<= speed; i++) showRow(B00000001,B00000000); //4
    delay(300);
    for (int i = 0; i<= speed; i++) showRow(B00000000,B00000001); //5
    for (int i = 0; i<= speed; i++) showRow(B01000000,B00000000); //6
    delay(300);
    speed = speed / 2;
    for (int i = 0; i<= speed; i++) showRow(B00000000,B00000001); //5
    speed = speed * 2;
    for (int i = 0; i<= speed; i++) showRow(B00000001,B00000000); //4
    delay(300);
    for (int i = 0; i<= speed; i++) showRow(B00000000,B00000001); //5
    delay(500);
}
	
void showRow(int bi, int bi2) {
	if (bi2&B00000010){PORTB = B00000010; DDRB = B00010010;} //10
	if (bi2&B00000001){PORTB = B00010000; DDRB = B00010010;} //9
	if (bi&B10000000){PORTB = B00010000; DDRB = B00011000;} //8
	if (bi&B01000000){PORTB = B00000010; DDRB = B00000011;} //7
	if (bi&B00100000){PORTB = B00000001; DDRB = B00000011;} //6
	if (bi&B00010000){PORTB = B00000100; DDRB = B00000110;} //5
	if (bi&B00001000){PORTB = B00000010; DDRB = B00000110;} //4
	if (bi&B00000100){PORTB = B00000100; DDRB = B00001100;} //3
	if (bi&B00000010){PORTB = B00001000; DDRB = B00001100;} //2
	if (bi&B00000001){PORTB = B00001000; DDRB = B00011000;} //1
}
	
void dimAll() {
	PORTB = B00000000; DDRB = B00000000; // dim all 
}
	

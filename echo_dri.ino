#define ECHO_PIN 8
#define TRIG_PIN 9

static float duration = 0;

void echo_setup(void)
{
	pinMode(TRIG_PIN, OUTPUT);
	pinMode(ECHO_PIN, INPUT);
}

float echo_measure(void)
{
	digitalWrite(TRIG_PIN, LOW);	
	delayMicroseconds(2);
	digitalWrite(TRIG_PIN, HIGH);	
	delayMicroseconds(10);
	digitalWrite(TRIG_PIN, LOW);	
	duration = pulseIn(ECHO_PIN, HIGH);	
	return (duration/2)/29.1;
}


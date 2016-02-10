static int STEP_PIN[4] = {4, 5, 6, 7};

void stepper_setup(void)
{
	for( int i = 0; i < 4; i++ )
		pinMode(STEP_PIN[i], OUTPUT);
}

// enum HIGH and LOW seems replacable with boolean true and false
void stepper_step(boolean b[4])
{
	for( int i = 0; i < 4; i++ )
		digitalWrite(STEP_PIN[i], b[i]);
}

static int IR[4] = {10, 11, 12, 13};

void rf_setup(void)
{
	for( int i = 0; i < 4; i++ )
		pinMode(IR[i], INPUT_PULLUP);	
}

int rf_read(void)
{
	int status = 0;
	for( int i = 0; i < 4; i++ ){
		status <<= 1;
		status |= digitalRead(IR[3-i]);
	}
	return status;
}

/* here is 14-17, not 0-3 or A0-A3 */
static int WHL[4] = {14, 15, 16, 17};

void whl_setup(void)
{
}

/* unsigned char, not char */
void whl_set(unsigned char lf, unsigned char lr, unsigned char rf, unsigned char rr)
{
	analogWrite(WHL[0], lf);
	analogWrite(WHL[1], lr);
	analogWrite(WHL[2], rf);
	analogWrite(WHL[3], rr);
}

#include <Arduino.h>

int main()
{
	// mbed相关初始化
	software_init_hook();
	
	setup();
	
	for (;;)
	{
		loop();
	}
	
	return 0;
}
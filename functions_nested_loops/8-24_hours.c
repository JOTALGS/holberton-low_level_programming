#include "main.h"

/**
 * jack_bauer - sabemo qie ne
 */
void jack_bauer(void)
{
	char hr;
	char hr_1;
	char mn;
	char mn_1;

	for (hr = '0'; hr <= '9'; hr++)
	{
		for (hr_1 = '0'; hr_1 <= '9'; hr_1++)
		{
			for (mn = '0'; mn <= '9'; mn++)
			{
				for (mn_1 = '0'; mn_1 <= '9'; mn_1++)
				{
					_putchar(hr);
					_putchar(hr_1);
					_putchar(':');
					_putchar(mn);
					_putchar(mn_1);
					_putchar('\n');
				}
			}
		}
	}
}

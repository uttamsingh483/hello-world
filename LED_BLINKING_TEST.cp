#line 1 "C:/Users/UTTAM/Documents/New folder/STM32/LED BLINK/LED_BLINKING_TEST.c"
unsigned int i=0;
#line 21 "C:/Users/UTTAM/Documents/New folder/STM32/LED BLINK/LED_BLINKING_TEST.c"
void main()
{
 IOPCEN_bit = 1;
 GPIOC_CRH = 0x00600000;

 for(i=0;i<=10;i++)
 {
 GPIOC_ODR = 0;
 Delay_ms(20);
 GPIOC_ODR = 0xFFFF;
 Delay_ms(200);
 }
}

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

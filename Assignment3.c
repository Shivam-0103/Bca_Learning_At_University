//Can you help your digital design faculty in correcting the assignment on number conversions by writing a program to convert a decimal number to its binary equivalent using a while loop.
//Example, lets say input is 7, output should be 111

int main()
{
  int dec, rem, binary = 0, base = 1;

   printf("Enter a decimal number: ");
   scanf("%d", &dec);

   while (dec> 0)
    {
      rem= dec% 2;
      binary = binary + rem * base;
      dec = dec / 2;
      base = base * 10;
   }

   printf("Binary equivalent: %d", binary);
  return 0;
}

#include "mbed.h"

#include "TextLCD.h"



TextLCD lcd(D2, D3, D4, D5, D6, D7);


int main()

{

      int x=30;

      lcd.printf("106061139\n");

      while(true)

      {

                        // toggle led

            lcd.locate(5,1);

            lcd.printf("%5i",x);    //conuter display

            wait(1);
            if(x>0)
                x--;

      }

}
# STM32_BluePill_Arduino_IDE
Arduino IDE code for STM32 Blue Pill board - STM32F103C8T6 -

- Follow the steps in https://github.com/stm32duino/Arduino_Core_STM32 , to prepare ARDUINO IDE to be able to load codes for the STM32 boards.

- There is a lot of options to upload code, such as: SWD(via STLink),UDF or Serial. This methods can be seen here: https://github.com/stm32duino/wiki/wiki/Upload-methods#stm32cubeprogrammer.
  The method that worked for me was the serial with a FTDI board. Connections:
            
            FTDI  -  BluePill
            +5V   -  5V
            GND   -  G
            RXD   -  A9
            TXD   -  A10
         
- To Upload the code, before push the button to Load code in ARDUINO IDE, you must put the BluePill board in "native bootoader" mode. To active this mode, you have to change the jumpers positions:
  
            BOOT 0 -> 1
            BOOT 1 -> 0

- Tool configurations:

            Board: Generic STM32F1 series
            Board part nmber: Bluepill F103c8
            U(S)ART support: Enabled(generic 'Serial')
            USB support(if available): None
            USB speed(if available): Low/Full Speed
            Optimize: Smallest(-OS Default)
            C Runtime Library: Newlib Nano(Default)
            Upload Method: STMCubeProgrammer(Serial)
            
- After changing the jumpers, push the reset button and upload the code.

- After Uploading the code, put the BOOT0 jumper to position "0" and the code will run normally.

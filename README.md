# An arduino temperature sensor for a kettle

Want to make water for your chimarrao and wonder if your kettle has reached your sweet-spot temperature? This is a arduino based battery powered water temperature sensor to put into your kettle. As soon as the set temperature is reached, the sensor makes noise and the green LED lights up. 

## Parts List

- 1 x [Arduino Nano](https://amzn.to/3uV4884)
- 1 x [DS18B20 waterproof temperature sensor](https://amzn.to/3bWZaPK)
- 1 x [1/2 or 1/4 sized solderable breadboard](https://amzn.to/3bZ5xSD) (the STL is made for 1/4 size)
- 3 x [150 Ohm resistors](https://amzn.to/3qjB0nw)
- 1 x [green LED](https://amzn.to/2Ojiaj6)
- 2 x red LED
- 1 x [battery holder](https://amzn.to/3bX01Qs) for 4xAA or 4xAAA batteries
- 1 x [switch](https://amzn.to/2PBFaL3)
- 1 x [piezo buzzer](https://amzn.to/3v3yqFY)
- [cables](https://amzn.to/3ri11ou)

## Assembly

When you solder the resistors directly to the LED's you get along with a 1/4 sized breadboard. Other than that, just put together, put everything into the box and you are ready to go.

I used superglue extensively when putting everything into the 3d printed box. 

## Notes

This was made with simplicity in mind to keep usage, code and assembly as simple as possible. Change mix_temp and max_temp to adjust to your tastiest temperature. 
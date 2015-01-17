# ElectronicMural

This is the Arduino code currently running on my Electronic Mural. The expected behavior is the following: when the room is quiet, nothing happens. When the noise level is about normal speaking volume, the LEDs light up in order until the room the becomes quiet again.

`LED1`, `LED2`, and `LED3` are the output pins for the six LEDs in the mural. I use charlieplexing to turn them on individually.

`sig` is the input pin for the sound sensor.

`power` was the output pin for a power indicator LED that stopped working and I never fixed. Instead I took the sticker off the wall, I was so mad. 

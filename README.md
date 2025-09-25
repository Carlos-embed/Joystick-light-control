# Joystick-light-control
Though a work in progress, I successfully was able to display values based on the position of the joystick. What is in progress is being able to turn on LEDs based on the position of the joystick.

I used the A0 and A1 as my two data receivers on my Arduino.
  A0 = the X axis on the joystick
  A1 = the Y axis on the joystick

As for the LED, I currently have them on the PWN slots to make them dimmable depending on the value of the joystick. I also placed them in a square pattern where:
  right side = Red LED (slot 2)
  top side = Blue LED (slot 10)
  left side = Yellow LED (slot 11)
  bottom side = Green LED (slot 5)

I didn't add a pin to the switch of the joystick since I wanted to focus on grabbing the values of the joystick and displaying them on the dimmable lights.

To finish off this portion, I will add a wiring diagram for when I do finish the code

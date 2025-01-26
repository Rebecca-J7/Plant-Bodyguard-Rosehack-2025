# Rosehack 2025 Project - Plant Bodyguard 2000
## Idea
- Our "Plant Bodyguard" is an innovative system designed to monitor the critical conditions around plants, ensuring they are kept in optimal environments for growth by providing users with real-time feedback on environmental conditions.
-  It helps prevent common issues like underexposure to light, temperature stress, and neglect.
-  The proactive monitoring system ensures the plant receives the optimal conditions it needs to grow and thrive, making it easier for both novice and experienced gardeners to maintain healthy plants.
-  As GenZ, one of our primary focuses is sustainability to combat climate change.
- Our motto is, if we must protect our planet we should start by protecting our plants. 
- We also thought incorporating plants would be a nice nod to the theme of Rose Hack. Finally, the RoseHack logo also inspired us greatly.
- Additionally, staying true to our track of sustainability, we used 100% recycled cardboard which makes up the casing of our project. 
## What It Does
- Holds a plant in the center with our components surrounding it.
- Senses the light in the area and LED shines bright if there is less light and is dim if there is enough light for the plant.
- Senses the temperature in the area around the plant (displays in the Arduino IDE).
- Sense movement is nearby, and a buzzer sound will be played if something is within range of the plant.
## Challenges
- Finding a way to prevent the temperature sensor from being affected by the heating up due to excess voltage.
- The temperature keeps reading significantly higher than the actual temperature in the room.
- This project required us to use a lot of components in conjunction with one another, thus it was quite challenging to adjust the code so that they ran smoothly.
## Accomplishments
- Getting the photoresistor to work in sync with and control the brightness of the LED.
- Getting the HCSR04 ultrasonic sensor to work in sync with the passive buzzer by detecting the distance and setting off the buzzer within 10cm.
- Getting the temperature sensor (DHT11) to work with the previous two components.
- Building a well-structured model to fit along with our Arduino components.
## What We Learned
- How to code for different components of an Arduino (photoresistor, DHT11 (Temperature Sensor), passive buzzer, HC SR04 (Ultrasonic Sensor))
- How to work efficiently with wires to prevent tangling and color-coding to prevent confusion
- Conceptualizing different layouts, determining sizes of breadboards and the most optimal placement of components
(photoresistor, DHT11 (Temperature Sensor), passive buzzer, HC SR04 (Motion Sensor))
- Building a well-structured model to fit along with our Arduino components.
## Next Steps
- With more resources (arduino kits) we could make the temperature display via the 4 Digit Display and use the 8x8 DotMatrix to display shapes that could be used as a key to determining what parts of the plant are being affected, such as if the there is not enough light it could be one shape, if there is motion sensed nearby it would be another shape, if there is a significant temperature increase or decrease it would be another shape, etc.
- With more resources and time we could make a self-watering component where with a timer after a set designated time there would be a 'switch' to activate pouring water from a source above/near the plant down a track to its soil.
- This could help position your project as a valuable tool for plant owners looking to provide the best care possible, blending technology with nature!
## Tracks
- Hardware
- Sustainability
## Schematics
[Plant Bodyguard Arduino Schematics](https://drive.google.com/file/d/1YNK4rFoyuLAuqwZ_h0ggeEZhw9TuqFms/view?usp=sharing)
## Arduino Code
- The code file has been uploaded to this GitHub repository!
## PowerPoint Presentation
[Demo Presentation](https://docs.google.com/presentation/d/1dIug8CcKoXWjLIH0ACUsbeNFddMJ1S-CdpY8tr9mh6Y/edit?usp=sharing)

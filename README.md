# Rosehack 2025 Project - Plant Bodyguard 2000
## Idea
- Our "Plant Bodyguard" is an innovative system designed to monitor the critical conditions around plants, ensuring they are kept in optimal environments for growth.
-  This system improves plant care by providing users with real-time feedback on environmental conditions.
-  It helps prevent common issues like underexposure to light, temperature stress, and neglect.
-  The proactive monitoring system ensures the plant receives the optimal conditions it needs to grow and thrive, making it easier for both novice and experienced gardeners to maintain healthy plants.
## What It Does
- Holds a plant in the center with the components surrounding it.
- Senses the light in the area and LED shines bright if there is less light and is dim if there is enough light for the plant.
- Senses the temperature in the area around the plant (displays in the Arduino IDE).
- Sense movement nearby and will play a buzzer sound if something is within range of the plan.
## Challenges
- Getting multiple components to work at once with the Arduino
- The temperature displayed inaccurately due to the DHT11 (temperature sensor) heating up from the circuit voltage.
## Accomplishments
- Got the photoresistor to detect light and dimness that reflected well with the LED light.
## What We Learned
- How to code for different components of an Arduino (photoresistor, DHT11 (Temperature Sensor), active buzzer, HC SR04 (Motion Sensor))
- Build an accurate model to fit the most components.
## Next Steps
- With more resources (arduino kits) we could make the temperature display via the 4 Digit Display and use the 8x8 DotMatrix to display shapes that could be used as a key to determining what parts of the plant are being affected, such as if the there is not enough light it could be one shape, if there is motion sensed nearby it would be another shape, if there is a significant temperature increase or decrease it would be another shape, etc.
- This could help position your project as a valuable tool for plant owners looking to provide the best care possible, blending technology with nature!

## Tracks
- Hardware
- Sustainability

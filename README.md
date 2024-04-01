# Blink-Light-using-IOT

Overview

This project demonstrates how to control a light using Internet of Things (IoT) technology and an Android app. With this setup, users can remotely control a light fixture through their smartphones. The IoT component involves using a microcontroller, such as an Arduino or Raspberry Pi, to control the light, while the Android app serves as the interface for users to interact with the system.

Features

Turn the light on and off remotely using the Android app.

Real-time status updates indicating whether the light is on or off.

Simple and intuitive user interface for seamless interaction.

Requirements

Hardware:

Microcontroller (Arduino, and Raspberry Pi)

Light fixture

Connecting wires

Internet connection

Software:

Arduino IDE (for programming the microcontroller)

Android Studio (for building and running the Android app)

Setup Instructions

Hardware Setup:

Connect the microcontroller to the light fixture according to the circuit diagram provided.

Ensure the microcontroller is connected to the internet (via Wi-Fi module, Ethernet, etc.).

Software Setup:

Clone or download the repository to your local machine: https://github.com/Suyashspidy/Blink-Light-using-IOT.git

Open the Arduino IDE and upload the provided sketch (blink_light_iot.ino) to the microcontroller.

Open the Android Studio project (BlinkLightApp) and build the Android app.

Configuration:

Configure the IoT device to connect to your Wi-Fi network and obtain its IP address.

Update the Android app with the IP address of the IoT device.

Run:

Power on the microcontroller and ensure it is connected to the internet.

Install the Android app on your smartphone and open it.

Use the app to control the light fixture remotely.

Usage

Launch the Android app on your smartphone.

Tap the "Turn On" button to switch on the light, and tap "Turn Off" to switch it off.

The app will display the current status of the light in real time.

License

This project is licensed under the MIT License.

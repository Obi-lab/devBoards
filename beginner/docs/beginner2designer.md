# Dev Boards :From zero knowledge to a Designer's Perspective

Embark on a transformative journey from absolute beginner to seasoned designer as we unravel the world of development boards.This article introduces you to development boards and give you the power to start using development boards like a seasoned designer.

## What are Development Boards?

Development boards are like miniature(With limited capabilities in this regard ) or rather small computers designed for prototyping electronic projects. These boards provide an easy way to turn electronic ideas to tangible forms for testing ,otherwise known as prototyping.

## Key Components

- **Microcontroller/Microprocessor/SoC:** The brain of the development board, responsible for executing program instructions and controlling connected peripherals/devices.
- **Memory:** Includes both volatile (RAM) and non-volatile (Flash) memory for storing firmware, program code and data.
- **Power Management Unit:** Regulates the supply voltage to ensure stable operation of the board and components connected  to the board.
- **Input/Output Interfaces:** Enable interaction with the board through sensors, buttons, LEDs, displays, and other peripherals.These are often referred as the General Purpose Input/Output (GPIO) pins.
- **Expansion Headers:** Provide access to additional GPIO pins and interfaces for extending functionality.

## Popular Platforms

### Arduino

Arduino is one of the most popular and beginner-friendly development board platforms. It offers a simple, easy-to-use IDE (Integrated Development Environment) that supports major development boards and a vast community with plenty of tutorials and examples.

### Raspberry Pi

Raspberry Pi boards are more powerful than Arduino and can run full-fledged operating systems like Linux. They're great for projects requiring more computational power, such as media centers or web servers.Later you are going to learn that the design requirements of a project will always dictate the type of development board.

### ESP8266/ESP32

These boards are ideal for IoT (Internet of Things) projects. They offer built-in Wi-Fi and Bluetooth capabilities which are essential for IOT development. They're commonly used for home automation, sensor monitoring, and remote control applications.

### STM32 Discovery/Nucleo Boards

BThese are based on ARM Cortex-M processors. STM32 boards are popular for embedded systems development, and offer extensive peripheral support and robust development tools.

## Common Use Cases of Development Boards

These are just but a few of the areas where development boards come in handy.

- **Home Automation projects:** Control lights, appliances, and security systems remotely .
- **Education:** Learning electronics and programming concepts hands-on.
- **Robotics:** Building and programming robots for fun, educational purposes , for prototypes etc.
- **IoT Projects:** Create connected devices for monitoring and controlling various systems.

## Getting Started with Arduino

### Step 1: Install the Arduino IDE

Download and install the Arduino IDE from the [official website](https://www.arduino.cc/en/software).

### Step 2: Connect your Arduino Board

Connect your Arduino board to your computer using a USB cable.

### Step 3: Write Your First Sketch (Code)

Open the Arduino IDE and create a new sketch (File > New). Copy and paste the following code:

```arduino
// Blinking LED Example

// Define the pin connected to the LED
int ledPin = 13;

// Setup function runs once when the board starts up
void setup() {
  // Initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

// Loop function runs repeatedly
void loop() {
  // Turn the LED on (HIGH)
  digitalWrite(ledPin, HIGH);
  // Wait for 1 second
  delay(1000);
  // Turn the LED off (LOW)
  digitalWrite(ledPin, LOW);
  // Wait for 1 second
  delay(1000);
}
```

### Step 4: Upload the Sketch to your Arduino

Select your Arduino board type and then the port from the Tools menu. Then, click the "Upload" button to upload the sketch to your Arduino board.The code will first compile to check for errors and if there are no errors , it will be uploaded or flashed to your arduino board. When this is done you should see something like "Hard Resetting.Leaving " on the arduino console.

### Step 5: Watch your LED Blink!**

If everything is set up correctly, you should see the magic happens.The built-in LED on your Arduino board should be blinking on and off at one-second intervals.

Congratulations! You've just written and uploaded your first Arduino sketch. Easy right?

If you've made it this far, how about we make it even more interesting? Keep reading to gain a designer's perspective and start utilizing boards like the engineer you are!

## Board Selection Based on Design Requirements

### Processor Architecture

Determine whether your project requires a microcontroller or a microprocessor-based solution. Additionally, consider the processing power, speed, and architecture compatibility needed by your system or prototype.

### Input/Output (I/O) Requirements

Identify the type and number of input/output pins needed to connect to peripherals such as sensors ,actuators, displays and communication modules.Development boards have varying number  of different GPIO pins. A system or prototype might need 4 analog sensors and one digital sensor. Buying a board with analog inputs less than 4 in this cased would mean capital loss .

### Communication Interfaces and Connectivity Options

It is important to identify the communication modes that your project will need before settling on a particular board. For example ,you'll find out most boards support serial communication via Universal Asynchronous Receiver/Transmitter (UART) protocol and not all boards have support for WIireless Fidelity (Wi-Fi)and Bluetooth. Here are some general guidelines for board selection for different connectivity requirements.

1. **Wi-Fi:** For projects requiring wireless connectivity, choose a board with built-in Wi-Fi capabilities like ESP8266 or ESP32.
2. **Bluetooth:** If your project involves Bluetooth communication, select a board with integrated Bluetooth support.
3. **Ethernet:** For projects requiring wired network connectivity, opt for a board with an Ethernet port like some Arduino or Raspberry Pi models.
4. **USB:** Consider boards with USB connectivity for easy interfacing with computers and peripherals.

### Power requirements

Development boards have specified voltage , current and power output. This data can be found in their data sheet which is available on the internet. When developing a project , its crucial to know the power requirements of your peripherals ie sensors and actuators. Arduino for instance gives a voltage output of 5V while Esp32 gives a voltage output of 3.3V.Remote IOT projects for instance need low power consumption boards as they'll probably be battery powered and these batteries won't be changed frequently. A designer would go for lets say Esp32 boards that are capable of deep sleep to save on power.

## During Development

### Pin out consideration

Development boards have several types of pins. These include analog pins , digital pins , Rx and Tx pins, PWM pins ,I2C pins, RST pin , power (Vin GND) and others. Its is important to use the correct pin to ensure the board behaves as intended.Even for the GPIOs,there are pins that are safe to use and there are pins that can cause unintended behavior used wrongly. Always use your board's data sheet as a rule of thumb.

## Programming and Debugging

### Programming Environments

Choose an appropriate programming environment based on your familiarity and project requirements. Popular choices include:

- **Arduino IDE:** Beginner-friendly IDE for Arduino boards and also provides support to other boards such as Espressif Boards.
- **PlatformIO:** An open-source ecosystem for IoT development supporting multiple platforms.
- **Visual Studio Code:** A versatile IDE with extensions for various development boards and languages.
These platforms allows you to use different libraries for your projects. Installing a library is a simple as a click or downloading a zip file from GitHub and putting in your libraries folder.

### Debugging Techniques

1. **Serial Communication:** Utilize serial output for debugging purposes, majorly for software debugging. This allows you to print debug messages to a serial monitor.
2. **Hardware Debugging:** A digital multimeter and the boards's data sheet are crucial tools when it comes to hardware debugging. Some advanced boards support hardware debugging using interfaces like JTAG or SWD for real-time debugging of code execution.
3. **Communities:** Development boards have active communities. These communities have records of common issues and provide an invaluable resource to both software and hardware debugging.

Here are links to some of the communities

1. [Arduino Forum](https://forum.arduino.cc/)
2. [Espressif ESP32 Community](https://www.esp32.com/)
3. [ST Community](https://community.st.com/)

## Prototyping Strategies

### Breadboarding

Breadboards enable rapid prototyping of projects.You can quickly connect components without soldering. Breadboards are ideal for experimenting with circuit designs and testing different configurations without making permanent connections.

### PCB Prototyping

Once your design works as intended on a breadboard, consider transitioning to prototyping on a custom PCB (Printed Circuit Board). PCB prototyping offers a more permanent and compact solution, suitable for deployment in final projects.

## What next ?

Keep exploring and experimenting with development boards to unlock new possibilities and push the boundaries of innovation in your projects.Remember the board's data sheet is your bible as a designer and developer. And of course, keep on the look out for even more exciting stuff.

# Project Name: Decibal Detector

Student Name: *Mark Bates*   
Student ID: *20088639*

#### Description:

An underwater sensor that records audio levels and temperature, then sends the data to the user
to determine the effects of humans to the marine environment. The Data recorded will be sent to
a Raspberry Pi via Serial and will then be transformed into readable information for the user.


## Completed:
1. Audio and Temperature sensors working simultaniously
2. RPi and Arduino connected via Serial, data showing on linux terminal
3. Connected the RPi to a Thingspeak cahnnel
4. data translated into radable information via Teamspeak

#### Tools, Technologies and Equipment:

1. Raspberry Pi 3
2. Arduino Uno
3. Arduino Grove shield
3. Audio sensor
4. Temperature Sensor
5. Thingspeak

#### Code Used:

1. Python 3
2. C++


# Setting up the Device


#### Arduino Setup

1. Burn the Arduino code onto your Arduino Uno using via the USB connection
2. Attach the Grove shield on top of your Arduino
3. Connect your sensors to the ports. Be sure to connect your Temperature to the A0 port and your
Audio sensor to the A3 port.

#### Raspberry Pi Setup

(**Note: this was not done using a headless Raspberry Pi**)
1. Connect and login to your Pi
2. Connect your Arduino and Raspberry Pi Via Serial USB connection
3. check that you have a connection by typing *ls/dev/tty** on your console. if you see */dev/ttyACM0*,
you are connected.
4. Create a new python file and copy the Python code into it. save your file and remember which 
directory it is in.

#### Thingspeak Setup

(**Note: this is done assuming you have already setup a ThingSpeak account made**)
1. Create a new Channel and call it "Decibel Detector Data"
2. Create two fields, label the first field Temperature and the second field Audio
3. Once you have created your channel, go to the tab named *API Keys*
4. Under API Requests, copy the link titled Write a Channel Field with your unique API Key
5. with this link, replace the link in your Python code with your new API Key
6. in your Terminal, run your python code. You should see data come through on your terminal and in your
teamspeak channel.

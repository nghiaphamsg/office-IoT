# Project Name: Graduation Project Of IoT Office 2018/07

## Introduce
Using Node-red as the central server, devices to control via ESP8266, the display interface uses graphs or buttons to control via the website, voice or chatbot


| Software  | Hardware |
| ------------- | ------------- |
| [Nodejs v8.11.3](https://nodejs.org/ca/blog/release/v8.11.3/)  | [Temperature Sensor DHT-22](https://www.amazon.com/Gowoops-Temperature-Humidity-Measurement-Raspberry/dp/B073F472JL/ref=sr_1_1?dchild=1&keywords=DHT+22&qid=1586924499&sr=8-1)  |
| [Node-red v0.18.7](https://nodered.org/blog/2018/01/31/version-0-18-released)  | [Flame Sensor](https://www.amazon.com/Aexit-Channel-Infrared-Sensor-3c8ca3caf6d478a51084214b125c7b2e/dp/B0838KWRX3/ref=sr_1_2?dchild=1&keywords=flame+sensor+4+pin&qid=1586924402&sr=8-2)  |
| [Facebook Messenger](https://developers.facebook.com/)  |  [Motion Sensor HC-SR501](https://www.amazon.com/DIYmall-HC-SR501-Motion-Infrared-Arduino/dp/B012ZZ4LPM/ref=redir_mobile_desktop?ie=UTF8&aaxitk=mbUZ9--Wt3UyMEO-QMcruQ&hsa_cr_id=4829276140601&ref_=sb_s_sparkle) |
| [Gmail API](https://developers.google.com/gmail/api)  |  Buzzer |
| [Dialogflow API](https://dialogflow.com/)   | [5V FAN Mini 25mm x 7mm 2Pin](https://www.amazon.com/Pieces-mini-micro-brushless-cooling/dp/B07TPGRL77/ref=sr_1_fkmr0_1?dchild=1&keywords=5v+fan+mini+25mm+x+7mm+2+pin&qid=1586926167&sr=8-1-fkmr0) |
| [Arduino IDE 1.8.5](https://www.arduino.cc/en/main/software)  |  [Relay 5V](https://www.amazon.com/SunFounder-Channel-Optocoupler-Expansion-Raspberry/dp/B00E0NTPP4/ref=sr_1_2?dchild=1&keywords=Relay+5V&qid=1586926003&sr=8-2)  |
| [VSC IDE](https://code.visualstudio.com/) |  [ESP8266 D1 mini or ESP32](https://www.amazon.com/ESP8266-ESP-12E-ESP-12S-Authenticity-Guaranteed/dp/B086L5MJ7X/ref=sr_1_2?dchild=1&keywords=ESP8266+D1+mini&qid=1586924617&s=electronics&sr=1-2)  |
| Other API (in Node-red) |  [Alexa Echo Dot 2nd Generation](https://www.amazon.com/Amazon-Echo-Dot-Portable-Bluetooth-Speaker-with-Alexa-White/dp/B015TJD0Y4)  |
| | LED |

### How to use
* Step 1:
 ```shell
  gitclone https://github.com/nghiaphamsg/Office-IoT.git
 ```
* Step 2:\
  - Import file *.h and *.ino into the arduino IDE
* Step 3:\
  List install library: 
    - "Adafruit MQTT Library" version 0.20.1
    - "DHT sensor library" version 1.2.3
    - "SimpleDHT" version 1.0.12
    - "PubSubClient" version 2.6.0\
Example: Sketch >> Include library >> Manage libraries >> Search Adafruit MQTT Library >> Choose version 0.20.1 >> Install
* Step 4:
  - Config your wifi and MQTT server into file wifi.h and MQTT.h
  - Upload code to ESP8266: choose Board >> select Wemos D1 mini board >> select Port >> select Upload Speed 115200 >> Upload 
* Step 5:
  - [Install Nodejs and Node Red](https://nodered.org/docs/getting-started/windows)
  - Open commad line >> "node-red" execute >> Open Chrome and access http://127.0.0.1:1880/
* Step 6:
  - Menu(right-top) >> Import >> Clipboard >> after add all *.txt in officeIoT/Node-RED folder 
  - Menu(right-top) >> Manage Palette >> choose Palette >> choose Install >> search 
  - All list Palette install:
    - `"node-red-node-openweathermap" version 0.2.1`
    - `"node-red-node-email" version 0.1.29`
    - `"node-red-dashboard" version 2.13.0`
    - `"node-red-contrib-sms-twilio" version 0.0.2`
    - `"node-red-contrib-os" version 0.1.7`
    - `"node-red-contrib-alexa-local" version 0.3.24`
    - `"node-red-contrib-nexmo" version 2.1.0`
    - `"node-red-contrib-firebase" version 1.1.1`
* Step 7:\
  - Get API and config node in Node-red
#### Image:
![Image1](https://user-images.githubusercontent.com/32474027/54192325-06054700-44fb-11e9-929f-c74dc70b60f7.jpg)
![Image2](https://user-images.githubusercontent.com/32474027/54192359-1f0df800-44fb-11e9-9977-f7f4a09a8257.jpg)
![Image3](https://user-images.githubusercontent.com/32474027/54192515-7a3fea80-44fb-11e9-81ed-a329b7887c06.png)
#### Link Demo:
  - Youtube: ***https://www.youtube.com/watch?v=etRNNFAa71s***
  - Facebook: ***https://www.facebook.com/nekobot2596/***


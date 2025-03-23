# IR-LED-with-wemos(to on a TV)

# Wemos D1 R2 as a Smart TV Remote using IR LED

## 📌 Overview
This project uses a **Wemos D1 R2 (ESP8266)** and an **IR LED** to control a TV by sending infrared signals. It can be used to power on/off a TV or send any custom IR command.

## 🛠 Requirements
- **Wemos D1 R2 (ESP8266)**
- **IR LED (Infrared LED)**
- **Resistor (220Ω)**
- **Jumper Wires**
- **Arduino IDE**
- **IRremoteESP8266 Library**

## ⚡ Circuit Connections
| Wemos D1 Pin | IR LED Pin |
|-------------|-----------|
| D2 (GPIO4)  | Anode (+) |
| GND         | Cathode (-) |

## 📥 Installation
### 1️⃣ Install Required Library
- Open **Arduino IDE**
- Go to **Sketch → Include Library → Manage Libraries**
- Search for **IRremoteESP8266** and install it

### 2️⃣ Upload the Code

## 🔎 How to Get the Correct IR Code for Your TV?
1. Use an **IR Receiver Module** with Wemos D1 R2 to decode signals from your TV remote.
2. Use an **IR Code Database** (like **IRDB.tv**) to find your TV’s IR hex code.

## 🚀 Future Enhancements
- **Web-based Control**: Create an interface to control TV via a phone.
- **MQTT Integration**: Control TV via **Home Assistant** or IoT platforms.

## 📜 License
This project is open-source and can be used freely for educational and personal projects.

---
#### 💡 Need Help?
Feel free to open an **issue** or contribute to this repository!

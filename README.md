# 🖥️ Ecriture de messages  à l'aide d’un Afficheur LCD I2C avec Arduino

Ce projet consiste à faire fonctionner un écran LCD 16x2 avec une interface I2C connecté à une carte Arduino Uno. Le programme affiche plusieurs messages de manière cyclique à l'écran pour confirmer que la communication I2C fonctionne correctement.

---

## 🧰 Matériel nécessaire

- ✅ Arduino Uno (ou compatible)
- ✅ Écran LCD 16x2 (ou 20x4) avec module I2C (basé sur le contrôleur HD44780)
- ✅ Câbles Dupont
- ✅ Arduino IDE installé

---

## 🔌 Connexions

| LCD I2C Pin | Arduino Uno |
|-------------|-------------|
| GND         | GND         |
| VCC         | 5V          |
| SDA         | A4          |
| SCL         | A5          |

---

## 📦 Bibliothèques requises

Avant de compiler, installe la bibliothèque suivante via le gestionnaire de bibliothèques de l’IDE Arduino :

- **LiquidCrystal_I2C** (par Frank de Brabander ou Marco Schwartz)

---

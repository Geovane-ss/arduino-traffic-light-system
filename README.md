
# 🚦 Sistema de Controle de Semáforo com Arduino / Traffic Light Control System with Arduino

Este projeto simula um sistema de semáforo que opera em dois modos: automático e manual, utilizando Arduino. Ele é ideal para simular o controle de tráfego em ruas movimentadas, com foco na segurança dos pedestres.

This project simulates a traffic light system operating in two modes: automatic and manual, using Arduino. It's ideal for simulating traffic control in busy streets, focusing on pedestrian safety.

---

## 📌 Funcionalidades / Features

### ✅ Modo Automático / Automatic Mode
- Troca de luzes a cada minuto.
- Luz amarela por 2 segundos.
- Luz vermelha por 15 segundos.
- Todas as ações são exibidas no monitor serial.

### ✅ Modo Manual / Manual Mode
- Ativado por um botão (simula o botão de pedestre).
- Inicia contagem regressiva de "fechando" de 10 até 0.
- Luz amarela por 2 segundos.
- Luz vermelha por 15 segundos com contagem de "abrindo".
- Todas as ações são exibidas no monitor serial.

---

## 🛠️ Componentes Utilizados / Components Used

- 1x Arduino Uno
- 3x LEDs (Vermelho, Amarelo, Verde)
- 3x Resistores (220Ω)
- 1x Botão Push
- Jumpers (Cabos de conexão)
- Protoboard

---

## 🔌 Esquema de Ligação / Circuit Diagram

```
LED Verde   → Pino 2 (Arduino)
LED Amarelo → Pino 3 (Arduino)
LED Vermelho→ Pino 4 (Arduino)
Botão       → Pino 5 (Arduino) + GND
```

## 💻 Código Fonte / Source Code

O código está disponível no arquivo `semaforo_arduino.ino`. Basta abrir no Arduino IDE.

```cpp
// Trecho do código
const int greenLed = 2;
const int yellowLed = 3;
const int redLed = 4;
// ...
```

---

## ▶️ Como Usar / How to Use

1. Abra o arquivo `semaforo_arduino.ino` na Arduino IDE.
2. Conecte seu Arduino ao computador.
3. Faça o upload do código.
4. Pressione o botão para simular a passagem de pedestres.
5. Observe a sequência no Monitor Serial (`Ctrl + Shift + M` na IDE).

---

## 🧠 Aprendizado / Learning

Este projeto é ótimo para iniciantes entenderem:
- Controle de LEDs com Arduino
- Lógica condicional (if/else)
- Entrada por botão
- Comunicação serial

---

## 📸 Imagens do Projeto / Project Images

> 💡 Você pode adicionar imagens aqui futuramente para ilustrar seu circuito e o funcionamento. Exemplo:

```
📷 ![image](https://github.com/user-attachments/assets/2eea3478-5545-4d02-8094-6d59df7aaa21)

```


## 🤝 Autor / Author

**Geovane**

📧 [meugit.geovane.hub@gmail.com]  
💼 [Linkedin: https://www.linkedin.com/in/geovane-vitor-b7540716b]

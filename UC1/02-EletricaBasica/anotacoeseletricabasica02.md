# Fundamentos de Eletricidade e Eletrônica

Este documento traz conceitos básicos sobre **tensão, corrente, resistência e potência**, com exemplos práticos e cálculos.

---

## Tomada e Corrente
- **AC = CA = Corrente Alternada**
  - Tensões comuns: **127V / 220V**
  - Exemplo: carregador de celular
    - **Entrada (Input):** 100–240V  
    - **Saída (Output):** 5.0V / 3.0A

- **DC = CC = Corrente Contínua**
  - Tensões típicas: **3,3V / 5V / 12V**  
  - Obs.: **12V é a mais importante** em eletrônica.

---

## Pico e Queda de Tensão
- **Pico de tensão:** pode queimar componentes instantaneamente.  
- **Queda de tensão:** degrada equipamentos gradualmente.

---

## Frequência
- Unidade: **Hz (Hertz)**  
- Padrões: **50Hz / 60Hz**  
- Origem: da **corrente alternada (CA).**

---

## Corrente Elétrica e Risco Humano
- O **ser humano morre pela corrente (A).**
- Máximo suportado: **0,03A (30mA).**
- Tensões elevadas também são letais.

---

## 1ª Lei de Ohm
### Fórmula Básica
- **U (V) = R (Ω) × I (A)**  
  - U → Tensão (Volts)  
  - I → Corrente (Ampères)  
  - R → Resistência (Ohms)

### 1º Triângulo da Lei de Ohm

<img width="660" height="571" alt="Triangulo de Ohm" src="https://github.com/user-attachments/assets/2657b1ba-6736-4250-ae60-e75a932b8c5c" />

- **Divisão:** feita na vertical.  
- **Multiplicação:** feita na horizontal.

### Exemplo
- U = 5V  
- I = 3A  
- R = U / I = 5 ÷ 3 = **1,66Ω**

**Obs.:** a corrente **nunca será maior que a tensão**. Se for igual ou maior → risco de curto-circuito.

---

## 2º Triângulo: Potência 
<img width="587" height="568" alt="2ºTriangulo de Ohm" src="https://github.com/user-attachments/assets/c0333592-1e87-49f0-8821-385440737c5e" />

### Fórmula Básica
- **P (W) = U (V) × I (A)**

### Exemplo 1: Lâmpada
- P = 60W  
- U = 127V  
- I = P ÷ U = 60 ÷ 127 = **0,47A**  
- R = U ÷ I = 127 ÷ 0,47 = **270,21Ω**

### Exemplo 2: Chuveiro
- P = 5500W  
- U = 220V  
- I = P ÷ U = 5500 ÷ 220 = **25A**  
- R = U ÷ I = 220 ÷ 25 = **8,8Ω**

---

## Fonte de Alimentação (PSU)
- Exemplo: **PSU 400W (80 Plus)**
- **Potência real:** 400W  
- **Tensão de entrada (Uv):** 220V  
- **Corrente (Ia):** P ÷ U = 400 ÷ 220 = **1,81A**  
- **Resistência (R):** U ÷ I = 220 ÷ 1,81 = **121,54Ω**

---

## Cálculo de Resistor para LED
### Fórmula
- **Rled = (Vali - Vled) ÷ Iled**  
- Onde:  
  - Vali → tensão de alimentação  
  - Vled → tensão do LED (ex.: 3V para LED branco)  
  - Iled → corrente do LED (0,02A = 20mA)  
  - P = V × I

### Exemplos
1. **Vali = 5V**  
   R = (5 - 3) ÷ 0,02 = **100Ω**

2. **Vali = 12V**  
   R = (12 - 3) ÷ 0,02 = **450Ω**

3. **Vali = 127V**  
   R = (127 - 3) ÷ 0,02 = **6200Ω**

4. **Vali = 220V**  
   R = (220 - 3) ÷ 0,02 = **10850Ω**

---

## Resumo Visual
### Triângulo da 1ª Lei de Ohm

- 1º Triângulo
<img width="660" height="571" alt="1ºTriangulo de Ohm" src="https://github.com/user-attachments/assets/167601f5-b7f9-404f-85b5-745fdf7844d4" />

### Triângulo da Potência (2º Triângulo)
<img width="587" height="568" alt="2ºTriangulo de Ohm" src="https://github.com/user-attachments/assets/3ff826b9-f44a-4813-b9e5-052ffd8d24fe" />

https://github.com/lbruss/senac-tatuape/blob/main/UC1/02-EletricaBasica/Aula01-Lousa-05-09-2025.pdf

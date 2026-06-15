# Fontes de Alimentação

As **fontes de energia** dos computadores possuem fios (cabos) de diferentes cores.  
Apesar da variação estética — alguns modelos têm todos os fios pretos —, **a função elétrica de cada fio continua a mesma**.

# Padrão de cores dos fios:

- **Amarelo → 12V**  
 Alimenta o **processador** e a **placa de vídeo**  

- **Vermelho → 5V**  
 Fornece energia para **HDs** e **módulos de memória**  

- **Laranja → 3.3V**  
 Utilizado para **HDs, SSDs, memórias e placa de vídeo**

<img width="1058" height="616" alt="image" src="https://github.com/user-attachments/assets/36f416ca-14c7-49c5-94db-c2e31aa042cc" />

---

# Fundamentos de Eletricidade e Eletrônica

Este documento traz conceitos básicos sobre **tensão, corrente, resistência e potência**, com exemplos práticos e cálculos.

---

# Tomada e Corrente
- **AC = CA = Corrente Alternada**
  - Tensões comuns: **127V / 220V**
  - Exemplo: carregador de celular
    - **Entrada (Input):** 100–240V  
    - **Saída (Output):** 5.0V / 3.0A

- **DC = CC = Corrente Contínua**
  - Tensões típicas: **3,3V / 5V / 12V**  
  - Obs.: **12V é a mais importante** em eletrônica.

---

# Pico e Queda de Tensão
- **Pico de tensão:** pode queimar componentes instantaneamente.  
- **Queda de tensão:** degrada equipamentos gradualmente.

---

# Frequência
- Unidade: **Hz (Hertz)**  
- Padrões: **50Hz / 60Hz**  
- Origem: da **corrente alternada (CA).**

---

# Corrente Elétrica e Risco Humano
- O **ser humano morre pela corrente (A).**
- Máximo suportado: **0,03A (30mA).**
- Tensões elevadas também são letais.

---

 # 1ª Lei de Ohm
 
 **Fórmula Básica**
 
- **U (V) = R (Ω) × I (A)**  
  - U → Tensão (Volts)  
  - I → Corrente (Ampères)  
  - R → Resistência (Ohms)

## 1º Triângulo da Lei de Ohm

<img width="660" height="571" alt="Triangulo de Ohm" src="https://github.com/user-attachments/assets/2657b1ba-6736-4250-ae60-e75a932b8c5c" />

- **Divisão:** feita na vertical.  
- **Multiplicação:** feita na horizontal.

*Exemplo*

- U = 5V  
- I = 3A  
- R = U / I = 5 ÷ 3 = **1,66Ω**

**Obs.:** a corrente **nunca será maior que a tensão**. Se for igual ou maior → risco de curto-circuito.

---

## 2º Triângulo da Lei de Ohm: Potência 

<img width="587" height="568" alt="2ºTriangulo de Ohm" src="https://github.com/user-attachments/assets/c0333592-1e87-49f0-8821-385440737c5e" />

**Fórmula Básica**

- **P (W) = U (V) × I (A)**

*Exemplo 1: Lâmpada*

- P = 60W  
- U = 127V  
- I = P ÷ U = 60 ÷ 127 = **0,47A**  
- R = U ÷ I = 127 ÷ 0,47 = **270,21Ω**

*Exemplo 2: Chuveiro*

- P = 5500W  
- U = 220V  
- I = P ÷ U = 5500 ÷ 220 = **25A**  
- R = U ÷ I = 220 ÷ 25 = **8,8Ω**

---

# Fonte de Alimentação (PSU)
- Exemplo: **PSU 400W (80 Plus)**
- **Potência real:** 400W  
- **Tensão de entrada (Uv):** 220V  
- **Corrente (Ia):** P ÷ U = 400 ÷ 220 = **1,81A**  
- **Resistência (R):** U ÷ I = 220 ÷ 1,81 = **121,54Ω**

---

# Cálculo de Resistor para LED

**Fórmula**
 
- **Rled = (Vali - Vled) ÷ Iled**  
- Onde:  
  - Vali → tensão de alimentação  
  - Vled → tensão do LED (ex.: 3V para LED branco)  
  - Iled → corrente do LED (0,02A = 20mA)  
  - P = V × I

*Exemplos*

1. **Vali = 5V**  
   R = (5 - 3) ÷ 0,02 = **100Ω**

2. **Vali = 12V**  
   R = (12 - 3) ÷ 0,02 = **450Ω**

3. **Vali = 127V**  
   R = (127 - 3) ÷ 0,02 = **6200Ω**

4. **Vali = 220V**  
   R = (220 - 3) ÷ 0,02 = **10850Ω**

---

# Resumo Visual

**Triângulo da 1ª Lei de Ohm**

- 1º Triângulo

<img width="660" height="571" alt="1ºTriangulo de Ohm" src="https://github.com/user-attachments/assets/167601f5-b7f9-404f-85b5-745fdf7844d4" />


- Triângulo da Potência (2º Triângulo)

<img width="587" height="568" alt="2ºTriangulo de Ohm" src="https://github.com/user-attachments/assets/3ff826b9-f44a-4813-b9e5-052ffd8d24fe" />

---

# Simulação Tinkercad 01

<img width="1058" height="616" alt="simulacaotinkercad01" src="https://github.com/user-attachments/assets/542c7c66-530d-4c62-8b8b-195b045f6826" />

---

# Anotações lousa

[anotacoeseletricabasica02lousa.pdf](https://github.com/user-attachments/files/22519888/anotacoeseletricabasica02lousa.pdf)

---

# INFRAESTRUTURA DE CABEAMENTO DE REDE

## Velocidade de Internet

A velocidade da internet é sempre medida em *Megabits por segundo (Mb/s)*.  
Para converter para *Megabytes por segundo (MB/s)*, basta dividir por 8.

**Exemplo**

600 Mb/s ÷ 8 = 75 MB/s

Portanto:
> *1 MB/s = 8 Mb/s*

---

## Download e Upload

- *Download* e *Upload* equilibrados são essenciais para *jogos online*.  
- Para *transmissões ao vivo (lives), o **upload* deve ser *alto* para evitar travamentos.  

---

## Tipo de Conexão

Prefira *fibra óptica, pois oferece **alta estabilidade e velocidade*.  
Entretanto, o desempenho pode variar conforme a *operadora*.

- *Exemplo (Vivo):* utiliza fibra óptica como principal meio de transmissão (WAN).  
- *Problemas na fibra:* responsabilidade da *operadora*.  
- *Problemas na rede interna (LAN):* responsabilidade do *usuário*.

---

## Velocidades Comuns

- *São Paulo:* velocidades acima de *500 Mb/s* são comuns.  
- *Outras regiões:* *100 Mb/s* já é considerado bom desempenho.

---

# Cabos de Rede (CAT)

“CAT” significa *Categoria*. Cada tipo define velocidade máxima e qualidade de transmissão.

---

## *CAT5e*
- *Tipo:* cabo mais antigo, porém eficiente.  
- *Significado de “e”*: versão aprimorada do CAT5.  
- *Distância máxima:* 100 metros.  
- *Velocidade máxima:* 1000 Mb/s (1 Gb/s).  
- *Preço médio:* R$ 1,00 por metro.  
- *Características:*
  - Fino e maleável.  
  - 4 pares de fios (8 fios no total).  
  - Fácil de passar em conduítes.

---

## *CAT6*
- *Tipo:* mais moderno e rápido.  
- *Distância máxima:* 100 metros.  
- *Velocidade máxima:* até 10.000 Mb/s (10 Gb/s).  
- *Preço médio:* R$ 3,00 por metro.  
- *Características:*
  - Cabo mais grosso, com separador plástico interno.  
  - Mais difícil de passar em tubulação.

> Para cabos acima de 100 metros, é necessário usar um *repetidor de sinal*.

---

# Normas Internacionais

## *Padrão 568A*
- Definição internacional para cores e pinagem dos cabos de rede.

## Estrutura dos cabos
- *CAT5e:* 4 pares (8 fios).  
- *1 bit =* unidade básica de informação (base 2 → 0 e 1).  
- *1 byte = 8 bits* (base 8).

---

## Conectores RJ45

Use o conector *compatível com o tipo de cabo*:
- *CAT5e → RJ45 CAT5e*  
- *CAT6 → RJ45 CAT6*

## Pinos e Funções (da esquerda para a direita)
| Pino | Função | Descrição |
|------|---------|-----------|
| 1 e 2 | TX | Transmissor |
| 3 e 6 | RX | Receptor |
| 4 e 5 | Fone / GND | Telefonia ou aterramento |
| 7 e 8 | GND | Aterramento |

---

# Resumo
- 1 MB/s = 8 Mb/s  
- Upload alto é essencial para jogos e lives.  
- Fibra óptica é a melhor opção de conexão.  
- Cabos CAT5e e CAT6 têm funções parecidas, mas o CAT6 é mais rápido e resistente.  
- Use conectores RJ45 corretos para evitar perda de sinal.

---

# Normas de Cabeamento de Rede

As normas **T568A** e **T568B** definem a **ordem dos fios** dentro de um conector **RJ45**, garantindo **padrão e compatibilidade** na montagem de cabos de rede Ethernet.

---

## O que são as normas T568A e T568B?

Essas normas padronizam a **disposição dos pares de fios** (de cores diferentes) em cabos de rede **CAT5e**, **CAT6** e superiores.

## Norma T568A
- É a mais comum em **instalações residenciais**.
- Utilizada por padrão em **cabos CAT5e**.

## Norma T568B
- É a mais usada em **instalações comerciais e profissionais**.
- É **obrigatória** para cabos **CAT6** e superiores.

---

## Importante

- **Mantenha o mesmo padrão em todo o projeto.**  
  Se o projeto começou com a **norma T568A**, continue **tudo em T568A**.  
  Se começou com **T568B**, mantenha **tudo em T568B**.  
- **Nunca misture as duas normas** no mesmo sistema, pois isso pode causar falhas na comunicação de rede.

---

## Norma Crossover

A **Norma Crossover** é usada para **conectar dois dispositivos do mesmo tipo diretamente**, sem a necessidade de um switch ou roteador (por exemplo, PC ↔ PC ou switch ↔ switch).

Ela serve como **ferramenta de teste ou ligação direta** entre equipamentos.

## Configuração do Cabo Crossover

- **Em uma ponta:** Norma **T568A**  
- **Na outra ponta:** Norma **T568B**

Isso faz com que os pares de **transmissão (TX)** e **recepção (RX)** se cruzem, permitindo a comunicação direta.

---

## Pinagem

| Função | Pinos | Norma 568A | Norma 568B |
|:--------|:------|:------------|:------------|
| **Transmissão (TX)** | 1, 2 | Branco/Verde – Verde | Branco/Laranja – Laranja |
| **Recepção (RX)** | 3, 6 | Branco/Laranja – Laranja | Branco/Verde – Verde |

No **cabo crossover**, os fios de **TX e RX** são invertidos entre as pontas, possibilitando a troca direta de dados entre dois dispositivos sem intermediários.

---

## Dica Final

- Use **T568B** em cabos **CAT6** e projetos novos.  
- Mantenha **um único padrão** em todo o cabeamento.  
- Utilize o **crossover** apenas para **testes ou conexões diretas** entre equipamentos.

---

# Cabo Rollover

O **cabo Rollover** é um tipo especial de cabo de rede usado, principalmente, para **conexões de console** em roteadores, switches e outros equipamentos de rede.  
Ele é diferente do cabo padrão, pois suas conexões são **invertidas (em espelho)**.

---

## Estrutura do Cabo

- **Norma:** Utiliza a **mesma norma 568B** em ambos os lados.  
- **Diferença:** Em um dos conectores, os fios seguem a **ordem espelhada** da norma 568B.

Ou seja, os pinos são invertidos de ponta a ponta — o **pino 1** de um lado se conecta ao **pino 8** do outro, e assim por diante.

---

## Conectores

O cabo pode utilizar:

- **RJ45 Passante:**  
  Facilita a montagem do conector, permitindo verificar a posição dos fios antes de crimpá-los.

- **M8V, Jack ou Keystone:**  
  Usados em painéis de rede ou tomadas modulares, garantindo melhor acabamento e organização.

---

## Dica Técnica

- O **Rollover** é **diferente do Crossover**:  
  - *Rollover* → fios completamente invertidos (espelhados).  
  - *Crossover* → apenas alguns fios trocam de posição (1↔3 e 2↔6).  
- É muito utilizado para **configurações diretas** de equipamentos de rede via **porta console**.

---

# Resumo

| Tipo de Cabo | Norma | Conexão | Uso Comum |
|:--------------|:--------|:------------|:-------------|
| Rollover | 568B (espelhado) | Invertido (1↔8, 2↔7...) | Console de switches e roteadores |
| Crossover | 568A ↔ 568B | Parcialmente cruzado | Conexão direta entre PCs ou roteadores |
| Direto (Padrão) | 568B ↔ 568B | Igual nas duas pontas | Conexão PC → Switch/Router |


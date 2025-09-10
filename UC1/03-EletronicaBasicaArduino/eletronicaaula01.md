# O que é Arduino?

Arduino é uma plataforma de prototipagem eletrônica **open source**, baseada em hardware e software fáceis de usar.  
Com ela, é possível criar projetos interativos que envolvem sensores, atuadores e programação.

A placa Arduino possui um **microcontrolador** (ex: ATmega328), que pode ser programado via **USB** usando a linguagem **C/C++** através da **IDE Arduino**.

Principais áreas de uso:
- Automação
- Robótica
- IoT (Internet das Coisas)
- Sistemas embarcados
- Educação

---

# Boas Práticas com Comentários

 Explique o "porquê" do código, não apenas o "como"
 Seja claro e objetivo
 Mantenha os comentários atualizados

 Evite excesso de comentários óbvios (x = 1; // x é igual a 1)
 Comentários confusos ou desatualizados atrapalham mais do que ajudam

---

# Projeto: Pisca LED com Arduino

Descrição:
Programa que acende um LED no pino digital 13.
Ideal para iniciantes entenderem saídas digitais.

# Comando pinMode
pinMode(13, OUTPUT);

- Função: Configura o pino 13 como saída.
- Uso: Necessário para controlar LEDs, motores, relés etc.

---

# Comando digitalWrite
digitalWrite(13, HIGH);

- Função: Envia nível alto (5V) ao pino 13, acendendo o LED.
- Parâmetros:

13 → número do pino

HIGH → nível lógico alto (5V ou 1 binário)

---

# Dicas Importantes
Sempre termine comandos com ";"

setup() roda uma vez no início

loop() roda continuamente

### Para desligar o LED:

digitalWrite(13, LOW);
// LOW = 0V → LED apagado

***Atenção: o correto é HIGH e LOW (não “HIGHT”).***

---

# Código para LED Piscar

void setup() {

  pinMode(13, OUTPUT); // configura pino 13 como saída
  
}

void loop() {

  digitalWrite(13, HIGH);
// acende LED

  delay(1000);
// espera 1 segundo (1000 ms)

  digitalWrite(13, LOW);
// apaga LED

  delay(1000);        // espera 1 segundo
  
}

---

# Sobre o delay

1000 ms = 1 segundo

Para piscar mais rápido → diminuir valor do delay

delay(500) = 0,5 segundos

delay(100) = 0,1 segundos

---

# Esquema do Circuito
Exemplo de ligação do LED no pino 13:

[Arduino UNO]
   |--- (pino 13) ---|>---[LED]---[Resistor 220Ω]---GND

---

# Resumo:

pinMode → define entrada/saída

digitalWrite → envia nível lógico

delay → pausa execução

setup → executa 1x

loop → executa repetidamente

***Tudo isso é feito na Linguagem C***

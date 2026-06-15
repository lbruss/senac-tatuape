# O que é Arduino?

Arduino é uma plataforma de prototipagem eletrônica **open source**, baseada em hardware e software fáceis de usar.  
Com ela, é possível criar projetos interativos que envolvem sensores, atuadores e programação.

A placa Arduino possui um **microcontrolador** (ex: ATmega328), que pode ser programado via **USB** usando a linguagem **C/C++** através da **IDE Arduino**.

# Principais áreas de uso
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

**Descrição:**
Programa que acende um LED no pino digital 13.
Ideal para iniciantes entenderem saídas digitais.

 **Comando pinMode**
 
```
pinMode(13, OUTPUT);

```
- **Função:** Configura o pino 13 como saída.
- **Uso:** Necessário para controlar LEDs, motores, relés etc.

---

 **Comando digitalWrite**

```

digitalWrite(13, HIGH);

```
- **Função:** Envia nível alto (5V) ao pino 13, acendendo o LED.
- **Parâmetros:**

13 → número do pino

HIGH → nível lógico alto (5V ou 1 binário)

---

**Dicas Importantes**
Sempre termine comandos com ";"

setup() roda uma vez no início

loop() roda continuamente

**Para desligar o LED:**

```

digitalWrite(13, LOW);

```

LOW = 0V → LED apagado

***Atenção: o correto é HIGH e LOW (não “HIGHT”).***

---

# Código para LED Piscar

```
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
```

---

# Sobre o delay

- 1000 ms = 1 segundo

- Para piscar mais rápido → diminuir valor do delay

- delay(500) = 0,5 segundos

- delay(100) = 0,1 segundos

---

# Esquema do Circuito
Exemplo de ligação do LED no pino 13:

**[Arduino UNO]**

   |--- (pino 13) ---|>---[LED]---[Resistor 220Ω]---GND

---

# Resumo:

- pinMode → define entrada/saída

- digitalWrite → envia nível lógico

- delay → pausa execução

- setup → executa 1x

- loop → executa repetidamente

***Tudo isso é feito na Linguagem C***

---

# Guia Completo do Multímetro

O **multímetro** é uma ferramenta eletrônica versátil, usada para medir grandezas elétricas em circuitos, como **tensão (V)**, **corrente (A)** e **resistência (Ω)**.  
Ele é essencial para testes, manutenção e diagnósticos em elétrica e eletrônica.

---

# Principais Entradas

- **COM** → borne de referência/terra (fio preto).  
- **V/mA/Ω** → entrada para medir tensão, resistência e correntes baixas (fio vermelho).  
- **10A/20A** → entrada exclusiva para correntes mais altas (varia conforme o modelo).  

---

# Símbolos Mais Usados

| Símbolo | Função |
|---------|--------|
| **V⎓ (DCV)** | Tensão contínua (pilhas e baterias) |
| **V∿ (ACV)** | Tensão alternada (tomadas/rede elétrica) |
| **A⎓ (DCA)** | Corrente contínua |
| **A∿ (ACA)** | Corrente alternada |
| **Ω** | Resistência elétrica |
| ** (bip)** | Teste de continuidade |
| **→|– (diodo)** | Teste de diodos e semicondutores |

---

# Medindo Tomadas (Tensão AC)

- Utilize a escala de **200V ou 600V** (nunca abaixo disso).  
- Em rede de **127V**, a leitura típica fica entre **121V e 123V**.  
- Em rede de **220V**, use a escala de **600V**.  
-  **Cuidado:** nunca encostar as pontas de prova entre si quando estiverem na tomada.  

---

# Tipos de Tensão

- **Tensão Contínua (DC):**  
  - Possui polaridade definida (+ e –).  
  - Usada em **baterias e pilhas**.  

- **Tensão Alternada (AC):**  
  - Não possui polaridade fixa.  
  - Usada em **tomadas e rede elétrica**.  

---

# Exemplos de Medição

- **Bateria 9V:** leitura próxima de **9V** (ex.: 9,69V).  
- **Pilha AA/AAA:** valor nominal de **1,5V**.  
- **Bateria da placa-mãe (CR2032):** valor de **3V**.  
  - Sempre instalar com o **lado negativo para baixo**.  
  - Colocar invertida pode **danificar o slot**.  

---

# Medindo Resistência (Ω)

- Usado para resistores e cabos.  
- Se aparecer **“1” ou “OL”** → não há continuidade.  
- Se apitar no modo **bip**, há passagem de corrente → fio está bom.  

---

# Medindo Corrente (A)

- Corrente deve ser medida **em série** (o multímetro faz parte do circuito).  
- Escolha a entrada correta (**mA** ou **10A**).  
- **Nunca medir corrente direto na tomada!** Isso pode queimar o multímetro.  

---

# Cuidados de Segurança

- Ponta **preta sempre no COM**.  
- Escolher escala **acima do valor esperado**.  
- Nunca medir resistência em circuitos energizados.  
- Não deixar o multímetro em modo **corrente** ao medir **tensão**.  
- Guardar em local seco, protegido da umidade.  

---

# Guia Rápido de Escalas

| O que medir | Escala recomendada |
|-------------|---------------------|
| Tomada 127V | **200V AC** |
| Tomada 220V | **600V AC** |
| Pilha AA/AAA | **20V DC** |
| Bateria 9V | **20V DC** |
| Bateria placa-mãe 3V | **20V DC** |
| Resistores | **Ω (faixa adequada)** |
| Continuidade de cabos | **(bip)** |

---

# Observação Final

- Pilhas e baterias **com voltagem abaixo da nominal** estão descarregando.  
- Quando os valores caírem muito, é hora de **trocar ou recarregar**.  

---

# Comentários no Código Arduino

Os comentários não são executados pelo microcontrolador. Eles servem para documentar e explicar o código.

```
/**
 * Comentário de Cabeçalho
 * Explica objetivo, autor, data, licença, etc.
 */

/*
  Comentário em Bloco
  Usado para várias linhas ou para desativar partes do código.
*/
```

// Comentário em Linha
// Explica instruções individuais.


# Boas Práticas

- Use comentários para explicar o "porquê" do código
- Seja claro e objetivo
- Atualize os comentários quando modificar o código
- Evite comentários óbvios demais
- Não deixe comentários desatualizados ou confusos


# Projeto: Piscar LED

**Exemplo clássico para iniciantes:** fazer um LED no pino 13 piscar a cada 1 segundo.

```
/**
 * Exemplo: Piscar LED
 * Autor: Bruss Loza
 * Objetivo: Demonstrar uso de saídas digitais
 */
 
void setup() {
  pinMode(13, OUTPUT); // define o pino 13 como saída
}

void loop() {
  digitalWrite(13, HIGH); // acende o LED
  delay(1000);            // espera 1 segundo (1000 ms)
  digitalWrite(13, LOW);  // apaga o LED
  delay(1000);            // espera 1 segundo
}
```

---

# Sobre o Delay

- delay(1000) → 1 segundo

- delay(500) → 0,5 segundo

- delay(100) → 0,1 segundo


***Quanto menor o valor, mais rápido o LED pisca.***

---

# Conclusão

- O projeto Pisca LED é o primeiro passo no mundo Arduino,
perfeito para aprender como controlar saídas digitais e
entender a lógica básica de programação embarcada.

---

# DESAFIO DO SEMÁFORO

**→ TESTE DOS LEDS - 01**

```
/*
  Semáforo
  @author Bruss Loza
*/

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
}

void loop()
{

}
```
---

# DESAFIO CONCLUÍDO - SEMÁFORO FEITO

```
/*
  Semáforo
  @author Bruss Loza
*/

void setup()
{
  pinMode(13, OUTPUT);//Vermelho
  pinMode(12, OUTPUT);//Amarelo
  pinMode(11, OUTPUT);//Verde
}

void loop()
{
  digitalWrite(11, HIGH);
  delay(2000);
  digitalWrite(11,LOW);
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
}
```
---

# DESAFIO DO CRUZAMNETO DE SEMÁFORO

**→ TESTE DOS LEDS - 02**

```
/*
  Semáforo
  @author Bruss Loza
*/

void setup()
{
  pinMode(13, OUTPUT);//Vermelho A
  pinMode(12, OUTPUT);//Amarelo A
  pinMode(11, OUTPUT);//Verde A
  
  pinMode(10, OUTPUT);//Vermelho B
  pinMode(9, OUTPUT);//Amarelo B
  pinMode(8, OUTPUT);//Verde B
  
  digitalWrite(10, HIGH);//Vermelho B
  digitalWrite(9, HIGH);//Amarelo B
  digitalWrite(8, HIGH);//Verde B
}

void loop()
{

}
```

---

# DESAFIO CONCLUÍDO - CRUZAMENTO DE SEMÁFORO FEITO

```
/*
  Semáforo
  @author Bruss Loza
*/

void setup()
{
  pinMode(13, OUTPUT);//Vermelho A
  pinMode(12, OUTPUT);//Amarelo A
  pinMode(11, OUTPUT);//Verde A
  
  pinMode(10, OUTPUT);//Vermelho B
  pinMode(9, OUTPUT);//Amarelo B
  pinMode(8, OUTPUT);//Verde B
}

void loop()
{
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(2000);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(3000);//Não sei se deixo assim ou eu tiro este delay
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);
  delay(2000);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  digitalWrite(9, LOW);
}

```

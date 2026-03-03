# Módulo 7

**7.0** Introdução

**7.1** Encapsulamento e o quadro Ethernet

**7.1.1** Os campos do quadro Ethernet

🎯 Ideia Principal

Um **quadro Ethernet (Ethernet frame)** é o “envelope” que a Ethernet usa para entregar dados **de uma placa de rede (NIC) para outra NIC na mesma rede local (LAN)**. Ele tem campos bem definidos (em **bytes**) para: **sincronizar**, indicar **onde começa o quadro**, identificar **destino e origem (MAC)**, dizer **que tipo/tamanho de dado vai dentro**, carregar os **dados encapsulados** e fazer **verificação de erros**.

***

1️⃣ Ethernet e o que ela entrega

*   A Ethernet funciona no contexto de **rede local**: entrega dados “localmente” (NIC ↔ NIC dentro da LAN).
*   O que viaja na Ethernet é um **quadro (frame)**, que carrega dentro dele dados de camadas superiores (ex.: IP, TCP, HTTP).

💡 **Analogia:** Ethernet é como a entrega **dentro do bairro**. Ela não precisa saber o “conteúdo da carta”, só precisa entregar o envelope no endereço local correto.

***

2️⃣ Bytes vs bits (como converter)

*   No vídeo, os tamanhos dos campos aparecem em **bytes**.
*   Para converter para **bits**, faça: **bytes × 8**.

💡 **Analogia:** 1 byte é uma “caixinha” com **8 bits** dentro.

***

3️⃣ Campos do quadro Ethernet (na ordem)

3.1) **Preâmbulo (Preamble)**

*   Serve para **sincronizar** os bits entre a NIC que envia e a NIC que recebe.
*   Ajuda o receptor a “entrar no ritmo” do sinal que vem pelo cabo.

💡 **Analogia:** é a “contagem” antes da música começar: “1, 2, 3… já!”

***

3.2) **Delimitador de Início de Quadro (SFD – Start Frame Delimiter)**

*   Indica que **a partir dali começa o quadro de verdade** (a informação útil).
*   É o marcador oficial de “agora vem o conteúdo do quadro”.

💡 **Analogia:** é o “VALENDO!” antes de começar a mensagem importante.

***

3.3) **Endereço MAC de Destino (Destination MAC)**

*   É o **MAC da NIC** para onde o quadro deve ser entregue **dentro da LAN**.
*   É o “destinatário local”.

💡 **Analogia:** é o “número da casa” do destinatário dentro do mesmo bairro.

***

3.4) **Endereço MAC de Origem (Source MAC)**

*   É o **MAC da NIC** que originou (enviou) o quadro.
*   Identifica quem enviou “localmente”.

💡 **Analogia:** é o “remetente” no envelope.

***

3.5) **Tipo ou Comprimento (Type/Length)**

Esse campo pode representar **uma de duas coisas** (dependendo do formato do quadro):

*   **Comprimento:** quantos bytes existem na área de **dados (payload)**.
*   **Tipo:** que tipo de conteúdo está dentro (ex.: **IPv4** ou **IPv6**).

💡 **Analogia:** é como escrever no envelope:

*   “Peso: 500g” (comprimento) **ou**
*   “Conteúdo: documentos” (tipo)

***

3.6) **Dados (Payload / Dados encapsulados)**

*   Aqui vai o conteúdo encapsulado, por exemplo:
    *   um **pacote IPv4** ou **IPv6**
    *   que pode conter **TCP** e até dados de aplicação como **HTTP**
*   A Ethernet **não precisa entender** o conteúdo a fundo. Ela só entrega o “pacote” de NIC para NIC na LAN.

💡 **Analogia:** o entregador não precisa saber se a caixa tem roupa ou livro — ele só entrega.

***

3.7) **FCS (Frame Check Sequence) – verificação de quadro**

*   Campo usado para **detectar erros** na transmissão.
*   O receptor usa o FCS para checar se o quadro chegou “inteiro” e sem corrupção.

💡 **Analogia:** é como um “selo de integridade”: se o selo não bate, você sabe que algo deu errado no caminho.

***

🧩 Conceito Fundamental

Esse é um exemplo clássico de **encapsulamento**:

*   Dados de camadas superiores (IP/TCP/HTTP) vão “dentro” do quadro Ethernet.
*   A Ethernet adiciona informações próprias (MAC, tipo/comprimento, FCS) para garantir entrega local e verificação de erro.

***

📌 Em resumo

*   O quadro Ethernet é o “envelope” da LAN.
*   Campos principais:
    *   **Preâmbulo + SFD:** sincronização e início do quadro
    *   **MAC destino + MAC origem:** para quem vai e quem enviou (na LAN)
    *   **Tipo/Comprimento:** o que tem dentro ou tamanho do payload
    *   **Dados:** o conteúdo encapsulado (IPv4/IPv6, TCP, HTTP etc.)
    *   **FCS:** detecção de erros
*   **Bytes → bits:** multiplica por **8**.

***

**7.1.2** Encapsulamento

🎯 Ideia Principal

**Encapsulamento** é o processo de “colocar uma mensagem dentro de outra”, adicionando informações necessárias para que ela **seja entregue corretamente**. É exatamente como enviar uma **carta**: você coloca a carta dentro de um **envelope** e escreve **remetente e destinatário** no lugar certo. Na rede, a mensagem “pura” do aplicativo vai sendo colocada dentro de “envelopes” de camadas inferiores (TCP/UDP, IP, Ethernet/Wi‑Fi). O **desencapsulamento** é o processo inverso: o destinatário vai abrindo esses “envelopes” até chegar ao conteúdo.

***

1️⃣ Por que existe encapsulamento (formato importa)

*   Para uma comunicação funcionar, a mensagem precisa seguir um **formato padrão**.
*   Se a mensagem não estiver formatada corretamente (endereços faltando, tipo errado, etc.), ela pode:
    *   **não chegar** ao destino
    *   chegar e **não ser entendida**
    *   ser descartada no caminho

💡 **Analogia:** se você escreve o endereço errado ou fora do lugar no envelope, o correio não entrega. Na rede é igual: sem “endereço” e formato correto, o tráfego não chega ou não é processado.

***

2️⃣ O que é encapsulamento e desencapsulamento (definições simples)

*   **Encapsulamento:** colocar a “carta” (dados) dentro de um “envelope” (estrutura da camada), adicionando informações como endereços e controle.
*   **Desencapsulamento:** no destino, remover esse envelope (ler e usar suas informações) e “passar” o conteúdo para a camada acima, até chegar ao aplicativo.

💡 **Analogia:**

*   Encapsular = **colocar carta no envelope** e etiquetar.
*   Desencapsular = **abrir o envelope** e ler a carta.

***

3️⃣ O que é um “quadro” (frame) nesse contexto

*   Antes de sair pela rede local, a mensagem precisa ser colocada em um formato chamado **quadro** (frame), por exemplo **quadro Ethernet**.
*   O quadro funciona como o envelope do “bairro” (LAN): ele traz endereços locais (como **MAC**) e informações de controle para entregar a mensagem na rede local.

✅ Ponto importante do texto:

*   O **formato e conteúdo** do quadro dependem do **tipo de mídia/canal** (Ethernet, Wi‑Fi etc.) e do tipo de mensagem.

💡 **Analogia:** o “envelope” muda se você enviar por correio normal, Sedex ou transportadora. Na rede, o “envelope” muda conforme a tecnologia (Ethernet/Wi‑Fi).

***

4️⃣ Encapsulamento na Internet: o papel do IP (o “envelope global”)

O texto faz uma comparação direta: o **IP** funciona como um envelope que garante a entrega **entre redes** (não só dentro do bairro).

*   **IP (Internet Protocol)** é responsável por levar a mensagem:
    *   da **origem** ao **destino**
    *   atravessando **uma ou mais redes**
*   No caso citado, ele usa o exemplo do **IPv6**, em que o pacote IPv6 tem campos que identificam origem e destino.

💡 **Analogia:**

*   **Ethernet (quadro)** = envelope do bairro (LAN).
*   **IP (pacote)** = envelope “intermunicipal/internacional” (Internet), que faz a carta atravessar cidades/países.

***

5️⃣ Como isso acontece “em camadas” (visão bem clara)

A ideia central é: a mensagem vai descendo pela pilha e ganhando “envelopes”.

Exemplo clássico: abrir um site (bem simples)

1.  **Aplicação (HTTP)** cria o conteúdo do pedido (a “carta”).
2.  **Transporte (TCP)** coloca informações de controle/portas e confiabilidade (primeiro “envelope”).
3.  **Internet (IP)** coloca endereços IP de origem/destino (envelope para atravessar redes).
4.  **Acesso à rede (Ethernet/Wi‑Fi)** coloca endereços locais e controle de entrega na LAN (envelope final para sair pelo cabo/ar).

No destino, ocorre o inverso:

*   Ethernet/Wi‑Fi tira o quadro → entrega ao IP
*   IP tira o pacote → entrega ao TCP
*   TCP reorganiza/confere → entrega ao HTTP (aplicação)

💡 **Analogia:** é como uma carta que, além do envelope normal, vai dentro de um “envelope de transporte” e depois numa “caixa” com etiqueta para atravessar longas distâncias. No destino, o processo é abrir por camadas.

***

🧩 Conceito Fundamental

**Encapsulamento é o mecanismo que permite que dados de aplicações (como web, e-mail, mensagens) viagem com segurança e direção correta**, porque cada camada adiciona o que ela precisa:

*   endereços locais (LAN)
*   endereços globais (IP)
*   controle de entrega/confiabilidade (TCP/UDP)
*   e o conteúdo real (aplicação)

Sem esse empacotamento por camadas, a rede não saberia **para onde enviar**, **como entregar**, nem **como organizar** o que chegou.

***

📌 Em resumo

*   Encapsulamento = “carta dentro do envelope” (mensagem dentro de estruturas com cabeçalhos).
*   Desencapsulamento = abrir os envelopes no destino.
*   **Quadro (frame)** é o envelope da rede local (endereços e controle na LAN).
*   **IP** é como o envelope da Internet: leva a mensagem da origem ao destino através de várias redes (ex.: IPv6).
*   Formato correto é obrigatório: sem ele, não entrega e não processa.

***

**7.2** A Camada de Acesso

**7.2.1** Switches Ethernet


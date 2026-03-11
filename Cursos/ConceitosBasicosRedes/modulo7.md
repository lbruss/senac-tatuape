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

🎯 Ideia Principal

**Switch Ethernet** é um equipamento que trabalha na **Camada 2 (Enlace de Dados) do modelo OSI** e toma decisões de encaminhamento usando o que está no **cabeçalho do quadro Ethernet**, principalmente o **MAC de destino**. Para isso, ele usa uma **tabela de endereços MAC** (também chamada de “MAC Address Table”) que diz: *“este MAC está naquela porta”*. Assim, o switch envia o quadro **só para a porta correta**, em vez de mandar para todo mundo.

***

1️⃣ Onde o switch atua (Camada 2) e por quê

*   O switch opera na **Camada 2**, porque ele olha informações do **quadro Ethernet** (que é da Camada 2).
*   A principal informação usada para decidir o encaminhamento é o **endereço MAC de destino**.

💡 **Analogia:** o switch é como um “porteiro do prédio” que decide em qual corredor entregar a encomenda olhando o **apartamento de destino** (MAC).

***

2️⃣ A tabela MAC (o “mapa” do switch)

*   O switch mantém uma **tabela MAC** que relaciona:  
    **MAC do dispositivo ↔ porta do switch**
*   No vídeo, essa tabela já aparece “pronta” (preenchida), e ele diz que depois você vai aprender **como ela é construída**.

💡 **Analogia:** é como a lista da portaria: “Fulano mora no apê 304 (porta X)”.

***

3️⃣ Exemplo do vídeo (H1 → H4) passo a passo

No exemplo aparecem 4 hosts: **H1, H2, H3, H4**, cada um com um MAC “abreviado” só para ficar fácil visualizar:

*   H1 = **AAAA**
*   H4 = **DDDD**

3.1) H1 monta o quadro Ethernet

*   **MAC de origem (Source MAC)** = AAAA (o próprio H1)
*   **MAC de destino (Destination MAC)** = DDDD (o H4)

💡 **Analogia:** remetente = quem envia; destinatário = quem vai receber.

3.2) O quadro chega no switch

*   O quadro entra no switch por uma porta (no vídeo: **FastEthernet 0/1**).

3.3) O switch consulta a tabela MAC

*   Ele lê o **MAC de destino = DDDD**
*   Procura DDDD na tabela e encontra que ele está na porta **FastEthernet 0/4**.

3.4) O switch encaminha somente para a porta correta

*   Em vez de mandar para todas as portas, ele envia **apenas** pela porta **Fa0/4**, na direção do H4.

💡 **Analogia:** é como entregar uma carta só no apartamento certo, e não distribuir cópia para o prédio inteiro.

***

4️⃣ Por que isso melhora a rede

Quando o switch encaminha só para a porta do destino:

*   reduz “bagunça” na rede (menos tráfego desnecessário)
*   melhora desempenho, porque cada dispositivo recebe o que precisa receber
*   evita que todo mundo “ouça” tudo (mais organização)

💡 **Analogia:** em vez de gritar uma mensagem para todo o bairro, você manda direto para a casa certa.

***

🧩 Conceito Fundamental

O switch funciona assim, em essência:

1.  Recebe um **quadro Ethernet**.
2.  Lê o **MAC de destino**.
3.  Procura na **tabela MAC** qual porta leva até esse MAC.
4.  Encaminha o quadro **somente** por essa porta.

***

📌 Em resumo

*   Switch Ethernet opera na **Camada 2**.
*   Ele decide usando o **cabeçalho do quadro Ethernet**, principalmente o **MAC de destino**.
*   Ele usa uma **tabela MAC** para saber em qual porta está o destino.
*   Exemplo: H1 (AAAA) → H4 (DDDD) → switch consulta tabela → envia só pela porta onde está DDDD.

***

**7.2.2** Tabela de Endereços MAC

🎯 Ideia Principal

Um **switch Ethernet** constrói sua **tabela de endereços MAC** “aprendendo” automaticamente: **toda vez que ele recebe um quadro**, ele grava o **MAC de origem** junto com a **porta de entrada**. Depois, para encaminhar, ele olha o **MAC de destino**: se já souber a porta, envia **só para ela**; se não souber (unicast desconhecido), ele faz **flood** (envia para todas as portas, menos a de entrada). Com o tempo, as entradas “expiram” (aging) se não forem usadas.

***

1️⃣ Como o switch aprende (MAC Learning)

*   Quando o switch recebe **qualquer quadro Ethernet**, a **primeira coisa** que ele faz é olhar o **MAC de origem**.
*   Ele pergunta: “Esse MAC já está na minha tabela?”
    *   Se **não estiver**, ele adiciona:  
        **MAC de origem → porta por onde o quadro entrou**
    *   Se **já estiver**, ele mantém/atualiza o registro (especialmente se o MAC aparecer em outra porta, o switch atualiza para a nova porta).

💡 **Analogia:** o switch é como um **porteiro** anotando: “A pessoa AA-AA entrou pelo corredor 1”. Da próxima vez, ele já sabe para onde mandar algo destinado a ela.

***

2️⃣ Como o switch encaminha (Forwarding)

Depois de aprender (MAC de origem), ele precisa entregar o quadro. Aí ele olha o **MAC de destino**:

2.1) Se o MAC de destino **está na tabela** (unicast conhecido)

*   Ele envia o quadro **somente para a porta correta** (filtrando as outras portas).
*   Isso reduz tráfego desnecessário e melhora desempenho.

💡 **Analogia:** o porteiro sabe que “DD-DD mora no corredor 4”, então manda a encomenda **só** para o corredor 4.

2.2) Se o MAC de destino **não está na tabela** (unicast desconhecido)

*   Isso é chamado de **unknown unicast** (unicast desconhecido).
*   O switch não sabe por qual porta o destino está, então ele faz **flood**:  
    **envia o quadro por todas as portas, exceto a porta de entrada**.

💡 **Analogia:** o porteiro ainda não sabe onde mora “DD-DD”, então ele manda um aviso para **todos os corredores**, menos o corredor de onde o aviso veio.

***

3️⃣ O que acontece com os hosts quando recebem o “flood”

No exemplo do vídeo (H1 → H4):

*   H1 envia um quadro com:
    *   **Origem:** AA-AA
    *   **Destino:** DD-DD
*   O switch aprende: **AA-AA está na porta Fa0/1**.
*   Como **DD-DD ainda não existe na tabela**, ele faz flood.

Aí:

*   H2 recebe o quadro e compara o **MAC de destino** com o MAC dele:
    *   “Não é para mim” → **descarta/ignora**
*   H3 faz o mesmo → **ignora**
*   H4 compara e vê:
    *   “É para mim (DD-DD)” → **aceita o quadro**

💡 **Analogia:** todo mundo no prédio recebe o aviso, mas só quem tem o “nome” igual ao destinatário abre e lê.

***

4️⃣ A resposta do H4 “fecha a tabela” (aprendizado do DD-DD)

Quando H4 responde para H1:

*   H4 envia quadro com:
    *   **Origem:** DD-DD
    *   **Destino:** AA-AA
*   O switch recebe pela porta de H4 (ex.: Fa0/4) e aprende:  
    **DD-DD está na porta Fa0/4**
*   Agora ele procura o destino AA-AA:
    *   já sabe que **AA-AA está na Fa0/1**
*   Então ele encaminha **só** para a Fa0/1.

✅ Resultado: depois desse “vai e volta”, o switch passa a saber onde estão **AA-AA e DD-DD**, e os próximos quadros **não precisam mais de flood**.

💡 **Analogia:** agora o porteiro já sabe onde moram os dois moradores. A partir daí, ele entrega direto.

***

5️⃣ O que muda na terceira vez (H1 → H4 de novo)

Quando H1 envia novamente para H4:

*   O switch vê **origem AA-AA** → já conhece (sem novidade).
*   O switch vê **destino DD-DD** → agora conhece (Fa0/4).
*   Então ele envia **somente** pela Fa0/4.

✅ Ou seja: o primeiro envio teve flood porque o destino era desconhecido, mas depois que o switch aprendeu, ele passou a fazer **encaminhamento direcionado**.

***

6️⃣ “Tempo de vida” das entradas (Aging)

*   O vídeo comenta que o switch mantém essas entradas por cerca de **5 minutos** (tempo típico).
*   Se um MAC fica um tempo sem aparecer (sem tráfego), o switch pode **remover** a entrada para manter a tabela atualizada.

💡 **Analogia:** o porteiro apaga anotações antigas se faz muito tempo que ninguém vê aquele morador — para não usar informação desatualizada.

***

🧩 Conceito Fundamental

O switch aprende e encaminha assim:

1.  **Aprende pelo MAC de origem** (anota “quem está em qual porta”).
2.  **Encaminha pelo MAC de destino**:
    *   se conhece → **envia só na porta certa** (filtra)
    *   se não conhece → **flood** (todas as portas menos a de entrada)
3.  Com o tempo, entradas **expiram** se não forem usadas.

***

📌 Em resumo

*   **Switch (Camada 2)** usa **endereços MAC** para tomar decisões.
*   Ele **constrói a tabela MAC automaticamente** olhando o **MAC de origem** dos quadros que chegam.
*   **Destino desconhecido** → faz **flood** (unknown unicast).
*   **Destino conhecido** → encaminha apenas para a **porta correta** (filtro).
*   Entradas da tabela ficam por um tempo (em torno de **5 min**) e depois podem ser removidas se não houver tráfego.

***

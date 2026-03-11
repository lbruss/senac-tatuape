# Módulo 13

**13.0** Introdução

**13.1** MAC e IP

**13.1.1** Destino na mesma rede

🎯 Ideia Principal

Numa rede Ethernet, um dispositivo usa **dois “endereços” diferentes**, cada um com uma função:

*   **MAC (endereço físico – Camada 2)**: entrega o **quadro** de **NIC para NIC** **dentro da mesma rede local (LAN)**.
*   **IP (endereço lógico – Camada 3)**: identifica **origem e destino** no nível de rede e permite que os pacotes cheguem ao destino, seja **na mesma rede** ou **em outra rede**.

Quando o **destino está na mesma rede**, o host precisa descobrir o **MAC do destino** para conseguir enviar o quadro Ethernet corretamente — é aí que entra a **resolução de endereços**.

***

1️⃣ Por que o host precisa do MAC se ele já tem o IP?

*   O host pode saber o **IP do destino** (ex.: `192.168.1.20`), mas para enviar dados pela Ethernet ele precisa montar um **quadro Ethernet**.
*   Esse quadro **sempre** precisa de:
    *   **MAC de origem** (do host que envia)
    *   **MAC de destino** (do dispositivo que vai receber na LAN)

✅ Então, para falar com um IP na mesma LAN, o host precisa transformar:  
**“IP do destino” → “MAC do destino”**.

💡 **Analogia:**

*   **IP** é como o **endereço de rua** (bairro/cidade).
*   **MAC** é como o **número da porta/identificador local** dentro do bairro.  
    Dentro do mesmo bairro, o entregador precisa do número da porta (MAC) para entregar de verdade.

***

2️⃣ MAC vs IP (diferença bem direta)

2.1) Endereço MAC (Camada 2)

*   É o “endereço físico” usado para entrega **local** na Ethernet (NIC ↔ NIC).
*   Serve para o switch saber para qual porta encaminhar o quadro (com base na tabela MAC).

💡 **Analogia:** MAC é o “apartamento” dentro do condomínio.

2.2) Endereço IP (Camada 3)

*   É o “endereço lógico” que identifica dispositivos em redes IP.
*   O IP do destino pode estar:
    *   na **mesma rede** (LAN)
    *   em uma **rede remota** (aí entra gateway/roteador)

💡 **Analogia:** IP é o “endereço do condomínio” no mapa da cidade.

***

3️⃣ Se o destino está na mesma rede: qual MAC vai no quadro?

Quando o endereço IP de destino está na **mesma rede**, acontece assim:

*   **MAC de destino do quadro Ethernet = MAC do dispositivo de destino** (o host que tem aquele IP).
*   Ou seja, você envia **direto** para o destinatário na LAN.

✅ O texto resume isso bem:

> “Se o endereço IP de destino estiver na mesma rede, o endereço MAC de destino será o do dispositivo de destino.”

💡 **Analogia:** se a casa é na mesma rua, você entrega direto na casa certa, sem passar pela portaria da cidade (roteador).

***

4️⃣ Como o host “descobre” o MAC do destino (resolução de endereços)

Aqui entra o mecanismo de **resolução de endereços** (em IPv4, isso é feito com **ARP**):

1.  O host percebe (pela máscara) que o IP de destino está na **mesma rede**.
2.  Ele verifica se já tem essa informação em cache (tabela ARP).
3.  Se não tiver, ele envia uma pergunta em broadcast na LAN:  
    “Quem tem o IP X? Me diga seu MAC.”
4.  O destino responde com o próprio MAC.
5.  O host guarda isso e passa a enviar o quadro Ethernet com o MAC correto.

💡 **Analogia:** você pergunta em voz alta no bairro: “Quem é o morador do número X?” Só o morador certo responde com “sou eu, minha porta é essa”.

***

🧩 Conceito Fundamental

**IP diz “para onde” no mundo lógico; MAC diz “para quem” na rede local.**

*   Para enviar dados na mesma LAN, o host precisa do **MAC do destino**, porque Ethernet entrega de NIC para NIC usando endereços **MAC**.
*   O pacote IP vai “dentro” do quadro Ethernet (encapsulamento), mas quem manda na entrega local é o **MAC**.

***

📌 Em resumo

*   Na LAN Ethernet, você usa **MAC (Camada 2)** para entrega local e **IP (Camada 3)** para identificar origem/destino lógico.
*   Se o destino está **na mesma rede**, o **MAC de destino do quadro** é o **MAC do próprio destino**.
*   Para achar esse MAC a partir do IP, você usa **resolução de endereços** (ARP no IPv4).

***

**13.1.2** Destino em uma Rede Remota

🎯 Ideia Principal

Quando o destino está em **outra rede** (remota), o host **não envia o quadro Ethernet diretamente para o MAC do destino final**. Ele envia para o **MAC do gateway padrão** (a interface do roteador na sua LAN). A partir daí, **cada roteador** no caminho remove o “envelope” de Camada 2 (desencapsula) e cria um **novo quadro de Camada 2** (reencapsula) para o **próximo salto**.  
✅ **IP de origem/destino (Camada 3) permanece o mesmo do início ao fim**;  
✅ **MAC de origem/destino (Camada 2) muda a cada link (a cada salto).**

***

1️⃣ Destino em rede remota: por que o MAC de destino vira o do gateway?

*   O computador (PC1) decide se o destino está na mesma rede usando **IP + máscara**.
*   Se o destino **não** está na mesma rede, ele não consegue “entregar direto” na LAN.
*   Então ele envia o quadro para o **gateway padrão** (roteador), que é o “caminho de saída” para outras redes.

📌 Portanto:

*   **IP de destino** (no pacote) = IP do PC2 (destino final)
*   **MAC de destino** (no quadro Ethernet) = MAC da **interface do roteador** (gateway padrão)

💡 **Analogia:** você quer mandar uma encomenda para outra cidade. Você não entrega direto na casa da outra cidade; você entrega primeiro na **agência dos Correios** (gateway) do seu bairro.

***

2️⃣ O que o roteador faz quando recebe o quadro (desencapsular e reencapsular)

Quando o roteador recebe o quadro Ethernet:

2.1) Ele **desencapsula** (remove Camada 2)

*   Ele tira o “envelope” Ethernet (MAC origem/destino, etc.), porque aquilo só servia para o link local.

2.2) Ele olha o **IP de destino** (Camada 3) e escolhe o caminho

*   O roteador examina o **endereço IP de destino** para decidir por onde encaminhar (qual próximo salto).

2.3) Ele **reencapsula** em um novo quadro (Camada 2) para o próximo link

*   Cria um **novo quadro** com:
    *   **MAC de origem** = MAC da **interface de saída** do roteador atual
    *   **MAC de destino** = MAC do **próximo salto** (próximo roteador ou destino final, se já estiver na rede final)

💡 **Analogia:** o carteiro local pega a carta (IP), joga fora o envelope do bairro (MAC antigo) e coloca em um **novo envelope** para a próxima etapa do transporte.

***

3️⃣ Exemplo do texto (R1 → R2) com MAC mudando

O texto diz que, ao encaminhar de R1 para R2:

*   **Novo MAC de destino** = MAC da interface **G0/0/1 de R2**
*   **Novo MAC de origem** = MAC da interface **G0/0/1 de R1**

✅ Ou seja: o quadro entre R1 e R2 tem endereços MAC “daquele link”, não do PC final.

💡 **Analogia:** cada trecho da viagem usa um “transportador” diferente e cada transportador usa uma etiqueta local diferente.

***

4️⃣ A regra mais importante para fixar

4.1) IP (Camada 3) é “endereço final” → **não muda no caminho**

*   IP origem = PC1
*   IP destino = PC2  
    Isso continua igual em todos os roteadores, do começo ao fim.

4.2) MAC (Camada 2) é “entrega do próximo passo” → **muda em cada salto**

*   Em cada link, o quadro Ethernet é “re-escrito” com novos MACs.

💡 **Analogia:**

*   **IP** = endereço da casa do destino (cidade/rua/número)
*   **MAC** = o “próximo portão”/“próxima pessoa” que vai levar a encomenda naquele trecho

***

5️⃣ E como o dispositivo descobre o MAC do “próximo salto”? (ARP e ND)

Para montar o quadro Ethernet correto em cada link, alguém precisa converter:

*   **“eu sei o IP do próximo salto… qual é o MAC dele?”**

Isso é feito por:

5.1) IPv4 → **ARP (Address Resolution Protocol)**

*   Mapeia **IPv4 ↔ MAC** dentro da rede local.

5.2) IPv6 → **ICMPv6 Neighbor Discovery (ND)**

*   Faz o papel equivalente no IPv6: descobre vizinhos e seus endereços de camada 2.

💡 **Analogia:** ARP/ND é como perguntar: “Ok, eu sei o endereço do prédio (IP). Qual é a porta exata (MAC) para eu entregar aqui dentro?”

***

🧩 Conceito Fundamental

*   Se o destino estiver em **outra rede**, o host envia para o **gateway padrão** (MAC do roteador).
*   **Roteadores roteiam usando IP**, mas **entregam no próximo link usando MAC**.
*   Em cada salto: **desencapsula L2 → decide por IP → reencapsula L2**.
*   **ARP (IPv4)** e **ND (IPv6)** fazem a “ponte” **IP → MAC** em cada rede local do caminho.

***

📌 Em resumo

*   **Destino local:** MAC de destino = MAC do próprio destino.
*   **Destino remoto:** MAC de destino = MAC do gateway padrão (roteador).
*   **IPs não mudam** de ponta a ponta (origem/destino final).
*   **MACs mudam** a cada link (a cada roteador).
*   **IPv4 usa ARP** e **IPv6 usa ND (ICMPv6)** para descobrir MAC do próximo salto.

***

**13.2** Contenção de Broadcast

**13.2.1** O Broadcast Ethernet

🎯 Ideia Principal

**Broadcast Ethernet** é quando um quadro Ethernet é enviado para **todos os dispositivos da mesma rede local (mesma LAN/VLAN)**. Isso acontece porque o **MAC de destino** do quadro é um endereço especial de broadcast (**FF:FF:FF:FF:FF:FF**).  
✅ **Switch** espalha (flood) esse quadro para todas as portas (menos a de entrada).  
✅ **Roteador** até pode receber esse broadcast, mas **não encaminha para outras redes**, o que ajuda a **conter** o broadcast dentro de um domínio.

***

1️⃣ O que é Broadcast Ethernet (Camada 2)

*   É uma transmissão **1 → todos** na **Camada 2 (Ethernet)**.
*   O quadro usa como **MAC de destino** o broadcast:
    *   **48 bits em 1**
    *   em hexadecimal: **FF:FF:FF:FF:FF:FF**

💡 **Analogia:** é como fazer um anúncio no alto-falante **só do seu prédio** (LAN). Todo mundo do prédio ouve.

***

2️⃣ Por que existe broadcast?

Às vezes um dispositivo precisa falar com **todos** na rede local, por exemplo:

*   quando precisa “descobrir” alguém na LAN (ex.: processos de descoberta/serviços)
*   quando precisa enviar algo que deve ser visto por todos naquele segmento

💡 **Analogia:** é como perguntar em voz alta: “Quem aqui é o responsável por X?” — todo mundo ouve, só quem precisa reage.

***

3️⃣ O que o switch faz com broadcast (flood)

*   Quando um **switch** recebe um quadro Ethernet com MAC de destino **FF:FF:FF:FF:FF:FF**, ele:  
    ✅ **inunda** (flood) o quadro para **todas as portas**, **exceto** a porta por onde o quadro entrou.
*   Resultado: **todos os dispositivos** na mesma LAN/VLAN recebem esse quadro.

💡 **Analogia:** o switch é como alguém que copia o aviso e entrega em **todas as salas do andar**, menos na sala de onde o aviso saiu.

***

4️⃣ E o roteador? (contenção do broadcast)

*   Se houver um roteador conectado a essa LAN/VLAN, ele **também recebe** o broadcast (porque ele está nessa rede).
*   Porém, o roteador **não repassa** esse broadcast Ethernet para outras interfaces/redes.
*   Isso cria um **limite natural**: o broadcast fica preso no **domínio de broadcast**.

💡 **Analogia:** o roteador é a **porta do prédio** para a rua. Ele não pega o anúncio do prédio e sai anunciando nos prédios vizinhos.

***

5️⃣ Onde esse broadcast “alcança” de verdade (domínio de broadcast)

*   Broadcast Ethernet alcança **somente** os dispositivos que estão no **mesmo domínio de broadcast**, que na prática é:
    *   a mesma LAN/VLAN (mesmo “segmento lógico”).

💡 **Analogia:** é o “alcance do megafone”: ele funciona dentro do seu prédio (LAN), mas não atravessa para outro prédio (outra rede).

***

🧩 Conceito Fundamental

**Broadcast Ethernet é um mecanismo local da Camada 2**.

*   **Switch** espalha dentro do segmento.
*   **Roteador** não encaminha para outros segmentos.  
    Isso mantém broadcasts **contidos**, evitando que “mensagens para todo mundo” virem caos em redes maiores.

***

📌 Em resumo

*   Broadcast Ethernet = quadro com MAC de destino **FF:FF:FF:FF:FF:FF** (48 bits em 1).
*   Switch faz **flood** para todas as portas (menos a de entrada).
*   Todos os hosts do segmento recebem.
*   Roteador **não encaminha** broadcast para outras redes → **contenção** em um domínio de broadcast.

***

**13.2.2** Domínios de Broadcast

🎯 Ideia Principal

Um **domínio de broadcast** é o “alcance” de uma mensagem enviada para **todos** em uma rede local. Em redes Ethernet, **switches espalham (flood) broadcasts** para todos os dispositivos do mesmo segmento/VLAN, então **todos recebem e processam** esse tipo de mensagem. Quando a rede cresce e tem muitos hosts, o broadcast pode virar “barulho” e prejudicar o desempenho. A solução é **dividir a rede em domínios menores**, normalmente usando **roteadores** (e, na prática moderna, também **VLANs + roteamento**).

***

1️⃣ O que acontece quando um host recebe um broadcast

*   Quando um quadro Ethernet chega com MAC de destino **FF:FF:FF:FF:FF:FF** (broadcast), o dispositivo **aceita** esse quadro e o sistema operacional **processa** a mensagem (ele não descarta só por não ser “um MAC exclusivo”).
*   Nem sempre isso significa que um aplicativo “vai usar” a mensagem, mas o host precisa **ler e decidir** o que fazer com ela — isso consome recursos.

💡 **Analogia:** é como um aviso no alto-falante do prédio. Todo morador escuta (processa) — mesmo que o aviso não seja relevante para ele.

***

2️⃣ Por que uma LAN com switches é chamada de “domínio de broadcast”

*   Em uma rede local Ethernet, os **switches** encaminham broadcasts para **todas as portas**, exceto a porta de entrada.
*   Isso faz com que **todos os hosts conectados** naquele mesmo segmento/VLAN recebam a transmissão.
*   Por isso, um conjunto de hosts conectados por switches (sem separação por roteamento/VLAN) forma, na prática, um **domínio de broadcast**.

💡 **Analogia:** os switches são como funcionários que copiam o aviso e colocam em todas as portas do prédio. Todo mundo recebe.

***

3️⃣ O problema: muitos hosts no mesmo domínio = muito “barulho”

*   Quanto mais hosts você tem no mesmo domínio de broadcast, maior a chance de haver:
    *   ARP em broadcast (descobrir MAC de IP local)
    *   DHCP discovery em broadcast (procurar servidor DHCP)
    *   outros anúncios e descobertas locais
*   Isso pode causar dois impactos:
    *   **na rede:** mais tráfego inútil ocupando banda
    *   **nos dispositivos:** mais pacotes para receber e processar (mesmo que ignorem depois)

💡 **Analogia:** é como um grupo gigante de mensagens: quanto maior o grupo, mais notificações “para todo mundo”, e mais difícil manter a conversa eficiente.

***

4️⃣ O limite prático: não é só “quantidade de PCs”, é capacidade do ambiente

*   A rede local é limitada por:
    *   capacidade de processamento e encaminhamento dos **switches**
    *   capacidade dos hosts para lidar com tráfego extra
    *   volume de tráfego total (incluindo broadcast)
*   À medida que a rede cresce, o tráfego cresce junto, e o broadcast cresce como “efeito colateral”.

💡 **Analogia:** uma avenida pode até suportar mais carros, mas chega uma hora que o trânsito trava — mesmo quem está só passando sofre.

***

5️⃣ A solução: dividir em vários domínios de broadcast (segmentar)

*   Para melhorar o desempenho, divide-se a rede local em **redes menores**, criando **vários domínios de broadcast**.
*   Quem faz essa separação de domínios de broadcast, de forma clássica, é o **roteador**:
    *   broadcast **não atravessa** o roteador, então cada lado vira um domínio separado.

💡 **Analogia:** em vez de um único prédio enorme com um alto-falante, você separa em blocos. O aviso fica só no bloco que precisa.

> 🔎 Observação prática importante: **switches por si só não “quebram” domínios de broadcast**; eles espalham broadcast. Quem quebra é **roteamento** — e hoje isso muitas vezes é feito com **VLANs** (no switch) + roteamento (em roteador ou switch camada 3).

***

🧩 Conceito Fundamental

*   **Domínio de broadcast** = conjunto de dispositivos que recebem um broadcast.
*   **Switch** espalha broadcast dentro do mesmo segmento/VLAN.
*   **Roteador** separa domínios de broadcast, porque não encaminha broadcast entre redes.
*   Redes muito grandes em um único domínio geram **broadcast excessivo** → pior desempenho → necessidade de **segmentação** (sub-redes/VLANs).

***

📌 Em resumo

*   Broadcast é “mensagem para todos” na LAN, e cada host precisa **receber e processar**.
*   Switches fazem o broadcast alcançar todos os hosts do segmento/VLAN.
*   Muitos hosts no mesmo domínio podem gerar tráfego excessivo e lentidão.
*   Para melhorar desempenho, divide-se a rede em **domínios menores**, geralmente usando **roteadores** (e frequentemente **VLANs + roteamento**).

***

**13.2.3** Comunicação na camada de Acesso

🎯 Ideia Principal

Na **camada de acesso (Ethernet/LAN)**, quem manda na entrega local é o **endereço MAC**. Uma placa de rede (**NIC**) só “aceita” um quadro Ethernet se ele vier:

*   com **MAC de destino igual ao MAC dela**, ou
*   com **MAC de destino de broadcast** (**FF:FF:FF:FF:FF:FF**).

Só que, na prática, a maioria dos programas (navegador, e-mail, apps) pensa em **IP** (endereço lógico). Então surge a pergunta: **se eu só sei o IP do destino, como descubro o MAC para preencher o quadro Ethernet?**  
➡️ Em **IPv4**, isso é feito pelo **ARP**. Em **IPv6**, é feito pelo **Neighbor Discovery (ND)** via **ICMPv6**.

***

1️⃣ O que a NIC aceita na Ethernet (regra simples)

Em uma LAN Ethernet, a NIC processa o quadro quando:

*   **Destino = MAC dela** (unicast local) ✅
*   **Destino = FF:FF:FF:FF:FF:FF** (broadcast) ✅
*   Qualquer outro MAC → normalmente **ignora** o quadro ❌

💡 **Analogia:** é como a caixa de correio de um prédio:

*   você abre cartas com seu nome (MAC igual),
*   e abre avisos gerais do prédio (broadcast),
*   o resto você ignora.

***

2️⃣ Por que isso “entra em choque” com os aplicativos (IP vs MAC)

*   Aplicativos usam **IP** para decidir *para onde* falar (ex.: “quero falar com `192.168.1.50`”).
*   Mas a Ethernet precisa de **MAC** para entregar *aqui dentro da LAN* (para montar o quadro).

Então o host precisa converter:  
**IP do destino → MAC do destino (na LAN)**

💡 **Analogia:** o app sabe o “endereço da casa” (IP), mas para entregar no condomínio ele precisa do “número do apartamento/porta” (MAC).

***

3️⃣ Como o host descobre o MAC do destino (IPv4: ARP)

Quando o destino está **na mesma rede local**, o host usa **ARP** assim:

1.  O host verifica se já sabe o MAC (tabela/cache ARP).
2.  Se não souber, envia um **ARP Request em broadcast**:  
    “Quem tem o IP `X.X.X.X`? Me diga seu MAC.”
3.  O dono daquele IP responde com **ARP Reply (unicast)**:  
    “O IP `X.X.X.X` é meu, meu MAC é `YY:YY:...`”
4.  O host guarda essa relação (IP↔MAC) e monta o quadro Ethernet corretamente.

💡 **Analogia:** você pergunta em voz alta no bairro: “Quem mora na casa 50?”  
Só o morador certo responde: “Sou eu, minha porta é essa.”

***

4️⃣ E no IPv6? (Neighbor Discovery – ND)

No **IPv6**, não existe ARP. O equivalente é o **Neighbor Discovery (ND)**, que usa **ICMPv6** para descobrir o “vizinho” (o MAC/endereços de camada 2) e outras informações de rede.

A lógica é parecida:

*   “Eu sei o endereço IPv6 do vizinho; agora preciso descobrir o endereço de camada 2 para enviar o quadro no enlace.”

💡 **Analogia:** em vez de “gritar ARP”, o IPv6 usa um “sistema de interfone mais moderno” (mensagens ICMPv6) para descobrir vizinhos.

***

5️⃣ O que a figura está querendo mostrar (o problema e a solução)

*   **Problema:** o host emissor conhece apenas o **IP lógico** do destino (camada 3).
*   **Solução:** ele usa um protocolo de descoberta (ARP no IPv4 / ND no IPv6) para obter o **MAC** e então enviar o quadro na camada 2.

💡 **Analogia:** é como ter o nome da pessoa (IP) mas precisar do número do apartamento (MAC) para entregar a encomenda.

***

🧩 Conceito Fundamental

*   **IP (Camada 3)**: endereça e identifica origem/destino em redes.
*   **MAC (Camada 2)**: entrega local dentro da LAN.
*   Para sair do “mundo IP” e conseguir entregar na Ethernet, o host precisa de:
    *   **ARP** (IPv4) ou **ND/ICMPv6** (IPv6).

***

📌 Em resumo

*   NIC só aceita quadro Ethernet se o MAC de destino for **o dela** ou **broadcast**.
*   Aplicações trabalham com **IP**, não com MAC.
*   Para preencher o MAC correto no quadro:
    *   **IPv4 usa ARP**
    *   **IPv6 usa Neighbor Discovery (ICMPv6)**

***

**13.2.4** ARP (Protocolo de Resolução de Endereços)

🎯 Ideia Principal

O **ARP (Address Resolution Protocol)** é o mecanismo do **IPv4** usado para descobrir o **endereço MAC** de um dispositivo **na mesma rede local (LAN)** quando você já conhece o **endereço IP** dele. Ele faz isso enviando uma pergunta em **broadcast Ethernet** (“quem tem esse IP?”). O dispositivo dono do IP responde com o seu **MAC**, e aí o host consegue montar o **quadro Ethernet** corretamente e enviar os dados.

***

1️⃣ Por que o ARP existe (IP sozinho não basta na LAN)

*   Aplicações e protocolos de rede pensam em **IP** (Camada 3).
*   Mas para enviar na Ethernet (Camada 2), o computador precisa colocar no quadro:
    *   **MAC de origem** (da sua NIC)
    *   **MAC de destino** (da NIC do destino local)

✅ Então, se você só sabe o **IP do destino**, você precisa descobrir o **MAC** para conseguir entregar na LAN.

💡 **Analogia:** você sabe o **endereço da rua** (IP), mas para entregar dentro do condomínio precisa saber o **número do apartamento/porta** (MAC).

***

2️⃣ O passo a passo do ARP (o que acontece no vídeo)

2.1) PC quer falar com um IP local

*   Exemplo do vídeo: **PC1** quer enviar para o servidor FTP **192.168.1.9**.
*   PC1 sabe o **IP**, mas não sabe o **MAC** do servidor.

💡 **Analogia:** você sabe “quem” quer encontrar (IP), mas não sabe “onde é a porta” (MAC).

***

2.2) Primeiro: o PC consulta a **tabela ARP (cache ARP)**

*   O PC olha na sua **tabela ARP**:  
    “Eu já sei o MAC do IP 192.168.1.9?”
*   Se já souber, ele **não precisa** fazer broadcast. Só usa o MAC e envia.

💡 **Analogia:** é olhar sua agenda: “eu já tenho o telefone desse contato?”

***

2.3) Se não tiver: envia um **ARP Request (pedido ARP)** em broadcast

*   Se o IP não estiver no cache, o PC envia uma **solicitação ARP**:  
    “Quem tem o IP 192.168.1.9? Me diga seu MAC.”
*   Isso vai em **broadcast Ethernet**, ou seja:
    *   **MAC de destino = FF:FF:FF:FF:FF:FF** (todos os bits 1)

✅ Por que broadcast?  
Porque o PC ainda não sabe **qual porta/MAC** é o certo, então ele pergunta para “todo mundo” na LAN.

💡 **Analogia:** é gritar no bairro: “Quem mora na casa 9?”

***

2.4) O switch espalha (flood) o broadcast

*   Quando o **switch** recebe esse broadcast, ele **inunda** para:
    *   todas as portas **exceto** a porta por onde entrou
*   Resultado: **todos os dispositivos da LAN recebem** o ARP Request (incluindo o roteador).

💡 **Analogia:** o switch é como alguém que distribui o aviso para todas as salas do prédio.

***

2.5) O roteador recebe, mas **não encaminha** para outras redes

*   O roteador até recebe o broadcast porque está naquela LAN.
*   Mas ele **não encaminha** o broadcast para outras interfaces/redes.
*   Ou seja: ARP fica **contido** naquele **domínio de broadcast**.

💡 **Analogia:** o portão do condomínio não sai anunciando o recado para a cidade inteira.

***

2.6) O destino responde com **ARP Reply (resposta ARP)**

*   O servidor FTP (192.168.1.9) reconhece:  
    “Esse IP é meu!”
*   Ele responde para o PC1 com uma mensagem ARP dizendo:  
    “Meu MAC é XX:XX:XX:XX:XX:XX” (MAC real do servidor)

✅ Essa resposta normalmente é **unicast** de volta para quem perguntou.

💡 **Analogia:** só o morador certo responde: “Sou eu, minha porta é essa.”

***

2.7) PC1 guarda no cache e finalmente envia o quadro Ethernet “normal”

*   Agora PC1 já sabe o MAC do servidor.
*   Ele grava no cache ARP a associação:  
    **192.168.1.9 → MAC do servidor**
*   E então ele consegue encapsular o pacote IPv4 dentro de um quadro Ethernet com:
    *   **MAC destino = MAC do servidor**
    *   **MAC origem = MAC do PC1**
*   Pronto: tráfego vai direto para o servidor na LAN.

💡 **Analogia:** depois que você salva o contato na agenda, na próxima vez você liga direto, sem perguntar para ninguém.

***

3️⃣ O detalhe mais importante: ARP só resolve MAC **na rede local**

*   ARP funciona para descobrir o MAC de um host **na mesma rede**.
*   Se o destino estiver em **outra rede**, o PC **não** procura o MAC do destino final. Ele procura o MAC do **gateway padrão** (roteador), porque é ele que vai encaminhar para fora.

💡 **Analogia:** se a pessoa está em outra cidade, você não entrega direto; você entrega no correio (gateway).

***

🧩 Conceito Fundamental

**ARP (IPv4) = “IP → MAC” dentro da LAN.**  
Ele usa broadcast para perguntar “quem tem esse IP?” e recebe de volta o MAC, permitindo que o host monte o quadro Ethernet corretamente. Broadcast é espalhado por switches, mas **não atravessa roteadores**, por isso o ARP fica contido no domínio de broadcast.

***

📌 Em resumo

*   PC sabe o **IP**, mas precisa do **MAC** para enviar na Ethernet.
*   Primeiro consulta o **cache ARP**.
*   Se não tiver, envia **ARP Request em broadcast** (MAC destino **FF:FF:FF:FF:FF:FF**).
*   Switch **flooda** para toda a LAN; roteador **não encaminha** para outras redes.
*   O dono do IP responde com **ARP Reply** informando o MAC.
*   PC salva no cache e envia os dados direto usando o **MAC correto**.

***

**13.2.5** ARP

🎯 Ideia Principal

O **ARP** é o mecanismo do **IPv4** que permite descobrir o **endereço MAC** de um dispositivo **na mesma rede local** quando você só conhece o **endereço IPv4** dele. Ele faz isso usando **broadcast** (para perguntar “quem tem esse IP?”), guarda o resultado em uma **tabela ARP (cache)** e, depois disso, passa a enviar quadros **diretamente** sem precisar ficar perguntando de novo.

***

1️⃣ O processo do ARP em 3 etapas (como no texto)

1) **Solicitação ARP em broadcast (pergunta para todo mundo)**

*   O host emissor cria um **quadro Ethernet** com:
    *   **MAC de destino = broadcast** `FF:FF:FF:FF:FF:FF`
*   Dentro do quadro vai a mensagem ARP dizendo, basicamente:
    *   “Quem tem o IPv4 **X.X.X.X**? Responda com seu MAC.”

💡 **Analogia:** é como gritar no bairro: “Quem mora na casa número 9?”

***

2) **Todos recebem, só o dono do IP responde (resposta ARP)**

*   Todos os hosts do mesmo domínio recebem o broadcast e comparam:
    *   “Esse IP pedido é o meu IP?”
*   O host que **tem o IP correspondente** responde para o emissor com o seu **MAC**.

💡 **Analogia:** todo mundo ouve o grito, mas só o morador da casa certa responde: “Sou eu, minha porta é essa!”

***

3) **O emissor salva no cache (tabela ARP)**

*   O host emissor recebe a resposta e armazena a associação:
    *   **IPv4 ↔ MAC**
*   Isso fica guardado numa tabela chamada **tabela ARP** (cache ARP).

💡 **Analogia:** você salva o contato na agenda: “Casa 9 = porta XX”.

***

2️⃣ O que muda depois: envio direto (sem novo broadcast)

*   Depois que o emissor já tem o MAC do destino no cache:
    ✅ ele envia quadros **direto** para o MAC do destino  
    ✅ sem precisar enviar outra solicitação ARP (até o cache expirar/ser atualizado)

💡 **Analogia:** depois que você já tem o telefone da pessoa, você liga direto — não precisa perguntar pra vizinhança de novo.

***

3️⃣ Por que ARP exige o mesmo domínio de broadcast

*   ARP usa **broadcast Ethernet** para fazer a pergunta inicial.
*   Broadcast fica **restrito à rede local** (switch espalha dentro da LAN/VLAN, mas roteador **não encaminha** para outra rede).

✅ Portanto, para o ARP funcionar entre emissor e destino:

*   eles precisam estar no **mesmo domínio de broadcast** (mesma LAN/VLAN).

💡 **Analogia:** o grito no bairro não atravessa para outro bairro se houver um “portão” (roteador) no meio.

***

🧩 Conceito Fundamental

**ARP = “converter IPv4 em MAC dentro da LAN”.**  
Ele resolve o problema de “eu sei o IP do destino, mas preciso do MAC para montar o quadro Ethernet”. E como ele depende de broadcast, ele funciona **apenas no alcance do domínio de broadcast**.

***

📌 Em resumo

*   ARP descobre MAC a partir de um IPv4 conhecido **na mesma rede local**.
*   3 etapas:
    1.  ARP Request em broadcast (`FF:FF:FF:FF:FF:FF`)
    2.  Só o dono do IP responde com ARP Reply (MAC)
    3.  O emissor guarda IP↔MAC na **tabela ARP**
*   Depois disso, o emissor envia direto sem novo ARP (até precisar novamente).
*   ARP depende de broadcast → precisa estar no **mesmo domínio de broadcast**.

***

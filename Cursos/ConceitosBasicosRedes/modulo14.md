# Módulo 14

**14.0** Introdução

**14.1** A necessidade do Roteamento

**14.1.1** Dividindo a Rede Local

🎯 Ideia Principal

Conforme uma rede cresce, fica necessário **dividir uma única LAN grande em várias redes menores**. Isso reduz **broadcast desnecessário**, melhora **segurança**, facilita **organização** (por departamentos) e permite expansão por **localização** (outro andar/prédio). Para fazer essa divisão e permitir que redes diferentes “conversem”, entra o **roteador** — ele separa **domínios de broadcast** e cria **redes IP diferentes**, uma por interface.

***

1️⃣ Por que uma rede grande vira problema (broadcast demais)

*   Em uma LAN grande, **qualquer broadcast** (ex.: ARP/DHCP) é “ouvido” por todos os dispositivos conectados via switches.
*   Mesmo quando a maioria não precisa daquele broadcast, todos são forçados a:
    *   receber
    *   processar
    *   e muitas vezes descartar

✅ Resultado: **trabalho e tráfego desnecessários**, o que pode deixar a rede mais lenta.

💡 **Analogia:** é como um alto-falante no prédio tocando anúncio para todos os apartamentos o tempo todo. Mesmo quem não precisa, é obrigado a ouvir.

***

2️⃣ Domínio de broadcast (o “alcance do anúncio”)

*   **Domínio de broadcast** é a área que “escuta” um broadcast.
*   Se tudo está ligado só por switches (sem roteamento), o domínio tende a ser **grande**, porque o switch espalha broadcast dentro do segmento/VLAN.

💡 **Analogia:** é o “tamanho do prédio” que compartilha o mesmo alto-falante.

***

3️⃣ Segurança: separar para controlar quem acessa o quê

Dividir a rede também serve para **limitar acesso** entre grupos. Exemplos do vídeo:

*   Você pode **não querer** que Vendas veja servidores/impressoras de Contabilidade.
*   Você pode **não querer** que Contabilidade acesse recursos críticos de Gerenciamento de Rede (TI).

Quando você separa em redes menores, fica mais fácil aplicar políticas do tipo:

*   “Sub-rede A pode falar com B, mas não com C”.

💡 **Analogia:** é como separar a empresa em salas com portas e chaves: cada equipe entra onde deve, não onde não deve.

***

4️⃣ Localização geográfica: quando um departamento “se muda”

*   Um departamento pode ir para outro andar, prédio ou local onde uma LAN única não alcança bem.
*   Dividir por localização ajuda a organizar a infraestrutura e manter a rede funcionando mesmo com distâncias maiores.

💡 **Analogia:** se a empresa vira “mais de um prédio”, você precisa de “portas de conexão” entre prédios (roteamento) e não dá para depender de um único salão.

***

5️⃣ Como dividir a rede? (entra o roteador)

*   Um **roteador** é o principal equipamento para **dividir redes** e permitir comunicação entre elas.
*   Ele separa a rede local da Internet (na sua casa isso também acontece: sua rede interna não “invade” a Internet com broadcast).
*   Ao inserir roteadores no desenho da empresa, você transforma uma LAN grande em **três redes separadas** (por exemplo: TI, Contabilidade, Vendas).

💡 **Analogia:** o roteador é como o “controle de portão” entre áreas: ele decide o que passa de um lado para o outro.

***

6️⃣ A regra-chave do vídeo: “cada interface do roteador é uma rede”

*   Em um roteador, **cada interface** conectada define uma **rede separada**.  
    Isso significa duas coisas ao mesmo tempo:

6.1) Domínios de broadcast separados

*   Broadcast fica “preso” em cada lado.
*   Um broadcast em Vendas não “invade” Contabilidade.

6.2) Redes IP diferentes

*   Cada segmento tem seu **próprio conjunto de endereços IP** (sua própria sub-rede).
*   Dispositivos de uma rede compartilham a mesma “parte de rede” do IP e se identificam como pertencentes ao mesmo grupo.

💡 **Analogia:** cada interface do roteador é como um “bairro” diferente com seu próprio CEP. O roteador é a “prefeitura” que conecta os bairros.

***

🧩 Conceito Fundamental

Você divide uma rede grande em redes menores para:

1.  **Reduzir broadcast** (melhor desempenho)
2.  **Aumentar segurança** (controle de acesso entre grupos)
3.  **Organizar por localização** (crescimento e mudança física)

E o **roteador** é a peça que torna isso possível, porque:

*   cria **domínios de broadcast menores**
*   conecta **redes IP diferentes**
*   e permite **roteamento** entre elas quando necessário.

***

📌 Em resumo

*   Redes grandes sofrem com **broadcast em excesso** e ficam menos eficientes.
*   Dividir a rede melhora desempenho e dá controle de **segurança** e **organização**.
*   **Roteadores** são usados para segmentar: eles não encaminham broadcast e cada interface define **uma rede diferente**.
*   Assim, você passa de “uma rede gigante” para “várias redes menores” (por departamento, por segurança ou por localização).

***

**14.1.2** Agora Precisamos de Roteamento

🎯 Ideia Principal

Quando o destino está **fora da sua rede local** (host remoto), você precisa de **roteamento** — ou seja, de um **roteador** para escolher o melhor caminho e encaminhar os pacotes entre **redes IP diferentes**.  
O **switch** decide com base em **MAC (Camada 2)** dentro da LAN; o **roteador** decide com base em **IP (Camada 3)** para chegar em outras redes.

***

1️⃣ O que são hosts remotos (e por que isso muda tudo)

*   **Host remoto** é qualquer dispositivo que está **além** do seu segmento/rede local.
*   Exemplos: sites na Internet, servidores em outra empresa, computadores em outra sub-rede.

✅ Quando o destino é remoto, seu PC **não consegue** entregar “direto” na LAN, porque Ethernet/MAC funciona só localmente.

💡 **Analogia:** dentro do seu bairro você entrega direto. Para outra cidade, você precisa passar por um “centro de distribuição” (roteador).

***

2️⃣ O que é roteamento (routing)

*   **Roteamento** é o processo de **determinar o melhor caminho** para enviar um pacote até uma rede de destino.
*   Isso é feito por **roteadores**, usando informações de rede (rotas).

💡 **Analogia:** é como um GPS escolhendo a rota para outra cidade.

***

3️⃣ Roteador x Switch (diferença essencial)

3.1) Switch (Camada 2)

*   Encaminha quadros baseado no **MAC de destino**.
*   Funciona **dentro da mesma LAN/VLAN**.

3.2) Roteador (Camada 3)

*   Conecta **várias redes IP**.
*   Encaminha pacotes baseado no **IP de destino** (na parte de rede do IP).
*   Decide por qual interface/rota enviar o pacote para chegar na rede certa.

💡 **Analogia:**

*   Switch = “entrega dentro do bairro” (ruas internas)
*   Roteador = “liga bairros e cidades” (rodovias e rotas)

***

4️⃣ “Se a parte de rede não coincide, precisa de roteador”

*   Se a **porção de rede** (definida pela máscara/prefixo) do IP de origem e destino **for diferente**, então o destino está em **outra rede**.
*   Nesse caso, o host envia a mensagem para o **gateway padrão** (roteador).

💡 **Analogia:** se o CEP/bairro do destino é diferente do seu, você manda para o correio (gateway).

***

5️⃣ O que acontece no caminho (encapsular → desencapsular → reencapsular)

O texto descreve o fluxo típico:

5.1) O host envia para o roteador (gateway)

*   O host cria um **pacote IP** com:
    *   **IP de origem** = do host
    *   **IP de destino** = do host remoto
*   Esse pacote é encapsulado em um **quadro Ethernet** para sair pela LAN.
*   Como o destino é remoto, o **MAC de destino do quadro** é o **MAC do gateway** (interface do roteador na LAN).

💡 **Analogia:** você coloca a carta (IP) dentro de um envelope do bairro (Ethernet) endereçado ao “correio” (gateway).

***

5.2) O roteador recebe e “abre o envelope” (desencapsula)

*   O roteador recebe o **quadro Ethernet** e remove o cabeçalho/trailer de Camada 2 (MACs, FCS etc.).
*   Ele então lê o **IP de destino** no pacote IP.

💡 **Analogia:** o correio tira o envelope local e lê o endereço final da carta.

***

5.3) O roteador decide por onde mandar (roteamento)

*   Com base no **endereço IP de destino** (principalmente a parte de rede), o roteador escolhe:
    *   qual é o **próximo salto** e/ou
    *   qual interface de saída usar para chegar à rede de destino.

💡 **Analogia:** o correio escolhe a rota e o caminhão certo para levar a carta para a cidade do destino.

***

5.4) O roteador coloca em um novo quadro (reencapsula) e encaminha

*   O pacote IP é colocado dentro de um **novo quadro** apropriado ao **próximo link** (geralmente Ethernet de novo).
*   Esse novo quadro terá:
    *   **MAC de origem** = MAC da interface de saída do roteador
    *   **MAC de destino** = MAC do próximo salto (outro roteador ou o host final, se já estiver na rede destino)

✅ Importante: **o pacote IP continua com o mesmo IP de origem e de destino** (ponta a ponta).  
O que muda a cada link são os **endereços MAC** (Camada 2).

💡 **Analogia:** a carta mantém o mesmo destinatário final (IP), mas cada trecho da viagem usa um envelope/etiqueta local diferente (MAC).

***

6️⃣ Exemplo do texto (1.1.1.0 → 5.5.5.0)

*   Um host na rede **1.1.1.0** quer falar com um host na rede **5.5.5.0**.
*   Como são redes diferentes, ele envia para o **roteador**.
*   O roteador:
    1.  recebe o quadro
    2.  desencapsula
    3.  lê o IP destino
    4.  decide a rota
    5.  reencapsula
    6.  encaminha

💡 **Analogia:** você entrega a carta no correio do seu bairro; o correio faz todo o trabalho de encaminhar até a cidade correta.

***

🧩 Conceito Fundamental

*   **Switch (L2)** encaminha dentro da LAN usando **MAC**.
*   **Roteador (L3)** encaminha entre redes usando **IP** (roteamento).
*   Para destino remoto, o host manda para o **gateway**.
*   A cada salto: **MAC muda**, **IP permanece**.

***

📌 Em resumo

*   Precisamos de roteamento quando queremos alcançar **hosts remotos** (fora da LAN).
*   Roteadores conectam redes IP e tomam decisões com base em **endereços IP** (Camada 3).
*   Se a rede de origem e destino for diferente, o host envia ao **gateway padrão**.
*   O roteador **desencapsula** o quadro Ethernet, lê o IP, decide o caminho e **reencapsula** em um novo quadro para o próximo link.

***

**14.2** A tabela de roteamento

**14.2.1** Encaminhamento de pacotes pelo roteador

🎯 Ideia Principal

O vídeo mostra **como um roteador encaminha pacotes entre redes diferentes** usando a **tabela de roteamento** (decidindo com base no **IP de destino**). Se o destino estiver em **outra rede**, o host envia para o **gateway padrão** (roteador). O roteador consulta a tabela e encaminha pela **interface correta**. Já pacotes de **broadcast** (ex.: `255.255.255.255`) **não são encaminhados** para outras redes.

***

1️⃣ Cenário do exemplo (duas redes diferentes)

*   Host (H1) tem IP: **`10.0.0.1`**
*   Destino (H4) tem IP: **`192.168.1.2`**
*   Como são redes diferentes (`10.0.0.0` ≠ `192.168.1.0`), H1 **não consegue entregar direto** na LAN.

💡 **Analogia:** você está em um bairro (10.0.0.0) e quer mandar algo para outro bairro (192.168.1.0). Você entrega na **portaria/correio do bairro** (gateway) para encaminhar.

***

2️⃣ O que H1 faz quando o destino é remoto

*   O pacote IP é criado com:
    *   **IP de origem:** `10.0.0.1`
    *   **IP de destino:** `192.168.1.2`
*   Como o destino não está na mesma rede, H1 envia o pacote para o **gateway padrão** (o roteador).

💡 **Analogia:** quando é “outra cidade”, você não entrega direto na casa do destino — você entrega no “correio” (gateway).

***

3️⃣ O que o roteador faz (tabela de roteamento em ação)

Quando o roteador recebe o pacote:

3.1) Ele olha o **IP de destino**

*   Ele verifica: “Para qual rede esse IP pertence?”
*   No vídeo: `192.168.1.2` pertence à rede **`192.168.1.0`** (num cenário típico /24).

3.2) Ele consulta a **tabela de roteamento**

*   A tabela diz ao roteador **por onde sair** para alcançar aquela rede.
*   No exemplo, a rede `192.168.1.0` está ligada à interface **FastEthernet 0/2**.

3.3) Ele encaminha pela **interface correta**

*   Então o roteador envia o pacote para fora pela **Fa0/2**, indo em direção ao destino final.

💡 **Analogia:** a tabela de roteamento é como um “mapa com saídas”:

*   “Para o bairro 192.168.1.0, saia pela porta Fa0/2”.

***

4️⃣ Parte importante: roteador encaminha por IP, não por MAC

*   O **switch** decide com base em **MAC** (Camada 2) dentro da LAN.
*   O **roteador** decide com base em **IP** (Camada 3) para chegar em outras redes.
*   Por isso ele consulta a **tabela de roteamento** usando a rede do IP de destino.

💡 **Analogia:**

*   Switch = entrega dentro do bairro usando “número da casa” local (MAC).
*   Roteador = escolhe a estrada/cidade usando o endereço completo (IP).

***

5️⃣ Broadcast (255.255.255.255): o roteador recebe, mas não repassa

O vídeo também mostra um segundo caso:

*   H1 envia um pacote para **`255.255.255.255`**
*   Esse é um **broadcast limitado IPv4** (“para todos aqui na rede local”).

✅ O que acontece:

*   O roteador **pode receber** esse broadcast (porque está conectado à rede),
*   mas **não encaminha** para outras redes/interfaces.

💡 **Analogia:** é um anúncio no alto-falante do seu prédio: o porteiro ouve, mas não sai anunciando isso nos prédios vizinhos.

***

🧩 Conceito Fundamental

*   Para destino remoto: **host → gateway padrão → roteador → tabela de roteamento → interface de saída**
*   O roteador decide o encaminhamento pelo **IP de destino** (Camada 3).
*   Broadcast (`255.255.255.255`) fica **preso** no domínio de broadcast: roteadores **não encaminham**.

***

📌 Em resumo

*   H1 (`10.0.0.1`) quer falar com `192.168.1.2` (outra rede).
*   H1 manda para o **gateway padrão**.
*   O roteador consulta a **tabela de roteamento**, encontra a rede `192.168.1.0` e envia pela **Fa0/2**.
*   Se o destino for `255.255.255.255` (broadcast), o roteador **não encaminha** para outras redes.

***

**14.2.2** Mensagens dentro de uma rede e entre redes - Parte 1

🎯 Ideia Principal

O vídeo mostra como uma mensagem **viaja dentro da mesma rede (mesma LAN/sub-rede)**. Quando **H1 (192.168.1.10)** quer falar com **H2 (192.168.1.20)** e ambos estão na **mesma rede**, H1 **não usa o gateway (roteador)**. Ele envia **direto** para H2 usando **Ethernet + ARP**: o pacote IP vai com destino 192.168.1.20, mas o quadro Ethernet precisa do **MAC de H2**.

***

1️⃣ Passo 1 — H1 cria o **pacote IPv4** (Camada 3)

H1 monta o pacote com:

*   **IP de origem:** `192.168.1.10`
*   **IP de destino:** `192.168.1.20`

💡 **Analogia:** é como escrever a carta com **remetente e destinatário** (endereços IP).

***

2️⃣ Passo 2 — H1 decide se o destino está na **mesma rede**

*   H1 usa sua **máscara de sub-rede** para descobrir a “parte de rede” do destino.
*   Ele percebe que **192.168.1.10** e **192.168.1.20** “começam igual” (mesma rede 192.168.1.x, num cenário típico /24).
*   Conclusão: **destino está na mesma rede local**.

✅ Resultado direto:

*   **Não precisa gateway padrão** (roteador).
*   Pode enviar **direto** para H2.

💡 **Analogia:** se o destinatário mora no **mesmo bairro**, você entrega direto, não leva no correio (gateway).

***

3️⃣ Passo 3 — H1 precisa do **MAC de H2** (Camada 2)

Para enviar na Ethernet, H1 precisa montar um **quadro Ethernet**, que exige:

*   **MAC de origem:** MAC da NIC do H1 (no vídeo: `AA-AA`)
*   **MAC de destino:** MAC da NIC do H2 (no vídeo: `BB-BB`)

Mas… H1 só conhece o **IP** do H2. Então ele precisa descobrir o MAC do H2.

💡 **Analogia:** IP é o “endereço da rua”. MAC é a “porta exata” dentro do bairro.

***

4️⃣ Passo 4 — H1 consulta a **tabela ARP** (cache)

*   H1 olha na **tabela ARP**:  
    “Eu já sei qual MAC corresponde ao IP `192.168.1.20`?”
*   No exemplo, o vídeo assume que **já existe** essa entrada:  
    `192.168.1.20 → BB-BB`

Se não existisse, H1 faria:

*   **ARP Request (broadcast)** → “Quem tem 192.168.1.20?”
*   **ARP Reply (unicast)** → H2 responde com seu MAC
*   H1 salva na tabela ARP

💡 **Analogia:** é como olhar na agenda: se o contato já está salvo, você não precisa perguntar para ninguém.

***

5️⃣ Passo 5 — H1 monta o **quadro Ethernet** e envia

Agora H1 consegue montar o quadro Ethernet com:

*   **MAC origem:** `AA-AA`
*   **MAC destino:** `BB-BB`
*   **Conteúdo (payload):** o pacote IP (origem 192.168.1.10 → destino 192.168.1.20)

Ele envia o quadro para o **switch**, e o switch encaminha **direto para H2** (porque o MAC de destino é conhecido e está associado a uma porta).

💡 **Analogia:** você colocou o pacote com o **endereço local correto**, então o entregador do bairro (switch) sabe exatamente em qual porta entregar.

***

🧩 Conceito Fundamental

Quando o destino está **na mesma rede**:

*   **IP destino (Camada 3)** = IP do host final (H2)
*   **MAC destino (Camada 2)** = MAC do host final (H2)
*   **Gateway não entra** na história

E o ARP é o “tradutor” que permite converter **IP → MAC** dentro da LAN.

***

📌 Em resumo

*   H1 cria o pacote IP `192.168.1.10 → 192.168.1.20`.
*   Usa a máscara para confirmar: “estamos na mesma rede”.
*   Como é mesma rede, envia **direto**, sem gateway.
*   Consulta a tabela ARP para obter o MAC de H2 (`BB-BB`).
*   Monta o quadro Ethernet (`AA-AA → BB-BB`) e envia via switch até H2.

***

**14.2.3** Mensagens dentro de redes e entre redes - Parte 2

🎯 Ideia Principal

Quando o destino está **em outra rede**, o host **não envia diretamente para o MAC do destino final**. Ele envia o quadro Ethernet para o **gateway padrão (roteador)**, e o roteador faz o “trabalho pesado”: **desencapsula** o quadro (Camada 2), decide o caminho usando o **IP de destino** (Camada 3), e **reencapsula** o mesmo pacote IP em um **novo quadro Ethernet** para a rede de saída.  
✅ **Os IPs (origem e destino) permanecem os mesmos de ponta a ponta**.  
✅ **Os MACs mudam a cada link** (porque Ethernet é entrega local, NIC ↔ NIC).

***

1️⃣ H1 cria o pacote IP (Camada 3)

*   **H1** tem IP: `192.168.1.10`
*   **H3** (destino final) tem IP: `192.168.2.50`
*   H1 monta o **pacote IPv4** com:
    *   **IP de origem:** `192.168.1.10`
    *   **IP de destino:** `192.168.2.50`

💡 **Analogia:** H1 escreve a “carta” com remetente e destinatário final (IPs).

***

2️⃣ H1 decide se o destino é local ou remoto (IP + máscara)

*   H1 usa sua **máscara de sub-rede** para descobrir se `192.168.2.50` está na mesma rede dele.
*   Ele identifica que sua rede é **`192.168.1.0`** (e o destino está em outra rede, **`192.168.2.0`**).
*   Conclusão: **não está na mesma rede** → precisa do **gateway padrão**.

💡 **Analogia:** “O destinatário não mora no meu bairro. Preciso levar ao correio/portaria (gateway).”

***

3️⃣ H1 envia para o gateway padrão (roteador) usando MAC do roteador

*   H1 sabe o **IP do gateway padrão**: `192.168.1.1` (configurado manualmente ou via DHCP).
*   Agora ele precisa do **MAC** associado a `192.168.1.1` para montar o **quadro Ethernet**.

3.1) ARP para descobrir o MAC do gateway (se necessário)

*   H1 verifica o **cache/tabela ARP**.
*   No vídeo, assume-se que ele já sabe que:
    *   `192.168.1.1` → MAC **`11-11`** (abreviado)

Se não soubesse: faria **ARP Request** e receberia **ARP Reply** do roteador.

💡 **Analogia:** H1 sabe “onde fica a portaria” (IP do gateway), mas precisa saber “a porta exata” (MAC) para entregar o quadro Ethernet.

***

4️⃣ Quadro Ethernet do H1 até o roteador (Camada 2 do primeiro link)

H1 encapsula o pacote IP em um quadro Ethernet com:

*   **MAC origem:** MAC de H1
*   **MAC destino:** **`11-11`** (MAC da interface do roteador na rede 192.168.1.0)
*   **Dentro (payload):** pacote IP `192.168.1.10 → 192.168.2.50`

✅ O quadro vai para o switch e chega ao roteador.  
O roteador vê: “Esse MAC de destino é meu” → aceita o quadro.

💡 **Analogia:** você entrega a carta no endereço da portaria do seu prédio, não diretamente na casa de outra cidade.

***

5️⃣ O roteador faz o roteamento (Camada 3) usando tabela de roteamento

Ao receber o quadro:

1.  O roteador **remove o cabeçalho Ethernet** (desencapsula Camada 2).
2.  Ele lê o **IP de destino** no pacote: `192.168.2.50`.
3.  Consulta a **tabela de roteamento** e conclui:
    *   `192.168.2.50` pertence à rede **`192.168.2.0`**
    *   e essa rede é alcançada pela interface **FastEthernet 0/2**.

💡 **Analogia:** o correio olha a cidade do destino (rede do IP) e escolhe qual caminhão/rota usar (interface de saída).

***

6️⃣ O roteador reencapsula em um NOVO quadro Ethernet (Camada 2 do segundo link)

Agora o roteador precisa enviar o pacote pela rede `192.168.2.0` (saindo pela Fa0/2). Para isso ele cria um **novo quadro Ethernet**:

*   **MAC de origem do novo quadro:** MAC da interface de saída do roteador (abreviado como **`22-22`**)
*   **MAC de destino do novo quadro:** MAC do host final **H3** (abreviado como **`CC-CC`**)

6.1) ARP do roteador para achar o MAC do H3 (se necessário)

*   O roteador também usa **ARP** (porque é IPv4) para descobrir:
    *   `192.168.2.50` → `CC-CC`
*   No vídeo, assume-se que essa informação já está no **cache ARP** do roteador.

✅ Importante: **o pacote IP continua igual** por dentro:

*   IP origem: `192.168.1.10`
*   IP destino: `192.168.2.50`

💡 **Analogia:** a “carta” continua com o mesmo destinatário final, mas agora vai em um “envelope local” novo para o bairro 192.168.2.0.

***

7️⃣ H3 recebe e confirma que é para ele

*   H3 recebe o quadro e verifica:
    *   **MAC de destino do quadro** = MAC da NIC dele → então o quadro é dele ✅
*   Ao abrir (desencapsular), ele verifica o pacote IP:
    *   **IP de destino** = `192.168.2.50` → é dele ✅
*   Pronto: a mensagem chegou corretamente ao host final.

💡 **Analogia:** a portaria/transportadora entregou no endereço certo, e a casa certa abriu a carta.

***

🧩 Conceito Fundamental

Quando o destino está **em outra rede**:

*   O host envia para o **gateway padrão** (MAC do roteador), porque ele não consegue entregar diretamente fora da LAN.
*   O roteador decide o caminho usando o **IP de destino** na **tabela de roteamento**.
*   Em cada trecho (link), muda o **quadro Ethernet** (MACs mudam).
*   O **pacote IP** mantém **IP de origem e destino** do início ao fim.

***

📌 Em resumo

*   H1 cria o pacote `192.168.1.10 → 192.168.2.50`.
*   Usa máscara e conclui: destino está em **outra rede** → manda ao **gateway 192.168.1.1**.
*   H1 usa ARP para obter o MAC do gateway (`11-11`) e envia o quadro ao roteador.
*   O roteador desencapsula, consulta a tabela e sai pela **Fa0/2** para a rede `192.168.2.0`.
*   O roteador usa ARP para obter o MAC de H3 (`CC-CC`) e cria novo quadro: origem `22-22` → destino `CC-CC`.
*   H3 recebe (MAC bate) e processa (IP bate).

***

**14.2.4** Entradas da Tabela de Roteamento

🎯 Ideia Principal

O roteador consegue enviar tráfego entre redes porque ele mantém uma **tabela de roteamento**: uma “lista de destinos (redes)” e **por onde sair** para chegar neles.  
Essa tabela **não guarda hosts individuais** (não é “IP por IP”), mas sim **redes** (ex.: `192.168.2.0/24`) e o **melhor caminho** para cada rede. Se não houver caminho conhecido, o roteador pode **descartar** o pacote — a menos que exista uma **rota padrão** (default route) para “qualquer destino desconhecido”.

***

1️⃣ O que é uma tabela de roteamento (routing table)

*   É uma base de informação usada pelo roteador para decidir:  
    ✅ **“Para qual interface eu envio este pacote?”**
*   Ela contém **redes de destino** e **como alcançá-las**.
*   Ela não precisa saber “onde está cada host” da Internet — basta saber “onde está cada rede” (hierarquia).

💡 **Analogia:**  
É como um mapa de rodovias: você não memoriza cada casa do país, você memoriza **cidades e estradas principais** para chegar nelas.

***

2️⃣ O que a tabela **não** faz (ponto importante)

*   A tabela de roteamento **não** é uma “tabela ARP” e não guarda MAC.
*   Ela **não** é uma lista de “hosts finais”.
*   Quem resolve “IP → MAC” localmente é o **ARP/ND**, e quem encaminha localmente é a **Ethernet**; o roteador decide o caminho **por IP e redes**.

💡 **Analogia:**  
A tabela de roteamento diz “qual estrada pegar”. ARP diz “qual é a porta da casa aqui dentro do bairro”.

***

3️⃣ Como as rotas entram na tabela (2 maneiras)

O texto cita dois jeitos principais:

3.1) Rotas **dinâmicas** (aprendidas automaticamente)

*   O roteador aprende rotas de outros roteadores usando **protocolos de roteamento** (ex.: OSPF, RIP, EIGRP, BGP).
*   Vantagem: se a rede muda, o roteador atualiza sozinho.

💡 **Analogia:** GPS com trânsito: ele aprende e recalcula rotas automaticamente.

3.2) Rotas **estáticas** (inseridas manualmente)

*   O administrador configura as rotas “na mão”.
*   Vantagem: simples e previsível em redes pequenas/estáveis.
*   Desvantagem: se algo muda, alguém precisa ajustar.

💡 **Analogia:** um roteiro de viagem fixo escrito em papel.

***

4️⃣ O que o roteador faz quando recebe um pacote (decisão)

1.  O roteador lê o **IP de destino** do pacote.
2.  Ele procura na tabela qual **rede** corresponde ao destino (a melhor correspondência).
3.  A tabela indica a **interface de saída** (ou o próximo salto).
4.  O roteador encaminha por essa interface.

✅ Se ele **não encontrar rota**, ele **descarta** o pacote.

💡 **Analogia:** se você não encontra no mapa nenhuma estrada para aquela cidade, você não tem como seguir — então “para a viagem”.

***

5️⃣ Rota padrão (Default Route): o “caminho para o desconhecido”

*   Para evitar descartar pacotes destinados a redes que não estão na tabela, pode existir uma **rota padrão**.
*   Ela é usada quando o destino é “desconhecido” (não há rota mais específica).
*   Normalmente aponta para:
    *   um roteador “acima” (upstream)
    *   ou para a saída para a Internet

💡 **Analogia:** é como ter uma placa: “Se não souber para onde ir, pegue esta rodovia principal e pergunte lá na frente”.

***

6️⃣ Campos típicos de uma entrada (como no seu texto)

O material simplifica em três campos:

6.1) **Tipo**

*   Exemplo dado: **C = Connected** (rede diretamente conectada).
    *   Significa que o roteador tem uma interface ligada diretamente naquela rede.

6.2) **Rede**

*   É o endereço da rede de destino (ex.: `192.168.1.0/24`).

6.3) **Porta/Interface**

*   É por qual interface o roteador deve enviar pacotes para alcançar aquela rede (ex.: `Fa0/2`, `G0/0`, etc.).

💡 **Analogia:**

*   Tipo = “como eu sei disso” (conectado / aprendido / manual)
*   Rede = “para onde quero ir”
*   Porta = “qual saída pegar”

***

🧩 Conceito Fundamental

*   **Roteadores encaminham por redes**, não por hosts individuais.
*   A **tabela de roteamento** é o “mapa” que diz por onde sair para chegar em cada rede.
*   Rotas podem ser **dinâmicas** (aprendidas) ou **estáticas** (manuais).
*   Se não existir rota para um destino, o pacote é **descartado**, a menos que exista uma **rota padrão**.

***

📌 Em resumo

*   Tabela de roteamento = lista de **redes** e **melhores caminhos**.
*   Entradas chegam por **roteamento dinâmico** ou por **configuração manual**.
*   O roteador usa a tabela para escolher a **interface de saída**.
*   Sem rota, o pacote é descartado; com **rota padrão**, ele segue por um “caminho padrão”.

***

**14.2.5** O Gateway Padrão

🎯 Ideia Principal

O **gateway padrão** é o “caminho de saída” que um host usa quando precisa enviar dados para **fora da rede local** (rede remota/Internet).

*   **Destino na mesma rede:** o host envia **direto** para o dispositivo de destino (descobre o MAC do destino via ARP).
*   **Destino em rede remota:** o host envia o quadro Ethernet para o **roteador (gateway padrão)** — ele usa o **MAC do roteador** como destino do quadro, mas mantém o **IP do destino final** dentro do pacote.

***

1️⃣ Quando o destino está na **mesma rede local**

*   O host cria o **pacote IPv4** com o **IP de destino** do host final.
*   Para enviar na Ethernet, ele precisa do **MAC do destino**.
*   Ele usa **ARP** para descobrir o MAC do host de destino.
*   Encapsula o pacote no quadro Ethernet com:
    *   **MAC destino = MAC do host final**
    *   **MAC origem = MAC do host emissor**
*   E envia direto pela LAN.

💡 **Analogia:** é como entregar uma carta **na mesma rua**: você vai direto na casa certa (MAC do destino).

***

2️⃣ Quando o destino está em **rede remota** (fora da LAN)

*   O host cria o **pacote IPv4** com o **IP de destino final** (isso não muda).
*   Mas, ao montar o **quadro Ethernet**, ele não coloca o MAC do destino final (porque o destino está fora da LAN).
*   Ele coloca:
    *   **MAC destino = MAC do roteador (gateway padrão)**
*   Assim, o **roteador recebe e aceita** o quadro (porque o MAC de destino é o dele).
*   O roteador então encaminha o pacote para a rede remota.

💡 **Analogia:** para mandar para outra cidade, você não entrega direto na casa do destinatário; você entrega no **correio** (gateway) para ele encaminhar.

***

3️⃣ Como o host descobre o MAC do roteador?

*   O host conhece o **IP do gateway padrão** porque esse endereço está configurado nas configurações de TCP/IP (manual ou via DHCP).
*   O gateway padrão é o **IP da interface do roteador** conectada à **mesma rede local** do host.
*   Com o **IP do gateway** em mãos, o host usa **ARP** para descobrir o **MAC correspondente** ao gateway.
*   Depois disso, o host consegue montar o quadro Ethernet com o **MAC do roteador** como destino.

💡 **Analogia:** você sabe onde fica a portaria (IP do gateway), então você pergunta qual é a porta/campainha certa (MAC) para entregar a encomenda.

***

4️⃣ Por que todos os hosts da LAN usam o mesmo gateway padrão

*   Todos os hosts de uma mesma rede local precisam de um “ponto de saída” comum para alcançar outras redes.
*   Esse ponto de saída é a interface do roteador naquela LAN — por isso o gateway padrão costuma ser o mesmo para todos os hosts daquele segmento.

💡 **Analogia:** todo mundo do condomínio usa o mesmo portão principal para sair.

***

5️⃣ O erro que mais quebra a Internet do host: gateway ausente ou errado

*   Se **não houver gateway padrão** configurado, o host até pode falar com dispositivos **da mesma rede**, mas **não consegue sair** para redes remotas/Internet.
*   Se o gateway estiver **incorreto** (ex.: IP que não está na mesma rede do host), o host não consegue nem fazer ARP para ele corretamente — e também **não consegue sair**.

💡 **Analogia:** é como ter a “saída” anotada errada: você fica preso no bairro porque não acha o portão certo.

***

🧩 Conceito Fundamental

*   **IP (Camada 3)** indica o **destino final** (mesma rede ou remota).
*   **MAC (Camada 2)** indica o **próximo passo local**.
    *   destino local → MAC do host final
    *   destino remoto → MAC do gateway (roteador)
*   O gateway padrão precisa estar correto, senão **não há comunicação remota**.

***

📌 Em resumo

*   **Mesmo IP de destino no pacote** (sempre o destino final).
*   **MAC do quadro muda conforme o destino**:
    *   mesma rede → MAC do destino final
    *   rede remota → MAC do roteador (gateway padrão)
*   O host usa **ARP** para descobrir o MAC do destino local ou do gateway.
*   Gateway padrão errado ou ausente = **sem acesso a redes remotas/Internet**.

***

**14.3** Criando uma LAN

**14.3.1** Redes de Área Local

🎯 Ideia Principal

Uma **LAN (Rede de Área Local)** é uma rede “sob o mesmo comando” (mesmo controle administrativo). Hoje, **LAN não significa apenas “um lugar pequeno”**: pode ser desde a rede de uma casa até várias redes locais **interligadas** em diferentes salas, andares e prédios, desde que estejam sob o **mesmo gerenciamento**. Em geral, LAN usa **Ethernet e/ou Wi‑Fi** e oferece **altas velocidades**. Quando essa LAN é privada e restrita a pessoas autorizadas, ela é chamada de **Intranet**.

***

1️⃣ O que é uma LAN (definição moderna)

*   **LAN** é uma rede local **ou um conjunto de redes locais interconectadas** que ficam sob o **mesmo controle administrativo**.
*   Pode ser pequena (casa/pequeno escritório) ou grande (empresa com centenas de hosts e múltiplos prédios).

💡 **Analogia:** pense numa LAN como um “condomínio” controlado pela mesma administração. Pode ser um prédio pequeno ou um conjunto de prédios — continua sendo “o mesmo condomínio” se a gestão e as regras são as mesmas.

***

2️⃣ Como o conceito de LAN evoluiu

*   No início, LAN era vista como uma rede **pequena e em um único local físico**.
*   Hoje, a definição inclui redes locais **interligadas**, que podem estar em **vários prédios e locais**, desde que pertençam à mesma organização/controle.

💡 **Analogia:** antes era como “uma única loja”. Hoje pode ser “uma rede de filiais conectadas”, mas todas pertencem à mesma empresa.

***

3️⃣ Característica essencial: **controle administrativo**

*   O que “define” uma LAN não é só a distância, e sim o fato de estar sob **um mesmo controle** (mesma equipe/regra/política).
*   Isso facilita padronizar:
    *   configuração
    *   segurança
    *   endereçamento
    *   acesso e permissões

💡 **Analogia:** é como uma escola: não importa se tem vários blocos, se tudo segue as regras e administração da escola, continua sendo “a escola”.

***

4️⃣ Tecnologias comuns em LANs (Ethernet e Wi‑Fi)

*   LANs normalmente usam:
    *   **Ethernet** (cabeado)
    *   **Wireless (Wi‑Fi)** (sem fio)
*   Essas tecnologias são típicas de rede local e suportam **altas taxas de transmissão**.

💡 **Analogia:** Ethernet é como “ruas asfaltadas e sinalizadas” (estável e rápido). Wi‑Fi é como “caminho pelo ar” (prático e móvel).

***

5️⃣ O que é Intranet

*   **Intranet** é uma **LAN privada** pertencente a uma organização.
*   Ela é feita para ser acessada **somente por pessoas autorizadas**, como:
    *   funcionários
    *   membros da organização
    *   terceiros com permissão

💡 **Analogia:** intranet é como a “área interna” da empresa (pontos de acesso restritos). A internet é a “rua pública”.

***

🧩 Conceito Fundamental

*   **LAN** = rede local (ou redes locais conectadas) sob **uma mesma administração**, geralmente com **Ethernet/Wi‑Fi** e **alto desempenho**.
*   **Intranet** = uma LAN **privada e controlada**, com acesso restrito a autorizados.

***

📌 Em resumo

*   LAN pode ser pequena (casa) ou grande (empresa com vários prédios), desde que esteja sob o **mesmo controle administrativo**.
*   LAN normalmente usa **Ethernet e/ou Wi‑Fi** e tem **altas velocidades**.
*   Intranet é a LAN privada de uma organização, acessada apenas por quem tem autorização.

***

**14.3.2** Segmentos de rede local e remota

🎯 Ideia Principal

Dentro de uma **LAN**, você pode colocar **todo mundo no mesmo segmento** (uma única rede) ou **dividir em vários segmentos/redes** (sub-redes) conectados por um **roteador/switch camada 3** (camada de distribuição).

*   **1 segmento só** = mais simples e barato, mas aumenta **broadcast** e dificulta **segurança/QoS** quando cresce.
*   **Vários segmentos** = mais controle e desempenho por área, mas precisa de **roteamento** e aumenta a complexidade (e pode adicionar um pouco de **latência**).

***

1️⃣ Todos os hosts em **um único segmento local** (uma única rede)

Como funciona

*   Todos ficam na mesma rede (ex.: `192.168.1.0/24`), então:
    *   todos estão no mesmo **domínio de broadcast**
    *   usam **ARP** para “se localizar” (IP → MAC) na LAN
    *   qualquer host pode “ver” e conversar com qualquer outro diretamente (sem passar por roteador)

💡 **Analogia:** é como todo mundo trabalhar no **mesmo salão**: conversar é fácil e rápido, mas o barulho aumenta conforme chega mais gente.

✅ Vantagens

*   **Adequado para redes simples**
*   **Menos complexidade e menor custo**
*   Dispositivos podem ser “vistos” facilmente pelos outros (descoberta simples)
*   **Transferência mais rápida** dentro da rede (comunicação direta, sem roteamento)
*   **Acesso mais fácil** a dispositivos (ex.: impressora, compartilhamentos)

❌ Desvantagens

*   Todos no mesmo domínio de broadcast → **mais tráfego de broadcast** e isso pode reduzir desempenho
*   **Mais difícil implementar QoS** (controle refinado por grupo/segmento fica limitado)
*   **Mais difícil implementar segurança** (fica mais difícil isolar grupos e aplicar regras claras)

***

2️⃣ Hosts em **segmentos remotos** (várias redes/sub-redes)

> Aqui “remoto” significa “em outra rede/sub-rede”, não necessariamente longe fisicamente. Pode ser outro andar, outro departamento ou outra VLAN.

Como funciona

*   Você divide em redes diferentes (ex.: `192.168.1.0/24` e `192.168.2.0/24`).
*   Para um host de uma rede falar com host da outra, precisa de **roteamento** (gateway/roteador).
*   O roteador separa **domínios de broadcast**, então broadcast de uma rede não “invade” a outra.

💡 **Analogia:** é como dividir a empresa em **salas separadas**: cada sala fica mais silenciosa e organizada, mas para falar com outra sala você passa por uma **porta/recepção** (roteador).

✅ Vantagens

*   **Mais adequado para redes maiores e mais complexas**
*   **Divide domínios de broadcast** e reduz tráfego desnecessário
*   Pode **melhorar desempenho** em cada segmento (menos “barulho” local)
*   Deixa máquinas “menos visíveis” para outros segmentos (ajuda na segurança)
*   Permite **segurança mais avançada** (regras entre redes, controle de acesso)
*   Melhora a **organização** (por departamento, tipo de dispositivo, localização etc.)

❌ Desvantagens

*   Exige **roteamento** (camada de distribuição)
*   O roteador pode adicionar **latência** (um “passo a mais” no caminho)
*   **Mais complexidade e custo** (precisa roteador/Layer 3 e planejamento)

***

3️⃣ Como escolher na prática (regra simples)

Use **um segmento só** quando:

*   é uma rede pequena e simples (poucos dispositivos)
*   você quer facilidade e baixo custo
*   segurança e controle refinado não são prioridade

Use **vários segmentos/sub-redes** quando:

*   a rede está crescendo e o broadcast está ficando “pesado”
*   você precisa separar por **departamento**, **visitantes**, **IoT/câmeras**, **servidores**
*   você quer aplicar políticas (quem pode acessar o quê)
*   você quer melhorar desempenho e reduzir impacto de problemas

💡 **Analogia “rápida” para memorizar:**

*   **Uma rede só** = simples e rápido no começo, mas vira bagunça quando cresce.
*   **Segmentado** = dá mais trabalho para montar, mas fica mais organizado e controlável.

***

🧩 Conceito Fundamental

*   **Segmento único**: comunicação direta e simples, porém **broadcast e segurança** viram problema quando a rede cresce.
*   **Vários segmentos**: exige roteamento e planejamento, mas oferece **desempenho, organização e segurança** melhores em redes maiores.

***

📌 Em resumo

*   **1 rede local**: simples, barato, rápido internamente, mas broadcast cresce e dificulta QoS/segurança.
*   **Várias redes (segmentos)**: reduz broadcast, melhora organização e segurança, mas exige roteamento e pode adicionar um pouco de latência e custo.

***

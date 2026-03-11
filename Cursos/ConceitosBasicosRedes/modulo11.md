# Módulo 11

**11.1** Endereçamento estático e dinâmico

**11.1.1** Atribuição de endereço IPv4 estático

🎯 Ideia Principal

Um endereço IPv4 pode ser configurado de dois jeitos: **estático** (manual) ou **dinâmico** (automático). No **estático**, alguém configura “na mão” os dados de rede do dispositivo. Isso é ótimo para equipamentos que precisam ter **sempre o mesmo IP** (ex.: impressoras e servidores), mas dá mais trabalho e aumenta o risco de erro se não houver controle.

***

1️⃣ O que é atribuição **estática** de IPv4

*   É quando o **administrador** (ou você) configura manualmente as informações de rede do host.
*   O dispositivo passa a usar aquele IP “fixo”, sem depender de DHCP.

💡 **Analogia:** é como dar um **endereço fixo** para uma loja. Se o endereço muda toda hora, ninguém encontra.

***

2️⃣ O que precisa ser configurado (mínimo)

Quando você configura um IPv4 estático, no mínimo você define:

*   **Endereço IP**
    *   Identifica o dispositivo na rede (o “número da casa”).
*   **Máscara de sub-rede**
    *   Diz qual é a rede (o “bairro”) e separa rede/host.
*   **Gateway padrão**
    *   É para onde o dispositivo manda tráfego quando o destino está **fora da rede local** (a “saída do bairro” para outras redes/Internet).

> Em muitos casos você também configura **DNS**, porque sem DNS você até acessa IPs, mas não resolve nomes (ex.: `google.com`).

💡 **Analogia:**

*   IP = número do apartamento
*   Máscara = qual prédio/condomínio você está
*   Gateway = portão do condomínio para sair para a rua (Internet)
*   DNS = agenda/guia que traduz nomes para números

***

3️⃣ Vantagens do IPv4 estático

*   **Endereço não muda**, então serviços ficam fáceis de achar.
*   Muito útil para dispositivos que precisam ser acessados sempre no mesmo lugar, como:
    *   **impressoras**
    *   **servidores** (web, arquivos, e-mail, etc.)
    *   **equipamentos de rede** (às vezes: AP, switch gerenciável, NAS)

✅ Motivo principal: se o IP muda, clientes/usuários podem “perder” o destino.

💡 **Analogia:** se a impressora trocasse de “endereço” todo dia, seria como mudar a impressora de sala sem avisar ninguém.

***

4️⃣ Desvantagens (e por que dá erro com facilidade)

*   **Dá trabalho**: configurar host por host pode ser demorado, especialmente em redes maiores.
*   **Mais chance de erro**: digitar IP/máscara/gateway manualmente é fácil errar (um número trocado já quebra tudo).
*   O host faz apenas verificações básicas — então erros comuns passam “batido”, como:
    *   IP duplicado (conflito)
    *   máscara errada (parece na rede, mas não comunica direito)
    *   gateway errado (internet não funciona)

💡 **Analogia:** é como preencher endereço em formulário: um dígito errado e a entrega vai para o lugar errado — ou não chega.

***

5️⃣ Boas práticas quando usar IP estático

*   Manter uma **lista precisa** (um controle) de:
    *   qual IP está em qual dispositivo
    *   qual faixa está reservada para estáticos
*   Evitar “reutilizar sem controle” IPs fixos (porque isso causa conflitos).
*   Normalmente, em redes organizadas, o pessoal separa a faixa assim:
    *   **DHCP** entrega, por exemplo, de `.100` a `.200`
    *   **Estáticos** ficam em outra faixa, por exemplo, `.10` a `.50`

💡 **Analogia:** é como ter vagas de estacionamento numeradas: você separa vagas “fixas” e vagas “rotativas” para evitar bagunça.

***

🧩 Conceito Fundamental

*   **Estático** = IP fixo, configurado manualmente.
*   É excelente para dispositivos que precisam ser sempre encontrados, mas exige **organização** para não virar confusão (conflitos, erros, manutenção difícil).

***

📌 Em resumo

*   IPv4 pode ser **estático** ou **dinâmico**.
*   No estático você configura manualmente: **IP + máscara + gateway** (e geralmente DNS).
*   Vantagens: **IP não muda**, ótimo para impressoras/servidores.
*   Desvantagens: **trabalhoso** e **mais propenso a erro**.
*   Boa prática: manter **registro** e **separar faixas** para evitar conflitos.

***

**11.1.2** Atribuição dinâmica de endereço IPv4


🎯 Ideia Principal

Em redes onde os dispositivos entram e saem com frequência (notebooks, celulares, novas estações de trabalho), é mais eficiente usar **endereçamento dinâmico**: o dispositivo recebe automaticamente as configurações de rede através do **DHCP**. Em vez de configurar IP “na mão” em cada máquina, o DHCP entrega **IP, máscara, gateway e outras opções** automaticamente, reduzindo trabalho e evitando erros. Além disso, o IP não fica “preso” ao dispositivo: ele é **alugado (lease)** por um tempo e pode ser **reutilizado**.

***

1️⃣ Por que o endereçamento dinâmico é tão usado

*   Em LANs, a quantidade de usuários muda o tempo todo: gente chega, sai, troca de equipamento, muda de sala.
*   Se tudo fosse estático, o administrador teria que configurar manualmente cada dispositivo — isso é **lento** e dá **muito erro**.
*   Com DHCP, o processo vira “plugou/conectou e funcionou”.

💡 **Analogia:** em vez de cada pessoa escolher um “número de apartamento” manualmente (e correr o risco de duplicar), o condomínio tem uma portaria (DHCP) que distribui números automaticamente.

***

2️⃣ O que o DHCP entrega (não é só o IP)

O DHCP normalmente fornece automaticamente:

*   **Endereço IPv4**
*   **Máscara de sub-rede**
*   **Gateway padrão**
*   **Outras informações** (dependendo da rede), como:
    *   **DNS**
    *   domínio de pesquisa
    *   tempo de lease
    *   outras opções de configuração

💡 **Analogia:** o DHCP não só dá seu “número da casa” (IP), mas também diz qual é o “bairro” (máscara), onde fica o “portão de saída” (gateway) e onde está a “lista telefônica” (DNS).

***

3️⃣ Por que DHCP é o preferido em redes grandes

*   **Reduz a carga da equipe de suporte**: não precisa configurar máquina por máquina.
*   **Diminui drasticamente erros de digitação**: menos IP duplicado, máscara errada, gateway errado.
*   **Padroniza** a rede: todo mundo recebe configurações consistentes.

💡 **Analogia:** é como usar um sistema automático de check-in: menos fila, menos erro humano, tudo mais organizado.

***

4️⃣ O conceito de “aluguel” (lease) e reutilização de IP

*   O IP entregue pelo DHCP não é “para sempre”. Ele é **emprestado por um período** (lease).
*   Se o dispositivo:
    *   é desligado,
    *   sai da rede,
    *   ou não renova o lease,  
        o endereço volta para o **pool** (o “estoque” de IPs) e pode ser **reutilizado** por outro dispositivo.

✅ Isso é perfeito para ambientes com usuários móveis (vai e volta), como:

*   escolas, laboratórios, bibliotecas
*   Wi‑Fi corporativo
*   redes de convidados

💡 **Analogia:** é como pegar uma senha de atendimento: você usa enquanto está lá. Quando vai embora, aquela senha volta a ficar disponível.

***

🧩 Conceito Fundamental

**DHCP = distribuição automática e temporária de configurações de rede.**  
Ele faz a rede funcionar com menos esforço, menos erro e mais flexibilidade, especialmente quando a rede muda o tempo todo.

***

📌 Em resumo

*   Endereçamento dinâmico é ideal quando usuários/dispositivos mudam frequentemente.
*   O **DHCP** atribui automaticamente IP, máscara, gateway e outras configurações (como DNS).
*   É o método preferido em redes grandes porque reduz trabalho e evita erros.
*   O IP é “alugado” (lease) e pode ser reutilizado quando o dispositivo sai da rede.

***

**11.1.3** Servidores DHCP

🎯 Ideia Principal

O **DHCP** é o serviço que “entrega automaticamente” as configurações de rede (IP, máscara, gateway, DNS). Um **servidor DHCP** pode estar em vários tipos de equipamentos (servidor, roteador, firewall, etc.). Em redes domésticas e pequenas empresas, o mais comum é que o **roteador Wi‑Fi** seja **cliente DHCP no lado da Internet (WAN)** e **servidor DHCP no lado interno (LAN)**, distribuindo **IPs privados** para seus dispositivos.

***

1️⃣ Como o DHCP funciona em lugares públicos (hotspots)

*   Em um **aeroporto, cafeteria ou lanchonete**, quando você conecta no Wi‑Fi:
    *   seu notebook/celular (cliente DHCP) envia um pedido de configuração
    *   o **servidor DHCP da rede do local** responde e entrega um **IPv4** (e outras configs)
*   Isso é o que faz seu dispositivo “ganhar um IP” e conseguir navegar.

💡 **Analogia:** é como entrar em um evento e receber uma **pulseira/crachá** automaticamente na entrada. Sem isso, você até está no local, mas não consegue acessar as áreas (Internet/serviços).

***

2️⃣ Quem pode ser “servidor DHCP”

Vários equipamentos podem oferecer DHCP, desde que tenham o serviço/funcionalidade DHCP:

*   **Servidor dedicado (PC/Servidor)**
    *   Muito comum em redes **médias e grandes** (empresas, escolas).
    *   Vantagem: controle centralizado, logs, reservas, políticas, escalabilidade.

*   **Roteador (doméstico ou corporativo)**
    *   Muito comum em casa e pequenas empresas.
    *   Muitas vezes já vem pronto “de fábrica” para distribuir IP.

*   **Outros dispositivos de rede** (menos comum, mas possível)
    *   firewalls, roteadores dedicados, controladoras, etc.

💡 **Analogia:** DHCP pode ser feito por um “balcão de atendimento” (servidor dedicado) ou pelo “porteiro do prédio” (roteador). O importante é ter alguém responsável por entregar as configurações.

***

3️⃣ DHCP em rede doméstica (o cenário mais comum)

Em casa, normalmente existem **dois “DHCPs” acontecendo**, em lados diferentes:

3.1) Do provedor (ISP) → para o seu roteador (lado WAN)

*   O **roteador** recebe do ISP uma configuração no lado “Internet” (WAN).
*   Essa configuração pode incluir um IP público (ou um IP que o provedor entrega para sua conexão) e outros parâmetros.

3.2) Do seu roteador → para seus dispositivos (lado LAN)

*   Dentro da sua casa, quem distribui IP para celular, notebook, TV, console etc. geralmente é o **seu roteador Wi‑Fi**.
*   Ele entrega **IPs privados** (ex.: `192.168.x.x`, `10.x.x.x`, `172.16–31.x.x`) para os dispositivos internos.

💡 **Analogia:**

*   ISP = a “cidade” te dá o endereço do prédio (WAN do roteador).
*   Roteador = a “portaria” distribui números de apartamento (IPs privados) para quem mora/entra (dispositivos).

***

4️⃣ Roteador Wi‑Fi fazendo duas funções (cliente e servidor DHCP)

O texto destaca um ponto muito importante (e bem comum):

*   **Roteador como cliente DHCP (WAN):** pede e recebe configuração do ISP.
*   **Roteador como servidor DHCP (LAN):** distribui configurações para os hosts internos.

✅ Resultado prático:

*   Seu roteador recebe um endereço no lado “de fora” e, por dentro, cria uma rede privada e distribui endereços para seus dispositivos.

💡 **Analogia:** ele é como um “tradutor + porteiro”: recebe instruções do mundo externo e organiza a vida interna para todo mundo se conectar.

***

🧩 Conceito Fundamental

DHCP é o mecanismo de **configuração automática** de rede. Em redes grandes, costuma existir um **servidor DHCP dedicado**. Em redes domésticas, o **roteador** normalmente faz o papel principal de DHCP para os dispositivos internos e também pode receber configuração do ISP no lado externo.

***

📌 Em resumo

*   Hotspots funcionam porque existe um **servidor DHCP local** entregando IP para quem conecta.
*   Servidor DHCP pode ser: **servidor dedicado**, **roteador**, ou outros equipamentos de rede.
*   Em casa, o padrão é:
    *   roteador recebe configuração do ISP no lado **WAN** (cliente DHCP)
    *   roteador distribui **IPs privados** para seus dispositivos na **LAN** (servidor DHCP)

***

**11.2** Configuração do DHCPv4

**11.2.1** Operação do DHCPv4

🎯 Ideia Principal

O **DHCPv4** é o “serviço de entrega automática de configuração de rede”. Quando um dispositivo entra na rede e não tem IP, ele conversa com um **servidor DHCP** usando uma sequência de mensagens para receber **IP, máscara, gateway, DNS** e outras opções. Esse processo é conhecido como **DORA**: **Discover → Offer → Request → Acknowledge**.

***

1️⃣ Estático x Dinâmico (relembrando rapidinho)

*   **Estático:** alguém configura IP na mão (mais controle, mais trabalho e mais chance de erro).
*   **Dinâmico (DHCP):** o dispositivo pede e recebe a configuração automaticamente.

💡 **Analogia:**

*   Estático = você mesmo escreve seu “endereço” e suas regras de saída.
*   DHCP = uma “portaria” te entrega um crachá completo (IP + regras) automaticamente.

***

2️⃣ O que o DHCP entrega (o “pacote completo”)

O servidor DHCP normalmente fornece:

*   **Endereço IPv4** (o “número da casa”)
*   **Máscara de sub-rede** (o “bairro/rede”)
*   **Gateway padrão** (a “saída do bairro” para outras redes/Internet)
*   **DNS** (a “agenda” que transforma nomes em IP)
*   e pode incluir outras opções (tempo de lease, domínio, etc.)

***

3️⃣ Como o DHCP funciona (DORA – passo a passo)

3.1) **D — Discover (Descoberta DHCP)**

*   O host (cliente) manda um **broadcast** na rede dizendo:  
    “Tem algum servidor DHCP aí?”
*   Ele inclui o **endereço MAC** dele, porque ainda não tem IP.

💡 **Analogia:** é como entrar num prédio e perguntar em voz alta:  
“Tem portaria para me dar um crachá?”

***

3.2) **O — Offer (Oferta DHCP)**

*   Um servidor DHCP que ouviu o Discover responde com uma **oferta**:  
    “Você pode usar este IP aqui…”
*   Nessa oferta, ele geralmente já manda junto:  
    **IP + máscara + gateway** (e muitas vezes DNS, tempo de lease etc.)

💡 **Analogia:** a portaria responde:  
“Posso te dar o crachá número 15, com essas regras de acesso.”

***

3.3) **R — Request (Solicitação DHCP)**

*   O host escolhe uma oferta (se houver mais de um servidor) e manda uma **solicitação** dizendo:  
    “Eu aceito o IP X”
*   Essa mensagem costuma ser enviada de forma que **todos** saibam qual oferta foi escolhida, para que outros servidores desistam daquela oferta.

💡 **Analogia:** você responde:  
“Ok, eu quero o crachá 15.”

***

3.4) **A — Acknowledge (Confirmação DHCP / ACK)**

*   O servidor confirma com um **ACK**:  
    “Fechado. Esse IP agora está reservado/alugado para você.”
*   O servidor registra isso na “tabela dele”, associando o **IP ao MAC** do cliente (e ao tempo de lease).
*   A partir daí, o host aplica as configurações e já consegue se comunicar normalmente.

💡 **Analogia:** a portaria registra:  
“Crachá 15 pertence ao morador com documento (MAC) tal, por X tempo.”

***

4️⃣ Lease (aluguel do IP) — por que o DHCP “empresta” e não “dá pra sempre”

*   O IP não fica permanentemente preso ao dispositivo: ele é **alugado por um período**.
*   Se o dispositivo sair da rede ou não renovar, o IP pode voltar para o “estoque” (pool) e ser **reutilizado**.

💡 **Analogia:** é como pegar uma senha/crachá temporário: você usa enquanto está ali; quando sai, ele volta a ficar disponível.

***

5️⃣ Quem pode ser servidor DHCP

*   Em casa: normalmente o **roteador** (wireless router).
*   Em redes maiores: um **servidor dedicado** (Windows Server, Linux, etc.).
*   Outros equipamentos também podem oferecer DHCP, mas o conceito é o mesmo: precisa rodar o serviço DHCP.

***

🧩 Conceito Fundamental

O DHCPv4 automatiza o endereçamento com quatro mensagens (DORA). Ele funciona como um sistema de “**crachá de rede**”: o cliente anuncia que precisa de IP (broadcast), o servidor oferece, o cliente pede aquele IP e o servidor confirma, registrando a associação **MAC ↔ IP** por um tempo (lease).

***

📌 Em resumo

*   **DHCPv4 = configuração automática** (IP, máscara, gateway, DNS…).
*   Sequência principal: **Discover → Offer → Request → ACK (DORA)**.
*   **Discover é broadcast** para achar servidor.
*   O servidor **registra** o IP “alugado” ligado ao **MAC** do cliente.
*   O IP é **temporário (lease)** e pode ser reutilizado quando o host sai.

***

**11.2.2** Configuração do Serviço DHCP

🎯 Ideia Principal

O vídeo mostra, no **Packet Tracer**, como um **roteador doméstico** (parecido com o de casa) fornece **endereços IPv4 automaticamente via DHCP** para vários PCs. A ideia é: você **confere/ativa o DHCP no roteador**, define um **pool (intervalo)** de IPs que ele vai entregar, muda cada PC de **estático → DHCP**, e depois **testa a conectividade** com `ping`.

***

1️⃣ Duas formas de obter IP: estático vs DHCP

*   **Estático (manual):** alguém configura IP na mão no PC.
*   **Dinâmico (DHCP):** o PC pede e recebe automaticamente de um servidor DHCP (no vídeo, o roteador).

💡 **Analogia:**

*   Estático = você escolhe seu “número de apartamento” manualmente.
*   DHCP = a portaria te entrega um número automaticamente e evita duplicação.

***

2️⃣ O cenário do Packet Tracer (o “roteador de casa”)

*   Há **3 PCs** conectados a um **roteador com DHCP**.
*   Esse roteador tem as peças típicas de um roteador doméstico:
    *   **portas LAN (switch)** para cabo
    *   **antena / Wi‑Fi**
    *   **porta Internet/WAN** para o provedor

💡 **Analogia:** é um “3 em 1”: **switch + access point + roteador** num único aparelho.

***

3️⃣ DHCP no roteador: o que você verifica/configura

3.1) DHCP habilitado

*   Em roteadores domésticos, o DHCP geralmente já vem **habilitado por padrão**.

3.2) IP do roteador na LAN (gateway padrão)

*   O roteador tem um IP na rede interna (LAN).
*   Quando os PCs recebem configuração automática, eles usam esse IP como **gateway padrão** (a “saída” para outras redes/Internet).

💡 **Analogia:** gateway é o “portão do condomínio” para sair do bairro e ir para a rua (outra rede/Internet).

***

4️⃣ O “pool” de DHCP (intervalo de IPs entregues)

*   DHCP funciona com um **conjunto de endereços reservados** para distribuir aos hosts, “um por um”.
*   No vídeo, o intervalo começa em **`172.16.0.100`**.

📌 Resultado típico nesse cenário:

*   1º PC em DHCP recebe **`172.16.0.100`**
*   2º PC recebe **`172.16.0.101`**
*   3º PC recebe **`172.16.0.102`**

💡 **Analogia:** é como uma portaria entregando senhas: a primeira pessoa recebe a senha 100, depois 101, depois 102.

***

5️⃣ Passo a passo feito no vídeo (Packet Tracer)

5.1) No roteador (GUI)

1.  Entrar na interface de configuração (GUI)
2.  Confirmar **DHCP habilitado**
3.  Confirmar/definir o **IP da interface LAN** (que vira gateway dos PCs)
4.  Definir o **início do pool**, por exemplo: `172.16.0.100`
5.  **Salvar** as configurações

5.2) Em cada PC

1.  PC → **Desktop** → **IP Configuration**
2.  Trocar de **Static** para **DHCP**
3.  O PC envia a solicitação e recebe: **IP + máscara + gateway** (e possivelmente DNS)

***

6️⃣ Teste de conectividade (o “comprovante”)

*   Depois que todos têm IP, o vídeo testa com `ping` a partir do PC0:
    *   ping no PC1 (terminando em **.101**)
    *   ping no PC2 (terminando em **.102**)
*   Como o ping responde, confirma que:
    *   os IPs foram atribuídos corretamente
    *   os hosts estão na mesma rede
    *   a comunicação local está funcionando

💡 **Analogia:** é como testar se todo mundo no condomínio consegue mandar mensagem para o vizinho — se chega e volta, está tudo certo.

***

🧩 Conceito Fundamental

**DHCP automatiza o endereçamento**: o roteador (servidor DHCP) mantém um **pool** de IPs e entrega para os PCs (clientes DHCP), que passam a usar o IP do roteador na LAN como **gateway padrão**. Isso reduz erros, evita IP duplicado e acelera a conexão de novos dispositivos.

***

📌 Em resumo

*   Você pode configurar IP **manual (estático)** ou **automático (DHCP)**.
*   Em casa/Packet Tracer, o **roteador** costuma ser o servidor DHCP.
*   DHCP entrega IPs a partir de um **pool** (ex.: começando em `172.16.0.100`).
*   Cada PC muda para **DHCP** e recebe um IP diferente (ex.: .100, .101, .102).
*   `ping` entre os PCs confirma que a rede está funcionando.

***

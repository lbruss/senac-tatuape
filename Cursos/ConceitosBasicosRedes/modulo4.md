# Módulo 4

**4.0** Introdução

**4.1** Conceitos básicos da rede doméstica

**4.1.1** Configuração típica de rede doméstica

🎯 Ideia Principal

Uma rede doméstica típica tem **duas “partes” principais**:

1.  a **rede do provedor/ISP** (lado “de fora”, pública) e
2.  a **rede da sua casa (LAN)** (lado “de dentro”, privada).

O **modem** (separado ou embutido) faz a “tradução” do sinal do provedor para algo que a sua rede doméstica entenda, e o **roteador sem fio** (geralmente um aparelho só) distribui a conexão para **cabos (Ethernet)** e **Wi‑Fi**, mantendo todos os dispositivos normalmente **na mesma rede local** (mesmo “tipo” de IP).

***

1️⃣ Duas redes separadas: “fora” e “dentro”

*   A maioria das casas tem pelo menos **duas redes distintas**:
    *   **Rede do provedor (WAN/Internet)**: vem do ISP (cabo, DSL etc.).
    *   **Rede doméstica (LAN)**: onde ficam seus dispositivos (PC, celular, TV, videogame).
*   Essas duas redes são diferentes e ficam separadas por um equipamento (o roteador).

💡 **Analogia:** pense na sua casa como um condomínio:

*   **Rua (Internet/provedor)** = mundo externo
*   **Condomínio (LAN da sua casa)** = mundo interno  
    O portão separa os dois.

***

2️⃣ Por que existe modem (ou modem embutido)

*   A rede do provedor (cabo/DSL) **não chega “pronta” em Ethernet**.
*   O **modem** serve para **converter** o tipo de sinal do provedor para um formato que a rede doméstica usa.
*   Exemplo citado no vídeo: **modem de TV a cabo**
    *   entrada: **cabo coaxial** (o cabo do provedor)
    *   saída: **Ethernet** (para ligar no roteador ou em um dispositivo)

💡 **Analogia:** o modem é como um **adaptador de tomada**: a energia é a mesma “informação”, mas o formato do plug muda para encaixar no seu padrão interno.

***

3️⃣ Dois cenários comuns em casa

3.1) Modem separado + roteador

*   Você tem um modem (cabo/DSL/fibra) e depois liga ele ao **roteador**.
*   O roteador distribui Internet para os dispositivos.

3.2) “Tudo em um” (modem embutido no roteador)

*   Um único aparelho faz as duas coisas: **modem + roteador**.
*   Dá para reconhecer porque ele tem:
    *   entrada do provedor (ex.: coaxial/linha/etc.)
    *   e as portas típicas da LAN (Ethernet) + Wi‑Fi

💡 **Analogia:**

*   Separado = “adaptador + régua” em duas peças
*   Tudo em um = “régua com adaptador embutido”

***

4️⃣ Portas: a “Internet (WAN)” e as “LAN”

*   Em roteadores domésticos, você normalmente vê:
    *   **Uma porta “Internet” (WAN)** — muitas vezes de cor diferente (ex.: amarela)
    *   **Várias portas LAN** — são portas de switch para ligar dispositivos por cabo
*   A porta **Internet/WAN** liga seu roteador ao “mundo externo” (modem/ISP).
*   As portas **LAN** ligam seus aparelhos “de dentro” (PC, TV, console etc.).

💡 **Analogia:**

*   Porta WAN = a **entrada principal do prédio** (liga com a rua)
*   Portas LAN = os **corredores internos** (conectam os apartamentos)

***

5️⃣ Por que chamamos de “roteador sem fio” (wireless router)

*   Ele é chamado de roteador porque separa/liga **duas redes**:
    *   **WAN (Internet/ISP)**
    *   **LAN (sua rede doméstica)**
*   E é “sem fio” porque costuma ter um **Access Point (AP) Wi‑Fi** embutido.
*   Quase todos os dispositivos domésticos atuais já incluem Wi‑Fi integrado.

💡 **Analogia:** é um “portão inteligente” que também tem “antena” para deixar entrar sem fio.

***

6️⃣ Cabos e Wi‑Fi geralmente ficam na mesma rede local (mesmo IP “tipo”)

*   Em casa, é muito comum que:
    *   dispositivos **no cabo** e
    *   dispositivos **no Wi‑Fi**  
        recebam **endereços IP dentro da mesma rede (mesma faixa)**.
*   Ou seja, o Wi‑Fi não é “outra rede separada” por padrão — normalmente é **a mesma LAN**, só muda o meio (cabo vs ar).

💡 **Analogia:** é o mesmo condomínio:

*   alguns entram pela **porta** (cabo)
*   outros entram pela **garagem** (Wi‑Fi)  
    Mas todo mundo mora no **mesmo lugar** (mesma LAN/faixa de IP).

***

🧩 Conceito Fundamental

Uma rede doméstica costuma ser montada assim:  
**ISP (rede externa) → modem (converte sinal) → roteador (separa WAN/LAN, protege e distribui) → LAN (cabos + Wi‑Fi)**.  
E, na maioria das casas, **Wi‑Fi e Ethernet fazem parte da mesma rede local**, então os IPs ficam “no mesmo bairro”.

***

📌 Em resumo

*   Rede doméstica típica tem duas redes: **WAN (provedor)** e **LAN (casa)**.
*   **Modem** converte o sinal do provedor para a rede doméstica (ou já vem embutido).
*   **Roteador sem fio** geralmente tem:
    *   porta **Internet/WAN** (liga ao modem/ISP)
    *   portas **LAN** (switch para cabos)
    *   **Wi‑Fi (AP embutido)**
*   Dispositivos no Wi‑Fi e no cabo normalmente recebem IPs **na mesma faixa** (mesma LAN).

***

**4.1.2** Componentes de uma Rede Doméstica

🎯 Ideia Principal

Uma rede doméstica não é só “roteador + celular”. Ela é um **ecossistema de dispositivos** (computador, TV, videogame, impressora, câmeras, sensores etc.) que se conectam à **mesma rede local** para ter **Internet**, **compartilhar recursos** e permitir **controle/automação** (casa inteligente). À medida que surgem novas tecnologias, **mais funções da casa passam a depender da rede**.

***

1️⃣ Quais dispositivos costumam fazer parte de uma rede doméstica

A ideia aqui é mostrar que muitos aparelhos “moram” na sua rede, não só PCs.

*   **Computador desktop / notebook**
    *   Navegação, estudo, trabalho, downloads, jogos, chamadas de vídeo.

*   **Sistemas de jogos (consoles)**
    *   Jogar online, baixar jogos/atualizações, chat por voz, streaming.

*   **Smart TV / TV com apps**
    *   Streaming (YouTube, Netflix etc.), atualizações, espelhamento de tela, acesso a conteúdo na rede.

*   **Impressoras e scanners**
    *   Impressão/escaneamento pela rede para vários dispositivos (PC e celular).

*   **Câmeras de segurança**
    *   Monitoramento ao vivo, gravação, alertas no celular, acesso remoto.

*   **Telefones**
    *   Pode incluir telefone IP/VoIP ou dispositivos que dependem da rede para chamadas/serviços.

*   **Dispositivos de controle climático (ar-condicionado, termostato, sensores)**
    *   Controle pelo app, agendamento, automação (ligar/desligar, ajustar temperatura).

💡 **Analogia:** pense na rede da sua casa como uma **central elétrica + central de correio**: ela “alimenta” e “conecta” vários aparelhos ao mesmo tempo, para todos funcionarem e trocarem informações.

***

2️⃣ O que muda quando “mais coisas” entram na rede

Quando mais dispositivos passam a depender da rede, aumentam:

*   **A importância da estabilidade** (Wi‑Fi bom, menos quedas)
*   **A necessidade de organização** (quem conecta onde, sinal, cobertura)
*   **O cuidado com segurança** (senhas fortes, criptografia, atualizações)
*   **O consumo de banda** (streaming, downloads, câmeras, jogos)

💡 **Analogia:** é como uma casa que ganha mais moradores: com pouca gente, qualquer organização serve; com muita gente, precisa de regras e uma infraestrutura melhor (roteador, cobertura, senha boa).

***

3️⃣ O que significa “Rede local residencial sem fio (WLAN)”

*   **WLAN** é a **rede local sem fio**, ou seja, a sua **rede Wi‑Fi** dentro de casa.
*   Ela normalmente faz parte da sua **LAN** (rede local). Na prática, em casa, quase sempre:
    *   **Wi‑Fi e cabo (Ethernet) ficam na mesma rede local**, só muda o meio (ar vs cabo).
*   O Wi‑Fi é o jeito mais comum de conectar:
    *   celular, tablet, notebook, smart TV, câmeras, dispositivos IoT.

💡 **Analogia:** WLAN é como o “corredor sem fio” da casa: em vez de levar um cabo até cada cômodo, você “distribui o caminho pelo ar”.

***

🧩 Conceito Fundamental

A rede doméstica é uma **plataforma de conectividade**: ela conecta muitos tipos de dispositivos para acesso à Internet, compartilhamento e automação. Com a evolução da tecnologia, a casa fica cada vez mais “dependente da rede”, então **qualidade de Wi‑Fi, organização e segurança** viram peças-chave.

***

📌 Em resumo

*   Uma rede doméstica conecta muito mais do que PCs: **TV, videogame, impressora, câmeras, telefones e automação**.
*   Quanto mais dispositivos conectados, mais a rede precisa ser **estável, bem configurada e segura**.
*   **WLAN** é a **rede Wi‑Fi local** da casa, geralmente integrada à mesma LAN dos dispositivos cabeados.

***

**4.1.3** Roteadores típicos de rede doméstica

🎯 Ideia Principal

Roteadores domésticos (e de pequenas empresas) normalmente separam a rede em **dois lados**:

*   **LAN (rede interna da casa)**: onde ficam seus dispositivos (PC, TV, celular, console).
*   **WAN/Internet (rede externa)**: onde o roteador se conecta ao modem/ISP.

Essa separação acontece principalmente por causa de **dois tipos de portas**: **LAN/Ethernet** e **Internet/WAN**. Por padrão, o **Wi‑Fi** costuma fazer parte da **mesma LAN** das portas LAN.

***

1️⃣ Portas Ethernet (LAN)

*   São as portas que ligam seus dispositivos **dentro da casa** (rede local).
*   Normalmente vêm rotuladas como **“LAN”** ou **“Ethernet”**.
*   Essas portas estão conectadas ao **switch interno** do roteador.
*   **Tudo que você plugar nessas portas fica na mesma rede local (LAN)** e consegue se comunicar (ex.: PC conversa com impressora, TV acessa servidor/PC, etc.).

💡 **Analogia:** as portas LAN são como as **tomadas internas de um “filtro de linha”**: tudo conectado ali está no mesmo “ambiente” e se enxerga.

***

2️⃣ Porta da Internet (WAN)

*   É a porta usada para conectar o roteador a **outra rede**, normalmente a do **provedor (ISP)**.
*   Geralmente vem rotulada como **“Internet”** ou **“WAN”** (muitas vezes com cor diferente).
*   É nela que você conecta o **modem** (cabo/DSL/fibra, dependendo do seu cenário) para ter acesso à Internet.
*   A porta Internet/WAN fica em uma **rede diferente** da LAN — é justamente isso que permite ao roteador “rotear” entre dentro (LAN) e fora (WAN).

💡 **Analogia:** a porta WAN é o **portão do condomínio** que dá acesso à rua (Internet). A LAN é a área interna do condomínio.

***

3️⃣ Wi‑Fi no roteador: geralmente na mesma LAN

*   Muitos roteadores residenciais têm **antenas** e um **Access Point (AP) Wi‑Fi** embutido.
*   **Por padrão**, dispositivos no Wi‑Fi (celular, notebook) ficam na **mesma rede local** que os dispositivos conectados por cabo nas portas LAN.
*   Ou seja: Wi‑Fi e cabo costumam ser “o mesmo bairro”, só muda o meio (ar vs cabo).

💡 **Analogia:** cabo e Wi‑Fi são duas “entradas” para o mesmo condomínio:

*   uma entrada é pela **porta** (cabo)
*   outra é pela **garagem** (Wi‑Fi)  
    Mas todo mundo continua no mesmo lugar (LAN).

***

4️⃣ O que fica em rede diferente na configuração padrão

*   Na configuração padrão, **somente a porta Internet/WAN** está em uma **rede diferente**.
*   As portas LAN + Wi‑Fi ficam juntas na **LAN**.

💡 **Analogia:** dentro da casa você tem vários cômodos conectados (LAN + Wi‑Fi). A rua (WAN) é outro “mundo”, separado por uma porta principal (WAN).

***

🧩 Conceito Fundamental

O roteador doméstico organiza tudo separando **LAN (interno)** e **WAN (externo)**:

*   **LAN/Ethernet**: conecta dispositivos internos via switch (mesma rede).
*   **Internet/WAN**: conecta ao modem/ISP (rede diferente).
*   **Wi‑Fi**: normalmente entra como parte da LAN, por padrão.

***

📌 Em resumo

*   Roteadores domésticos têm duas portas principais:
    *   **LAN/Ethernet** (switch interno → mesma rede local)
    *   **Internet/WAN** (liga ao modem/ISP → rede diferente)
*   O **Wi‑Fi** geralmente fica na **mesma LAN** das portas Ethernet.
*   A **porta Internet/WAN** é a fronteira principal com o “lado de fora” (Internet).

***

**4.2** Tecnologias de rede na residência

**4.2.1** Frequências de LAN sem fio

🎯 Ideia Principal

Em redes residenciais, as conexões sem fio mais comuns usam faixas **não licenciadas** de **2,4 GHz** e **5 GHz**.

*   **Bluetooth** (2,4 GHz) é ótimo para **curta distância**, **baixo consumo** e **acessórios**.
*   **Wi‑Fi (IEEE 802.11)** (2,4 e/ou 5 GHz) usa **mais potência**, tem **maior alcance** e **maior taxa de transferência** (mais “velocidade útil”) para acesso à rede e Internet.

***

1️⃣ Faixas mais usadas em casa: 2,4 GHz e 5 GHz

*   São as faixas sem fio mais presentes em residências porque:
    *   permitem uso sem precisar “comprar licença” de frequência (mas ainda seguem regras técnicas do país)
    *   têm muitos equipamentos compatíveis (roteadores, celulares, TVs, notebooks, IoT)

💡 **Analogia:** pense em 2,4 GHz e 5 GHz como “canais públicos” onde vários dispositivos podem conversar, desde que respeitem as regras para não atrapalhar demais os outros.

***

2️⃣ Bluetooth (2,4 GHz): curto alcance e baixa energia

*   O Bluetooth opera na faixa de **2,4 GHz**.
*   É voltado para:
    *   **curta distância**
    *   **baixo consumo de bateria**
    *   conexões de **acessórios/periféricos**
*   Ele consegue manter conexões com vários dispositivos, mas na prática existe um limite de quantos podem ficar ativos ao mesmo tempo em um mesmo “grupo” (geralmente até **7** dispositivos ativos conectados a um principal, dependendo do modo/implementação).

Para que ele é mais usado (na vida real)

*   **Fones de ouvido** e **caixas de som** (áudio)
*   **Teclados** e **mouses**
*   **Smartwatch** e sensores próximos
*   Conexões rápidas sem precisar de Wi‑Fi

> Observação prática (sem complicar): embora dê para usar Bluetooth para alguns periféricos, **impressoras “sem fio” em casa normalmente usam mais Wi‑Fi** do que Bluetooth, porque o Wi‑Fi cobre melhor a casa e funciona bem com vários dispositivos na rede.

💡 **Analogia:** Bluetooth é como um **cabo invisível curto**: perfeito para ligar coisas que estão perto (fone, mouse), sem gastar muita bateria.

***

3️⃣ Wi‑Fi (IEEE 802.11): mais potência, mais alcance, mais rendimento

*   As tecnologias de **LAN sem fio (Wi‑Fi)** seguem padrões **IEEE 802.11** e podem operar em **2,4 GHz**, **5 GHz** (e em muitos roteadores modernos, também outras faixas, mas aqui o foco é 2,4 e 5).
*   A grande diferença em relação ao Bluetooth é que o Wi‑Fi normalmente:
    *   transmite com **mais potência**
    *   consegue **maior alcance**
    *   entrega **maior taxa de transferência** (mais “dados por segundo” de verdade)

💡 **Analogia:**

*   Bluetooth = conversa baixinha entre pessoas próximas.
*   Wi‑Fi = um “microfone + caixa de som” para falar com vários cômodos da casa.

***

4️⃣ Diferença simples entre 2,4 GHz e 5 GHz (no uso doméstico)

Mesmo sem entrar em detalhes técnicos, dá pra guardar assim:

2,4 GHz

*   **Alcance maior** (costuma atravessar paredes melhor)
*   **Mais sujeito a interferência** (muitos dispositivos usam 2,4 GHz: Bluetooth, alguns aparelhos domésticos, redes vizinhas)

5 GHz

*   **Menos interferência** na prática em muitos locais
*   **Melhor desempenho** em curtas/médias distâncias
*   **Alcance menor** (tende a perder força mais rápido com paredes)

💡 **Analogia:**

*   2,4 GHz é como uma voz que “passa melhor pelas paredes”, mas tem mais barulho de fundo.
*   5 GHz é como uma voz mais “limpa e clara”, mas que funciona melhor quando você está mais perto.

***

🧩 Conceito Fundamental

*   **Frequência** (2,4/5 GHz) é o “tipo de canal” que a rede usa no ar.
*   **Bluetooth e Wi‑Fi** podem até usar a mesma faixa (2,4 GHz), mas foram feitos para objetivos diferentes:
    *   Bluetooth = **curto alcance + economia de energia + acessórios**
    *   Wi‑Fi = **rede local + Internet + maior velocidade/rendimento**

***

📌 Em resumo

*   Em casa, o sem fio mais comum fica em **2,4 GHz e 5 GHz** (faixas não licenciadas).
*   **Bluetooth (2,4 GHz)**: curto alcance, baixo consumo, ótimo para fones/teclados/mouse/smartwatch.
*   **Wi‑Fi (802.11)**: usa 2,4 e/ou 5 GHz, tem mais potência, maior alcance e **maior taxa de transferência**.
*   2,4 GHz tende a **ir mais longe**, 5 GHz tende a **performar melhor** quando você está mais perto.

***

**4.2.2** Tecnologias de Redes com fio

🎯 Ideia Principal

Mesmo com Wi‑Fi em quase tudo, **conexões com fio ainda são muito usadas** porque podem oferecer **mais estabilidade**, **menos interferência** e, em redes com **switch**, cada dispositivo pode ter um **caminho dedicado** de comunicação. A tecnologia com fio mais comum em redes locais é a **Ethernet**, que pode funcionar em diferentes tipos de cabos (par trançado, coaxial e fibra).

***

1️⃣ Por que ainda existe rede com fio em casa

*   Wi‑Fi é prático, mas pode sofrer com **paredes**, **distância**, **interferência** e **muita gente usando ao mesmo tempo**.
*   Em algumas aplicações, o cabo é preferido por ser mais **constante** (ex.: videogame online, PC fixo, TV de streaming, escritório em casa).
*   Em redes com **switch**, cada porta do switch cria um “trecho” de comunicação **só daquele dispositivo**, o que melhora o desempenho.

💡 **Analogia:** Wi‑Fi é como uma **conversa em uma sala**: todo mundo fala “no mesmo ar”. Cabo via switch é como ter **um telefone com fio por pessoa**: menos confusão e mais estabilidade.

***

2️⃣ Ethernet: o padrão mais comum em rede cabeada

*   **Ethernet** é o padrão mais usado para **LAN com fio** (rede local).
*   Ela define regras de comunicação e formatos para os dados viajarem pela rede (padrões amplamente usados em equipamentos domésticos e empresariais).
*   Uma LAN Ethernet pode usar **vários meios físicos** (tipos de cabos), dependendo do cenário.

💡 **Analogia:** Ethernet é como o **idioma oficial** da rede cabeada: se todo mundo “fala Ethernet”, todo mundo se entende.

***

3️⃣ Como os dispositivos conectam “direto” na Ethernet (cabo de rede)

*   O mais comum em casa/pequeno escritório é o **cabo de par trançado (UTP)**.
*   Esses cabos normalmente vêm prontos, com conectores padrão de rede (popularmente chamados de “RJ‑45”).
*   Casas mais novas às vezes já têm **tomadas de rede na parede**, levando o cabo até um ponto central (onde fica o roteador/switch).

💡 **Analogia:** é como ter **tomadas de água** (pontos de rede) já instaladas na casa: você só liga a mangueira (cabo) e funciona.

***

4️⃣ Alternativas quando a casa não tem cabeamento UTP

*   Existem tecnologias que usam a **rede elétrica** para levar conectividade (conhecidas como **powerline**).
*   Elas podem ser uma opção quando passar cabo é difícil, mas o desempenho pode variar conforme a instalação elétrica e ruídos.

💡 **Analogia:** powerline é como “mandar dados pelo encanamento elétrico”: funciona, mas depende de como a casa foi “encanada”.

***

5️⃣ Tipos comuns de cabo (o que muda em cada um)

5.1) Cabo Categoria 5e (Cat5e – par trançado)

*   É um dos cabos mais comuns em LAN doméstica e pequenas empresas.
*   Tem **4 pares de fios trançados**, o que ajuda a reduzir interferência elétrica.
*   É o “cabo de rede” típico para ligar PC, TV, console e roteador/switch.

💡 **Analogia:** os fios trançados são como duas pessoas andando **de braços dados** para não se perderem no meio da multidão (menos interferência).

***

5.2) Cabo Coaxial

*   Tem um **fio central**, uma camada isolante e uma **blindagem** ao redor.
*   É muito usado para **sinal de TV a cabo** e em algumas conexões de Internet a cabo (até chegar no modem).
*   A blindagem ajuda a proteger contra interferência.

💡 **Analogia:** coaxial é como um **tubo com escudo**: o sinal vai por dentro bem protegido.

***

5.3) Cabo de Fibra Óptica

*   Pode ser de vidro ou plástico bem fino e transmite dados como **pulsos de luz**.
*   Tem **altíssima capacidade** e funciona muito bem em **longas distâncias**.
*   Por isso é muito usada por provedores e também em redes maiores.

💡 **Analogia:** fibra é como uma **autoestrada de luz**: passa muita informação, muito rápido, por longas distâncias.

***

🧩 Conceito Fundamental

Rede com fio em casa normalmente significa **Ethernet + switch/roteador**, usando cabos (principalmente **Cat5e/UTP**). Mesmo com Wi‑Fi, o cabo continua importante quando você precisa de **estabilidade, constância e bom desempenho**. E a escolha do cabo (Cat5e, coaxial, fibra) depende do **uso** e do **trecho da rede** (dentro de casa vs provedor/longas distâncias).

***

📌 Em resumo

*   **Ethernet** é o padrão mais comum de rede cabeada em LAN.
*   Em redes com **switch**, cada dispositivo pode ter um “caminho” dedicado na sua porta.
*   **Cat5e (UTP)** é o cabo mais típico dentro de casa.
*   **Coaxial** é comum em TV a cabo e no trecho até o modem em muitos cenários de cabo.
*   **Fibra** oferece altíssima capacidade e longas distâncias, muito usada em backbone e provedores (e cada vez mais chegando nas residências).
*   Se não dá para passar cabo, existe **powerline** usando a rede elétrica como alternativa.

***

**4.3** Padrões de Redes Sem Fio

**4.3.1** Redes Wi-Fi

🎯 Ideia Principal

Para dispositivos Wi‑Fi de marcas diferentes “conversarem” entre si, existem **padrões** que definem **regras comuns**: em quais frequências o Wi‑Fi opera, como os dados são transmitidos e quais velocidades são suportadas. O principal padrão de Wi‑Fi é a família **IEEE 802.11**, e a **Wi‑Fi Alliance** ajuda garantindo, por testes, que equipamentos de fabricantes diferentes sejam **compatíveis** (funcionem juntos). Esses padrões evoluem com o tempo para melhorar **velocidade**, **estabilidade** e **conectividade**.

***

1️⃣ Por que existem padrões (standards) no Wi‑Fi

*   Sem padrões, cada fabricante poderia criar um “Wi‑Fi próprio”, e um celular de uma marca não conectaria em um roteador de outra.
*   Os padrões definem coisas como:
    *   **espectro de RF** (frequências usadas, como 2,4 GHz e 5 GHz)
    *   **taxas de dados** (quanto pode trafegar por segundo)
    *   **métodos de transmissão** (como o sinal é enviado/recebido, como evita interferência, etc.)

💡 **Analogia:** padrão é como um **idioma** + **gramática**. Se todo mundo usa o mesmo idioma, qualquer pessoa consegue conversar, mesmo sendo de países diferentes.

***

2️⃣ Quem cria os padrões: IEEE

*   O **IEEE (Instituto dos Engenheiros Eletricistas e Eletrônicos)** é o principal organismo que cria padrões técnicos para redes.
*   No caso de redes Wi‑Fi (WLAN), a base é o **padrão IEEE 802.11**.
*   As variações/atualizações dentro do 802.11 definem “versões” e melhorias de Wi‑Fi ao longo do tempo.

💡 **Analogia:** o IEEE é como uma “associação de regras do jogo”. Ele escreve o **livro oficial** para que todos joguem do mesmo jeito.

***

3️⃣ IEEE 802.11 e o que ele controla na WLAN

*   O padrão **IEEE 802.11** descreve como funciona a comunicação em **WLAN** (Wireless Local Area Network = rede local sem fio).
*   Ele define as características técnicas de diferentes modos/padrões Wi‑Fi.
*   No contexto do seu texto, as redes Wi‑Fi usam principalmente as bandas **2,4 GHz** e **5 GHz** (com tecnologias e versões variando dentro do 802.11).
*   Em conjunto, essas tecnologias baseadas em 802.11 são chamadas de **Wi‑Fi**.

💡 **Analogia:** 802.11 é como o “manual da estrada” para o Wi‑Fi: diz **em quais pistas (frequências)** você pode andar e **como dirigir (transmitir dados)** sem bater (interferência).

***

4️⃣ Quem garante que marcas diferentes funcionem juntas: Wi‑Fi Alliance

*   A **Wi‑Fi Alliance** testa dispositivos de vários fabricantes para confirmar que eles seguem os padrões e funcionam com outros equipamentos compatíveis.
*   O **logo Wi‑Fi** no produto indica que ele passou por testes de interoperabilidade e deve operar com outros dispositivos Wi‑Fi do mesmo padrão.

💡 **Analogia:** a Wi‑Fi Alliance é como o “selo de qualidade/compatibilidade”: tipo um **“aprovado para funcionar com o resto do mundo”**.

***

5️⃣ Padrões evoluem o tempo todo (por que isso importa)

*   Os padrões Wi‑Fi estão em **constante evolução** para melhorar:
    *   **velocidade** (mais dados por segundo)
    *   **conectividade** (mais dispositivos conectados com melhor experiência)
    *   **eficiência** (melhor uso do “ar” e menos desperdício)
*   Saber quando surgem novos padrões é útil porque:
    *   fabricantes costumam implementar rapidamente em roteadores e dispositivos novos
    *   isso afeta compras e compatibilidade (roteador antigo pode não aproveitar tudo que um aparelho novo suporta, e vice‑versa)

💡 **Analogia:** é como versões de um aplicativo: versões novas trazem melhorias, mas você só aproveita tudo se **seu aparelho e o outro lado** também suportarem.

***

🧩 Conceito Fundamental

**Wi‑Fi funciona porque existe padronização.**

*   **IEEE 802.11** cria as regras técnicas do Wi‑Fi (como operar e transmitir).
*   A **Wi‑Fi Alliance** valida na prática a compatibilidade entre marcas.
*   Como os padrões evoluem, a experiência melhora com o tempo — desde que os dispositivos sejam compatíveis.

***

📌 Em resumo

*   Padrões garantem que Wi‑Fi de diferentes fabricantes funcione junto.
*   **IEEE** define padrões técnicos; **802.11** é o padrão base do Wi‑Fi (WLAN).
*   Wi‑Fi usa principalmente **2,4 GHz e 5 GHz** (no contexto do módulo).
*   **Wi‑Fi Alliance** testa e certifica compatibilidade; o **logo Wi‑Fi** indica conformidade.
*   Novos padrões surgem para aumentar desempenho e os fabricantes adotam rápido em produtos novos.

***

**4.3.2** Configurações de rede sem fio

🎯 Ideia Principal

Em roteadores Wi‑Fi (padrões **IEEE 802.11**), existem algumas **configurações básicas** que definem **quem consegue se conectar**, **como o Wi‑Fi funciona** e **como os dispositivos encontram a rede**. No Packet Tracer, você vê essas opções para simular o que existe em um roteador real: **Modo de rede**, **Canal** e **Broadcast do SSID**.

***

1️⃣ Modo de rede (Network Mode)

*   Define **quais padrões Wi‑Fi** o roteador vai aceitar. Exemplos comuns:
    *   **802.11b** (mais antigo e mais lento)
    *   **802.11g** (melhor que o b, ainda antigo)
    *   **802.11n** (mais moderno, melhor desempenho)
    *   **Mixed Mode (Modo misto)** (aceita mais de um padrão ao mesmo tempo)

✅ **Por que isso importa?**

*   Se você escolher um modo “mais novo” e algum dispositivo “muito antigo”, ele pode **não conseguir conectar**.
*   O **modo misto** aumenta compatibilidade, mas pode **reduzir um pouco a eficiência** em alguns cenários, porque o roteador precisa “conversar” com dispositivos de gerações diferentes.

💡 **Analogia:** é como escolher o “idioma” e a “versão” da conversa:

*   Se você falar só “gíria moderna”, quem só entende “português antigo” pode ficar de fora.
*   No modo misto, você fala “de um jeito que todo mundo entende”, mas isso pode deixar a comunicação um pouco menos eficiente.

***

2️⃣ Canal padrão (Standard Channel)

*   Define em qual **canal de rádio** o Wi‑Fi vai operar.
*   Em muitos roteadores, o padrão é **Automático**, para o Access Point (AP) tentar escolher um canal com **menos interferência**.

✅ **Por que isso importa?**

*   Se muitos roteadores vizinhos usam o mesmo canal, pode haver mais **interferência** → Wi‑Fi fica mais lento/instável.
*   O “Auto” costuma funcionar bem, mas em ambientes com muita rede (apartamentos, por exemplo) às vezes escolher manualmente um canal melhor ajuda.

💡 **Analogia:** canal é como escolher uma **faixa de rádio**:

*   Se várias pessoas falam na mesma frequência, vira bagunça.
*   Se você muda para uma frequência mais “livre”, a conversa fica mais limpa.

***

3️⃣ Broadcast de SSID (SSID Broadcast)

*   Define se o roteador vai **anunciar o nome da rede (SSID)** para quem estiver por perto.
*   Quando está **Ativado**, a rede aparece na lista do celular/notebook.
*   Quando está **Desativado**, a rede fica “oculta” (não aparece na lista), e você precisa **digitar o SSID manualmente** para conectar.

✅ **Por que isso importa?**

*   Ocultar o SSID **não é uma proteção forte por si só** (não substitui senha/criptografia).
*   O que realmente protege é usar **segurança forte (WPA2/WPA3)** com uma senha boa.

💡 **Analogia:**

*   Broadcast ligado = o Wi‑Fi tem uma **placa na porta** com o nome da rede.
*   Broadcast desligado = sem placa; você só entra se **souber o nome exato** e tiver a **chave (senha)**.

***

🧩 Conceito Fundamental

Essas configurações controlam três coisas essenciais do Wi‑Fi:

*   **Compatibilidade** (Modo de rede: quais dispositivos conseguem “falar” com o roteador)
*   **Qualidade do sinal** (Canal: quanta interferência você enfrenta)
*   **Descoberta da rede** (Broadcast SSID: se a rede aparece automaticamente para os dispositivos)

***

O **Modo de rede** e o **SSID** são duas configurações centrais do Wi‑Fi:

*   **Modo de rede** define **quais padrões Wi‑Fi (802.11)** o roteador/AP vai aceitar (isso afeta **compatibilidade** e **desempenho**).
*   **SSID** é o **nome da rede Wi‑Fi**, usado para os dispositivos saberem **em qual WLAN** devem entrar. O **broadcast de SSID** só controla se esse nome aparece “na lista” automaticamente — **não é segurança de verdade**.

***

1️⃣ Modo de rede (Network Mode) — compatibilidade × desempenho

*   Se **todos os dispositivos** usam o **mesmo padrão** (ex.: todos em 802.11n), você tende a obter o **melhor desempenho possível** daquele padrão, porque o AP não precisa “adaptar” a comunicação para dispositivos mais antigos.
*   Se o AP estiver configurado para **aceitar apenas um padrão específico**, qualquer dispositivo que **não suporte** esse padrão **não consegue se conectar**.
*   **Modo misto (Mixed Mode)** permite que dispositivos de **mais de um padrão** se conectem (por exemplo, misturar b/g/n). Isso facilita a vida quando existe dispositivo antigo, mas pode reduzir a eficiência em alguns cenários porque o AP precisa manter compatibilidade com tecnologias mais lentas.

💡 **Analogia:**

*   **Um padrão só** é como uma turma onde todo mundo fala o **mesmo idioma** — a conversa flui mais rápido.
*   **Modo misto** é como ter pessoas falando **idiomas diferentes**: dá para incluir todo mundo, mas a conversa pode ficar mais lenta porque precisa “traduzir” e respeitar o ritmo de quem é mais lento.

***

2️⃣ SSID — o “nome” da WLAN (rede Wi‑Fi)

*   **SSID** é o identificador (nome) da rede Wi‑Fi.
*   Ele é uma sequência de até **32 caracteres** (na prática, diferencia **maiúsculas e minúsculas**).
*   Os dispositivos sem fio (chamados **estações — STA**) usam o SSID para saber **qual rede** devem procurar e **a qual rede** devem se associar.

✅ Ideia prática: SSID ajuda o dispositivo a escolher “qual Wi‑Fi é o certo”, principalmente quando existem várias redes por perto (ex.: “Casa\_2G”, “Casa\_5G”, “Vizinho”, “Café”).

💡 **Analogia:** SSID é como o **nome do condomínio**. Você escolhe o condomínio certo antes de entrar.

***

3️⃣ Onde o SSID “aparece” nas comunicações Wi‑Fi

*   O SSID é divulgado principalmente nas mensagens de **anúncio/descoberta** da rede (por exemplo, quando o roteador “anuncia” a rede e quando o celular procura redes).
*   Depois que o dispositivo se conecta, a rede usa outras identificações internas para manter a comunicação funcionando.

💡 **Analogia:** o SSID aparece mais quando você está “procurando o lugar” (fase de descoberta). Depois que você já entrou e está dentro do condomínio, você usa outras referências internas (portaria, bloco, apartamento) para circular.

***

4️⃣ Broadcast de SSID — deixar o nome visível ou oculto

*   **Broadcast SSID ativado:** o nome da rede aparece automaticamente na lista do celular/notebook.
*   **Broadcast SSID desativado (rede oculta):** a rede não aparece na lista; para conectar, você precisa **digitar manualmente** o SSID (nome exato) e a senha.

✅ Efeito real: ocultar SSID pode **atrapalhar usuários legítimos** (porque exige cadastro manual), mas não impede que alguém com conhecimento e ferramentas adequadas descubra a rede.

💡 **Analogia:**

*   Broadcast ligado = tem uma **placa na entrada** com o nome do condomínio.
*   Broadcast desligado = **sem placa**; só entra quem já sabe o nome exato.

***

5️⃣ “Ocultar SSID” não é segurança (o que realmente protege)

*   Desativar o broadcast do SSID **não é suficiente** para impedir acesso não autorizado.
*   O que realmente restringe acesso é usar **criptografia forte**, como:
    *   **WPA2** (mínimo aceitável)
    *   **WPA3** (melhor, quando disponível)
*   Além disso, uma **senha forte** e roteador atualizado fazem diferença.

💡 **Analogia:** ocultar SSID é como tirar a placa do condomínio; **criptografia (WPA2/WPA3)** é a **fechadura forte** do portão. O que impede a entrada é a fechadura, não a placa.

***

🧩 Conceito Fundamental

*   **Modo de rede** decide “quem consegue conversar” (compatibilidade) e “quão bem conversa” (desempenho).
*   **SSID** é o “nome da rede” que orienta os dispositivos a entrar na WLAN correta.
*   **Broadcast SSID** só facilita (ou dificulta) encontrar a rede, mas **não substitui segurança**. Segurança real vem de **WPA2/WPA3 + senha forte**.

***

📌 Em resumo

*   **Modo de rede:** define quais padrões 802.11 o roteador aceita (b/g/n ou misto).
*   **Canal:** define por onde o sinal “passa no ar”; automático tenta reduzir interferência.
*   **Broadcast do SSID:** controla se o nome da rede aparece na lista; ocultar não substitui segurança de verdade.
*   **SSID** significa **Service Set Identifier** (em português, “Identificador do Conjunto de Serviços”), ou seja, **o nome da rede Wi‑Fi**.
*   **Um padrão só (ex.: só 802.11n):** melhor desempenho, mas pode bloquear dispositivos antigos.
*   **Modo misto:** permite conectar dispositivos de padrões diferentes, com possível perda de eficiência.
*   **SSID:** nome da rede (até 32 caracteres), usado para identificar a WLAN correta.
*   **Broadcast SSID:** ligado = aparece na lista; desligado = precisa inserir manualmente.
*   **Segurança de verdade:** use **WPA2 ou superior (WPA3 se possível)** + senha forte.

***

**4.4** Configurar um roteador doméstico

**4.4.1** Primeira configuração

🎯 Ideia Principal

A “primeira configuração” de um roteador doméstico normalmente começa garantindo **uma conexão inicial estável** (geralmente **por cabo Ethernet**), para então acessar o assistente de configuração do roteador e ajustar o básico (Internet e Wi‑Fi). O segredo é ligar o computador **na porta LAN** do roteador (não na porta **Internet/WAN**), e garantir que o PC pegue um **IP automaticamente (DHCP)** — ou configurar IP manualmente se necessário.

***

1️⃣ Assistente de configuração automática (por que ele existe)

*   Muitos roteadores residenciais trazem um **utilitário/assistente** que ajuda a configurar:
    *   nome do Wi‑Fi (SSID)
    *   senha do Wi‑Fi
    *   tipo de conexão com a Internet
    *   ajustes básicos de segurança
*   Esse assistente costuma funcionar melhor quando você está conectado **por cabo**, porque evita quedas de Wi‑Fi durante a configuração.

💡 **Analogia:** é como configurar um celular novo com carregador plugado: você reduz a chance de “cair no meio” e dar erro.

***

2️⃣ Conexão correta por cabo (LAN x Internet/WAN)

Para conectar ao roteador usando cabo:

*   Pegue um cabo **Ethernet** e conecte:
    *   uma ponta na porta de rede do **computador (NIC)**
    *   a outra ponta em uma **porta LAN** do roteador (geralmente numeradas: LAN1, LAN2, etc.)

✅ **Importante:**

*   **Não** conecte o computador na porta **Internet/WAN** para essa primeira configuração.
*   A porta **Internet/WAN** é a que vai para o **modem** ou para o equipamento do provedor.

💡 **Analogia:**

*   **LAN** = portas “de dentro da casa” (seus dispositivos)
*   **WAN/Internet** = porta “da rua” (provedor/Internet)  
    Na configuração inicial, você entra “por dentro”, não pela rua.

***

3️⃣ Modem separado vs roteador com modem embutido

*   Em muitos casos, o roteador é separado do modem:
    *   **modem** (do provedor) ⇄ **porta Internet/WAN** do roteador
*   Em alguns casos, existe um equipamento “tudo em um” (modem + roteador).

3.1) Se for Internet a cabo (cable modem)

*   O cabo que vem do provedor é um **coaxial**, e o conector mais comum nesse cenário doméstico é o **tipo F** (rosqueado) no equipamento.

3.2) Se for DSL

*   Usa um cabo de telefone com conector **RJ‑11** (o menor “plug” de telefone).

💡 **Analogia:**

*   Coaxial (cabo) = “mangueira grossa” da TV/Internet
*   RJ‑11 (DSL) = “linha telefônica” tradicional

***

4️⃣ Conferir se o link está ativo (luzinha e conexão)

Depois de conectar o cabo:

*   Verifique as luzes de link:
    *   no roteador (porta LAN acesa/piscando)
    *   e/ou no computador (indicador da placa de rede)
*   Isso confirma que existe **conexão física** funcionando.

💡 **Analogia:** é como conferir se a tomada está energizada: a luz indica que “tem contato”.

***

5️⃣ Endereço IP: normalmente é automático (DHCP)

*   Em geral, o roteador já vem configurado para entregar IP automaticamente via **DHCP**.
*   Isso significa que o computador recebe automaticamente:
    *   **IP**
    *   **máscara**
    *   **gateway**
    *   **DNS**

Se o computador **não receber IP**, aí você tem duas saídas:

5.1) Verificar o básico primeiro

*   Cabo bem encaixado
*   Porta LAN correta
*   Placa de rede habilitada
*   DHCP ativado no computador (modo “obter IP automaticamente”)

5.2) Configurar manualmente (quando necessário)

Se ainda assim não funcionar, você pode configurar manualmente no PC:

*   **IP** (um endereço dentro da rede do roteador)
*   **Máscara de sub-rede**
*   **Gateway padrão** (normalmente o IP do roteador)
*   **DNS** (pode ser o do roteador ou um DNS público, conforme orientação do roteador)

💡 **Analogia:**

*   DHCP é como uma “portaria” que entrega crachás automaticamente.
*   Manual é você preencher o crachá na mão — funciona, mas precisa acertar tudo certinho.

***

🧩 Conceito Fundamental

A primeira configuração funciona melhor quando você garante três coisas, nessa ordem:

1.  **Ligação correta**: PC → **LAN** do roteador (não WAN)
2.  **Link ativo**: cabo ok e luz de conexão acesa
3.  **IP válido**: preferencialmente via **DHCP**, ou manual se necessário

Com isso, você consegue acessar o roteador e configurar Internet + Wi‑Fi com muito menos dor de cabeça.

***

📌 Em resumo

*   Use o assistente do roteador, preferindo **conexão por cabo**.
*   Conecte o PC em uma **porta LAN**, não na porta **Internet/WAN**.
*   A porta Internet/WAN é para o **modem/ISP**.
*   Verifique as luzes de link para confirmar conexão física.
*   Normalmente o PC recebe IP via **DHCP**; se não receber, ajuste ou configure **IP/máscara/gateway/DNS** manualmente.

***

**4.4.2** Considerações de Design

🎯 Ideia Principal

Antes de configurar um roteador doméstico, vale pensar no **uso real da sua rede** para equilibrar duas coisas: **não limitar o que você quer fazer** (desempenho/compatibilidade) e **não deixar a rede vulnerável** (segurança). As decisões mais importantes nessa fase são: **nome da rede (SSID)**, **quais padrões Wi‑Fi habilitar** (compatibilidade vs velocidade) e **como permitir novos dispositivos** (principalmente visitantes).

***

1️⃣ Que nome devo dar à minha rede? (SSID)

*   Se o **broadcast do SSID** estiver ligado, o nome da rede fica **visível para qualquer pessoa** dentro do alcance do Wi‑Fi.
*   Por isso, o SSID **não deve entregar informações “de graça”** sobre seu equipamento ou sua rede.
*   Evite colocar no SSID:
    *   **marca/modelo do roteador** (ex.: “TP-Link\_ArcherC6”, “Netgear123”)
    *   informações pessoais (nome completo, apartamento, empresa)
*   Prefira algo neutro, simples e que você reconheça, como:
    *   `Casa_2G` / `Casa_5G`
    *   `Rede_Sala`
    *   `WiFi_Principal`

💡 **Analogia:** SSID é a “placa na frente da sua casa”. Você quer que amigos encontrem a casa, mas não quer colocar na placa “aqui tem tal fechadura e tal modelo de porta”.

***

2️⃣ Que tipos de dispositivos vão se conectar? (compatibilidade e padrão 802.11)

Aqui você decide o **modo de rede** (quais padrões Wi‑Fi o roteador vai aceitar). Isso afeta diretamente **quem conecta** e **qual velocidade máxima dá para atingir**.

2.1) Compatibilidade por padrão (ideia simples)

*   Se um dispositivo só suporta **802.11b/g** (muito antigo), ele não conecta se você deixar o roteador **somente** em um modo moderno que não inclua esses padrões.
*   Se **todos** os seus dispositivos suportam um padrão mais moderno, a rede tende a funcionar **melhor** quando você evita modos antigos.

💡 **Analogia:** é como escolher o “idioma” da conversa:

*   se todo mundo fala o mesmo idioma moderno, a conversa flui
*   se você precisa incluir alguém que só fala “um idioma antigo”, todo mundo tem que se adaptar um pouco

2.2) 2,4 GHz x 5 GHz e padrões (bem direto)

*   **802.11b/g**: normalmente **2,4 GHz**
*   **802.11a**: normalmente **5 GHz**
*   **802.11n**: pode operar em **2,4 GHz e/ou 5 GHz**
*   **802.11ac**: normalmente **5 GHz**

> Tradução prática: se você tem dispositivos antigos, o **2,4 GHz** costuma ser o “mais compatível”. O **5 GHz** costuma entregar melhor desempenho quando você está mais perto do roteador.

2.3) “Modo legado” vs “modo misto”

*   **Modo misto (Mixed Mode)** geralmente significa: aceitar **vários padrões ao mesmo tempo** (ex.: b/g/n ou a/n/ac, depende do roteador).
*   **Modo legado (Legacy/Enable legacy)** normalmente significa: manter compatibilidade com padrões antigos (b/g/a), junto com alguns mais novos.
*   Alguns roteadores chamam “legado” de “misto” — a ideia é a mesma: **compatibilidade maior**, podendo **reduzir eficiência** se existirem dispositivos muito antigos ativos.

💡 **Analogia:** modo misto é como uma sala onde entram pessoas com celulares modernos e antigos; funciona para todos, mas você às vezes precisa “falar mais devagar” para incluir os mais antigos.

***

3️⃣ Como adiciono novos dispositivos? (principalmente visitantes)

*   O jeito como você usa a rede define **quem deve ter acesso** e **a quê**.
*   Muitos roteadores oferecem **rede de convidado (Guest Network)**:
    *   cria um **SSID separado**
    *   dá acesso à **Internet**
    *   e normalmente **bloqueia** acesso aos seus dispositivos internos (PC, impressora, arquivos, câmeras, etc.)

✅ Isso é excelente para:

*   visitas
*   prestadores de serviço
*   dispositivos temporários

💡 **Analogia:** rede de convidado é como um “salão de festas” do condomínio: o visitante pode entrar e usar a área comum (Internet), mas não entra no seu apartamento (sua rede interna).

***

4️⃣ Segurança: o que realmente protege (e o que não protege)

*   **Ocultar o SSID** (desligar broadcast) só dificulta um pouco a descoberta para usuários comuns, mas **não é proteção forte** por si só.
*   O que realmente restringe acesso é:
    *   **WPA2 ou superior** (ideal: WPA3 quando disponível)
    *   senha forte (longa, difícil de adivinhar)
    *   evitar padrões antigos de segurança

💡 **Analogia:** tirar a placa da porta (ocultar SSID) não impede invasão. O que protege é a **fechadura forte** (WPA2/WPA3 + senha boa).

***

🧩 Conceito Fundamental

Antes de configurar, pense em três decisões que “definem o destino” da sua rede:

1.  **Identidade**: SSID (nome) — deve ser neutro e não revelar detalhes
2.  **Compatibilidade x desempenho**: modo de rede (padrões 802.11) — misto/legado para compatibilidade, modo mais moderno para performance
3.  **Controle de acesso**: rede de convidado — separa visitantes da sua rede principal e aumenta segurança

***

📌 Em resumo

*   **SSID visível** pode expor informações; evite colocar marca/modelo do roteador ou dados pessoais.
*   **Modo de rede** decide quem conecta e o desempenho:
    *   se todos suportam padrões modernos, melhor manter a rede moderna
    *   se há dispositivos antigos, use modo misto/legado para compatibilidade
*   **Rede de convidado** é a forma prática de permitir visitantes com acesso só à Internet.
*   **Segurança real** vem de **WPA2/WPA3 + senha forte**, não de “ocultar SSID”.

***

**4.4.3** Configuração de Roteador e Cliente sem fio

🎯 Ideia Principal

Você vai montar e configurar, no **Packet Tracer**, uma **rede doméstica típica** conectada a um **ISP a cabo**: ligar fisicamente os equipamentos (TV + modem + roteador + PCs), configurar o **roteador sem fio** (DHCP, senha de admin, Wi‑Fi 2,4 GHz com segurança) e depois **testar a conectividade** acessando um servidor (skillsforall.srv).

***

1️⃣ Montagem física (cabos e conexões) — “quem liga em quem”

A atividade começa montando o “caminho” do sinal:

1.1) Cabo coaxial (TV e modem no mesmo sinal do provedor)

*   Use **coaxial** para ligar o **cable splitter (divisor)** à TV e ao cable modem:
    *   **Splitter → Cable Modem** (porta coaxial no splitter → Port 0 no modem)
    *   **Splitter → TV** (porta coaxial no splitter → porta coaxial da TV)

✅ Resultado esperado: você consegue **ligar a TV** e ver imagem (simulando o sinal do provedor chegando).

💡 **Analogia:** o splitter é como um “T” no encanamento: o mesmo fluxo (sinal do cabo) é dividido para dois destinos (TV e modem).

1.2) Cabos Ethernet (cobre straight-through) — Internet para dentro da casa

*   **Cable Modem → Wireless Router (porta Internet/WAN)**
    *   Use **straight-through** da porta Ethernet do modem para a porta **Internet** do roteador.
*   **Office PC → Wireless Router (porta LAN)**
    *   Use **straight-through** do **FastEthernet0** do PC para uma porta **LAN** do roteador (ex.: GigabitEthernet 1).
*   O vídeo pede para você conectar o **Bedroom PC** sozinho (mesma lógica: PC → porta LAN do roteador).

💡 **Analogia:**

*   Modem = “tradutor” do provedor para Ethernet
*   Porta **Internet/WAN** do roteador = “entrada da rua”
*   Portas **LAN** = “tomadas internas” da casa

***

2️⃣ Endereçamento IP (DHCP) — fazer o PC “pegar IP sozinho”

Antes de abrir o roteador no navegador, você garante que o PC está com IP certo:

*   No **Office PC**:
    *   Desktop → **IP Configuration**
    *   Troque de **Static** para **DHCP**
*   Se não pegar IP rápido, use **Fast Forward Time** para acelerar.

✅ Anote o **gateway padrão** recebido: **192.168.0.1** (é o IP do roteador no cenário).

💡 **Analogia:** DHCP é como a portaria distribuindo “número de apartamento” (IP), “rua do condomínio” (máscara) e “saída para a cidade” (gateway) automaticamente.

***

3️⃣ Acessar o roteador pelo navegador (administração)

Com o gateway em mãos:

*   No **Office PC**: Desktop → **Web Browser**
*   Digite: `http://192.168.0.1`
*   Login padrão do roteador do Packet Tracer:
    *   **usuário:** `admin`
    *   **senha:** `admin`

💡 **Analogia:** é como entrar no “painel do síndico” do condomínio para configurar regras da rede.

***

4️⃣ Ajustes importantes no roteador (Setup e Administration)

4.1) Limitar número de usuários DHCP para 10

*   Na aba **Setup**, ajuste para que o DHCP permita **até 10 usuários**.
*   Clique em **Save Settings** (sempre que mudar algo).

⚠️ Observação prática: mexer no DHCP enquanto você está conectado por DHCP pode fazer você “perder a conexão” momentaneamente. Se isso acontecer:

*   reabra `192.168.0.1` no navegador
*   e, se precisar, **renove o IP** (ou use Fast Forward Time no Packet Tracer)

💡 **Analogia:** é como alterar as regras da portaria enquanto você ainda está usando o crachá que a portaria te deu — às vezes precisa “emitir de novo”.

4.2) Trocar a senha padrão do roteador (admin)

*   Vá em **Administration**
*   Troque a senha do admin para: **`MyPassword1!`**
*   Clique em **Save Settings**
*   Faça login de novo com:
    *   usuário: `admin`
    *   senha: `MyPassword1!`

💡 **Analogia:** mudar a senha padrão é trocar a “chave do portão” — essencial para não deixar tudo no padrão de fábrica.

***

5️⃣ Configurar o Wi‑Fi (2,4 GHz, SSID e segurança)

5.1) Ativar rádio 2,4 GHz e definir nome da rede (SSID)

*   Menu **Wireless**
*   Ative a rede **2,4 GHz**
*   Renomeie o SSID para: **`MyHome`**
*   Clique em **Save Settings**

5.2) Configurar segurança WPA2-Personal e senha do Wi‑Fi

*   Submenu **Wireless Security**
*   Selecione **WPA2-Personal**
*   Defina a chave/senha (passphrase) como: **`MyPassphrase1!`**
*   Clique em **Save Settings**

💡 **Analogia:**

*   SSID = nome do “condomínio Wi‑Fi”
*   WPA2 + senha = a “fechadura” e a “chave” para entrar

***

6️⃣ Conectar o laptop no Wi‑Fi e pegar IP (cliente sem fio)

6.1) Conectar na rede Wi‑Fi

*   Laptop → Desktop → **PC Wireless**
*   Aba **Connect** → **Connect**
*   Informe a chave: **`MyPassphrase1!`**
*   Conecte e confira em **Link Information** a mensagem:
    *   “You have successfully connected to the access point.”

6.2) Confirmar IP via DHCP

*   Laptop → Desktop → **IP Configuration**
*   Ele deve receber um IP na rede **192.168.0.x**
*   Se demorar, use **Fast Forward Time**

💡 **Analogia:** primeiro você entra no condomínio (Wi‑Fi), depois a portaria te entrega um número de apartamento (IP).

***

7️⃣ Testar conectividade (prova final)

*   No Laptop: Desktop → **Web Browser**
*   Acesse: `skillsforall.srv`
*   Se estiver lento para “convergir”, use **Fast Forward Time**
*   Você deve ver a mensagem: **“welcome to skills for all”**

✅ No final, sua atividade deve marcar **100%**.

*   Se não marcar, clique em **Check Results** para ver o que faltou.

***

🧩 Conceito Fundamental

Você montou uma rede completa com:

*   **ISP a cabo → splitter → TV + modem**
*   **modem → roteador (WAN/Internet)**
*   **roteador → LAN cabeada (PCs) + WLAN (Wi‑Fi)**
*   **DHCP** distribuindo IP automaticamente
*   **Admin seguro** (senha alterada) e **Wi‑Fi protegido** (WPA2-Personal)

***

📌 Em resumo

*   Conecte **coaxial**: splitter ↔ TV e splitter ↔ modem.
*   Conecte **Ethernet**: modem ↔ WAN do roteador; PCs ↔ LAN do roteador.
*   Coloque o Office PC em **DHCP**, pegue gateway **192.168.0.1** e acesse o roteador.
*   Ajuste DHCP para **10 usuários**, troque senha admin para **MyPassword1!**.
*   Configure Wi‑Fi 2,4 GHz: SSID **MyHome**, segurança **WPA2-Personal**, senha **MyPassphrase1!**.
*   Conecte laptop no Wi‑Fi, pegue IP via DHCP e teste em **skillsforall.srv**.

***

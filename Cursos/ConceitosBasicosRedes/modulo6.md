# Módulo 6

**6.0** Introdução

**6.1.1** Tipos de Midia de Rede

🎯 Ideia Principal

**Mídia de rede** é o “caminho” por onde os dados viajam. Esse caminho pode ser **sem fio (pelo ar, usando ondas de rádio)** ou **com fio**, usando **cobre** (par trançado e coaxial) ou **fibra óptica** (luz). Cada tipo existe porque tem vantagens diferentes em **alcance**, **velocidade**, **custo** e **resistência a interferência**.

***

1️⃣ O que é “mídia de rede” (e por que ela importa)

*   A mídia fornece a **conectividade** e o **trajeto** para a comunicação acontecer.
*   Mesmo quando é “sem fio”, ainda existe um meio: **o ar**, por onde passam **ondas eletromagnéticas** (rádio).

💡 **Analogia:** mídia é como a “estrada” por onde o tráfego (dados) passa. Pode ser uma estrada física (cabos) ou uma “estrada no ar” (Wi‑Fi).

***

2️⃣ Sem fio (pelo ar)

*   Muitas conexões atuais usam **Wi‑Fi** (ou outros rádios) e viajam pelo ar.
*   Não há cabo, mas existem **sinais de rádio** carregando os bits.

💡 **Analogia:** é como conversar por “rádio”: você não vê o caminho, mas a voz (dados) viaja no ar.

***

3️⃣ Cabo de par trançado (UTP) — o mais comum em Ethernet

*   O tipo mais comum em redes Ethernet é o **UTP (Unshielded Twisted Pair — par trançado não blindado)**.
*   Ele tem **8 fios**, organizados em **4 pares** trançados.
*   O trançamento ajuda a reduzir **interferência elétrica** e “vazamento” de sinal.
*   Os conectores usados em cabos Ethernet são os conectores padrão de rede — no dia a dia muita gente chama de **RJ‑45**, e esse formato é o usado para conectar em **placa de rede (NIC)**, **switch** e **roteador**.

✅ Ponto importante do vídeo:

*   Os conectores precisam ser **bem crimpados/montados** e seguir **padrões**; se o conector ficar mal feito, a rede pode ficar instável ou nem funcionar.

💡 **Analogia:** UTP é como uma estrada com **faixas bem organizadas** (pares). Se a “ponte” (conector) for mal construída, o tráfego falha.

***

4️⃣ Cabo coaxial — muito usado em TV a cabo e alguns acessos ao provedor

*   O coaxial costuma ser conhecido porque é comum em **TV a cabo** e em certas conexões de Internet a cabo até o modem.
*   Estrutura típica:
    *   **um núcleo central de cobre (sólido)** por onde o sinal passa
    *   uma camada isolante ao redor
    *   uma **malha metálica de blindagem** para reduzir interferência eletromagnética
*   Pode usar conectores diferentes, como:
    *   **BNC** (comum em alguns usos específicos e ambientes)
    *   **conector tipo F** (bem comum em TV a cabo)

💡 **Analogia:** coaxial é como um “fio dentro de um escudo”: o núcleo leva a mensagem e a blindagem ajuda a proteger contra “barulho” elétrico externo.

***

5️⃣ Fibra óptica — luz, longas distâncias e alta capacidade

*   Fibra óptica é feita de **vidro ou plástico** e transporta dados como **pulsos de luz**.
*   Ela tem um núcleo e camadas ao redor que ajudam a **guiar/refletir** a luz internamente.
*   Vantagens destacadas:
    *   **não sofre interferência eletromagnética** como cabos de cobre (porque não conduz eletricidade)
    *   alcança **distâncias muito maiores** com bom desempenho
    *   suporta **altas velocidades** e tem grande capacidade (muita informação por segundo)
*   Existem diferentes tipos de fibra e equipamentos ópticos, o que dá flexibilidade para vários cenários e velocidades.

💡 **Analogia:** fibra é como uma “autoestrada de luz”: passa muita informação, muito rápido, e por longas distâncias, sem o “barulho” elétrico que atrapalha o cobre.

***

🧩 Conceito Fundamental

Para os dados viajarem, os bits precisam virar **sinais físicos**:

*   **eletricidade** (no cobre)
*   **luz** (na fibra)
*   **ondas de rádio** (no ar/sem fio)

Cada mídia tem um “melhor uso”:

*   **UTP (Ethernet)**: muito comum dentro de casas e empresas (custo/instalação simples)
*   **Coaxial**: muito usado para TV a cabo e alguns trechos de acesso ao provedor
*   **Fibra**: ideal para **longas distâncias**, alta velocidade e alta confiabilidade

***

📌 Em resumo

*   **Mídia de rede** é o caminho da comunicação: cabo ou ar.
*   **UTP (par trançado)** é o mais comum em Ethernet: 8 fios, 4 pares, depende de conectores bem montados.
*   **Coaxial** tem núcleo central + blindagem: comum em TV a cabo e alguns acessos.
*   **Fibra óptica** usa luz: alta velocidade, longas distâncias e praticamente imune a interferência eletromagnética.

***

**6.1.2** Três tipos de Mídia

🎯 Ideia Principal

Em redes, os dados sempre precisam de um **meio (mídia)** para viajar da origem até o destino. Nas redes modernas, esse “caminho” quase sempre cai em **três tipos de mídia**: **cobre (impulsos elétricos)**, **fibra óptica (pulsos de luz)** e **sem fio (ondas eletromagnéticas moduladas)**.

***

1️⃣ O que significa “mídia” na rede

*   **Mídia** é o **canal** por onde a mensagem passa (o “caminho físico” ou o “caminho pelo ar”).
*   Ela é o que permite transformar bits (0 e 1) em algo que **consiga viajar** até o outro lado.

💡 **Analogia:** mídia é como o “meio de transporte” da informação: pode ser **rua**, **ferrovia** ou **avião**. A mensagem é a mesma, só muda como ela viaja.

***

2️⃣ Três tipos de mídia mais comuns

2.1) Fios de metal (cobre) dentro de cabos

*   Aqui os dados viram **impulsos elétricos** (variações de voltagem/corrente).
*   É o caso típico do **cabo Ethernet (par trançado)** e também do **coaxial** em alguns cenários.

💡 **Analogia:** é como acender e apagar uma luz muito rápido (pulsos). O padrão desses “liga/desliga” representa os bits.

***

2.2) Fibras de vidro ou plástico (fibra óptica)

*   Aqui os dados viram **pulsos de luz** (luz “pisca” em padrões).
*   Muito usada quando você precisa de **alta capacidade** e **longas distâncias**.

💡 **Analogia:** é como mandar mensagens com um “laser” dentro de um tubo: rápido, eficiente e com pouco “barulho” no caminho.

***

2.3) Transmissão sem fio (wireless)

*   Aqui os dados viajam pelo ar como **ondas eletromagnéticas** (ex.: rádio).
*   Para carregar informação, a rede altera características da onda (isso é a **modulação**).
*   Exemplo típico: **Wi‑Fi**, **Bluetooth**, **4G/5G**.

💡 **Analogia:** é como uma estação de rádio: a informação “pega carona” na onda que se espalha pelo ar.

***

🧩 Conceito Fundamental

Bits (0 e 1) não “andam sozinhos”. Eles precisam virar um **sinal físico**:

*   **eletricidade** no cobre,
*   **luz** na fibra,
*   ou **ondas** no ar.

A mídia é o que define **qual tipo de sinal** você vai usar para transportar os dados.

***

📌 Em resumo

*   **Mídia** = caminho por onde a mensagem viaja na rede.
*   Três tipos principais:
    *   **Cobre** → dados em **impulsos elétricos**
    *   **Fibra óptica** → dados em **pulsos de luz**
    *   **Sem fio** → dados em **ondas eletromagnéticas moduladas**
*   A informação é a mesma; o que muda é **como ela é transportada**.

***

**6.1.3** Cabos de Rede Comuns

🎯 Ideia Principal

Os cabos de rede mais comuns para transportar dados são **par trançado**, **coaxial** e **fibra óptica**. Eles fazem a mesma “missão” (levar dados de um ponto ao outro), mas mudam no **material**, no **tipo de sinal** (eletricidade ou luz) e no **melhor uso** (casa, TV a cabo, longas distâncias, alta velocidade).

***

1️⃣ Cabo de Par Trançado (Twisted Pair)

*   É o cabo mais comum em redes **Ethernet** (as LANs do dia a dia).
*   Ele é formado por **pares de fios** torcidos entre si para reduzir **interferência** (ruído elétrico).
*   Os fios são **coloridos** para facilitar identificar as pontas corretas: geralmente, em cada par, um fio é **cor sólida** e o outro é **branco com listra** da mesma cor.

✅ **Por que é tão usado?**

*   Porque Ethernet é a base da maioria das redes locais, então esse cabo virou o “padrão do cotidiano”.

💡 **Analogia:** é como **duas pistas enroladas** juntas para reduzir “barulho” do ambiente. Quanto melhor organizado o caminho, menos a mensagem se perde no ruído.

***

2️⃣ Cabo Coaxial (Coax)

*   Foi um dos primeiros cabos usados em redes e continua muito comum em:
    *   **TV a cabo** (empresas de cabo)
    *   **sistemas de comunicação via satélite** (ligando componentes do sistema)
*   Estrutura típica:
    *   um **núcleo de cobre rígido** no centro (por onde o sinal passa)
    *   uma camada de **isolamento**
    *   uma **malha metálica** (blindagem contra interferência)
    *   uma capa externa de proteção
*   É usado como **linha de transmissão de alta frequência**, suportando sinais de **alta frequência** e **banda larga**.

💡 **Analogia:** é como um “fio dentro de um escudo”: o sinal viaja pelo núcleo central e a blindagem ajuda a proteger contra interferência.

***

3️⃣ Cabo de Fibra Óptica (Fiber)

*   Usa **vidro ou plástico** e transmite dados como **pulsos de luz**, não como eletricidade.
*   Principais vantagens:
    *   **altíssima capacidade** (muita informação por segundo)
    *   **longas distâncias** com boa qualidade
    *   não sofre interferência eletromagnética como cabos de cobre

💡 **Analogia:** é como uma **autoestrada de luz**: muito rápida e eficiente para viagens longas, sem o “barulho elétrico” que atrapalha o cobre.

***

🧩 Conceito Fundamental

Os cabos diferem principalmente pelo **tipo de sinal** que carregam e pela **proteção contra interferência**:

*   **Par trançado** → impulsos elétricos em pares torcidos (bom para LAN/Ethernet do dia a dia).
*   **Coaxial** → impulsos elétricos em um núcleo central com blindagem forte (muito usado em TV a cabo e RF).
*   **Fibra óptica** → pulsos de luz (melhor para longas distâncias e altas velocidades).

***

📌 Em resumo

*   **Par trançado**: o mais comum em Ethernet/LAN; pares torcidos reduzem interferência; cores ajudam a identificar os fios.
*   **Coaxial**: núcleo de cobre rígido + isolamento + blindagem; usado em TV a cabo e sistemas satelitais; bom para altas frequências.
*   **Fibra óptica**: luz em vidro/plástico; grande capacidade, longa distância e alta resistência a interferências.

***

# Módulo 10

**10.0** Introdução

**10.1** Problemas do IPv4

**10.1.1** A Necessidade do IPv6

🎯 Ideia Principal

O **IPv6** existe porque o **IPv4 não tem endereços suficientes** para o crescimento da Internet (celulares, provedores, serviços e principalmente **IoT**). Além de oferecer um espaço de endereços **muito maior (128 bits)**, o IPv6 também melhora partes do funcionamento da rede, reduz a dependência de **NAT** e traz recursos mais modernos para configuração e operação.

***

1️⃣ Por que o IPv4 “está acabando”

*   O IPv4 tem **32 bits**, então o total teórico é de cerca de **4,3 bilhões** de endereços.
*   Isso parecia muito no passado, mas hoje não dá conta do volume de:
    *   smartphones
    *   redes domésticas e corporativas
    *   serviços em nuvem
    *   dispositivos IoT (sensores, câmeras, carros, eletrodomésticos etc.)

💡 **Analogia:** é como ter números de telefone limitados em uma cidade que cresceu demais — chega uma hora que não dá mais para “criar novos números” dentro daquele padrão.

***

2️⃣ Como a Internet “segurou as pontas” com IPv4 (e por que isso tem limites)

*   A combinação **endereços privados + NAT** permitiu que muitas redes internas funcionassem usando poucos IPs públicos.
*   Isso atrasou bastante o esgotamento, mas tem custos:
    *   complica conexões **ponto a ponto** (P2P)
    *   pode quebrar ou dificultar alguns aplicativos
    *   aumenta complexidade (tradução de endereços e portas)
    *   pode adicionar **latência** e dificultar rastreamento/diagnóstico

💡 **Analogia:** NAT é como ter um prédio inteiro usando **um único endereço** na rua, e a portaria (NAT) decide para qual apartamento entregar cada retorno. Funciona, mas dá trabalho e nem todo serviço gosta disso.

***

3️⃣ O que o IPv6 resolve (o “pulo do gato”)

*   O IPv6 foi projetado como sucessor do IPv4 com:
    *   **endereços de 128 bits** → um espaço gigantesco de endereços (o suficiente para crescer por muito tempo)
    *   melhorias para o funcionamento e expansão da rede

💡 **Analogia:** se o IPv4 é um estacionamento pequeno que lotou, o IPv6 é um estacionamento com espaço “sobrando” por décadas.

***

4️⃣ IPv6 não é só “mais endereços” (tem melhorias no pacote)

Quando a IETF desenvolveu o IPv6, também aproveitou para melhorar coisas do IPv4. Um exemplo citado no material:

4.1) ICMPv6 (mais importante no IPv6 do que muita gente imagina)

*   No IPv6, o **ICMPv6** não é só “mensagens de erro”: ele faz parte de mecanismos essenciais do funcionamento da rede, como:
    *   **descoberta de vizinhos** (resolver endereços na rede local)
    *   **autoconfiguração** (o host conseguir se configurar de forma automática em muitos cenários)

💡 **Analogia:** no IPv4, muita coisa era “remendada” por serviços separados (como ARP e DHCP). No IPv6, várias funções ficam mais integradas ao ecossistema do protocolo.

***

5️⃣ Esgotamento regional e migração (por que a mudança virou inevitável)

*   O crescimento da Internet em várias regiões aumentou a pressão por endereços IPv4.
*   Em muitas regiões, a disponibilidade de IPv4 público novo ficou **muito limitada**, o que acelera a adoção do IPv6.

💡 **Analogia:** é como uma cidade onde quase não há mais terrenos para construir — você precisa mudar o modelo (ou expandir para um “novo mapa”) para continuar crescendo.

***

6️⃣ Provedores móveis e grandes serviços puxam a adoção

*   Redes móveis tendem a liderar a migração porque:
    *   têm milhões de clientes
    *   precisam de escala
    *   sofrem mais com limitações do IPv4 + NAT em massa
*   Grandes provedores de conteúdo e serviços também suportam IPv6 para melhorar alcance e eficiência.

💡 **Analogia:** quem tem “multidão” (operadoras e grandes plataformas) sente o problema primeiro — então são os primeiros a trocar a infraestrutura.

***

7️⃣ Internet das Coisas (IoT): o “acelerador” do IPv6

*   A Internet atual não é só PCs e e-mail.
*   A IoT coloca na rede:
    *   sensores
    *   câmeras
    *   carros
    *   equipamentos biomédicos
    *   eletrodomésticos
    *   sistemas ambientais e industriais
*   Isso aumenta muito a demanda por endereços e conectividade.

💡 **Analogia:** antes a Internet era uma “cidade de computadores”. Agora virou uma “cidade de coisas” — postes, semáforos, relógios, carros e casas conectadas.

***

🧩 Conceito Fundamental

*   **IPv4** tem espaço limitado de endereços; **NAT** ajudou, mas traz limitações e complexidade.
*   **IPv6** oferece um espaço enorme de endereços e moderniza aspectos do funcionamento da rede, facilitando o crescimento contínuo — especialmente com **IoT** e mobilidade.

***

📌 Em resumo

*   IPv4 está ficando sem endereços públicos disponíveis para crescer com a Internet moderna.
*   NAT atrasou o problema, mas cria limitações e complexidade.
*   IPv6 usa **128 bits**, resolve o problema de escala e traz melhorias (como mecanismos importantes via **ICMPv6**).
*   Com o crescimento global, redes móveis e serviços grandes, e a explosão da IoT, a transição para IPv6 se tornou necessária.

***

**10.1.2** Coexistência entre IPv4 e IPv6

🎯 Ideia Principal

A migração para IPv6 não acontece “num dia marcado”. Por um bom tempo, **IPv4 e IPv6 vão coexistir**, e por isso existem **técnicas de transição** para permitir comunicação enquanto nem tudo é IPv6. As três categorias principais são: **Pilha Dupla**, **Tunelamento** e **Conversão (NAT64)**. O objetivo final é chegar em **IPv6 nativo ponta a ponta** (de origem até destino), usando tunelamento/tradução só quando necessário.

***

1️⃣ Por que IPv4 e IPv6 vão coexistir por anos

*   Não dá para trocar toda a Internet de uma vez: existem milhões de redes, equipamentos, provedores e serviços.
*   Por isso, a transição é gradual, e a IETF definiu métodos para manter tudo funcionando durante a mudança.

💡 **Analogia:** é como trocar a frota de carros de gasolina por elétricos: por um tempo, os dois coexistem, e você precisa de “pontes” (adaptadores e infraestrutura) para todo mundo continuar rodando.

***

2️⃣ Pilha Dupla (Dual Stack) — “falar as duas línguas”

O que é

*   Dispositivos e redes rodam **IPv4 e IPv6 ao mesmo tempo**, no mesmo segmento.
*   O dispositivo escolhe qual usar conforme o destino (se o serviço tiver IPv6, usa IPv6; se não tiver, usa IPv4).

Por que é a melhor opção (quando dá)

*   É considerada **IPv6 nativo**, porque você realmente tem IPv6 na rede e consegue acessar conteúdo IPv6 diretamente.
*   Mantém compatibilidade total com o “mundo IPv4” enquanto o IPv6 cresce.

💡 **Analogia:** é ser bilíngue: você fala português (IPv4) e inglês (IPv6). Se a outra pessoa só fala um deles, você ainda consegue se comunicar.

***

3️⃣ Tunelamento (Tunneling) — “IPv6 viajando dentro de IPv4”

O que é

*   É transportar pacotes IPv6 através de uma infraestrutura que ainda é IPv4.
*   Você **encapsula** o pacote IPv6 dentro de um pacote IPv4 (como colocar uma carta dentro de outro envelope) para atravessar um trecho IPv4.

Quando faz sentido

*   Quando você precisa conectar “ilhas” IPv6 usando um “mar” IPv4 no meio (por exemplo, entre dois pontos que suportam IPv6, mas o caminho entre eles ainda não suporta).

Ponto importante do texto

*   Tunelamento é “solução de transição”, não o objetivo final.

💡 **Analogia:** é como levar uma encomenda internacional (IPv6) dentro de um caminhão nacional (IPv4) para cruzar um trecho onde ainda não existe logística internacional.

***

4️⃣ Conversão (Translation) — NAT64: IPv6 ↔ IPv4

O que é

*   **NAT64** permite que um dispositivo **IPv6-only** fale com um serviço **IPv4-only**.
*   Ele traduz um pacote IPv6 em IPv4 (e a resposta volta traduzida de IPv4 para IPv6).

Quando é usado

*   Quando você tem clientes/segmentos já em **IPv6 somente**, mas precisa acessar coisas que ainda são **IPv4**.
*   É parecido com a ideia do NAT do IPv4, mas aqui é **tradução entre protocolos diferentes**.

💡 **Analogia:** é como um tradutor simultâneo numa conversa:

*   você fala em IPv6, o tradutor converte para IPv4;
*   a resposta em IPv4 volta e o tradutor converte para IPv6.

***

5️⃣ Observação do módulo (bem direta)

*   **Tunelamento e tradução são “ponte”**, usados quando necessário.
*   O “ideal” é **IPv6 nativo ponta a ponta** (origem → destino) para reduzir complexidade e dependência de mecanismos intermediários.

💡 **Analogia:** ponte é ótima para atravessar o rio enquanto a estrada principal não fica pronta. Mas o melhor é ter a estrada completa e direta.

***

🧩 Conceito Fundamental

As três estratégias existem para manter a Internet funcionando durante a transição:

*   **Pilha Dupla (melhor cenário):** IPv4 e IPv6 juntos, escolha automática.
*   **Tunelamento:** atravessa um trecho IPv4 carregando IPv6 “por dentro”.
*   **NAT64 (conversão):** conecta IPv6-only com IPv4-only, traduzindo no meio.

Objetivo final: **IPv6 nativo** de ponta a ponta.

***

📌 Em resumo

*   Não existe “data única” para migrar: IPv4 e IPv6 vão coexistir por anos.
*   Métodos de transição:
    1.  **Pilha Dupla:** roda IPv4 + IPv6 simultaneamente (preferível).
    2.  **Tunelamento:** IPv6 encapsulado em IPv4 para atravessar rede IPv4.
    3.  **Conversão (NAT64):** traduz IPv6 ↔ IPv4 para compatibilidade.
*   Tunelamento e tradução devem ser usados **só quando necessário**, com foco em **IPv6 nativo**.

***

**10.2** Endereçamento IPv6

**10.2.1** Sistema de numeração hexadecimal

🎯 Ideia Principal

Antes de entender endereços **IPv6**, você precisa conhecer o **sistema hexadecimal (base 16)**, porque os IPv6 são escritos em **hex** para ficar muito mais fácil representar números gigantes (IPv6 tem 128 bits). Em hexadecimal, usamos **0–9** e **A–F**.

***

1️⃣ O que é hexadecimal (base 16)

*   É um sistema numérico que usa **16 símbolos**:  
    **0 1 2 3 4 5 6 7 8 9 A B C D E F**
*   As letras representam valores:
    *   **A = 10**
    *   **B = 11**
    *   **C = 12**
    *   **D = 13**
    *   **E = 14**
    *   **F = 15**

💡 **Analogia:** se o decimal (base 10) é como contar com **10 dedos**, o hexadecimal é como contar com **16 “dedos imaginários”** — ele “compacta” mais informação em menos caracteres.

***

2️⃣ Por que IPv6 usa hexadecimal

*   O IPv6 é muito grande (128 bits).
*   Escrever 128 bits em binário seria enorme e ilegível.
*   O hexadecimal é perfeito porque **cada dígito hexadecimal representa exatamente 4 bits**.

✅ Regra de ouro:

*   **1 hex = 4 bits**
*   Então **4 hex = 16 bits**

💡 **Analogia:** é como trocar “soletrar letra por letra” por usar “abreviações”: você diz a mesma coisa com menos escrita.

***

3️⃣ Onde entram os “hextetos” no IPv6

*   Um endereço IPv6 é normalmente escrito em **8 grupos** separados por `:`
*   Cada grupo tem **4 dígitos hex** (ou seja, **16 bits**).
*   Cada grupo desses é chamado de **hexteto**.

Exemplo (formato completo, com 8 hextetos):

```txt
2001:0db8:0000:0000:0000:ff00:0042:8329
```

💡 **Analogia:** se o IPv4 é como um endereço com 4 “blocos”, o IPv6 é um endereço com **8 blocos**, e cada bloco é escrito em hexadecimal para caber numa linha.

***

🧩 Conceito Fundamental

O hexadecimal é usado no IPv6 porque deixa possível representar **128 bits** de forma legível:

*   **hex compacta** a escrita
*   e ainda conversa bem com o mundo binário, porque **4 bits ↔ 1 hex**.

***

📌 Em resumo

*   Hexadecimal é **base 16**: `0–9` e `A–F`.
*   **A=10, B=11, C=12, D=13, E=14, F=15**.
*   IPv6 usa hex porque **1 dígito hex = 4 bits**, tornando endereços enormes muito mais fáceis de escrever e ler.
*   IPv6 é mostrado em **hextetos** (grupos), separados por `:`.

***

**10.2.2** Formatos do endereçamento IPv6

🎯 Ideia Principal

Endereços **IPv6** são muito maiores que IPv4 (**128 bits**) e por isso são escritos em **hexadecimal** para ficar legível. Eles aparecem como **8 grupos** separados por `:`. Cada grupo tem **16 bits** (ou seja, **4 dígitos hex**) e é chamado (informalmente) de **hexteto**. O formato “completo” usa **todos os 32 dígitos hex**, mas existem regras para **encurtar** o endereço (você vai ver em seguida no curso).

***

1️⃣ Tamanho e “cara” do IPv6

*   Um endereço IPv6 tem **128 bits**.
*   Como **1 dígito hexadecimal = 4 bits**, então:
    *   **128 bits ÷ 4 = 32 dígitos hex**
*   Por isso um IPv6 completo tem **32 caracteres hexadecimais** (0–9, a–f), sem diferenciar maiúsculas e minúsculas.

💡 **Analogia:** se o IPv4 é como um endereço com 4 blocos (quatro “números”), o IPv6 é um endereço com **8 blocos**, e cada bloco carrega mais informação.

***

2️⃣ Segmentos / Hextetos (16 bits)

*   O IPv6 é separado em **8 segmentos**.
*   Cada segmento tem **16 bits** = **4 dígitos hex**.
*   Esses segmentos são chamados (de forma não oficial) de **hextetos**.

✅ Regrinha que ajuda muito:

*   **1 hexteto = 4 hex = 16 bits**

💡 **Analogia:** pense em hextetos como “pedaços” do endereço, igual aos octetos do IPv4 — só que no IPv6 cada pedaço é maior.

***

3️⃣ Formato preferencial (forma “completa”)

O **formato preferencial** é escrever o IPv6 com todos os dígitos, assim:

```txt
x:x:x:x:x:x:x:x
```

Onde cada `x` é um hexteto com **exatamente 4 dígitos hex**.

Exemplo (completo, 8 hextetos × 4 hex = 32 hex):

```txt
2001:0db8:0000:0000:0000:ff00:0042:8329
```

✅ “Preferencial” aqui significa: **não encurtar** nada, manter os 32 dígitos.

💡 **Analogia:** é como escrever um nome completo com todos os sobrenomes — não é o jeito mais curto, mas é o mais “sem ambiguidade”.

***

4️⃣ Maiúsculas vs minúsculas (tanto faz)

*   IPv6 **não diferencia** maiúsculas e minúsculas.
*   Então isso é equivalente:

```txt
2001:db8:abcd::1
2001:DB8:ABCD::1
```

💡 **Analogia:** é como CPF com ou sem pontuação: o valor é o mesmo, só muda a forma de escrever.

***

5️⃣ Por que existe “redução” (adiantando o próximo assunto)

O formato completo é correto, mas pode ficar longo. Por isso existem **duas regras** para reduzir o número de caracteres na escrita do IPv6 (o texto só menciona que elas existem — normalmente o próximo tópico explica quais são).

💡 **Analogia:** igual escrever “Rua Professor Antônio Carlos, número 0007” vs “Prof. Antônio Carlos, 7”. A informação pode ser a mesma, só fica mais curta.

***

🧩 Conceito Fundamental

*   IPv6 = **128 bits**
*   Representação: **hexadecimal**
*   Estrutura: **8 hextetos**, separados por `:`
*   **Formato preferencial**: escreve tudo (32 hex), 4 hex por hexteto
*   **Maiúsculas/minúsculas não mudam** o endereço

***

📌 Em resumo

*   Endereços IPv6 são escritos como **8 grupos** `x:x:x:x:x:x:x:x`.
*   Cada grupo tem **16 bits = 4 hex** (um **hexteto**).
*   O formato preferencial usa **todos os 32 dígitos hex**.
*   IPv6 pode ser escrito com letras **maiúsculas ou minúsculas** sem diferença.

***

**10.2.3** Regras de Formatação IPv6

🎯 Ideia Principal

Endereços **IPv6** (128 bits) são escritos em **hexadecimal** e podem ficar longos. Por isso existem **duas regras oficiais de formatação** para encurtar a escrita sem perder informação:

1.  **remover zeros à esquerda** em cada hexteto;
2.  **substituir uma sequência contínua de hextetos “0000” por `::`** (apenas uma vez no endereço).

***

1️⃣ IPv6 em resumo (estrutura básica)

*   IPv6 tem **128 bits**.
*   É escrito como **32 dígitos hex** (porque **1 dígito hex = 4 bits**).
*   Ele aparece em **8 grupos** separados por `:`.
*   Cada grupo tem **4 dígitos hex** = **16 bits** e é chamado (informalmente) de **hexteto**.
*   **Maiúsculas e minúsculas são equivalentes** (`ABCD` = `abcd`).

💡 **Analogia:** IPv6 é como um endereço com **8 blocos**; o hex é uma forma “compacta” de representar bits, como abreviar um texto longo.

***

2️⃣ Regra #1 — Remover **zeros à esquerda** (leading zeros)

Você pode **omitir apenas os zeros do começo** de um hexteto.

✅ Exemplos (correto):

*   `00ab` → `ab`
*   `0a00` → `a00`
*   `0000` → `0`  *(um hexteto “todo zero” vira apenas `0`)*

⚠️ Importante: **não pode remover zeros à direita**, porque isso muda o valor e gera ambiguidade.

*   `ab00` **não** pode virar `ab` (seria outro número)

💡 **Analogia:** é como tirar “zeros inúteis” do começo de um número: `0007` vira `7`, mas `7000` não vira `7`.

***

3️⃣ Regra #2 — Substituir uma sequência de hextetos “0000” por `::`

Se houver uma sequência **contígua** (colada) de **um ou mais hextetos** iguais a `0000`, você pode substituir essa sequência por **`::`**.

✅ Exemplos (ideia):

*   `2001:0db8:0000:0000:0001:0000:0000:0001`
    *   Regra 1: `2001:db8:0:0:1:0:0:1`
    *   Regra 2 (sequência mais longa de zeros): `2001:db8::1:0:0:1` *(ou melhor ainda, comprimindo a maior sequência)*

📌 Pontos cruciais:

*   **`::` só pode aparecer uma vez** em um endereço IPv6.
    *   Se usar duas vezes, vira impossível saber quantos hextetos “0000” cada `::` representa.
*   O `::` pode aparecer no **meio**, no **início** (`::1`) ou no **fim** (`2001:db8::`).

💡 **Analogia:** `::` é como dizer “aqui tem um trecho repetido de zeros” e pular esse trecho de uma vez — mas você só pode pular **um trecho** para não confundir.

***

4️⃣ Melhor prática quando existem várias sequências de zeros

Se houver mais de uma sequência contígua de hextetos `0000`:

*   Use `::` na **sequência mais longa** (para encurtar mais).
*   Se houver empate (duas sequências com o mesmo tamanho), costuma-se usar `::` na **primeira** sequência (padrão comum).

💡 **Analogia:** se você vai “resumir” um trecho repetido, escolha o **maior trecho** para ganhar mais redução. Se empatar, resuma o primeiro para manter um padrão.

***

5️⃣ Observação importante (um detalhe que confunde muita gente)

*   Um dígito hexadecimal representa **4 bits**.
    *   Por exemplo, `2` em hex = `0010` em binário.
*   Um hexteto (4 hex) representa **16 bits**.

💡 **Analogia:** cada “letrinha/número” do hex é um bloquinho de 4 bits. Quatro bloquinhos formam um hexteto.

***

🧩 Conceito Fundamental

Você pode encurtar IPv6 de forma segura seguindo sempre esta ordem mental:

1.  **Tire zeros à esquerda em cada hexteto**;
2.  **Comprima uma única sequência de hextetos zerados com `::`** (no máximo uma vez).

***

📌 Em resumo

*   IPv6 = 128 bits = 8 hextetos (`x:x:x:x:x:x:x:x`).
*   **Regra 1:** remova **apenas zeros à esquerda** (ex.: `00ab` → `ab`).
*   **Regra 2:** comprima **uma única sequência contígua** de `0000` com `::` (pode aparecer só 1 vez).
*   Se houver várias sequências, use `::` na **mais longa** (se empatar, normalmente na primeira).

***

**10.2.4** Regra 1 - Omitir zeros à esquerda

🎯 Ideia Principal

A **Regra 1 do IPv6** serve para deixar o endereço mais curto: **você pode apagar somente os zeros à esquerda (no começo) de cada hexteto** (cada bloco de 16 bits entre `:`). Isso **não muda o valor** do endereço, só melhora a legibilidade.

***

1️⃣ O que é um hexteto (para entender a regra)

*   Um endereço IPv6 é dividido em **8 blocos** separados por `:`
*   Cada bloco tem **4 dígitos hex** (0–9, A–F) e representa **16 bits**
*   Esse bloco é chamado (informalmente) de **hexteto**

💡 **Analogia:** pense em cada hexteto como um “pedaço” do endereço. A Regra 1 limpa os “zeros inúteis” do começo de cada pedaço.

***

2️⃣ Regra 1 — Omitir zeros **à esquerda**

✅ Você pode remover zeros **somente do início** do hexteto:

*   `01AB` → `1AB`
*   `09F0` → `9F0`
*   `0A00` → `A00`
*   `00AB` → `AB`

📌 Ponto importante: **se o hexteto for `0000`, ele vira `0`** (não pode ficar vazio).

💡 **Analogia:** é como número decimal: `0007` vira `7`. Continua sendo o mesmo valor.

***

3️⃣ O que você **não pode** fazer (para não mudar o endereço)

❌ Não pode remover zeros **à direita** (no final) do hexteto, porque isso **muda o valor**:

*   `AB00` **não** pode virar `AB`
    *   `AB00` e `00AB` são valores diferentes

💡 **Analogia:** `7000` não é a mesma coisa que `7`. Tirar zero do fim muda o número.

***

4️⃣ Como aplicar a regra (passo a passo simples)

Para cada hexteto, faça assim:

1.  Olhe o bloco (ex.: `0003`)
2.  Apague os zeros do começo até sobrar o primeiro dígito “não zero”
3.  Se o bloco era `0000`, deixe **`0`**

Exemplos rápidos:

*   `0003` → `3`
*   `0030` → `30`
*   `0300` → `300`
*   `0000` → `0`

***

5️⃣ O que a tabela da imagem está mostrando (interpretação)

Ela compara duas formas do mesmo endereço:

*   **Preferencial (completo):** todos os hextetos com **4 dígitos**
*   **Sem 0s à esquerda:** cada hexteto aparece “encurtado” removendo zeros do começo

✅ O endereço continua sendo o mesmo — só muda a forma de escrever.

***

🧩 Conceito Fundamental

A Regra 1 é um “encurtamento seguro” porque ela só remove zeros que **não alteram o valor** do hexteto.

*   **Remove zeros à esquerda** ✅
*   **Não remove zeros à direita** ❌
*   **Nunca deixa um hexteto vazio** (se for tudo zero, vira `0`) ✅

***

📌 Em resumo

*   Regra 1 do IPv6 = **remover zeros à esquerda em cada hexteto**.
*   Exemplos: `01AB→1AB`, `09F0→9F0`, `0A00→A00`, `0000→0`.
*   **Nunca remova zeros à direita** (isso muda o endereço).
*   Essa regra só melhora a leitura, sem mudar o significado do IPv6.

***

**10.2.5** Regra 2- Dois pontos duplos

🎯 Ideia Principal

A **Regra 2 do IPv6** permite encurtar ainda mais um endereço: você pode substituir **uma sequência contínua de hextetos “0000”** por **`::` (dois pontos duplos)**. Isso deixa o endereço bem menor, mas tem uma regra crítica: **`::` só pode aparecer uma vez** no mesmo endereço, para não gerar ambiguidade.

***

1️⃣ O que exatamente a Regra 2 faz

*   Ela troca **um ou mais hextetos inteiros “0000”** que estejam **colados um no outro** por **`::`**.
*   “Contínua/contígua” = os `0000` precisam estar **em sequência**, sem interrupção.

✅ Exemplo simples:

*   `2001:0db8:0000:0000:0000:0000:0000:1234`
    *   (aplicando Regra 1 antes, removendo zeros à esquerda) → `2001:db8:0:0:0:0:0:1234`
    *   (Regra 2, sequência grande de zeros) → `2001:db8::1234`

💡 **Analogia:** é como escrever “0000:0000:0000” como “::”. Você está dizendo: “aqui tem um bloco grande de zeros repetidos”.

***

2️⃣ Regra de ouro: `::` só pode ser usado **uma única vez**

*   Se você usasse `::` duas vezes, ninguém saberia quantos hextetos “0000” cada `::` está escondendo.
*   Isso criaria **mais de uma expansão possível**, então o endereço ficaria ambíguo.

💡 **Analogia:** é como escrever um endereço “Rua X, nº \_\_, apto \_\_” com dois campos em branco: dá para preencher de várias formas e ninguém sabe qual é a correta.

***

3️⃣ Melhor prática quando existem **várias sequências** de zeros

Se o endereço tiver mais de uma sequência de `0000`:

*   Use `::` na **sequência mais longa** (encurta mais).
*   Se houver empate (sequências do mesmo tamanho), a prática comum é usar `::` na **primeira** sequência.

💡 **Analogia:** se você vai “abreviar” um trecho repetido, abrevia o maior trecho primeiro para ganhar mais redução.

***

4️⃣ `::` pode aparecer no início, meio ou fim

*   **No início:** `::1` (muito comum)
*   **No meio:** `2001:db8::1`
*   **No fim:** `2001:db8::`

💡 **Analogia:** é como cortar um trecho repetido no começo, meio ou final de um texto — funciona em qualquer posição.

***

5️⃣ Como **expandir** um IPv6 que tem `::` (truque rápido)

Quando você vê `::`, faça assim:

1.  Conte quantos **hextetos aparecem escritos** (os que não são `::`).
2.  Faça: **8 − (quantos hextetos escritos)** = quantos `0000` estão “escondidos” no `::`.
3.  Coloque essa quantidade de `0000` no lugar do `::`.

✅ Exemplo: `2001:db8::1234`

*   Hextetos escritos: `2001`, `db8`, `1234` → **3**
*   Faltam: **8 − 3 = 5** hextetos `0000`
*   Expansão: `2001:0db8:0000:0000:0000:0000:0000:1234`

💡 **Analogia:** você preenche os “blocos faltantes” até completar os 8 blocos do IPv6.

***

6️⃣ Aplicando a Regra 2 nos exemplos do seu material (ideia típica)

Um padrão que aparece muito:

*   `2001:0db8:0000:1111:0000:0000:0000:0200`
    *   Regra 1 → `2001:db8:0:1111:0:0:0:200`
    *   Regra 2 (três hextetos zerados contíguos) → `2001:db8:0:1111::200`

💡 **Analogia:** você “aperta” o trecho grande de zeros em um `::` só.

***

🧩 Conceito Fundamental

*   **Regra 1 (antes):** remove **zeros à esquerda** em cada hexteto.
*   **Regra 2 (agora):** troca **uma sequência contígua de hextetos `0000`** por **`::`**.
*   **`::` só pode aparecer 1 vez**, e a melhor prática é usar no **maior bloco de zeros**.

***

📌 Em resumo

*   `::` representa **um ou mais hextetos 0000 contíguos**.
*   Pode aparecer no começo/meio/fim.
*   **Só pode ser usado uma vez** por endereço (evita ambiguidade).
*   Se houver mais de uma sequência de zeros, use no **maior bloco** (se empatar, normalmente no primeiro).
*   Para expandir, complete até ter **8 hextetos**.

***

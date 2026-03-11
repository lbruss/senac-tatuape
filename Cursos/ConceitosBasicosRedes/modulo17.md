# Módulo 17

**17.0** Introdução

**17.1** Comandos para solução de problemas

**17.1.1** Visão geral dos comandos de solução de problemas

## 🎯 Ideia Principal

Existem **comandos de linha de comando (CLI)** que ajudam a **identificar onde está o problema de rede** (IP errado, DNS quebrado, rota ruim, porta bloqueada, etc.). Eles são como um “**kit de primeiros socorros**” da rede: cada comando verifica uma parte diferente do caminho entre o seu dispositivo e o destino.

***

## 1️⃣ `ipconfig` — ver a configuração de IP (quem você é na rede)

*   Mostra informações como:
    *   **Endereço IP**
    *   **Máscara**
    *   **Gateway padrão**
    *   **DNS**
    *   (em muitos casos) status do **DHCP**
*   Serve para responder rápido:
    *   “Meu PC tem IP?”
    *   “O gateway está certo?”
    *   “O DNS está configurado?”

💡 **Analogia:** é como olhar seu **RG de rede**: “qual é meu endereço e por onde eu saio para a Internet?”

📌 Exemplo comum (Windows):

```bat
ipconfig
ipconfig /all
```

***

## 2️⃣ `ping` — testar conectividade (chega e volta?)

*   Envia mensagens para testar se o destino **responde**.
*   Ajuda a confirmar:
    *   se você alcança o **gateway**
    *   se você alcança um **servidor** (IP específico)
    *   se existe **perda de pacotes** ou latência alta

💡 **Analogia:** é como gritar “**oi!**” e ver se alguém responde “**oi!**”.

📌 Exemplos:

```bash
ping 192.168.1.1      # testar o gateway
ping 8.8.8.8          # testar Internet por IP (sem depender de DNS)
ping www.cisco.com    # testar Internet + DNS (se resolver o nome)
```

***

## 3️⃣ `netstat` — ver conexões e portas (quem está falando com quem)

*   Mostra conexões ativas e portas em uso, como:
    *   **Endereço local + porta**
    *   **Endereço remoto + porta**
    *   **Estado TCP** (LISTENING, ESTABLISHED, etc.)
*   Útil para:
    *   checar se um serviço está **escutando** numa porta
    *   encontrar conexões estranhas/inesperadas
    *   diagnosticar “porta já em uso”

💡 **Analogia:** é como ver um “**painel de ligações**”: quais chamadas estão ativas e quais ramais estão abertos.

📌 Exemplos (Windows):

```bat
netstat -n
netstat -ano
```

***

## 4️⃣ `tracert` — ver o caminho (por onde os pacotes passam)

*   Mostra a **rota** (os “saltos”) até o destino: quais roteadores você atravessa.
*   Ajuda a descobrir:
    *   onde o tráfego está **parando**
    *   se existe um salto com **muito atraso**
    *   se o problema está perto de você ou “mais longe” (no provedor/Internet)

💡 **Analogia:** é como acompanhar a encomenda por “**centros de distribuição**” até chegar no destino.

📌 Exemplo (Windows):

```bat
tracert www.cisco.com
```

> Em alguns sistemas, o comando equivalente é `traceroute`.

***

## 5️⃣ `nslookup` — testar DNS diretamente (nome → IP)

*   Consulta um servidor DNS para descobrir o **IP** de um domínio.
*   Serve para diagnosticar:
    *   “Meu problema é **DNS** ou é a Internet mesmo?”
*   Se o `ping 8.8.8.8` funciona, mas `ping www.cisco.com` não, o suspeito costuma ser DNS.

💡 **Analogia:** é como perguntar para a **agenda telefônica** qual é o número do contato.

📌 Exemplos:

```bash
nslookup www.cisco.com
nslookup www.cisco.com 8.8.8.8   # consultar um DNS específico
```

***

## 🧩 Conceito Fundamental

Esses comandos se complementam porque cada um testa uma “camada” do problema:

*   **`ipconfig`**: “minhas configurações estão corretas?”
*   **`ping`**: “consigo alcançar?”
*   **`tracert`**: “por onde está indo e onde para?”
*   **`nslookup`**: “o DNS está resolvendo nomes?”
*   **`netstat`**: “há conexões/portas abertas e quem está usando?”

***

## 📌 Em resumo

*   **ipconfig** → mostra IP/máscara/gateway/DNS (configuração do host)
*   **ping** → testa comunicação (resposta e perda)
*   **netstat** → lista conexões e portas (estado TCP, portas em uso)
*   **tracert** → mostra rota/saltos até o destino (onde trava)
*   **nslookup** → testa resolução de nomes (DNS)

***

**17.1.2** O comando ipconfig

## 🎯 Ideia Principal

O **ipconfig** é um comando do Windows que mostra (e ajuda a renovar) a **configuração de rede** do computador. Ele é um dos primeiros passos para descobrir por que “não pega IP”, “não tem Internet” ou “não abre sites”.

***

## 1️⃣ `ipconfig` (básico) — ver se o PC tem IP e rota de saída

*   Mostra o essencial da sua configuração atual:
    *   **Endereço IPv4**
    *   **Máscara de sub-rede**
    *   **Gateway padrão**
*   Ajuda a responder rápido:
    *   “Tenho IP válido ou estou sem IP?”
    *   “Meu gateway existe e faz sentido?”

📌 Exemplo:

```bat
ipconfig
```

💡 **Analogia:** é como olhar seu “RG de rede”: quem você é (IP) e qual é a saída do seu bairro (gateway).

***

## 2️⃣ `ipconfig /all` — diagnóstico completo (o raio‑X da rede)

Além do básico, mostra detalhes importantes para troubleshooting:

*   **MAC (Endereço físico)** da placa de rede
*   **DNS** configurados
*   **DHCP habilitado?** (Sim/Não)
*   **Servidor DHCP** que te deu o IP
*   Informações da **concessão (lease)** (quando pegou IP e quando expira)

📌 Exemplo:

```bat
ipconfig /all
```

✅ Isso ajuda muito quando:

*   você está com **DNS errado** (abre IP, mas não abre nome)
*   você quer confirmar se o PC está usando **DHCP** ou IP manual
*   você quer ver se o PC realmente recebeu IP de um **servidor DHCP**

💡 **Analogia:** é como ver o “contrato do aluguel do IP”: quem alugou, por quanto tempo e quais regras vieram junto (gateway/DNS).

***

## 3️⃣ `ipconfig /release` e `ipconfig /renew` — “solta e pega IP de novo” (DHCP)

Esses comandos só fazem sentido quando o PC está configurado para **obter IP automaticamente (DHCP)**.

### 3.1) `ipconfig /release` — libera o IP atual

*   O PC **solta** a concessão DHCP.
*   O adaptador pode ficar temporariamente **sem IPv4**.

📌 Exemplo:

```bat
ipconfig /release
```

### 3.2) `ipconfig /renew` — pede um IP novo ao DHCP

*   O PC faz uma nova solicitação ao servidor DHCP.
*   Pode corrigir casos de IP “travado”, configuração desatualizada ou erro temporário.

📌 Exemplo:

```bat
ipconfig /renew
```

💡 **Analogia:** `/release` é devolver o crachá; `/renew` é ir na portaria pegar um crachá novo.

***

## 4️⃣ Como isso ajuda a encontrar o problema (checklist rápido)

### 4.1) Se depois do `/renew` você **não consegue pegar IP**

Isso geralmente indica um problema em algum destes pontos:

*   **Conexão física / Wi‑Fi**
    *   cabo desconectado, porta errada, Wi‑Fi sem conexão real
    *   verifique luz de link na placa/roteador/switch (quando é cabo)

*   **DHCP inacessível**
    *   roteador/servidor DHCP desligado, travado, sem alcance
    *   ou bloqueio entre seu PC e o DHCP (ex.: VLAN/segmentação incorreta)

*   **Problema no adaptador (NIC) ou driver**
    *   placa desativada, driver com falha, etc.

💡 **Analogia:** se a portaria não está te entregando crachá, ou você não chegou na portaria (sem link), ou a portaria está fora do ar (DHCP), ou seu crachá/identidade está com problema (NIC).

***

## 5️⃣ Dica prática: “IP ok, mas não abre site por nome”

Se o `ipconfig /all` mostra IP e gateway ok, mas você não abre sites, olhe principalmente:

*   **DNS** configurado
*   Faça um teste rápido:
    *   ping em IP (internet sem DNS)
    *   e depois ping por nome (internet + DNS)

Exemplo:

```bat
ping 8.8.8.8
ping www.cisco.com
```

Se o primeiro funciona e o segundo não, o problema costuma ser **DNS**.

***

## 🧩 Conceito Fundamental

*   Sem **IP/máscara/gateway** corretos, o PC não participa da rede (nem local, nem Internet).
*   O `ipconfig` mostra isso.
*   O `ipconfig /all` mostra também **DNS, DHCP e lease**.
*   O `ipconfig /release` e `/renew` reiniciam a concessão DHCP e podem recuperar conectividade quando o problema é só “configuração travada”.

***

## 📌 Em resumo

*   `ipconfig` → mostra **IP, máscara e gateway** (verificação rápida).
*   `ipconfig /all` → mostra tudo (MAC, DNS, DHCP, servidor DHCP, lease).
*   `ipconfig /release` → solta o IP (DHCP).
*   `ipconfig /renew` → pede um IP novo (DHCP).
*   Se não renovar, suspeite de **link físico**, **DHCP** ou **NIC**.

***

**17.1.3** O comando ping

## 🎯 Ideia Principal

O **ping** é o teste mais rápido para saber se existe **conectividade** entre o seu dispositivo e outro host na rede. Ele envia uma mensagem do tipo **Echo Request** e espera a resposta **Echo Reply**. Se responder, existe caminho de ida e volta (pelo menos naquele momento). Se você usar **nome** (ex.: `www.cisco.com`), antes do teste acontecer o sistema precisa fazer **DNS** (nome → IP). Se o ping funciona por **IP**, mas falha por **nome**, o problema geralmente está no **DNS**.

***

## 1️⃣ O que o ping faz (por dentro)

*   Quando você executa `ping <IP>`, o computador envia um **ICMP Echo Request** para o IP de destino.
*   Se o destino estiver acessível e permitir responder, ele retorna um **ICMP Echo Reply**.
*   Se você recebe o reply, isso confirma **conectividade básica** (ida e volta).

💡 **Analogia:** é como gritar “**alô!**” para uma pessoa e esperar o “**alô!**” de volta. Se respondeu, vocês conseguem se ouvir (pelo menos naquele caminho).

***

## 2️⃣ Ping por IP x Ping por nome (diferença crucial)

### 2.1) Ping por IP

*   Testa conectividade **sem depender de DNS**.
*   Exemplo:
    ```bash
    ping 8.8.8.8
    ```

### 2.2) Ping por nome

*   Primeiro precisa resolver o nome via **DNS** (ex.: `www.cisco.com` → IP).
*   Só depois disso o ping manda o Echo Request para o IP resolvido.
*   Exemplo:
    ```bash
    ping www.cisco.com
    ```

✅ Diagnóstico rápido clássico:

*   **Ping no IP funciona**, mas **ping no nome falha** → provável problema de **DNS** (DNS errado, indisponível, bloqueado, ou sem conectividade até o DNS).

💡 **Analogia:** ping por nome é como procurar um contato pelo nome na agenda. Se a agenda não funciona (DNS), você não consegue nem começar a ligar.

***

## 3️⃣ Mensagens comuns de erro e o que elas costumam indicar

### 3.1) `Request timed out` (tempo esgotado)

*   O pedido foi enviado, mas **não chegou resposta** dentro do tempo.
*   Pode indicar:
    *   destino desligado ou sem rota
    *   firewall bloqueando ICMP
    *   perda de pacotes/instabilidade no caminho
    *   gateway/roteamento com problema

💡 **Analogia:** você chamou e ninguém respondeu — pode ser que a pessoa não esteja lá, ou que a porta esteja fechada.

### 3.2) `General failure` (falha geral)

*   Geralmente indica que o sistema **nem conseguiu enviar** o ping corretamente.
*   Pode indicar:
    *   pilha de rede com problema
    *   adaptador desconectado/desativado
    *   configuração IP muito errada (ex.: sem rota, sem interface operacional)

💡 **Analogia:** é como tentar chamar, mas seu próprio telefone nem consegue discar.

### 3.3) `Destination host unreachable` / “destino inalcançável”

*   Normalmente indica que algum equipamento (muitas vezes o próprio PC ou o gateway) está dizendo:  
    “eu **não sei como chegar** nesse destino”.
*   Muito comum quando:
    *   gateway errado
    *   sub-rede/máscara errada
    *   rota inexistente

💡 **Analogia:** é como perguntar “como eu chego nessa rua?” e alguém responder “não existe caminho conhecido daqui”.

***

## 4️⃣ Ordem prática de testes com ping (roteiro rápido)

Quando “a internet não funciona”, uma sequência bem eficiente é:

1.  **Ping no loopback** (testa a pilha local)
    ```bash
    ping 127.0.0.1
    ```
2.  **Ping no seu gateway** (testa LAN até o roteador)
    ```bash
    ping <gateway>
    ```
3.  **Ping em um IP público** (testa saída sem DNS)
    ```bash
    ping 8.8.8.8
    ```
4.  **Ping por nome** (testa DNS + conectividade)
    ```bash
    ping www.cisco.com
    ```

💡 **Analogia:** é como testar em etapas: você → portão (gateway) → rua (internet) → achar o endereço pelo nome (DNS).

***

## 5️⃣ Observação importante: ping pode ser bloqueado

*   Em muitas redes e servidores, o ping pode falhar mesmo com a rede funcionando, porque ICMP pode estar **bloqueado** por segurança.
*   Por isso, ping é ótimo para diagnóstico rápido, mas **não é prova absoluta** de que “não existe conectividade” — pode ser apenas bloqueio de ICMP.

💡 **Analogia:** a pessoa pode estar em casa, mas decidiu não responder “alô” (bloqueio), mesmo que a porta exista.

***

## 🧩 Conceito Fundamental

*   **Ping testa conectividade básica** usando **Echo Request/Reply** (ICMP).
*   **Ping por nome depende de DNS** primeiro.
*   **IP funciona e nome não** → suspeita forte de **DNS**.
*   Mensagens como *timeout* e *unreachable* ajudam a localizar a falha (caminho, rota, bloqueio, gateway).

***

## 📌 Em resumo

*   `ping <IP>` verifica se o destino responde (conectividade sem DNS).
*   `ping <nome>` primeiro faz DNS (nome → IP), depois testa.
*   Se o ping falha com **timeout** ou **unreachable**, pode ser rota, bloqueio ou problema no destino.
*   Se falha por nome mas funciona por IP, o problema geralmente é **DNS**.

***

**17.1.4** Resultados do Ping

## 🎯 Ideia Principal

Os **resultados do ping** ajudam a descobrir **onde está o problema**:

*   Se o **ping funciona**, o caminho de rede até o destino (ou até o IP) está ok — então a falha pode estar **na aplicação/serviço**.
*   Se o **ping não funciona**, a falha tende a estar **na conectividade** (rede local, gateway, rota) — mas às vezes o ping falha só porque **ICMP está bloqueado** (firewall).

***

## 1️⃣ Se ping por **nome** e por **IP** funcionam, mas o app não abre

*   Isso normalmente indica que **a rede está OK**, mas o problema está na **aplicação/serviço** do destino.
*   Exemplos comuns:
    *   o serviço web/e-mail/FTP não está rodando
    *   a porta do serviço está bloqueada
    *   o servidor está com problema no aplicativo

💡 **Analogia:** você consegue chegar no endereço e bater na porta (ping), mas a loja está fechada ou o atendente não está trabalhando (serviço fora).

***

## 2️⃣ Se nenhum ping funciona, a suspeita principal é **rede/conectividade**

*   Se você não consegue pingar o destino, o mais provável é um problema no **caminho de rede** até ele.

💡 **Analogia:** você nem consegue chegar perto do lugar — algo está bloqueando o caminho (rua fechada, sem rota, sem conexão).

***

## 3️⃣ Ping no **gateway padrão**: o teste que separa “local” de “não local”

Quando nada funciona, o próximo passo clássico é pingar o **gateway padrão** (o roteador da sua rede):

### 3.1) Se o ping no gateway **funciona**

*   O problema provavelmente **não está na sua rede local** (seu PC ↔ roteador está ok).
*   Aí o problema tende a estar:
    *   no provedor/Internet
    *   em rotas além do gateway
    *   em DNS (se por IP funciona e por nome não)
    *   ou no destino remoto

💡 **Analogia:** você consegue chegar no portão do condomínio (gateway). Se a rua depois do portão está com problema, não é culpa do seu corredor interno.

### 3.2) Se o ping no gateway **falha**

*   O problema provavelmente está **na rede local**, por exemplo:
    *   cabo desconectado / Wi‑Fi ruim
    *   IP/máscara/gateway errado no host
    *   porta do switch/roteador com problema
    *   placa de rede (NIC) desativada/driver ruim

💡 **Analogia:** você não consegue nem chegar no portão do condomínio — então o problema está dentro do condomínio (sua rede local).

***

## 4️⃣ Quando o ping falha, mas a rede não é o problema (ICMP bloqueado)

*   Às vezes o ping falha porque **o tráfego ICMP** (que o ping usa) está bloqueado por:
    *   firewall do computador que envia
    *   firewall do destino
    *   algum equipamento no caminho (roteador/firewall) bloqueando ICMP

✅ Ou seja: pode existir rede, mas o “alô” (ping) foi proibido.

💡 **Analogia:** a estrada existe, mas está proibido buzinar. Você não ouve resposta, mas isso não prova que o destino é inalcançável.

***

## 5️⃣ “Ping padrão envia 4”: o que isso significa

*   O ping básico costuma enviar **4 tentativas** e esperar resposta.
*   Isso é útil porque:
    *   se 1 falhar e 3 responderem, você já suspeita de instabilidade/perda
    *   se todas falharem, indica falha total (ou bloqueio)

💡 **Analogia:** em vez de chamar uma vez, você chama 4 vezes para ter certeza se a pessoa está ignorando, se o som falhou ou se foi só “um vacilo”.

***

## 6️⃣ O ping pode ser “ajustado” (mais útil em testes)

*   Você pode mudar a quantidade de tentativas, tempo, tamanho do pacote, etc.
*   Isso ajuda a:
    *   testar estabilidade (muitas tentativas)
    *   observar perda e variação de tempo

💡 **Analogia:** é como testar uma ponte com 4 carros (teste rápido) ou com 100 carros (teste de estresse).

***

## 🧩 Conceito Fundamental

**Ping é um teste de conectividade básica** (ida e volta).

*   Se ping funciona e o app falha → problema tende a ser **aplicação/porta/serviço**.
*   Se ping falha → problema tende a ser **rede**, mas pode ser **bloqueio de ICMP**.
*   Ping no **gateway** é o divisor de águas: falhou no gateway → rede local; passou no gateway → problema além.

***

## 📌 Em resumo

*   **Ping IP + ping nome OK**, mas app falha → serviço/aplicação pode estar fora.
*   **Nenhum ping funciona** → provável problema de conectividade.
*   **Ping no gateway**:
    *   funciona → problema não é local
    *   falha → problema é na rede local
*   Ping pode falhar por **firewall/ICMP bloqueado**.
*   Ping padrão costuma ter **4 tentativas** e pode ser ajustado para testes mais completos.

***

# Anotações do Curso: **CONCEITOS BÁSICOS DE REDES**

# RESUMO GERAL DO CURSO

## 🎯 Ideia Principal

O curso **Conceitos básicos de redes (Fundamentos de Redes)** ensinou a entender **como os dispositivos se conectam, se identificam, trocam dados e chegam à Internet**, usando **padrões e protocolos**. Foi passado do “o que é uma rede” até “como diagnosticar problemas”, vendo **Wi‑Fi/Ethernet**, **endereçamento IPv4/IPv6**, **clientes/servidores**, **switch/roteador**, **ARP/DHCP/DNS**, **TCP/UDP/portas**, **NAT**, **HTTP/HTTPS/FTP/e-mail/SSH**, e comandos de **troubleshooting**.

***

## 1️⃣ Redes no dia a dia: por que isso importa

*   Hoje tudo depende de rede: celular, TV, console, IoT, trabalho, hospital, serviços online.
*   “Internet” não é um lugar mágico: é uma **rede de redes** com infraestrutura (cabos, rádio, data centers).
*   Aprender redes é como montar um **quebra‑cabeça**: no começo confunde, depois as peças se encaixam.

💡 **Analogia:** rede é como **trânsito**: tem ruas (LAN), rodovias (WAN), placas (protocolos) e regras para evitar acidentes (controle/segurança).

***

## 2️⃣ Tipos de redes e dispositivos conectados (mundo conectado)

*   Redes variam de **casa** → **SOHO** → **empresa** → **Internet global**.
*   Dispositivos conectados não são só PCs: smartphones, tablets, smartwatches, smart TVs, consoles, câmeras, carros inteligentes, sensores, RFID, dispositivos médicos.
*   Em casa e pequenos escritórios, a rede geralmente compartilha **uma conexão com a Internet**.

💡 **Analogia:** a Internet é um sistema de **rodovias** ligando “cidades” (redes locais).

***

## 3️⃣ Dados e transmissão: bit, sinais e mídia

*   Tudo vira **bits (0/1)**.
*   Bits viajam como **sinais**: elétricos (cobre), luz (fibra), ondas (sem fio).
*   Três mídias principais:
    *   **Cobre** (UTP/par trançado, coaxial)
    *   **Fibra óptica** (luz, alta capacidade, longa distância, sem interferência eletromagnética)
    *   **Wireless** (Wi‑Fi, celular, Bluetooth, NFC)

💡 **Analogia:** dados são “carga”; mídia é “estrada”; sinal é “o veículo” (eletricidade/luz/rádio).

***

## 4️⃣ Desempenho: largura de banda vs taxa de transferência

*   **Largura de banda** = capacidade teórica do “cano/estrada” (bps, Mbps, Gbps).
*   **Taxa de transferência (throughput)** = o que você realmente consegue na prática.
*   Throughput cai por: congestionamento, tipo de tráfego, latência, overhead (mensagens de controle), e o **gargalo** do link mais lento.
*   Speedtest mede principalmente **throughput** (download e upload).

💡 **Analogia:** largura de banda é “quantas faixas a estrada tem”; throughput é “quantos carros passam agora de verdade”.

***

## 5️⃣ Cliente/Servidor e P2P (como os serviços funcionam)

*   Um host pode ser **cliente**, **servidor** ou ambos, dependendo do **software**.
*   Cliente pede; servidor entrega (web, e-mail, arquivos).
*   **P2P**: cada peer pode ser cliente e servidor; pode ser puro ou híbrido (índice central + dados descentralizados).
*   Um computador pode rodar vários serviços e vários clientes ao mesmo tempo.

💡 **Analogia:** servidor = restaurante; cliente = quem pede; P2P = feira de trocas, onde todo mundo pode ofertar e pedir.

***

## 6️⃣ Infraestrutura de rede: final, intermediário e meio

*   **Dispositivos finais**: PCs, celulares, impressoras, IP phones etc.
*   **Intermediários**: switch, roteador, AP, firewall.
*   **Meios**: LAN (Ethernet), WAN, wireless, “nuvem” (Internet/outra rede).
*   Diagramas (topologias) usam símbolos para representar isso.

💡 **Analogia:** finais = casas/lojas; intermediários = cruzamentos/portões; meios = ruas/rodovias/ar.

***

## 7️⃣ ISP e acesso à Internet (cabo, DSL, celular, satélite, fibra)

*   ISP liga sua rede à Internet e pode oferecer serviços extras (e-mail, hospedagem, segurança).
*   Conexões típicas: cabo/coaxial, DSL/linha telefônica, celular, satélite, fibra.
*   Backbone global usa principalmente **fibra**, inclusive cabos submarinos.
*   Em casa, padrão seguro é **modem + roteador** (ou tudo-em-um), não “PC direto no modem”.

💡 **Analogia:** ISP é a “concessionária” que te conecta à rodovia principal.

***

## 8️⃣ Wi‑Fi e Bluetooth (mobilidade e cuidados)

*   Smartphone tem vários rádios: celular, Wi‑Fi, Bluetooth, NFC; e recebe GPS.
*   Wi‑Fi: recomendado quando possível (economia de dados e bateria), mas exige **segurança**: WPA2/WPA3, senha forte, VPN quando necessário.
*   Bluetooth: curto alcance, baixo consumo, acessórios; pareamento cria relação de confiança.

💡 **Analogia:** Wi‑Fi é “rede do prédio”; dados móveis é “rede da rua”; Bluetooth é “conversa baixinha bem de perto”.

***

## 9️⃣ Padrões e protocolos (por que tudo se entende)

*   Protocolos são “regras do jogo”: formato, tamanho, timing, codificação, encapsulamento, padrão de mensagens.
*   IEEE 802.11 define Wi‑Fi; Wi‑Fi Alliance certifica interoperabilidade.
*   Padrões de Internet evoluem via RFCs (IETF).
*   Dispositivos “vivem numa bolha”: eles conhecem seus endereços e usam protocolos para descobrir e comunicar.

💡 **Analogia:** protocolos são como idioma + gramática + etiqueta da conversa.

***

## 🔟 Modelos de rede: TCP/IP e OSI (organizar o entendimento)

*   **TCP/IP** (4 camadas): Acesso à rede, Internet (IP), Transporte (TCP/UDP), Aplicação (HTTP, DNS etc.).
*   **OSI** (7 camadas): Física, Enlace, Rede, Transporte, Sessão, Apresentação, Aplicação.
*   OSI ajuda muito em **diagnóstico** (onde está o problema?) e detalha bem L1/L2.
*   TCP/IP é o modelo prático da Internet.

💡 **Analogia:** OSI é um mapa detalhado; TCP/IP é um mapa compacto.

***

## 1️⃣1️⃣ Ethernet, encapsulamento e quadros

*   Mensagens são encapsuladas em “envelopes”: dados → TCP/UDP → IP → Ethernet/Wi‑Fi.
*   Quadro Ethernet tem campos (preâmbulo, SFD, MAC destino/origem, tipo, dados, FCS).
*   Ethernet entrega NIC↔NIC dentro da LAN; ela não “se importa” com o conteúdo interno, só transporta.

💡 **Analogia:** a transportadora entrega a caixa; não precisa saber se tem livro ou roupa dentro.

***

## 1️⃣2️⃣ Switch (Camada 2): tabela MAC e flooding

*   Switch decide por **MAC de destino**.
*   Ele aprende “MAC → porta” olhando o **MAC de origem** dos quadros que chegam.
*   Se não souber o destino (unknown unicast), faz **flood** (todas as portas exceto a entrada).
*   Entradas têm “tempo de vida” (aging).

💡 **Analogia:** switch é o porteiro anotando quem mora em qual corredor.

***

## 1️⃣3️⃣ IPv4: finalidade, estrutura e tipos

*   IPv4 é endereço lógico de **32 bits** (4 octetos).
*   É **rede + host**, e a **máscara** define a divisão (ex.: /24).
*   Unicast (1→1), Broadcast (1→todos no domínio), Multicast (1→grupo).
*   Privado vs público:
    *   Privados (RFC1918): 10/8, 172.16/12, 192.168/16
    *   Públicos são únicos e roteáveis globalmente (IANA → RIRs → ISPs).
*   Endereços especiais: loopback (127/8), link-local/APIPA (169.254/16).
*   Classful (A/B/C) é legado; hoje usa-se **CIDR**.

💡 **Analogia:** IP é endereço de rua; máscara define o bairro; host é o número da casa.

***

## 1️⃣4️⃣ ARP, broadcast e limites (domínios de broadcast)

*   Na mesma LAN, para enviar Ethernet, o host precisa de **MAC**:
    *   IPv4 usa **ARP** (IP→MAC)
    *   IPv6 usa **Neighbor Discovery (ICMPv6)**
*   ARP Request é broadcast (FF:FF:FF:FF:FF:FF) e fica no domínio.
*   **Switch espalha broadcast**, roteador **não encaminha broadcast** → roteador cria limites.
*   Redes grandes com muito broadcast perdem desempenho → segmentar/subnetting ajuda.

💡 **Analogia:** broadcast é anúncio no alto-falante do prédio; roteador é a porta que não deixa o anúncio sair para outros prédios.

***

## 1️⃣5️⃣ Gateways, roteamento e tabela de roteamento

*   Se o destino é local: MAC destino = MAC do host final.
*   Se é remoto: MAC destino = MAC do **gateway padrão** (roteador).
*   O roteador lê IP destino, consulta a **tabela de roteamento** (redes, não hosts) e encaminha pela interface correta.
*   Se não houver rota, ele descarta — a **rota padrão** evita isso para destinos “desconhecidos”.
*   Segmentação com roteadores reduz broadcast, melhora segurança e organiza por localização.

💡 **Analogia:** gateway é o “portão do bairro”; tabela de roteamento é o “mapa de saídas”.

***

## 1️⃣6️⃣ NAT (por que existe e onde entra)

*   Privado não roteia na Internet → NAT traduz privado ↔ público no roteador de borda.
*   Permite vários dispositivos internos compartilharem poucos IPs públicos (muito comum com PAT/portas).
*   Ajuda a economizar IPv4, mas pode complicar P2P e conexões de entrada.

💡 **Analogia:** portaria do prédio troca “apto 10” pelo endereço do prédio quando sai para a rua.

***

## 1️⃣7️⃣ IPv6: por que existe e como convive com IPv4

*   IPv6 tem **128 bits** e usa **hexadecimal** em hextetos.
*   Regras de escrita:
    1.  remover zeros à esquerda
    2.  `::` para uma sequência contígua de hextetos 0000 (uma vez só)
*   Migração: **pilha dupla**, **tunelamento**, **NAT64** (transição).
*   Motivação: esgotamento IPv4, IoT, limitações do NAT.

💡 **Analogia:** IPv6 é “um novo mapa de endereços” com espaço de sobra.

***

## 1️⃣8️⃣ Transporte: TCP x UDP, portas e sockets

*   **UDP**: leve, rápido, bom para tempo real (sem garantia de entrega/ordem).
*   **TCP**: confiável (ACK, sequência, reenvio, ordem), bom para web e dados críticos.
*   **Portas** identificam serviços: bem conhecidas (0–1023) e efêmeras no cliente.
*   **Socket** = IP:porta; **par de sockets** identifica uma conversa.
*   `netstat` ajuda a ver conexões e portas em uso (`-n` mostra números).

💡 **Analogia:** IP leva ao prédio; porta leva ao apartamento; TCP é entrega com recibo; UDP é recado rápido.

***

## 1️⃣9️⃣ Serviços de aplicação: DNS, Web, FTP, Telnet/SSH, e-mail, mensagens, VoIP

*   **DNS**: nome → IP (nslookup testa).
*   **HTTP/HTML**: HTTP é a regra da conversa; HTML é o conteúdo; HTTPS (443) é a versão segura.
*   **FTP**: transferência de arquivos (controle 21; dados depende do modo).
*   **Telnet**: acesso remoto CLI (TCP 23), **não seguro**; **SSH** é o recomendado.
*   **E-mail**: SMTP (envio), POP3 (baixa), IMAP4 (sincroniza).
*   Mensagens e VoIP: comunicação em tempo real, dependem muito de latência/perda/jitter e protocolos variam.

💡 **Analogia:** DNS é agenda; HTTPS é envelope lacrado; SSH é túnel seguro; IMAP é “caixa postal sincronizada”.

***

## 2️⃣0️⃣ Troubleshooting: o kit de primeiros socorros da rede

*   **ipconfig**: ver IP/máscara/gateway/DNS; `/all`, `/release`, `/renew`.
*   **ping**: testar conectividade (IP e nome; nome depende de DNS).
*   **tracert**: ver o caminho/saltos.
*   **nslookup**: testar DNS diretamente.
*   **netstat**: ver conexões e portas (atenção a conexões inesperadas).
*   Interpretação dos resultados de ping:
    *   ping IP e nome OK, mas app falha → problema na aplicação/serviço
    *   ping no gateway falha → problema local
    *   ping IP OK e nome falha → DNS
    *   ping pode falhar por bloqueio ICMP (firewall)

💡 **Analogia:** diagnosticar rede é como diagnosticar carro: primeiro liga? depois anda? depois pega estrada? depois chega no destino?

***

## 🧩 Conceito Fundamental (o “fio condutor” do curso)

1.  **Dados viram bits** → sinais → viajam por uma mídia.
2.  **Encapsulamento por camadas** permite que protocolos cooperem.
3.  **MAC entrega local**, **IP entrega entre redes**.
4.  **Switch** encaminha por MAC; **roteador** encaminha por IP.
5.  **DNS traduz nomes**, **DHCP configura automático**, **ARP/ND mapeia IP↔MAC**, **NAT conecta privado à Internet**.
6.  **TCP/UDP + portas** levam ao aplicativo certo e definem confiabilidade vs tempo real.

***

## 📌 Em resumo

*   Rede = dispositivos + regras (protocolos) + caminhos (mídia).
*   IP identifica redes/hosts; máscara separa rede/host; gateway sai da LAN.
*   Switch usa MAC; roteador usa IP e tabela de rotas; broadcast é contido por roteadores.
*   DHCP dá IP automaticamente; DNS traduz nome→IP; ARP/ND resolve IP→MAC local.
*   NAT traduz privado↔público para acessar a Internet.
*   IPv6 surge por escassez do IPv4 e moderniza o endereçamento.
*   TCP garante entrega/ordem; UDP prioriza tempo real.
*   Portas/sockets identificam serviços e conversas.
*   HTTP/HTTPS, FTP, e-mail, SSH são serviços clássicos cliente-servidor.
*   ipconfig/ping/tracert/nslookup/netstat formam o kit básico de diagnóstico.

***

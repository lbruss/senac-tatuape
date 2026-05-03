# Protocolos de Rede

A **internet funciona como uma grande cidade**, onde cada computador é uma casa, os dados são encomendas e os protocolos são as **regras de trânsito e entrega** que garantem que tudo chegue ao destino certo.

---

## Protocolos de Comunicação

**ICMP (PING)**
- **Função:** Testar a conectividade entre máquinas.
- **Analogia:** É como bater na porta de uma casa para ver se alguém responde.
- **Uso prático:** Verificar se um computador ou servidor está acessível na rede.

---

**HTTP (HyperText Transfer Protocol)**
- **Função:** Transferir páginas da web.
- **Característica:** Não é seguro (dados vão em texto aberto).
- **Analogia:** Uma carta sem envelope — qualquer um no caminho pode ler.

---

**HTTPS (HyperText Transfer Protocol Secure)**
- **Função:** Transferir páginas da web de forma segura.
- **Característica:** Usa criptografia.
- **Analogia:** Uma carta dentro de um envelope trancado com cadeado.
- **Uso comum:** Sites de bancos, redes sociais e compras online.

---

**TCP (Transmission Control Protocol)**
- **Função:** Garantir que os dados cheguem completos e na ordem correta.
- **Analogia:** Uma entrega com recibo — se algo faltar, ele pede novamente.
- **Uso comum:** Sites, e-mails e downloads.

---

**UDP (User Datagram Protocol)**
- **Função:** Enviar dados rapidamente, sem garantir entrega.
- **Analogia:** Uma conversa ao vivo — se perder uma palavra, a conversa continua.
- **Uso comum:** Jogos online, chamadas de voz e vídeo, transmissões ao vivo.

---

**SMTP (Simple Mail Transfer Protocol)**
- **Função:** Enviar e-mails.
- **Analogia:** O carteiro que leva a carta até o correio.

---

**IMAP (Internet Message Access Protocol)**
- **Função:** Receber e sincronizar e-mails.
- **Analogia:** Acesso à sua caixa de correio em tempo real, de qualquer lugar.
- **Vantagem:** O e-mail fica salvo no servidor.

---

**POP3 (Post Office Protocol 3)**
- **Função:** Receber e-mails.
- **Analogia:** Retirar as cartas do correio e levar para casa.
- **Diferença:** Normalmente remove o e-mail do servidor após o download.

---

**DHCP (Dynamic Host Configuration Protocol)**
- **Função:** Distribuir IP automaticamente.
- **Analogia:** Um atendente que entrega senhas automaticamente para quem entra.
- **Vantagem:** Evita erros de configuração manual.

---

**DNS (Domain Name System)**
- **Função:** Converter nomes de sites em endereços IP (e vice-versa).
- **Analogia:** Uma agenda telefônica da internet.
- **Exemplo:** `google.com → 142.250.x.x`

---

**TFTP (Trivial File Transfer Protocol)**
- **Função:** Transferência simples de arquivos.
- **Analogia:** Passar um arquivo rápido, sem confirmação.
- **Uso comum:** Equipamentos de rede e boot remoto.

---

**NTP (Network Time Protocol)**
- **Função:** Sincronizar o horário dos computadores.
- **Analogia:** Um relógio oficial que todos usam como referência.
- **Importância:** Logs, segurança e sistemas dependem do horário correto.

---

**SSH (Secure Shell)**
- **Função:** Acesso remoto seguro a outro computador.
- **Analogia:** Entrar em uma casa com chave e alarme.
- **Uso comum:** Administração de servidores.

---

## Endereçamento IP (Fixo, dinâmico e conflitos)

**IP Fixo (Estático)**
- Configurado manualmente.
- Não muda.
- **Analogia:** Endereço fixo de uma casa.

---

**IP Dinâmico**
- Configurado automaticamente pelo DHCP.
- Pode mudar.
- **Analogia:** Um quarto de hotel — o número pode mudar a cada estadia.

---

**Conflito de IP**
- Ocorre quando dois dispositivos usam o mesmo IP.
- **Resultado:** Falha de comunicação na rede.
- **Analogia:** Duas casas com o mesmo endereço — a encomenda se perde.

---

## Portas e Protocolos

| Protocolo           | Porta | Tipo |
|--------------------|-------|------|
| HTTP               | 80    | TCP  |
| HTTPS              | 443   | TCP  |
| SMTP               | 25    | TCP  |
| IMAP               | 143   | TCP  |
| POP3               | 110   | TCP  |
| TFTP               | 69    | UDP  |
| DNS                | 53    | UDP/TCP |
| SSH                | 22    | TCP  |

> **Observação:** UDP é usado quando velocidade é prioridade; TCP quando confiabilidade é essencial.

---

## Modelo OSI (7 Camadas)

O modelo OSI divide a comunicação de rede em **camadas**, como uma linha de produção:

1. **Física** — Cabos, Wi-Fi, sinais elétricos  
2. **Enlace** — Ethernet, MAC Address  
3. **Rede** — IP, ICMP, Ping  
4. **Transporte** — TCP, UDP  
5. **Sessão** — Logon, sessões ativas  
6. **Apresentação** — Criptografia, imagens, textos  
7. **Aplicação** — HTTP, HTTPS, DNS, SMTP  

**Atuação mais comum:** Camadas **3 (Rede)**, **4 (Transporte)** e **7 (Aplicação)**.

---

**Dica Prática de Diagnóstico**

> **Sempre faça um PING primeiro.**

- Se **não responde**, o problema pode estar nas camadas 1, 2 ou 3.
- Se **responde**, o problema provavelmente está nas camadas superiores.

**Analogia:** Antes de consertar o computador, veja se ele está ligado na tomada.

---

Conclusão

Os protocolos são as **regras que mantêm a internet organizada**, garantindo que dados cheguem rápido, seguros e ao destino certo. Entender isso facilita muito a identificação de problemas e o uso correto das redes.

---

# Explicação dos Comandos Cisco (CLI)

Esses comandos são usados para **configurar um roteador Cisco**, normalmente no **Cisco Packet Tracer** ou em um **roteador Cisco real** via **CLI (Command Line Interface)**.  
Abaixo está a explicação **clara, direta e simples**, linha por linha.

---

## Início do Roteador

```
Would you like to enter the initial configuration dialog? [yes/no]: no
```
- O roteador pergunta se você quer usar o assistente automático.

- Ao responder no, você escolhe configurar tudo manualmente.

---

```
Press RETURN to get started!
```
- Apenas pede para pressionar Enter para começar.

---

## Modos do Roteador (Importante)

| ***Modo***           | ***Exemplo***          | ***Função*** |
|----------------------|------------------------|----------|
| Usuário              | Router>                | Acesso limitado |
| Privilegiado         | Router#                | Acesso administrativo |
| Configuração global  | Router(config) #       | Configurar o roteador |
| Linha                | Router(Config-line) #  | Console ou acesso remoto |
| Interface            | Router(config-if) #    | Porta de rede |

---

## Entrando no Modo Administrador

```
Router>enable
```

- Entra no modo privilegiado (admin).

```
Router#
```

---

## Entrando no Modo de Configuração

```
Router#configure terminal
```
- Permite alterar configurações do roteador.

```
Router(config)#
```

---

## Criando Usuário Administrador

```
Router(config)#username (nome qualquer) privilege 15 secret (senha qualquer)
```
- Cria o usuário com nome qualquer
- privilege 15 → nível máximo (administrador)
- secret → senha criptografada

---

## Configurando Acesso pelo Console

```
Router(config)#line console 0

```
- Entra na configuração do console físico.
```
Router(config-line)#login local
```
- Usa os usuários locais para login.

```
Router(config-line)#exit
```
- Sai da configuração da linha.

```
Router(config)#exit
```
- Sai da configuração global.

---

## Salvando a Configuração
```
Router#write memory
```
- Salva as configurações na memória permanente (NVRAM).
- Sem isso, tudo se perde ao desligar o roteador.

---

## Login com Usuário Criado

```
User Access Verification
Username: cliente
Password:
```
- Login usando o usuário configurado.

---

## Mudando o Nome do Roteador
```
Router(config)#hostname (Qualquer nome)
```

- Altera o nome do roteador.
- Facilita a identificação na rede.

---

## Configurando Interface de Rede
```
ROperadora(config)#interface gigabitEthernet 0/0
```
- Entra na configuração da porta física.

```
ROperadora(config-if)#ip address 192.168.0.2 255.255.255.0
```
- Define o IP do roteador.
- Esse IP será o gateway da rede.

```
ROperadora(config-if)#no shutdown
```
- Liga a interface (por padrão vem desligada).

```
Interface GigabitEthernet0/0, changed state to up
```
- Confirma que a porta está ativa.

---

## Configurando DHCP

**Excluindo IP do Roteador**
```
ROperadora(config)#ip dhcp excluded-address 192.168.0.2
```
- Impede que o DHCP entregue o IP do roteador.

---

**Criando Pool DHCP**
```
ROperadora(config)#ip dhcp pool (Qualquer nome)
```
- Cria um pool DHCP com o nome que quiser.

```
ROperadora(dhcp-config)#network 192.168.0.0 255.255.255.0
```
- Define a rede que receberá IP automaticamente.

```
ROperadora(dhcp-config)#default-router 192.168.0.2
```
- Define o gateway padrão dos clientes.

```
ROperadora(dhcp-config)#dns-server 8.8.8.8
```
- Define o servidor DNS.
- 8.8.8.8 → DNS público do Google.

---

## Resumo Geral

Esse conjunto de comandos:

- Cria usuário administrador

- Protege o acesso ao roteador

- Configura IP na interface

- Liga a porta de rede

- Ativa o DHCP

- Distribui IP automaticamente

- Define gateway e DNS

**O roteador está pronto para funcionar como gateway e servidor DHCP da rede.**



# Exemplo
```
Would you like to enter the initial configuration dialog? [yes/no]: no
Press RETURN to get started!

Router>
Router>enable
Router#configure terminal
Enter configuration commands, one per lin. End with CNTL/Z
Router(config) #username cliente privilege 15 secret 123456
Router(config) #line console 0
Router(config-line) #login local
Router(config-line) #exit
Router(config) #exit
Router#write memory
Router#exit

Router con0 is now available

Press RETURN to get started

User Access Verification

Username: cliente
Password: 

Router#configure terminal
Enter configuration commands, one per lin. End with CNTL/Z
Router(config) #hostname ROperadora
ROperadora(config) #interface gigabitEthernet 0/0
ROperadora(config-if) #ip address 192.168.0.2 255.255.255.0
ROperadora(config-if) #no shutdown

ROperadora(config-if) #
LINK-5-CHANGED: Interface GigabitEthernet0/0, changed state to up

LINEPROTO-5-UPDOWN: Line protocol on Interface GigabitEthernet0/0, changed state to up

ROperadora(config-if) #exit
ROperadora(config) #ip dhcp excluded-address 192.168.0.2
ROperadora(config) #ip dhcp pool operadora
ROperadora(dhcp-config) #network 192.168.0.0 255.255.255.0
ROperadora(dhcp-config) #default-router 192.168.0.2
ROperadora(dhcp-config) #dns-server 8.8.8.8
ROperadora(dhcp-config) #
```

---

# IPv4 e Comunicação em Rede Local

IPv4 — Conceito Básico

O **IPv4 (Internet Protocol versão 4)** é o protocolo responsável por identificar dispositivos em uma rede por meio de endereços numéricos.

- Suporta **aproximadamente 4,3 bilhões de endereços IP**.
- Ainda é **muito utilizado**, especialmente em **redes locais (LAN)**.
- Amplamente compatível com sistemas como **Windows 10 e Windows 11**.

**Analogia:**  
O IPv4 funciona como o **número de uma casa**. Sem ele, não é possível entregar cartas (dados) corretamente.

---

## Rede Local com Cabo Cross Over

Uma rede simples pode ser criada ligando **dois computadores diretamente** usando um **cabo cross over**.

- Esse tipo de cabo cruza os sinais de envio e recebimento.
- Ideal para conexão direta sem roteador ou switch.

**Analogia:**  
É como ligar dois telefones diretamente por um fio, sem precisar de uma central.

---

## Configurando IPv4 Manualmente no Windows

Acessar as Configurações de Rede
- Na **barra de tarefas**, clique em **“Exibir conexões de rede”**.
- Localize **Ethernet**.
- Clique com o **botão direito** → **Propriedades**.

---

Configurar o IPv4
- Selecione **Protocolo IP versão 4 (IPv4)**.
- Clique em **Propriedades**.
- Marque **“Usar o seguinte endereço IP”**.

Preencha da seguinte forma:
- **Endereço IP:** `192.168.0.X`  
  (onde **X** pode ser qualquer número entre **1 e 254**, desde que não se repita)
- **Máscara de sub-rede:** clique no campo → será preenchida automaticamente (`255.255.255.0`)
- **Gateway:** pode ficar em branco (não há roteador)

Clique em **OK**.

**Analogia:**  
Você está dizendo manualmente qual será o número da sua casa na rua.

---

Desativar o IPv6 (opcional para este cenário)
- Na mesma lista, localize **Protocolo IP versão 6 (IPv6)**.
- **Desmarque** a opção.
- Clique em **Fechar**.

> Isso evita conflitos em redes simples e facilita os testes.

---

## Conectando os Computadores
- Conecte o **cabo cross over** entre os dois computadores.
- Cada computador deve ter um **IP diferente**, mas na **mesma rede**  
  Exemplo:
  - PC 1 → `192.168.0.10`
  - PC 2 → `192.168.0.20`

---

## Verificando o IP no Prompt de Comando
- Abra o **Prompt de Comando (CMD)**.
- Digite:
```
ipconfig
```

- Verifique se o IP configurado aparece corretamente.

---

## Liberando o Ping no Firewall do Windows

1. Para permitir testes de conectividade:

2. Na barra de busca, digite Windows Defender Firewall.

3. Abra e clique em Configurações avançadas.

4. Vá em Regras de Entrada.

Procure por:
**“Compartilhamento de Arquivos e Impressoras (Solicitação de Eco – ICMPv4-In)”**

5. Clique com o botão direito → Habilitar regra.

**Analogia:**
É como liberar a campainha da casa para que outras pessoas possam chamar.

---

## Testando a Comunicação (Ping)

No **Prompt de Comando**, digite:
```
ping 192.168.0.X
```
(use o IP do outro computador)

- Se houver resposta, a rede está funcionando.
- Faça o teste **nos dois computadores**.

---

# Comandos Básicos de Rede no Windows

- `ipconfig`

Exibe as informações básicas de rede (IP, máscara, gateway).

- `ipconfig /all`

Mostra informações completas:

**Endereço MAC**

**DHCP**

**DNS**

**Estado da placa de rede**

---

- `ipconfig /release`

Libera o endereço IP atual (remove o IP).

**Analogia:**

Devolver o número da casa para o atendente.

- `ipconfig /renew`

Solicita um novo endereço IP ao DHCP.

**Analogia:**

Pedir um novo número de casa automaticamente.

- `ping <endereço IP>`

Testa a comunicação entre dispositivos.

**Analogia:**

Perguntar “você está aí?” e aguardar resposta.

---

**Conclusão**

Com o IPv4 configurado corretamente, o cabo adequado e o firewall ajustado, é possível criar uma rede local simples, funcional e confiável, ideal para estudos, testes e aprendizado de redes.

---

# Switch, IP Privado e DHCP

## Switch (Comutador de Rede)

O **switch** é o equipamento responsável por **interligar vários dispositivos em uma rede local**, permitindo que eles se comuniquem entre si.

- Normalmente possui **portas em múltiplos de 4** (4, 8, 16, 24, etc.).
- Em muitos **roteadores domésticos**, o switch já vem **embutido**.
- Essas portas LAN costumam ser **identificadas pela cor amarela**.

**Analogia:**  
O switch funciona como uma **extensão de tomadas**, permitindo ligar vários aparelhos no mesmo ponto de energia — só que, nesse caso, é para dados.

---

## Cabo de Rede (Padrões 568A e 568B)

Para conectar um **PC ao switch**, utiliza-se um **cabo de rede direto**.

- As **duas pontas do cabo** devem seguir:
  - **568A em ambas as pontas**, ou
  - **568B em ambas as pontas**
- Em switches modernos, o recurso **Auto MDI-X** permite que o cabo funcione mesmo com padrões misturados.

**Analogia:**  
É como ligar dois aparelhos com tomadas compatíveis — se ambos “falam a mesma língua”, a comunicação acontece.

---

## IP Privado — Classe C

Em redes locais, é comum o uso de **IPs privados de Classe C**.

*Intervalo mais utilizado*
- **IPs válidos para hosts:**  
  `192.168.0.2` até `192.168.0.254`
- **Máscara de sub-rede:**  
  `255.255.255.0`

*Endereços especiais*
- `192.168.0.0` → **Endereço da rede**
- `192.168.0.1` → **Gateway (roteador)**
- `192.168.0.255` → **Broadcast**

**Analogia:**  
Pense em uma rua:
- O nome da rua é a **rede**
- As casas são os **IPs**
- O porteiro do condomínio é o **gateway**
- O alto-falante que fala com todos ao mesmo tempo é o **broadcast**

---

## DHCP — Dynamic Host Configuration Protocol

O **DHCP** é o protocolo que **entrega IPs automaticamente** para os dispositivos da rede.

Onde o DHCP pode estar configurado:
- **Roteadores domésticos** (Claro, Vivo, etc.)
- **Windows Server**
- **Servidores Linux**

---

## Hosts da Rede

São considerados **hosts** todos os dispositivos que recebem IP:
- PC
- Notebook
- Smart TV
- Celular
- Impressora de rede

Todos devem estar configurados para **receber IP automaticamente** quando usam DHCP.

---

# Configurando DHCP no Windows (Cliente)

1. Na barra de tarefas, pesquise por **“Exibir conexões de rede”**
2. Clique com o botão direito em **Ethernet** → **Propriedades**
3. Selecione **Protocolo IP Versão 4 (TCP/IPv4)** → **Propriedades**
4. Marque:
   - **Obter um endereço IP automaticamente**
   - **Obter o endereço dos servidores DNS automaticamente**
5. Clique em **OK** e feche todas as janelas

---

## Renovando o IP no Windows

Abra o **Prompt de Comando (CMD)** e digite:

```
ipconfig /release
```
```
ipconfig /renew
```
- O computador libera o IP antigo
- Solicita um novo IP ao servidor DHCP
- Após isso, você já terá um novo endereço IP

**Analogia:**

É como devolver uma senha antiga e pegar uma nova na recepção.

---

## Acessando o DHCP no Roteador

- Descobrir o IP do roteador

No CMD, digite:
```
ipconfig /all
```
> O Gateway Padrão geralmente termina em .1

---

- Acessar o roteador
- Abra o navegado
- Digite o IP do roteador na barra de endereços
- Informe usuário e senha
- Se não souber, pode ser necessário resetar o roteador para usar os dados de fábrica

---

- Localizar as configurações DHCP
**Dentro do painel do roteador, procure por:**
- LAN, 
- Rede Local, 
- Configurações de Rede ou
- DHCP.

---

- Reserva de IP (DHCP Reservation)
A reserva de IP garante que um dispositivo sempre receba o mesmo IP, mesmo usando DHCP.
**Para isso, é necessário:**

- MAC Address do dispositivo (host)
- Um IP reservado para ele

**Funcionamento:**
O roteador reconhece o dispositivo pelo MAC Address e sempre entrega o mesmo IP.

**Analogia:**

É como reservar uma vaga fixa no estacionamento para um carro específico.

---

**Observação Importante**

- Alguns roteadores antigos ou simples exigem que o IP reservado esteja dentro do intervalo DHCP
- Se o roteador aceitar a reserva sem erro, a configuração está correta

---

**Verificando se a Reserva Funcionou**
No computador reservado, abra o CMD:
```
ipconfig /all
```
Verifique:

- **Endereço IP**
- **Concessão obtida**
- **Concessão expirada**
Se o IP permanecer o mesmo após renovar, a reserva está funcionando corretamente.

---

# Conclusão
Switch, IP privado e DHCP são a **base de qualquer rede local.** Entender esses conceitos permite:

- Montar redes corretamente
- Evitar conflitos de IP
- Gerenciar dispositivos com mais controle e eficiência

---

# Compartilhamento de Pasta em Rede — Windows 10 e 11

Tudo explicado de forma simples e organizada.

---

## 1. Definir Senha para o Usuário

> Importante: Para compartilhar arquivos com segurança, o usuário precisa ter senha.

Passo a passo

1. Na barra de pesquisa, digite:
   **Ferramentas Administrativas**
2. Abra **Gerenciamento do Computador**
3. Clique em:
   - **Usuários e Grupos Locais**
   - Depois em **Usuários**
4. Clique com o botão direito no seu usuário
5. Selecione **Definir senha**
6. Escolha uma senha e confirme

**Analogia:**  
É como colocar uma chave na porta da sua casa antes de permitir visitas.

---

## 2. Alterar Nome do Computador e Grupo de Trabalho

O nome do computador facilita a identificação na rede.

Passo a passo

1. Na barra de pesquisa, digite:
   **Painel de Controle**
2. Vá em:
   - **Sistema**
   - **Configurações avançadas do sistema**
3. Abra a aba **Nome do Computador**
4. Clique em **Alterar**
5. Defina:
   - Um **nome fácil de identificar**
   - Um **Grupo de Trabalho** (exemplo: WORKGROUP)
6. Clique em **OK**
7. Reinicie o computador quando solicitado

**Analogia:**  
O nome do computador é como o nome da sua casa em um condomínio.  
O grupo de trabalho é o nome do condomínio.

Para que os computadores se enxerguem facilmente, devem estar no **mesmo grupo de trabalho**.

---

## 3. Criar e Compartilhar uma Pasta

Agora vamos compartilhar uma pasta na rede.

Criar a pasta

1. Acesse a unidade **C:**
2. Clique com o botão direito
3. Selecione **Novo > Pasta**
4. Dê um nome à pasta

---

Compartilhar a pasta

1. Clique com o botão direito na pasta
2. Selecione **Propriedades**
3. Vá até a aba **Compartilhamento**
4. Clique em **Compartilhar**
5. Adicione o usuário desejado
6. Defina o nível de permissão:
   - **Leitura**
   - **Leitura e Gravação**
7. Clique em **Compartilhar**
8. Depois em **Concluir**

A pasta agora está compartilhada na rede.

**Analogia:**  
Você abriu um cômodo da sua casa para visitas — podendo permitir apenas olhar ou também modificar.

---

## 4. Acessar a Pasta Compartilhada

Opção 1 — Pela Rede

1. Abra o **Explorador de Arquivos**
2. Clique em **Rede**
3. Aguarde a descoberta dos computadores
4. Clique no computador desejado
5. Abra a pasta compartilhada

---

Opção 2 — Pelo IP (Mais Direto)

1. Pressione **Windows + R**
2. Digite:

```
\\192.168.0.100
```

(Substitua pelo IP do outro computador)

3. Pressione Enter

**Analogia:**

É como digitar diretamente o endereço da casa no GPS, sem precisar procurar manualmente na vizinhança.

---

## Mapear Unidade de Rede

Mapear uma unidade faz a pasta aparecer como se fosse um “novo disco” dentro do seu computador.

Passo a passo

1. Abra o **Explorador de Arquivos**
2. Clique com o botão direito em **Redes**
3. Selecione **Mapear unidade de rede**
4. Clique em **Procurar**
5. Localize o computador desejado
6. Clique na seta >
7. Selecione a pasta compartilhada
8. Clique em **OK**
9. Depois em **Concluir**

Agora a pasta aparecerá como uma unidade, por exemplo:

```
Disco Z:
```

**Analogia:**

É como criar um atalho fixo para a casa do vizinho dentro da sua própria casa.

---

# IPv4 — Endereços Privados e NAT

O **IPv4 (Internet Protocol versão 4)** é o sistema de endereçamento utilizado para identificar dispositivos em uma rede.  
Cada dispositivo conectado à rede recebe um **endereço IP**, que funciona como um **endereço único** para comunicação.

**Analogia:**  
Assim como uma carta precisa de um **endereço de casa** para chegar ao destino correto, os dados na internet precisam de um **endereço IP** para saber para qual dispositivo devem ser enviados.

---

## Estrutura do Endereço IPv4

Um endereço IPv4 possui **32 bits**, divididos em **4 grupos de números**, chamados de **octetos**.

Exemplo:

```
192.168.0.1
```

Cada número pode variar de:

```
0 até 255
```

Portanto, os endereços possíveis vão de:

```

0.0.0.0
até
255.255.255.255

```

Isso gera aproximadamente:

4.294.967.296 endereços IP

Ou seja, cerca de **4,3 bilhões de endereços IPv4 possíveis**.

---

## Endereços IP Privados

Alguns intervalos de IP foram reservados exclusivamente para **redes privadas**, ou seja, **redes internas** que não são acessíveis diretamente pela internet.

Esses intervalos foram definidos pela **RFC 1918**.

Intervalos de Endereços Privados

| Rede | Intervalo de IP |
|-----|-----|
| `10.0.0.0/8` | `10.0.0.0` até `10.255.255.255` |
| `172.16.0.0/12` | `172.16.0.0` até `172.31.255.255` |
| `192.168.0.0/16` | `192.168.0.0` até `192.168.255.255` |

Esses endereços são usados em:

- Casas
- Empresas
- Escolas
- Redes locais (LAN)

Eles **não funcionam diretamente na internet pública**.

---

## Exemplo de Rede Local

Uma rede doméstica comum pode utilizar:

```

192.168.0.1 → Roteador (Gateway)
192.168.0.10 → Computador
192.168.0.11 → Notebook
192.168.0.12 → Smart TV

```

Todos os dispositivos conseguem se comunicar **dentro da rede local**.

**Analogia:**  
É como um **condomínio fechado**.  
Cada casa tem um número interno, mas para falar com o mundo externo todos usam o **mesmo portão de saída**.

---

## NAT — Network Address Translation

O **NAT (Tradução de Endereços de Rede)** é a tecnologia que permite que vários dispositivos de uma rede local compartilhem **um único IP público válido na internet**.

Como funciona

1. Os dispositivos da rede possuem **IP privado**
2. O **roteador recebe um IP público da operadora**
3. Quando um dispositivo acessa a internet, o roteador **traduz o IP privado para o IP público**

---

Exemplo de Funcionamento

Rede interna:

```

192.168.0.10 → PC
192.168.0.11 → Notebook
192.168.0.12 → Celular

```

IP público do roteador:

```

187.45.120.20

```

Quando os dispositivos acessam a internet:

```

192.168.0.10 → 187.45.120.20
192.168.0.11 → 187.45.120.20
192.168.0.12 → 187.45.120.20

```

Todos compartilham o **mesmo IP público**, e o roteador gerencia as conexões.

**Analogia:**  
Imagine um prédio onde **vários apartamentos usam o mesmo endereço postal**, mas cada entrega é identificada pelo **número do apartamento**.

O NAT funciona como a **portaria do prédio**, que recebe as encomendas e entrega no apartamento correto.

---

## Gateway

O **gateway** é o dispositivo responsável por conectar a rede local com outras redes, geralmente a **internet**.

Na maioria das redes domésticas, o gateway é o **roteador**.

Exemplo comum:

```

192.168.0.1

```

Ele é o **ponto de saída da rede**.

---

## Por que o NAT é importante?

O NAT surgiu porque os **endereços IPv4 são limitados**.

Sem NAT, cada dispositivo no mundo precisaria de um **IP público único**, o que esgotaria rapidamente os endereços disponíveis.

Graças ao NAT, é possível conectar:

- milhares de dispositivos
- usando apenas **um único IP público**

---

## Informação Adicional: IPv6

Como os IPv4 são limitados, foi criado o **IPv6**, que possui **128 bits** de endereçamento.

Isso gera aproximadamente:

```

340 undecilhões de endereços

```

Um número praticamente inesgotável.

**Analogia:**  
Se o IPv4 é como o **número de casas de uma cidade**, o IPv6 é como o **número de casas de todo o planeta e ainda sobrando espaço**.

---

# Conclusão

O IPv4 continua sendo amplamente utilizado e funciona graças a tecnologias como:

- **Endereços privados**
- **NAT**
- **Gateway**

Esses recursos permitem que **milhões de redes locais funcionem usando poucos endereços públicos**, mantendo a internet operando de forma eficiente.

---

# Diferença entre Hub e Switch

Em uma rede de computadores, **Hub** e **Switch** são dispositivos usados para conectar vários equipamentos, como computadores, impressoras e servidores.

Apesar de terem funções parecidas, **o funcionamento deles é bem diferente**.

---

## Hub

O **Hub** é um dispositivo antigo usado para conectar vários computadores em uma rede.

Características

- Envia os dados para **todas as portas ao mesmo tempo**
- Não sabe **qual dispositivo é o destino**
- Pode ocorrer **colisão de dados**

Colisão de Rede

Colisão acontece quando **dois computadores enviam dados ao mesmo tempo**, causando interferência.

**Analogia:**  
Imagine uma sala onde alguém grita uma mensagem para todos ao mesmo tempo.  
Mesmo que apenas uma pessoa precise ouvir, **todos recebem a mensagem**.

Isso gera:
- Tráfego desnecessário
- Lentidão na rede

Por isso, o Hub é considerado um dispositivo **simples e limitado**.

---

## Switch

O **Switch** é a evolução do Hub e é muito mais eficiente.

Características

- Identifica **cada dispositivo conectado**
- Envia dados **somente para o destino correto**
- Evita colisões na rede
- Utiliza uma **tabela MAC** para saber onde cada dispositivo está conectado

Tabela MAC

O switch aprende automaticamente qual dispositivo está conectado em cada porta.

**Analogia:**  
Imagine um **porteiro de condomínio** que sabe exatamente em qual apartamento cada morador mora.

Assim, quando chega uma encomenda, ele entrega **diretamente no apartamento correto**, sem incomodar os outros.

---

# Comparação Rápida

| Característica | Hub | Switch |
|---|---|---|
| Inteligência | Muito baixa | Alta |
| Envio de dados | Para todas as portas | Apenas para o destino |
| Colisões | Sim | Muito raras |
| Uso atualmente | Obsoleto | Amplamente utilizado |

---

# Switch Gerenciável

Alguns switches possuem recursos avançados e são chamados de **Switches Gerenciáveis (Managed Switch)**.

Eles permitem:

- Criar **VLANs**
- Monitorar a rede
- Controlar tráfego
- Aplicar segurança

---

# VLAN (Virtual LAN)

A **VLAN** permite dividir uma rede física em **várias redes lógicas**.

Ou seja, mesmo usando o **mesmo switch**, é possível separar redes diferentes.

Exemplo

Uma empresa pode ter:

- **VLAN EDU** → Rede dos alunos  
- **VLAN ADM** → Rede da administração  

Mesmo conectados ao **mesmo switch**, os dispositivos ficam **isolados entre si**.

**Analogia:**  
Imagine um prédio com vários apartamentos.

Mesmo estando no **mesmo prédio**, cada apartamento é **separado** e tem sua própria privacidade.

---

# Comandos Básicos de Switch (Cisco)

Os comandos abaixo são comuns em switches Cisco para configuração.

---

Entrar no modo privilegiado (Admin)

```
switch> enable
````

Resultado:

```
switch#
```

---

Entrar no modo de configuração

```
switch# configure terminal
```

ou

```
switch# conf t
```

Resultado:

```
switch(config)#
```

---

Alterar o nome do Switch

```
switch(config)# hostname SW
```

Resultado:

```
SW(config)#
```

---

Criar uma VLAN

```
SW(config)# vlan X
```
> X = Qualquer número, exceto o 1
---

Nomear a VLAN

```
SW(config-vlan)# name NOMEdaVLAN
```

---

Sair do modo VLAN

Existem três formas:

Comando `end`

```
SW(config-vlan)# end
```

---

Teclas de atalho

```
CTRL + Z
```

---

Comando `exit`

```
SW(config-vlan)# exit
```

---

Ver VLANs configuradas

```
SW# show vlan brief
```

Esse comando mostra:

* VLANs existentes
* Nome da VLAN
* Portas associadas

---

# Colocar uma porta em uma VLAN

Exemplo usando a porta **FastEthernet 0/1**

```
SW(config)# interface f0/1
```

Depois:

```
SW(config-if)# switchport access vlan X 
```
> X = O mesmo número que colocou em "Criar uma VLAN"

Agora essa porta pertence à **VLAN X**.

---

Configurar várias portas ao mesmo tempo

Exemplo: portas **1 até 12**

```
SW(config)# interface range fastEthernet 0/1-12
```

Depois:

```
SW(config-if-range)# switchport access vlan X
```

> X = O mesmo número que colocou em "Criar uma VLAN"

Isso coloca **12 portas na VLAN X de uma vez**.

---

Porta Trunk (Comunicação entre VLANs)

Portas **Trunk** permitem transportar **tráfego de várias VLANs ao mesmo tempo**.

Usado tambem em **cascateamento** (daisy-chaining).

Muito usado para conectar:

* Switch com Switch
* Switch com Roteador
* Switch com Servidor

Configuração

```
SW(config)# interface g0/1
SW(config-if)# switchport mode trunk
```

**Analogia:**
Uma porta trunk funciona como uma **rodovia com várias faixas**, onde cada faixa representa uma VLAN diferente.

---

Ver Configuração Atual

```
SW# show running-config
```

Mostra toda a configuração ativa do switch.

---

Salvar Configuração

Para salvar a configuração permanentemente:

```
SW# write memory
```

ou

```
SW# copy running-config startup-config
```

Isso evita perder as configurações após reiniciar o switch.

Para resetar o Switch, zerar ele:

```
SW# erase startup-config
```

Após esse comando, reinicie:

```
SW# reload
```

---

# Conclusão

Os **switches modernos** são fundamentais para redes atuais porque:

* Evitam colisões
* Melhoram o desempenho
* Permitem segmentação com VLAN
* Possuem recursos avançados de gerenciamento

Por isso, o **Hub praticamente não é mais utilizado em redes modernas**.

---

## Exemplo da execução dos comandos no Cisco Packet Tracer (Mais lento)
* Configurando portas uma por uma
* VLAN **ADM** 42
* VLAN **EDU** 56

```
Switch>
Switch>enable
Switch#configure terminal
Enter configuration commands, one per line.  End with CNTL/Z.
Switch(config)#hostname SW
SW(config)#vlan 42
SW(config-vlan)#name ADM
SW(config-vlan)#end
SW#
%SYS-5-CONFIG_I: Configured from console by console

SW#configure terminal
Enter configuration commands, one per line.  End with CNTL/Z.
SW(config)#vlan 56
SW(config-vlan)#name EDU
SW(config-vlan)#end
SW#
%SYS-5-CONFIG_I: Configured from console by console

SW#show vlan brief

VLAN Name                             Status    Ports
---- -------------------------------- --------- -------------------------------
1    default                          active    Fa0/1, Fa0/2, Fa0/3, Fa0/4
                                                Fa0/5, Fa0/6, Fa0/7, Fa0/8
                                                Fa0/9, Fa0/10, Fa0/11, Fa0/12
                                                Fa0/13, Fa0/14, Fa0/15, Fa0/16
                                                Fa0/17, Fa0/18, Fa0/19, Fa0/20
                                                Fa0/21, Fa0/22, Fa0/23, Fa0/24
                                                Gig0/1, Gig0/2
42   ADM                              active    
56   EDU                              active    
1002 fddi-default                     active    
1003 token-ring-default               active    
1004 fddinet-default                  active    
1005 trnet-default                    active    
SW#Configure terminal
SW(config)#interface fastEthernet 0/1
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/2
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/3
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/4
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/5
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/6
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/7
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/8
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/9
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/10
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/11
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/12
SW(config-if)#switchport access vlan 42
SW(config-if)#exit
SW(config)#interface fastEthernet 0/13
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/14
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/15
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/16
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/17
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/18
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/19
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/20
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/21
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/22
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/23
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#interface fastEthernet 0/24
SW(config-if)#switchport access vlan 56
SW(config-if)#exit
SW(config)#exit
SW#
%SYS-5-CONFIG_I: Configured from console by console

SW#show vlan brief 

VLAN Name                             Status    Ports
---- -------------------------------- --------- -------------------------------
1    default                          active    Gig0/1, Gig0/2
42   ADM                              active    Fa0/1, Fa0/2, Fa0/3, Fa0/4
                                                Fa0/5, Fa0/6, Fa0/7, Fa0/8
                                                Fa0/9, Fa0/10, Fa0/11, Fa0/12
56   EDU                              active    Fa0/13, Fa0/14, Fa0/15, Fa0/16
                                                Fa0/17, Fa0/18, Fa0/19, Fa0/20
                                                Fa0/21, Fa0/22, Fa0/23, Fa0/24
1002 fddi-default                     active    
1003 token-ring-default               active    
1004 fddinet-default                  active    
1005 trnet-default                    active    
SW#write memory
SW#
```
---

## Exemplo da execução dos comandos no Cisco Packet Tracer (Mais rápido)
* VLAN **ADM** 42
* VLAN **EDU** 56
* Comandos para configurar várias portas ao mesmo tempo

```
Switch>
Switch>enable
Switch#configure terminal
Enter configuration commands, one per line.  End with CNTL/Z.
Switch(config)#hostname SW
SW(config)#vlan 42
SW(config-vlan)#name ADM
SW(config-vlan)#end
SW#
%SYS-5-CONFIG_I: Configured from console by console

SW#configure terminal
Enter configuration commands, one per line.  End with CNTL/Z.
SW(config)#vlan 56
SW(config-vlan)#name EDU
SW(config-vlan)#end
SW#
%SYS-5-CONFIG_I: Configured from console by console

SW#show vlan brief

VLAN Name                             Status    Ports
---- -------------------------------- --------- -------------------------------
1    default                          active    Fa0/1, Fa0/2, Fa0/3, Fa0/4
                                                Fa0/5, Fa0/6, Fa0/7, Fa0/8
                                                Fa0/9, Fa0/10, Fa0/11, Fa0/12
                                                Fa0/13, Fa0/14, Fa0/15, Fa0/16
                                                Fa0/17, Fa0/18, Fa0/19, Fa0/20
                                                Fa0/21, Fa0/22, Fa0/23, Fa0/24
                                                Gig0/1, Gig0/2
42   ADM                              active    
56   EDU                              active    
1002 fddi-default                     active    
1003 token-ring-default               active    
1004 fddinet-default                  active    
1005 trnet-default                    active  
SW#configure terminal
Enter configuration commands, one per line.  End with CNTL/Z.
SW(config)#interface range fastEthernet 0/1-12
SW(config-if-range)#switchport access vlan 42
SW(config-if-range)#exit
SW(config)#interface range fastEthernet 0/13-24
SW(config-if-range)#switchport access vlan 56
SW(config-if-range)#exit
SW(config)#exit
SW#
%SYS-5-CONFIG_I: Configured from console by console

SW#show vlan brief 

VLAN Name                             Status    Ports
---- -------------------------------- --------- -------------------------------
1    default                          active    Gig0/1, Gig0/2
42   ADM                              active    Fa0/1, Fa0/2, Fa0/3, Fa0/4
                                                Fa0/5, Fa0/6, Fa0/7, Fa0/8
                                                Fa0/9, Fa0/10, Fa0/11, Fa0/12
56   EDU                              active    Fa0/13, Fa0/14, Fa0/15, Fa0/16
                                                Fa0/17, Fa0/18, Fa0/19, Fa0/20
                                                Fa0/21, Fa0/22, Fa0/23, Fa0/24
1002 fddi-default                     active    
1003 token-ring-default               active    
1004 fddinet-default                  active    
1005 trnet-default                    active
SW#write memory
SW#
```

---

# Spanning Tree Protocol (STP)

## O que é
O **Spanning Tree Protocol (STP)** é um protocolo de rede usado em **switches** para evitar **loops de rede** em redes Ethernet.

## Por que ele é necessário
Quando existem **vários caminhos entre switches**, podem ocorrer **loops** (dados circulando infinitamente na rede).  
Isso causa problemas como:

- Congestionamento da rede
- Pacotes duplicados
- Queda de desempenho

O **STP resolve isso bloqueando caminhos redundantes**, deixando apenas **um caminho ativo** entre os dispositivos.

## Como funciona (de forma simples)
O STP cria uma **estrutura em forma de árvore**, onde:

1. Um switch é escolhido como **Root Bridge (switch principal)**.
2. O protocolo calcula **o melhor caminho** até esse switch.
3. Caminhos extras são **bloqueados** para evitar loops.
4. Se o caminho principal falhar, o STP **ativa um caminho alternativo automaticamente**.

## Analogia simples
Imagine uma **cidade com várias ruas entre dois lugares**.

- Se todas as ruas ficarem abertas ao mesmo tempo, pode acontecer **trânsito circulando em círculos**.
- O STP **fecha algumas ruas temporariamente** para que o tráfego siga **um caminho organizado**.
- Se a rua principal fechar, **outra rua é aberta automaticamente**.

## Vantagens
- Evita loops de rede
- Mantém a rede estável
- Permite redundância (caminhos de backup)

## Desvantagem
- Pode demorar alguns segundos para reorganizar a rede quando ocorre uma falha.

## Conclusão
O **STP** é essencial em redes com **vários switches conectados**, pois **organiza os caminhos da rede e evita loops**, garantindo que os dados trafeguem de forma correta.

---

# Segurança e Configurações no Switch

## Senha de Acesso ao Modo Privilegiado

O modo privilegiado (`enable`) dá acesso total ao switch, por isso precisa ser protegido.

---

Método Menos Seguro

```
enable
configure terminal
enable password SUASENHA
end
write memory
```

A senha fica armazenada de forma menos protegida

---

Método Mais Seguro (Recomendado)

```
enable
configure terminal
enable secret SUASENHA
end
write memory
```

A senha é armazenada de forma criptografada


Analogia:

enable password → senha escrita em papel

enable secret → senha guardada em um cofre

---

**Remover Senha**

Se usou enable password:


```
enable
configure terminal
no enable password
end
write memory
reload
```

---

Se usou enable secret:

```
enable
configure terminal
no enable secret
end
write memory
reload
```

---

## Senha no Console (Acesso Físico)

Protege o acesso quando alguém conecta um cabo console ao switch.

```
enable
configure terminal
line console 0
password SUASENHA
login
end
write memory
```

Analogia:
É como colocar uma senha na porta de entrada física do equipamento.

---

**Atalho Importante**

Se o terminal travar durante comandos:

Ctrl + Shift + 6

Interrompe processos (ex: ping travado)

---

# EtherChannel (Link Aggregation)

O EtherChannel permite juntar várias portas físicas em uma única conexão lógica.

---

**Vantagens**

Aumenta a velocidade

Melhora a estabilidade

Cria redundância (se um cabo falhar, outro assume)


Analogia:
É como transformar várias ruas em uma avenida larga, permitindo mais fluxo de carros (dados).

---

# Configuração do EtherChannel

* Switch 1

```
enable
configure terminal
interface range gigabitEthernet 0/1-2
channel-group 1 mode active
end
write memory
```

---

* Switch 2

```
enable
configure terminal
interface range gigabitEthernet 0/1-2
channel-group 1 mode passive
end
write memory
```

---

# Protocolos do EtherChannel

* LACP (Link Aggregation Control Protocol)

Padrão aberto (IEEE 802.3ad / 802.1AX)

Funciona com diversas marcas

---

* PAgP (Port Aggregation Protocol)

Proprietário da Cisco

Funciona apenas em equipamentos Cisco

---

## Verificar Configuração

```
show etherchannel summary
```

ou

```
show interfaces etherchannel
```

Esses comandos mostram:

* Portas agregadas

* Status do canal

* Tipo de protocolo usado

---

**Informação Adicional**

Para o EtherChannel funcionar corretamente, as interfaces devem ter:

* Mesma velocidade

* Mesmo duplex

* Mesma VLAN (em access)

* Mesma configuração trunk (se for trunk)


Caso contrário, o canal pode não funcionar corretamente.

---

# Conclusão

Com essas configurações você consegue:

Proteger o switch com senha segura

Controlar acesso físico via console

Utilizar agregação de links para melhorar desempenho


Esses recursos são essenciais para redes mais seguras, rápidas e profissionais.

---

# Roteadores — Conceitos e Configuração Básica (Cisco / Packet Tracer)

Os **roteadores** são dispositivos responsáveis por **conectar redes diferentes** e encaminhar os dados entre elas.  
Eles funcionam como **pontes entre redes**, permitindo que dispositivos locais acessem outras redes ou a internet.

**Analogia:**  
Se uma rede local fosse uma cidade, o roteador seria a **rodovia que liga essa cidade ao resto do país**.

---

## Roteador Doméstico

O **roteador doméstico** é usado em casas e pequenos escritórios.

### Funções principais

- Compartilhar internet entre vários dispositivos
- Criar uma **rede local (LAN)**
- Fazer **NAT** (tradução de endereços)
- Distribuir IP automaticamente (**DHCP**)
- Fornecer Wi-Fi

Exemplo de dispositivos conectados:

- Computador
- Notebook
- Celular
- Smart TV
- Impressora

Todos usam o **mesmo acesso à internet** através do roteador.

---

## Roteador Empresarial

Os **roteadores empresariais** são mais robustos e possuem recursos avançados.

### Características

- Suportam **mais redes e usuários**
- Possuem **interfaces diferentes (Ethernet, Serial, Fiber)**
- Permitem **configuração manual detalhada**
- Utilizam **protocolos de roteamento**

Eles são comuns em:

- Empresas
- Universidades
- Provedores de internet
- **Data centers**

---

## Data Center

Um **data center** é um ambiente onde ficam concentrados:

- Servidores
- Roteadores
- Switches
- Sistemas de armazenamento

Esses equipamentos trabalham juntos para manter **sites, sistemas e serviços online**.

**Analogia:**  
Um data center funciona como uma **grande central de operações da internet**, onde milhares de computadores trabalham ao mesmo tempo.

---

## Conexões Serial — DCE e DTE

Em algumas redes (especialmente em laboratórios e simulações), roteadores podem se conectar através de **interfaces seriais**.

Existem dois lados:

**DCE (Data Communication Equipment)**

- É o dispositivo que **fornece o clock da comunicação**
- Controla a velocidade da conexão

**DTE (Data Terminal Equipment)**

- É o dispositivo que **recebe o clock**
- Apenas participa da comunicação

**Analogia:**  
Imagine uma dança:

- O **DCE** define o ritmo da música  
- O **DTE** dança seguindo esse ritmo

---

## Velocidade de Link

Em alguns cenários, links podem ter velocidades específicas.

Exemplo:

256 kbps

Esse tipo de velocidade já foi comum em:

- Conexões dedicadas
- Redes bancárias
- Links antigos de comunicação

---

## Protocolo de Roteamento — RIP

O **RIP (Routing Information Protocol)** é um dos protocolos de roteamento mais antigos.

### Características

- Fácil de configurar
- Compatível com muitos roteadores
- Baseado em **número de saltos (hops)**

**Analogia:**  
É como escolher o caminho com **menos cruzamentos** para chegar ao destino.

Embora ainda seja usado para estudo, hoje existem protocolos mais avançados, como:

- **OSPF**
- **EIGRP**
- **BGP**

---

## 5 Passos Básicos para Configurar um Roteador

1. Definir o **nome do roteador**  
2. Configurar a **rede LAN**  
3. Configurar a **rede WAN**  
4. Definir o **protocolo de roteamento**  
5. **Salvar a configuração**

---

# Comandos de Configuração no Roteador 1 (Cisco)

**Entrar no modo privilegiado**

```
Router> enable
```

---

**Entrar no modo de configuração**

```
Router# configure terminal
```

---

**Definir o Nome do Roteador**

```
Router(config)# hostname SP 
```

Resultado:

```
SP(config)#
```

---

**Configurar Interface LAN**

```
SP(config)# interface fastEthernet 0/0
```

**Adicionar descrição:**

```
SP(config-if)# description REDE_LOCAL
```

**Definir endereço IP:**

```
SP(config-if)# ip address 192.168.0.1 255.255.255.0
```

**Ativar interface:**

```
SP(config-if)# no shutdown
```

**Sair da interface:**

```
SP(config-if)# exit
```

---

**Configurar Interface WAN (Serial)**

```
SP(config)# interface serial 0/0
```

**Adicionar descrição:**

```
SP(config-if)# description LINK_ENTRE_ROTEADORES
```

**Definir endereço IP:**

```
SP(config-if)# ip address 10.0.0.1 255.255.255.252
```

**Ativar interface:**

```
SP(config-if)# no shutdown
```

**Definir clock (caso seja DCE):**

```
SP(config-if)# clock rate 256000
```

***Definir largura de banda:**

```
SP(config-if)# bandwidth 256
```

**Sair:**

```
SP(config-if)# exit
```

---

**Configurar Protocolo RIP**

```
SP(config)# router rip
```

**Definir redes participantes:**

```
SP(config-router)# network 192.168.0.0
```

```
SP(config-router)# network 10.0.0.0
```

**Sair da configuração:**

```
SP(config-router)# end
```

ou

```
Ctrl + Z
```

---

**Salvar Configuração**

```
SP# copy running-config startup-config
```

Isso garante que as configurações não sejam perdidas após reiniciar o roteador.

---

# Comandos de Configuração no Roteador 2 (Cisco)

**Entrar no modo privilegiado**

```
Router> enable
```

---

**Entrar no modo de configuração**

```
Router# configure terminal
```

---

**Definir o Nome do Roteador**

```
Router(config)# hostname RJ
```

Resultado:

```
RJ(config)#
```

---

**Configurar Interface LAN**

```
RJ(config)# interface fastEthernet 0/1
```

**Adicionar descrição:**

```
RJ(config-if)# description QUALQUERUMASEQUISER
```

**Definir endereço IP:**

```
RJ(config-if)# ip address 192.168.10.24 255.255.255.0
```

**Ativar interface:**

```
RJ(config-if)# no shutdown
```

**Sair da interface:**

```
RJ(config-if)# exit
```

---

**Configurar Interface WAN (Serial)**

```
RJ(config)# interface serial 0/1
```

**Adicionar descrição:**

```
RJ(config-if)# description QUALQUERUMSEQUISER
```

**Definir endereço IP:**

```
RJ(config-if)# ip address 20.0.0.1 255.0.0.0
```

**Ativar interface:**

```
RJ(config-if)# no shutdown
```

**Definir clock (caso seja DCE):**

```
SP(config-if)# clock rate 256000
```

***Definir largura de banda:**

```
RJ(config-if)# bandwidth 256
```

**Sair:**

```
RJ(config-if)# exit
```

---

**Configurar Protocolo RIP**

```
RJ(config)# router rip
```

**Definir redes participantes:**

```
RJ(config-router)# network 192.168.0.0
```

```
RJ(config-router)# network 20.0.0.0
```

**Sair da configuração:**

```
RJ(config-router)# end
```

ou

```
Ctrl + Z
```

---

**Salvar Configuração**

```
RJ# copy running-config startup-config
```

---

**Informação Importante**

Sempre que configurar uma interface de rede em roteadores Cisco:

A interface inicia desativada

É necessário usar o comando:

```
no shutdown
```

Caso contrário, a interface não funcionará.


---

# Conclusão

Os roteadores são fundamentais para a comunicação entre redes.

Eles permitem:

Conectar redes locais à internet

Controlar o fluxo de dados

Definir rotas para os pacotes

Interligar redes diferentes

---

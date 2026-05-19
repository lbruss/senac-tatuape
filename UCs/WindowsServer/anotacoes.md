# DIA 3 - Data: 19/05/2026

# 6. Atividades realizadas

---

**6.1 Objetivo do dia**

O terceiro dia do projeto foi focado na implementação dos serviços centrais da infraestrutura, incluindo:

- instalação do Windows Server;
- configuração dos serviços de rede corporativos;
- preparação do servidor Linux de aplicação;
- reorganização da conectividade da rede;
- correção de falhas no ambiente de infraestrutura.

---

**6.2 Problemas iniciais de conectividade**

No início das atividades, foi realizada uma tentativa de conectar o servidor Linux Firewall à internet.

Durante esse processo, foi identificado comportamento inadequado no roteador da infraestrutura, impedindo a continuidade da configuração do firewall naquele momento.

Como medida corretiva, optou-se por:

- interromper temporariamente a configuração do Linux Firewall;
- priorizar os demais servidores;
- realizar reset completo do roteador.

Após o reset, o roteador voltou a operar normalmente.

---

**6.3 Reorganização temporária da infraestrutura**

Com o roteador funcionando novamente, foi realizada uma reorganização provisória da rede para continuidade das instalações.

Equipamentos conectados:

- servidor Windows Server;
- servidor Linux Debian de aplicação (Tomcat + MySQL).

Essa abordagem permitiu continuidade do projeto enquanto o firewall permanecia pendente de reconfiguração.

---

**Aqui é recomendado colocar a imagem8 (infraestrutura temporária conectada ao roteador).**

---

**6.4 Instalação do Windows Server 2025**

Foi iniciada e concluída com sucesso a instalação do sistema operacional **Windows Server 2025** no servidor destinado à infraestrutura Microsoft.

Após a instalação base, iniciou-se imediatamente a configuração dos serviços de rede corporativos.

---

**Aqui é recomendado colocar a imagem9 (instalação do Windows Server).**

---

**6.5 Configuração dos serviços do Windows Server**

No Windows Server foram instalados e configurados os seguintes serviços:

- Active Directory Domain Services (AD DS)
- DNS Server
- DHCP Server

Esses serviços são fundamentais para gerenciamento centralizado da infraestrutura.

Funções implementadas:

**Active Directory**
Responsável por:

- gerenciamento centralizado de usuários;
- autenticação de rede;
- estrutura de domínio corporativo;
- controle administrativo da infraestrutura.

**DNS**
Responsável por:

- resolução de nomes internos;
- localização de serviços da rede;
- integração com Active Directory.

**DHCP**
Responsável por:

- distribuição automática de endereços IP;
- definição de gateway;
- configuração automática de DNS nos clientes.

---

**6.6 Configuração de rede do Windows Server**

Configuração aplicada:

| Parâmetro | Valor |
|---------|-------|
| IP do servidor | 192.168.0.10 |
| Gateway padrão | 192.168.0.1 |
| DNS principal | 192.168.0.10 |

---

**6.7 Configuração do escopo DHCP**

Foi criado e configurado o escopo DHCP do ambiente.

Configuração:

| Parâmetro | Valor |
|---------|-------|
| IP inicial | 192.168.0.50 |
| IP final | 192.168.0.200 |
| Gateway padrão | 192.168.0.1 |
| DNS distribuído | 192.168.0.10 |

Faixa de distribuição:

**192.168.0.100 → 192.168.0.200**

Essa configuração garante entrega automática de endereços IP para os dispositivos clientes da rede.

---

**6.8 Configuração do domínio corporativo**

Foi criado o domínio interno da infraestrutura:

```
auto.tec
```

Esse domínio será utilizado para:

- autenticação centralizada;
- gerenciamento de rede;
- resolução DNS interna;
- integração entre os dispositivos corporativos.

---

**6.9 Ajustes no roteador**

Como o serviço DHCP passou a ser fornecido pelo Windows Server, o DHCP interno do roteador foi desativado.

Essa alteração evita:

- conflito entre múltiplos servidores DHCP;
- distribuição incorreta de IP;
- inconsistência na rede.


Situação da infraestrutura:

| Serviço | 	Responsável |
|---------|-------------|
| DHCP | Windows Server |
| DNS interno |	Windows Server |
| Gateway | 	Linux Firewall (planejado) |
| Wi-Fi / Access Point | 	Roteador |

---

**6.10 Testes de conectividade e DNS**

Foi realizado teste de resolução de nome em um dos notebooks clientes.

Teste executado:

```
ping auto.tec
```

Resultado:

- resolução DNS funcional
- comunicação com domínio interno confirmada

Esse teste validou:

funcionamento do DNS;

- integração entre cliente e servidor;

- operação básica do Active Directory.

---

**6.11 Servidor Linux de aplicação**

No servidor Linux destinado à aplicação AutoLock, foram instalados:

- Apache Tomcat

- Java

Versões registradas:

| Software | 	Versão |
|----------|--------|
| Tomcat |	8.4.0 |
| Java | 25.0.1 |


Esse servidor será responsável futuramente por:

- hospedagem da aplicação backend;
- processamento da API;
-integração com banco de dados.


Pendência:

- instalação do MySQL (versão atualizada)

---

**6.12 Linux Firewall**

O servidor Linux Firewall foi reinstalado.

Ao final do dia, o sistema estava preparado para nova configuração.

Pendência:

- configuração completa da interface WAN;

- configuração da interface LAN;

- NAT;

- firewall;

- nftables;

- DHCP/DNS (caso necessário);

- integração definitiva com a infraestrutura.

---

# 7. Conclusão do Dia 3

O terceiro dia representou um avanço significativo na infraestrutura do projeto.

Resultados obtidos:

- roteador recuperado após falha
- Windows Server 2025 instalado
- Active Directory configurado
- DNS configurado
- DHCP configurado
- domínio corporativo criado (auto.tec)
- DHCP do roteador desativado
- teste de resolução DNS validado
- Tomcat instalado no servidor Linux
- Java instalado no servidor Linux
- Linux Firewall reinstalado

Pendências principais:

- configuração definitiva do Linux Firewall;

- instalação do MySQL;

- integração completa entre todos os servidores.

---

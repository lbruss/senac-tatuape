# Windows Server 

O Windows Server é um sistema operacional da Microsoft criado especialmente para gerenciar redes, usuários e serviços dentro de empresas.


---

**O que é Windows Server?**

O Windows Server é como uma versão “profissional” do Windows, feita para:

controlar vários computadores ao mesmo tempo

armazenar dados com segurança

rodar serviços importantes

manter sistemas funcionando 24h


Analogia:
Se o Windows comum é um computador pessoal, o Windows Server é como o “cérebro da empresa”, que organiza tudo e garante que tudo funcione corretamente.


---

**Função do Windows Server**

Ele serve para centralizar e gerenciar tudo dentro de uma rede.


---

1. Gerenciamento de usuários

Com o Windows Server você pode:

criar contas para funcionários

definir permissões (quem pode acessar o quê)

controlar logins


Isso é feito principalmente com o Active Directory

Analogia:
É como um porteiro inteligente, que decide quem entra e onde pode ir.


---

2. Compartilhamento de arquivos

Criar pastas compartilhadas

Controlar quem pode acessar

Armazenar arquivos da empresa


Muito usado em escritórios


---

3. Servidor de rede

Ele pode fornecer serviços como:

DHCP → distribui IP automaticamente

DNS → resolve nomes (ex: google.com)

Servidor Web → hospeda sites

Servidor de impressão



---

4. Segurança

Controle de acesso

Políticas de senha

Firewall

Auditoria de usuários


Ajuda a proteger os dados da empresa


---

5. Virtualização

Com ferramentas como o Hyper-V, o Windows Server permite:

criar máquinas virtuais

rodar vários sistemas em um único servidor


Analogia:
É como ter vários computadores dentro de um só.


---

6. Aplicações empresariais

Ele também roda sistemas como:

ERPs

bancos de dados

sistemas internos da empresa



---

## Diferença entre Windows comum e Windows Server

Windows comum	Windows Server

Uso pessoal	Uso empresarial
1 usuário principal	Vários usuários
Interface simples	Ferramentas avançadas
Não gerencia rede	Gerencia toda a rede



---

## Onde o Windows Server é usado?

Empresas

Escolas

Hospitais

Bancos

Data centers



---

**Resumindo**

O Windows Server serve para:

organizar redes

controlar usuários

armazenar dados

manter serviços funcionando

---

# Conclusão

O Windows Server é essencial no mundo da TI porque permite que empresas:

tenham controle total da rede

aumentem a segurança

melhorem a organização

mantenham tudo funcionando de forma centralizada


Em poucas palavras:
sem servidores, a maioria das empresas simplesmente não conseguiria funcionar direito.

---

# Versões do Windows Server

O **Windows Server** possui diferentes versões, cada uma com objetivos específicos.

**Windows Server Standard**

- Possui **menos recursos avançados**
- Indicado para **pequenas e médias empresas**
- Suporta virtualização, mas com limitações

---

**Windows Server Datacenter**

- Versão mais completa
- Possui **todos os recursos disponíveis**
- Indicado para:
  - grandes empresas
  - data centers
  - ambientes com muita virtualização

**Analogia:**  
- Standard → carro básico  
- Datacenter → carro completo com todos os opcionais

---

# Windows Server 2022 (64 bits)

O **Windows Server 2022 x64** é uma versão moderna e estável.

**Características**

- Melhor segurança  
- Correções de erros  
- Maior desempenho  
- Suporte a novas tecnologias  

Em geral, quem aprende uma versão consegue usar outras, pois a base é muito parecida.

---

# Instalação do Windows Server

A instalação é **muito semelhante ao Windows comum**:

1. Iniciar a instalação pelo ISO
2. Escolher idioma
3. Avançar normalmente

---

**Escolha da versão**

Durante a instalação, escolha:

Datacenter (Experiência com área de trabalho)

Essa opção inclui **interface gráfica (GUI)**, facilitando o uso.

---

# Configuração de Rede (NIC Teaming)

O **NIC Teaming** permite unir várias placas de rede em uma só.

**Vantagens**

- Maior velocidade  
- Redundância (se uma falhar, outra assume)  
- Melhor desempenho  

**Analogia:**  
É como usar **várias pistas em uma rodovia** ao invés de apenas uma.

---

## Criar equipe de rede

1. Vá em **Servidor Local**
2. Em **Agrupamento NIC**, clique em:

Desabilitado

3. Clique em **Tarefas → Nova Equipe**
4. Defina um nome (exemplo):

NICBruss

5. Selecione as placas de rede disponíveis

---

## Configurações recomendadas

- **Modo de agrupamento:** Alternar independente  
- **Balanceamento de carga:** Dinâmico  
- **Adaptador em espera:** Nenhum (todos ativos)  
- **Interface primária:** padrão  

---

# Configurar IP Manual

1. Clique com o botão direito no ícone de rede (canto inferior direito)
2. Abra:

Configurações de rede e Internet

3. Clique em:

Alterar opções de adaptador

4. Clique com o botão direito na interface criada (ex: NICBruss)
5. Vá em:

Protocolo IP Versão 4 (TCP/IPv4)

6. Clique em **Propriedades**

---

## Definir IP

Marque:

Usar o seguinte endereço IP

Exemplo:

- IP: 192.168.32.10
- Máscara: 255.255.255.0
- Gateway: 192.168.32.1

---

## Alterar Nome do Servidor

1. Vá em **Servidor Local**
2. Clique em **Nome do Computador**
3. Clique em **Alterar**
4. Defina um nome (exemplo):

SRVBruss

5. Clique em **OK**
6. Reinicie o servidor se necessário

**Analogia:**  
O nome do servidor é como o **nome de um funcionário na empresa**, facilita a identificação na rede.

---

**Informação Adicional**

Mesmo após alterar configurações, às vezes o sistema pode:

- não aplicar imediatamente
- apresentar erro temporário

Nesses casos, **reiniciar o servidor resolve na maioria das vezes**.

---

# Conclusão

Com esses passos você consegue:

- Escolher a versão correta do Windows Server  
- Instalar o sistema  
- Configurar rede  
- Criar redundância com NIC Teaming  
- Definir IP fixo  
- Nomear o servidor  

Essas são as configurações iniciais essenciais para começar a trabalhar com servidores Windows em ambientes profissionais.

---

# RAID — RAID 1 e RAID 5

RAID é uma tecnologia que usa **vários discos (HDs/SSDs)** para melhorar:

- segurança dos dados  
- desempenho  
- disponibilidade  

---

**IMPORTANTE**

**RAID NÃO substitui backup**

**Analogia:**  
- RAID = cofre reforçado  
- Backup = cópia guardada em outro lugar  

Se algo grave acontecer (vírus, erro humano, incêndio), só o backup salva.

---

# RAID 1 — Espelhamento

**Como funciona**

- Usa **no mínimo 2 discos**
- Um disco é uma cópia exata do outro

Tudo que acontece em um disco → acontece no outro automaticamente

---

**Analogia**

É como escrever em **dois cadernos ao mesmo tempo**.  
Se você perder um, o outro ainda tem tudo.

---

## Vantagens

- Alta segurança  
- Simples de configurar  
- Proteção contra falha de 1 disco  

---

## Desvantagens

- Usa o dobro de espaço (2 discos = capacidade de 1)  
- Não melhora muito o desempenho  

---

# Configurar RAID 1 no Windows

**Passo a passo**

1. Clique com botão direito no menu iniciar  
2. Abra **Gerenciamento de Disco**

---

**Inicializar discos**

Ao aparecer:

- **MBR** → suporta até 2TB  
- **GPT** → suporta discos maiores e é mais moderno  

Recomendado: **GPT**

---

**Criar espelhamento**

1. Clique com botão direito no disco  
2. Selecione:

Novo volume espelhado

3. Se não aparecer:
- Converta para **Disco Dinâmico**
4. Adicione o segundo disco  
5. Avance → Formate → Concluir  

---

# Se um HD falhar (RAID 1)

**O que acontece**

- O sistema continua funcionando  
- Seus arquivos continuam acessíveis  

---

**Resolver problema**

1. Vá em **Gerenciamento de Disco**
2. Clique no volume espelhado
3. Selecione:

Remover espelho

4. Escolha o disco com problema  

Seus dados continuam no disco saudável

---

## Refazer o espelho

1. Clique no disco ativo  
2. Selecione:

Adicionar espelho

3. Escolha o novo disco  
4. Confirme  

---

# RAID 5 — Paridade

**Como funciona**

- Usa **mínimo 3 discos**
- Os dados são distribuídos entre os discos
- Existe uma **informação de paridade** que permite recuperar dados

---

**Analogia**

Imagine 3 pessoas guardando partes de um segredo.

Se uma esquecer, as outras conseguem **reconstruir a informação**.

---

## Vantagens

- Melhor aproveitamento de espaço  
- Boa segurança  
- Melhor desempenho que RAID 1 (principalmente leitura)

---

## Desvantagens

- Configuração mais complexa  
- Se **2 discos falharem**, os dados são perdidos  

---

# Configurar RAID 5 no Windows

**Passo a passo**

1. Abra **Gerenciamento de Disco**
2. Clique com botão direito em um disco
3. Selecione:

Novo volume RAID-5

4. Adicione **pelo menos 3 discos**
5. Avance → Formate → Concluir  

---

# Se um HD falhar (RAID 5)

**O que acontece**

- O sistema continua funcionando  
- Os dados ainda estão acessíveis  
- Mas a segurança diminui  

---

## Reparar RAID 5

1. Vá em **Gerenciamento de Disco**
2. Clique no volume RAID
3. Selecione:

Reparar volume

4. Escolha um novo disco  
5. Confirme  

O sistema irá reconstruir automaticamente os dados

---

## Comparação Rápida

| Tipo | Mín. discos | Segurança | Desempenho | Espaço |
|------|------------|----------|------------|--------|
| RAID 1 | 2 | Alta | Normal | 50% |
| RAID 5 | 3 | Média/Alta | Bom | Melhor aproveitamento |

---

**Informação Adicional**

RAID pode ser implementado de duas formas:

**RAID por software**
- Configurado no sistema operacional  
- Mais simples  

**RAID por hardware**
- Feito por controladoras físicas  
- Mais rápido e profissional  

---

# Conclusão

RAID é essencial para ambientes profissionais porque:

- protege dados contra falhas de disco  
- mantém sistemas funcionando  
- melhora desempenho  

Em resumo:

- **RAID 1** → máxima segurança (espelho)  
- **RAID 5** → equilíbrio entre segurança e desempenho

---

# Tipos de Rede: Workgroup vs Cliente-Servidor (Active Directory)

Este guia explica de forma simples como funcionam os dois principais modelos de rede:

- Workgroup (Grupo de Trabalho)
- Cliente-Servidor (Active Directory)

---

## Rede Workgroup (Grupo de Trabalho)

**O que é ?**

É uma rede **simples e descentralizada**, onde cada computador funciona de forma independente.

---

## Características

- Usuários e senhas ficam **em cada computador**
- Não existe servidor central
- Cada máquina precisa ser configurada separadamente
- Indicado para redes pequenas (até ~20 computadores)

---

**Analogia**

É como um grupo de pessoas sem chefe:  
cada um cuida do seu próprio trabalho, sem controle central.

---

## Desvantagens

- Difícil de gerenciar  
- Pouca segurança  
- Não escala bem  

---

# Rede Cliente-Servidor (Active Directory)

**O que é?**

É uma rede **centralizada**, onde existe um servidor que controla tudo.

Esse servidor roda o **Active Directory (AD)** no Windows Server.

---

## Características

- Usuários centralizados  
- Login único em qualquer máquina  
- Controle de acesso  
- Mais segurança  
- Ideal para empresas  

---

**Analogia**

É como uma empresa com um **chefe (servidor)**:

- Ele controla quem entra  
- Define permissões  
- Organiza tudo  

---

# Active Directory (AD)

Quando você instala o AD, o servidor vira um:

## Controlador de Domínio (Domain Controller - DC)

- Ele é o “cérebro da rede”

---

## Estrutura de Domínio

Exemplo:

bruss.tec        → domínio principal (matriz) sp.bruss.tec     → filial sc.bruss.tec     → filial

- Isso forma uma estrutura chamada **árvore de domínio**

---

# RODC (Read-Only Domain Controller)

**O que é?**

- Controlador de domínio **somente leitura**
- Cópia do servidor principal

---

**Analogia**

É como uma **filial com acesso limitado**:

- Pode consultar dados  
- Não pode fazer alterações críticas  

**Muito usado em locais com menos segurança**

---

# Instalação do Active Directory

## Pré-requisitos

- Nome do servidor definido  
- IP fixo configurado  
- Espaço em disco disponível  
- DNS (instalado automaticamente com o AD)

---

**Passo a passo**

1. Abrir **Gerenciador do Servidor**
2. Clicar em:

Gerenciar → Adicionar funções e recursos

3. Avançar até selecionar o servidor
4. Marcar:

Serviços de Domínio Active Directory

5. Clicar em **Adicionar recursos**
6. Avançar até **Instalar**

---

**Promover a controlador de domínio**

Após instalar:

- Clique em:

Promover este servidor a um controlador de domínio

---

## Configuração

1. Escolher:

Adicionar uma nova floresta

2. Definir domínio (ex: `bruss.tec`)
3. Escolher nível funcional (versão do servidor)
4. Criar senha de recuperação
5. Avançar até instalar

- O servidor irá reiniciar automaticamente

---

# Instalação do DHCP

**O que é DHCP?**

É o serviço que distribui IP automaticamente na rede.

**Analogia:**  
É como um **atendente que entrega números de senha (IPs)** para cada dispositivo.

---

## Instalar DHCP

1. Gerenciador do Servidor  
2. Clique em:

Gerenciar → Adicionar funções e recursos

3. Selecionar:

Servidor DHCP

4. Avançar até instalar  
5. Concluir configuração  

---

# Configurar Escopo DHCP

## Informações necessárias (exemplo)

IP inicial: 192.168.32.100 IP final:   192.168.32.200 Duração:    2 horas DNS:        192.168.32.10 Gateway:    192.168.32.1

---

**Criar escopo**

1. Abrir:

Ferramentas → DHCP

2. Clique com botão direito em **IPv4**
3. Selecione:

Novo Escopo

4. Avançar e configurar:

- Nome e descrição  
- Intervalo de IP  
- Tempo de concessão  
- Gateway  
- DNS  

**Ignorar WINS (não é necessário)**

---

# Testar DHCP

Em outro computador:

1. Abrir o **CMD**
2. Digitar:

```
ipconfig
```

---

**Verifique:**

- Se recebeu IP dentro do intervalo

- Se o DNS corresponde ao servidor

- Se o gateway está correto


**Se tudo estiver certo, o DHCP está funcionando**

---

# Conclusão

**Comparação**

Característica	Workgroup	Active Directory

- Tipo	Descentralizado	Centralizado
- Usuários	Local	Central
- Segurança	Baixa	Alta
- Escalabilidade	Limitada	Alta

---

# Resumo

Workgroup → simples, pequeno, doméstico

AD → profissional, seguro, empresarial

---

**Insight Final**

Em redes modernas, o padrão é usar:

- Active Directory

- DHCP

- DNS

**Isso permite controle total, organização e segurança na rede.**

---

# AD - Unidade Organizacional (OU) e Usuários

## O que é uma Unidade Organizacional (OU)?

A **OU (Organizational Unit)** é como uma pasta dentro do Active Directory usada para:

- Organizar usuários  
- Separar setores (RH, TI, Financeiro)  
- Aplicar regras específicas  

---

**Analogia**

Pense na OU como uma **gaveta de escritório**:

- Cada gaveta guarda um tipo de documento  
- Facilita organização e controle  

---

# Criar Unidade Organizacional (OU)

**Passo a passo**

1. Abrir:

Ferramentas → Usuários e Computadores do Active Directory

2. Clique com botão direito no domínio (ex: `bruss.tec`)
3. Vá em:

Novo → Unidade Organizacional

4. Defina um nome (ex: `TI`, `Financeiro`)
5. Clique em **OK**

---

# Criar Usuários

**Passo a passo**

1. Entre na OU criada  
2. Clique com botão direito na área branca  
3. Vá em:

Novo → Usuário

4. Preencha:

- Nome  
- Sobrenome  
- Nome de logon  

---

## Definir senha

Escolha uma senha e configure opções:

- Usuário deve alterar senha no próximo logon  
- Usuário não pode alterar senha  
- Senha nunca expira  
- Conta desativada  

**Selecione conforme a necessidade**

---

**Finalizar**

- Clique em **Avançar → Concluir**

---

# Gerenciar Usuários

**Habilitar ou desabilitar conta**

- Clique com botão direito no usuário  
- Escolha:

Habilitar conta

ou

Desabilitar conta

---

**Exemplos práticos**

- **Daniel** → não pode alterar senha  
- **Enzo** → senha nunca expira + conta desativada  
- **Ezequiel** → deve alterar senha no próximo login  

---

# Criar usuário administrador reserva

**Por que fazer isso?**

- Para evitar perda de acesso caso o administrador principal tenha problemas.

---

**Passo a passo**

1. Vá em:

Users

2. Clique com botão direito em:

Administrador

3. Clique em:

Copiar

4. Crie o novo usuário

---

**Configuração importante**

- Marque:

Senha nunca expira

---

## Organizar

- Arraste esse usuário para a OU criada  

**Esse usuário terá privilégios administrativos**

---

# Adicionar computador ao domínio

**Testar DNS antes**

No computador cliente:

```
ping bruss.tec
```

- Se responder, o DNS está funcionando

---

**Entrar no domínio**

1. Vá em:

Configurações → Sistema → Sobre


2. Clique em:

Configurações avançadas do sistema


3. Aba:

Nome do computador → Alterar


4. Selecione:

Domínio


5. Digite:

bruss.tec

---

**Autenticação**

Digite usuário e senha do administrador do servidor


**Se aparecer mensagem de boas-vindas, deu certo**

---

**Reiniciar**

Reinicie o computador

---

**Testar login**

Após reiniciar:

Clique em Outro usuário

Faça login com um usuário criado no servidor

---

## Verificar no servidor

No Active Directory:

Domínio → Computers

**O computador aparecerá na lista**

---

# Controlar acesso dos usuários

**Configurar restrições**

1. Abra o usuário


2. Vá na aba:

Conta

---

## Horário de login

Defina dias e horários permitidos

---

## Restringir computadores

Clique em:

Fazer logon em

Selecione:

Os seguintes computadores

Adicione os nomes dos PCs

---

**Analogia**

É como um cartão de acesso:

Só funciona em certos lugares

Só funciona em certos horários

---

**Informação Adicional**

Essas configurações são muito usadas em:

- Bancos
- Empresas grandes
- Ambientes corporativos

**Aumenta a segurança e o controle sobre os usuários**


---

# Conclusão

Com isso você consegue:

- Organizar usuários com OUs
- Criar e controlar contas
- Adicionar computadores ao domínio
- Definir regras de acesso



---

**Resumo final**

- OU → organização
- Usuários → controle de acesso
- Domínio → centralização
- Regras → segurança


**Isso é a base de qualquer rede corporativa moderna.**

---

# Usuários, Grupos e Permissões de Pasta

**1. Criar Unidade Organizacional (UO)**

A **UO (Unidade Organizacional)** funciona como uma “pasta” para organizar usuários e grupos dentro do domínio.

**Passo a passo**

1. Abra:

Usuários e Computadores do Active Directory

2. Clique com o botão direito no domínio
3. Vá em:

Novo → Unidade Organizacional

4. Defina um nome (ex: `TI`, `Financeiro`, `Projetos`)

* Criar usuários

---

**Analogia**

Usuários são como **funcionários da empresa**, cada um com seu login e senha.

---

#  Criar grupo

Grupos facilitam o gerenciamento. Em vez de dar permissão para cada usuário, você dá para o grupo.

**Criar grupo**

1. Dentro da UO:

Novo → Grupo

2. Defina um nome (ex: `Equipe-Projeto`)

---

## Tipo de grupo

- **Segurança** → usado para permissões (acesso a pastas, arquivos, etc) 
- **Distribuição** → usado para e-mails (listas)  

* Neste exemplo foi selecionado: **Segurança**

---

## Escopo do grupo

- **Domínio Local** → usado dentro do domínio específico  
- **Global** → usado dentro do domínio e recomendado para usuários  
- **Universal** → usado em toda a floresta  

Para o exemplo foi selecionado: **Global**

---

**Analogia**

Grupo é como um **time** (ex: equipe de TI).  
Você não precisa dar acesso para cada pessoa, basta dar acesso ao time.

---

# Adicionar usuários ao grupo

**Passo a passo**

1. Dê duplo clique no grupo  
2. Vá em:

Membros → Adicionar

3. Digite os nomes dos usuários  

* Para vários usuários:

Coloque o começo dos nomes dos usuários, exemplo:

geo;gabr

4. Clique em:

Verificar nomes → OK → Aplicar → OK

Também é possível adicionar **grupos dentro de grupos**

---

# Compartilhamento simples de pasta

## Criar e compartilhar

1. Crie uma pasta em qualquer HD  
2. Clique com botão direito:

Conceder acesso a → Pessoas específicas

3. Selecione:

Todos

4. Defina permissão:

Leitura/Gravação

5. Clique em:

Compartilhar

---

**Analogia**

Esse método é como deixar a porta aberta para todo mundo entrar.

---

# Compartilhamento avançado (controle real)

Aqui você define exatamente quem pode acessar e o que pode fazer.

**Passo a passo**

* Aba Compartilhamento

1. Clique com botão direito na pasta:

Propriedades → Compartilhamento → Compartilhamento Avançado

2. Marque:

Compartilhar esta pasta

3. Clique em:

Permissões

4. Remova:

Todos

5. Adicione:

Usuários do domínio

6. Marque:

Alteração

7. Clique em OK

---

* Aba Segurança

1. Vá em:

Segurança → Avançadas

2. Clique em:

Desabilitar herança

3. Selecione:

Converter permissões herdadas

4. Clique em:

Editar

5. Remova:

Usuários

6. Clique em:

Adicionar

7. Adicione usuários ou grupos desejados  
8. Marque:

Modificar

9. Clique em OK

---

**Analogia**

Aqui você está criando uma **lista VIP**:  
- Alguns podem só ver  
- Outros podem editar  
- Outros podem fazer tudo  

---

# Exemplo prático (empresa)

## Cenário

Pasta: `Projetos`

- Funcionários → podem **ler e copiar**
- Gerente → pode **modificar tudo**

## Configuração

- Grupo Funcionários → **sem permissão de modificar**
- Grupo Gerente → **com permissão de modificar**

---

# Testar acesso

*(Em outro computador**

1. Pressione:

Windows + R

2. Digite:

\NOME-DO-SERVIDOR

3. Acesse a pasta compartilhada

---

**Analogia**

É como um funcionário indo até outro setor da empresa para acessar arquivos.

---

**Informações adicionais**

**Permissões NTFS vs Compartilhamento**

- **Compartilhamento** → controla acesso pela rede  
- **Segurança (NTFS)** → controla o que pode fazer dentro da pasta  

**A regra mais restritiva sempre prevalece.**

---

* Boas práticas

- Use **grupos**, não usuários diretamente  
- Separe por departamentos  
- Evite usar “Todos” em ambientes reais  

---

# Resumo final

- UO → organização  
- Usuários → pessoas  
- Grupos → equipes  
- Permissões → controle de acesso  

**Resultado: rede organizada, segura e fácil de administrar.**

---
# Script de Logon e Mapeamento de Rede

Pense nisso como um **“roteiro automático”**: quando o usuário entra no computador, tudo que ele precisa já abre sozinho.

---

# 1. Onde fica o Script de Logon

O script deve ser salvo no diretório padrão do domínio:

C:\Windows\SYSVOL\sysvol\NOMEDODOMINIO\scripts

> Esse local é especial porque todos os computadores do domínio conseguem acessar automaticamente.

---

# 2. Mapear uma pasta de rede

**Comando básico**

Abra o Bloco de Notas e escreva:

```
net use P: \\SERVIDOR\PASTA
```

* Explicação

P: → letra da unidade (pode ser qualquer uma disponível)

\\SERVIDOR\PASTA → caminho da pasta na rede

---

**Analogia**

É como criar um atalho automático: a pasta da rede aparece como se fosse um “HD” dentro do computador.

---

***3. Abrir programas automaticamente**

* Exemplo

start "C:\Program Files\Google\Chrome\Application\chrome.exe"


---

**4. Abrir sites automaticamente**

```
start https://www.google.com
```

---

**Analogia**

É como ligar o computador e já deixar tudo pronto:

* Pasta aberta
* Sistema iniciado
* Site carregado

---

**5. Criar o arquivo de script**

1. Abra o Bloco de Notas


2. Escreva os comandos (juntos ou separados)

**Exemplo completo:**

```
net use P: \\SRV-ARQUIVOS\Projetos
start "C:\Program Files\Google\Chrome\Application\chrome.exe"
start https://www.google.com
```

3. Clique em Salvar como


4. Escolha o local:

C:\Windows\SYSVOL\sysvol\NOMEDODOMINIO\scripts

5. Nome do arquivo:

```
logon.cmd
```

ou

```
logon.bat
```

6. Em Tipo, selecione:

Todos os arquivos

---

**6. Vincular script ao usuário**

1. Abra:

Usuários e Computadores do Active Directory

2. Clique com botão direito no usuário

3. Vá em:

Propriedades → Perfil

4. No campo:

Script de logon

Digite:

```
logon.cmd
```

5. Clique em Aplicar e OK

---

**Analogia**

É como dizer:
“Sempre que esse usuário entrar, execute esse roteiro automaticamente.”

---

# Enumeração baseada em acesso (Segurança)

Esse recurso faz com que o usuário veja apenas o que ele tem permissão para acessar.

---

1. Abra o:

Gerenciador do Servidor

2. Vá em:

Serviços de Arquivo e Armazenamento → Compartilhamentos

3. Selecione a pasta desejada

4. Clique em:

Propriedades → Configurações

5. Ative:

Habilitar enumeração baseada em acesso

---

**Analogia**

Imagine um armário com várias gavetas:

* Você só enxerga as gavetas que pode abrir

* As outras simplesmente não aparecem

---

**Informações adicionais**

* Persistência do mapeamento

Se quiser garantir que a unidade continue após reiniciar:

```
net use P: \\SERVIDOR\PASTA /persistent:yes
```

---

* Remover mapeamento

```
net use P: /delete
```

---

* Ordem de execução

Scripts rodam no login do usuário

Dependem da rede estar disponível


**Em redes lentas, pode haver atraso na execução.**

---

**Resumo final**

Script de logon → automatiza tarefas

net use → mapeia rede

start → abre programas/sites

SYSVOL → pasta padrão do domínio

Enumeração → esconde o que não pode acessar

---
Resultado: ambiente automatizado, organizado e mais profissional 


Ubuntu Linux Desktop 25.10
Ubuntu Linux Desktop 25.10 é uma distribuição Linux voltada para uso cotidiano em computadores pessoais. Baseia-se no Debian, usa a interface GNOME e recebe atualizações de longo prazo (LTS), garantindo estabilidade e suporte prolongado.

Para que serve:
Serve como sistema operacional completo para atividades diárias: navegação, estudos, programação, edição de documentos, multimídia e uso profissional.

O que é:
É um sistema operacional livre e de código aberto, com foco em facilidade de uso, segurança e compatibilidade com uma grande variedade de hardware e softwares.

Objetivo:
Oferecer uma plataforma estável, segura e simples de usar, adequada tanto para usuários iniciantes quanto para profissionais, promovendo o uso de software livre e um ambiente confiável para trabalho e desenvolvimento.

Manjaro Linux Desktop 25.10
Manjaro Linux Desktop 25.10 é uma distribuição baseada no Arch Linux, criada para oferecer desempenho, atualização contínua (rolling release) e facilidade de uso sem a complexidade do Arch original.

Para que serve:
Serve como sistema operacional para uso diário, estudos, desenvolvimento, jogos e tarefas avançadas, oferecendo softwares sempre atualizados.


O que é:
É um sistema operacional livre e de código aberto, com foco em rapidez, atualizações recentes, suporte a múltiplas interfaces (XFCE, GNOME, KDE) e ferramentas próprias que simplificam a gestão do sistema.

Objetivo:
Entregar a experiência do Arch Linux de forma acessível, estável e amigável, combinando desempenho com usabilidade para usuários iniciantes e avançados.







Como instalar as distribuições GNU/Linux no VirtualBox (Ubuntu Linux Desktop 25.10 e Manjaro Linux Desktop 25.10)
Passo a passo direto para instalar Manjaro Linux Desktop 25.10 no Oracle VirtualBox:
1.	Baixar arquivos necessários
o	Instale o Oracle VirtualBox no Windows.
o	Baixe a ISO do Manjaro Linux Desktop 25.10  no site oficial.
Abrir o Oracle VirtualBOX
  Selecione: Ferramentas
    Clique em: <Novo>
      01) Nome da máquina virtual e Sistema Operacional:
        Nome: MajaroLinux
        Edição: (Default)
        Tipo: Linux
        Versão: Arch Linux (64-bit) ou Other Linux (64-bit) (Manjaro é baseado em Arch).
      02) Hardware:
        Memória Base: 5000MB 
        Processadores: 2 CPU
         03) Disco Rígido Virtual:
          Tamanho do Disco: 50GB (alterar conforme necessidade)
        <Finalizar>

No Oracle VirtualBOX
  Selecione a Máquina Virtual: MajaroLinux
    Clique em: Configurações da Máquina Virtual Linux (Propriedades/Configurações)
      01) Opção: Geral
        Guia: Avançado
          Área de Transferência Compartilhada: Bi-direcional (Configurar)
          Arrastar e Soltar: Bi-direcional (Configurar)
      02) Opção: Sistema
        Guia: Placa-Mãe
          Relógio da máquina retorna hora UTC: OFF (Desabilitado) 

        Guia: Processador
          Processadores: 02 CPUs
          Recursos Estendidos:
            Habilitar PAE/NX: ON (Habilitado)
            Habilitar VT-x/AMD-V Aninhado: ON (Habilitado)
      03) Opção: Monitor
        Guia: Tela
          Memória de Vídeo: 128MB (Configurar)
          Aceleração: Habilitar Aceleração 3D ON (Habilitado)
      04) Opção: Rede
        Guia: Adaptador 1
          Habilitar Placa de Rede ON (Habilitado)
          Conectado a: Placa em Modo Bridge (Configurar)
  <OK>

No Oracle VirtualBOX
  Selecione a Máquina Virtual: MajaroLinux
    Clique em: <Iniciar (T)>
      Na tela de: VirtualBoxVM
        DVD: <não selecionado> - Clique em: <Outro...>
        Selecione a ISO do: Manjaro Linux Desktop 25.10 - Clique em: <Abrir (O)>
      <Montar e Tentar Novo Boot>



Após abrir o Manjaro, feche a janela que estiver na tela, clique no único software que é o que vai instalar o Manjaro e vai avançando os no que se pede, suas informações e tudo, quando terminar, antes de reiniciar, na janela do Virtual box, va em dispositivos, discos opticos e em remove disk from, após isso, reinicie o sistema, isso na janela do Virtual Box, em maquina e reiniciar



Se não abrir:
Abra o terminal e instale:
Digite o sequintes codigos
sudo pacman -S virtualbox-guest-utils
sudo systemctl enable --now vboxservice.service

Atualizar o sistema
No terminal:

sudo pacman -Syu

após isso, pode usar o seu Manjaro normalmente


Dicas apos a atualização
baixe os navegadores, escolha qual quiser

Chrome
Instalar pelo terminal (modo rápido)

Primeiro, habilite AUR no terminal:
pamac config set --enable-aur true

Depois instale o Chrome:
pamac build google-chrome


Opera
No terminal:
pamac build opera


Se quiser instale o Visual Code
Pelo terminal

Habilitar AUR:
pamac config set --enable-aur true

Instalar:
pamac build visual-studio-code-bin



















Passo a passo direto para instalar Ubuntu 25.10 no Oracle VirtualBox:
1.	Baixar arquivos necessários
o	Instale o Oracle VirtualBox no Windows.
o	Baixe a ISO do Ubuntu 25.10 Desktop no site oficial.
Abrir o Oracle VirtualBOX
  Selecione: Ferramentas
    Clique em: <Novo>
      01) Nome da máquina virtual e Sistema Operacional:
        Nome: MajaroLinux
        Edição: (Default)
        Tipo: Linux
        Versão: Arch Linux (64-bit) ou Other Linux (64-bit) (Manjaro é baseado em Arch).
      02) Hardware:
        Memória Base: 5000MB 
        Processadores: 2 CPU
         03) Disco Rígido Virtual:
          Tamanho do Disco: 50GB (alterar conforme necessidade)
        <Finalizar>

No Oracle VirtualBOX
  Selecione a Máquina Virtual: MajaroLinux
    Clique em: Configurações da Máquina Virtual Linux (Propriedades/Configurações)
      01) Opção: Geral
        Guia: Avançado
          Área de Transferência Compartilhada: Bi-direcional (Configurar)
          Arrastar e Soltar: Bi-direcional (Configurar)
      02) Opção: Sistema
        Guia: Placa-Mãe
          Relógio da máquina retorna hora UTC: OFF (Desabilitado) 

        Guia: Processador
          Processadores: 02 CPUs
          Recursos Estendidos:
            Habilitar PAE/NX: ON (Habilitado)
            Habilitar VT-x/AMD-V Aninhado: ON (Habilitado)
      03) Opção: Monitor
        Guia: Tela

desative essa opção de "Aceleração 3D"

      04) Opção: Rede
        Guia: Adaptador 1
          Habilitar Placa de Rede ON (Habilitado)
          Conectado a: Placa em Modo Bridge (Configurar)
  <OK>

No Oracle VirtualBOX
  Selecione a Máquina Virtual: MajaroLinux
    Clique em: <Iniciar (T)>
      Na tela de: VirtualBoxVM
        DVD: <não selecionado> - Clique em: <Outro...>
        Selecione a ISO do: Manjaro Linux Desktop 25.10 - Clique em: <Abrir (O)>
      <Montar e Tentar Novo Boot>

Apos isso, va ate a barra branca no canto superior esquerdo, clique e abra o primeiro software, escolha as opçoes de suas preferencias, quando aparecer a pagina de instalar software, marque as opções de se quiser, é opcional
em todas as abas são todas as a primeira opção 
quado aparecer a aba de por as suas informaçõe, so ative a primeira opção das ultimas duas e vai avançando


Apos a instalação, cline na opção reiniciar, caso não der certo, va na janela do Virtual Box na opção Maquina e depois em reiniciar
apos isso, vai aparecer uma aba e vai avançando ate aparecer uma opção de atualizar os programas, atualize


Para atualizar o sistema
No terminal:
sudo apt update

apos isso, 
sudo apt upgrade


apos a atualização
baixe o navegador, do seu interesse

Chrome
Instalar pelo terminal (método rápido)

Entre na pasta onde o arquivo foi baixado, por exemplo “Downloads”:
cd Downloads
Instale o pacote:
sudo snap install chrome


Opera
nstalar pelo terminal (método rápido)

Entre na pasta onde o arquivo foi baixado:
cd Downloads

Instale o .deb:
sudo snap install opera

baixar o VScode
Terminal:
sudo snap install code --classic

Como inserir imagem de CD dos adicionais para convidado no Virtual Box Ubuntu 25.10
Va na janela do Virtual Box
Dispositivos → Inserir imagem de CD dos Adicionais para Convidado…
caso acontecer nada va no terminal

No terminal: 

  lsmod | grep vbox
  sudo apt update
   sudo apt install build-essential dkms linux-headers-$(uname -r)
  lsblk
   sudo mount /dev/sr0 /mnt
  ls /mnt
  cd /mnt
  sudo sh VBoxLinuxAdditions.run
  cd


Ubuntu
<img width="1440" height="794" alt="ubuntu25 10" src="https://github.com/user-attachments/assets/144cd6e6-f73a-475b-80a1-36fb87999497" />


Manjaro
<img width="1440" height="794" alt="manjaro" src="https://github.com/user-attachments/assets/f2db386b-21c1-425d-9e6d-4250d632ba44" />





WUBUNTU (Winux 11.25)

O que é

“Wubuntu” é uma distribuição Linux que tenta imitar a aparência e o comportamento do Windows (especialmente Windows 10/11), tanto visualmente quanto em algumas funcionalidades UI.
Atualmente, é mais comumente chamada de Winux. 
Desenvolvida pela empresa LinuxFX / CyberTech. 
A versão 11.25 (“Winux 11.25 LTS “Noble””) é uma versão de suporte de longo prazo. 

Para que serve

Serve para quem quer migrar para Linux, mas sem abrir mão da interface familiar do Windows. 
Tem tema Plasma (KDE) altamente customizado para parecer com Windows. 
Inclui compatibilidade para rodar aplicativos Windows:
Usa Wine para .exe e .msi. 
Suporte a apps Android via emulador (na versão “PowerTools”) segundo a nota de lançamento. 
Vem com alguns softwares pré-instalados: navegador (Edge), OnlyOffice, cliente de e-mail, etc. 
Pode ser usado para dar “segunda vida” a máquinas mais antigas, segundo a própria proposta do sistema. 

Em qual distribuição é baseado

Winux / Wubuntu é baseado no Kubuntu, que por sua vez é uma variante do Ubuntu usando KDE Plasma. 
Na versão 11.25, especificamente, é baseado no Ubuntu 24.04 LTS (“Noble”). 
SourceForge
Usam o kernel Linux 6.14 nessa versão.

Pontos polêmicos / riscos

Há críticas de que a distribuição infringe marcas registradas da Microsoft (uso de ícones, logotipo “Windows”, Copilot, etc.). 
Também há relatos de preocupações com privacidade: algumas versões e licenças pagas envolvem componentes proprietários. 
Em fóruns Linux, alguns usuários afirmam que não há ganho técnico tão grande, já que por baixo continua sendo “só Ubuntu + tema”. 


A instalação dele no Virtual Box é a mesma coisa que nos outros, no terminal para finalizar
sudo apt update
sudo apt upgrade


mas na hora de inserir imagem de CD dos adicionais para convidado no Virtual Box, voce adiciona e vai abrir uma notificação, abre, clica com o botão direito em algum canto que não tenha um arquivo a ser selecionado e em seguida clique em "Abrir terminal aqui"
No terminal digite
sudo ./VBoxLinuxAdditions.run

e ai pode remover o CD virtual que esta pronto

instalar o vs code, é o mesmo do Ubuntu e os navegadores tambem

Chorme por exemplo
Baixar o .deb oficial (recomendado)

Abra o navegador (Edge, Firefox ou outro).

Acesse o site oficial:
google.com/chrome

Clique em Download Chrome.

Escolha .deb (Debian/Ubuntu).

Baixe o arquivo.
Depois de baixar:

Instalar

Abra a pasta Downloads.
na pasta clique com o botao direito e va em "abrir no terminal"
e digite os seguintes codigos
sudo apt update
sudo apt install ./google-chrome-stable_current_amd64.deb

apos isso procure o chrome no menu iniciar 




Softwares

Wine Linux
Wine é uma camada de compatibilidade que permite rodar programas do Windows no Linux (e em outros sistemas, como macOS), sem precisar instalar o Windows.

Resumo direto:

O que é: Um software que traduz chamadas do Windows para chamadas que o Linux entende.

Para que serve: Executar arquivos .exe e .msi no Linux.

Como funciona: Ele recria partes das bibliotecas do Windows (DLLs) e converte as instruções para o Linux.

Vantagem: Não é emulação; por isso muitos programas rodam rápido.




PlayOnLinux
PlayOnLinux é uma interface gráfica que facilita o uso do Wine no Linux.

Resumo direto e objetivo:

O que é: Um programa que gerencia diferentes versões do Wine e cria ambientes separados para instalar aplicativos Windows.

Para que serve: Instalar programas do Windows no Linux de forma simplificada, sem precisar configurar o Wine manualmente.

Como funciona: Ele cria “prefixos” (ambientes isolados) com configurações específicas para cada software, usando scripts prontos.

Vantagens:

Instalação mais fácil de jogos e programas populares.

Permite múltiplas versões do Wine para compatibilidade.

Interface amigável.


Steam Proton
Steam Proton é uma tecnologia da Valve que permite rodar jogos de Windows no Linux através do Steam.

Resumo direto:

O que é: Uma camada de compatibilidade baseada no Wine, criada e otimizada pela Valve.

Para que serve: Executar jogos desenvolvidos somente para Windows em sistemas Linux, dentro do Steam.

Como funciona:

Usa Wine + DXVK + VKD3D para converter DirectX (Windows) em Vulkan (Linux).

Implementa correções e otimizações específicas para jogos.

Vantagens:

Muitos jogos funcionam sem configuração manual.

Alto desempenho em vários títulos AAA.

Atualizações contínuas da Valve.

































# Guia Completo: Ubuntu 25.10, Manjaro 25.10, Winux/Wubuntu 11.25 e Instalação no VirtualBox

---

# 1. Ubuntu Linux Desktop 25.10

## O que é
Ubuntu Linux Desktop 25.10 é uma distribuição GNU/Linux baseada no Debian, com foco em estabilidade, facilidade de uso e segurança. Utiliza o ambiente gráfico GNOME e oferece suporte prolongado em suas versões LTS.

## Para que serve
É um sistema operacional completo para:
- Navegação e estudos  
- Programação e desenvolvimento  
- Escritórios e produtividade  
- Multimídia  
- Uso profissional em geral  

## Objetivo
Fornecer uma plataforma simples, segura e confiável para qualquer tipo de usuário, desde iniciantes até profissionais, incentivando o uso de software livre.

---

# 2. Manjaro Linux Desktop 25.10

## O que é
Manjaro Linux 25.10 é uma distribuição baseada no Arch Linux, mas muito mais amigável. É uma distribuição **rolling release**, recebendo atualizações contínuas. Oferece as interfaces XFCE, KDE e GNOME.

## Para que serve
Sistema operacional ideal para:
- Uso diário  
- Estudos e programação  
- Jogos  
- Tarefas avançadas  
- Usuários que querem softwares sempre atualizados  

## Objetivo
Oferecer a experiência do Arch Linux de maneira acessível, rápida e estável, sem a complexidade da instalação manual original.

---

# 3. Instalação no VirtualBox  
## Instalação do **Manjaro Linux Desktop 25.10**

### 1. Baixar arquivos necessários
- Instale o **Oracle VirtualBox** no Windows.  
- Baixe a ISO oficial do Manjaro.

---

## 2. Criar a máquina virtual
**VirtualBox → Ferramentas → Novo**

### Configurações iniciais:
**01) Nome e sistema**  
- Nome: `ManjaroLinux`  
- Tipo: Linux  
- Versão: Arch Linux (64-bit) ou Other Linux (64-bit)

**02) Hardware**  
- Memória: **5000 MB**  
- Processadores: **4 CPUs**

**03) Disco Virtual**  
- Tamanho: **50 GB** (ou mais, se desejar)

Clique em **Finalizar**.

---

## 3. Configurar a máquina virtual
Selecione a VM → **Configurações**

### 01) Geral → Avançado
- Área de transferência compartilhada: **Bi-direcional**  
- Arrastar e soltar: **Bi-direcional**

### 02) Sistema → Placa-mãe
- Relógio retorna hora UTC: **OFF**

### Sistema → Processador
- Processadores: **4 CPUs**  
- Habilitar PAE/NX: **ON**  
- Habilitar VT-x/AMD-V aninhado: **ON**

### 03) Monitor → Tela
- Memória de vídeo: **128 MB**
- Aceleração 3D: **ON**

### 04) Rede → Adaptador 1
- Habilitar: **ON**
- Conectado a: **Bridge**

Clique em **OK**.

---

## 4. Iniciar a máquina virtual
Selecionar VM → **Iniciar**

- Em *DVD*, clique em **Outro…**  
- Selecione a ISO do Manjaro  
- Clique em **Montar e Tentar Novo Boot**

---

## 5. Instalação do Manjaro
- Feche a janela inicial.  
- Abra o instalador (ícone único na área de trabalho).  
- Siga o passo a passo tradicional: idioma, teclado, disco, usuário etc.  

Antes de reiniciar:
**VirtualBox → Dispositivos → Discos Ópticos → Remover disco da unidade**

Então reinicie a VM.

---

## 6. Caso o sistema não abra corretamente
No terminal:

```
sudo pacman -S virtualbox-guest-utils
sudo systemctl enable --now vboxservice.service
```
## 7. Atualizar o sistema

```
sudo pacman -Syu
```
---

## 8. Dicas pós-instalação
**Instalar Google Chrome (AUR)**

```
pamac config set --enable-aur true
pamac build google-chrome
```
**Instalar Opera**

```
pamac build opera
```

**Instalar Visual Studio Code**

```
pamac build visual-studio-code-bin
```

---

# Instalação do Ubuntu 25.10 no VirtualBox  
Guia completo, organizado e claro.

---

## 1. Baixar os arquivos necessários

1. Instale o **VirtualBox** (versão mais recente).
2. Baixe a **ISO do Ubuntu 25.10 Desktop** no site oficial do Ubuntu.

---

## 2. Criar a máquina virtual  
*(A base é semelhante à criação do Manjaro)*

**Nome sugerido:** `UbuntuLinux`  
**Tipo:** `Linux`  
**Versão:** `Ubuntu (64-bit)`

**Configurações principais:**
- **Memória RAM:** 5000 MB  
- **Processadores (CPU):** 4  
- **Disco virtual:** 50 GB (VDI dinâmico)

---

## 3. Configurar a máquina virtual antes de iniciar

### Geral → Avançado
- Habilitar **Área de Transferência (Clipboard) Bi-direcional**
- Habilitar **Arrastar e Soltar (Drag & Drop) Bi-direcional**

### Sistema → Processador
- Ativar **PAE/NX**
- Ativar **Virtualização VT-x/AMD-V aninhada** (Nested Virtualization)

### Exibição (Monitor)
- **Desative a aceleração 3D**  
  *O Ubuntu 25.10 apresenta bugs quando a aceleração 3D está ligada.*

### Rede
- Mude para **Placa em Modo Bridge**  
  (A máquina terá acesso à rede como se fosse um PC real.)

---

## 4. Iniciar a máquina virtual

1. Clique em **Iniciar**.
2. Selecione a **ISO do Ubuntu 25.10**.
3. Clique em **Montar e Tentar Novo Boot**.

O sistema iniciará o instalador.

---

## 5. Instalar o Ubuntu 25.10

Durante a instalação:

1. Selecione **Idioma** e **Layout do Teclado**.
2. Na etapa **Instalação de software**, marque as opções desejadas  
   (ex.: instalar codecs, atualizações, etc.).
3. Na etapa de criação do usuário, **marque apenas a primeira opção** das duas últimas caixas mostradas.
4. Continue até o final do instalador.
5. Reinicie o sistema quando for solicitado.  
   - Se ocorrer erro ao reiniciar, use:  
     **Menu da Máquina → Reiniciar**

Após o primeiro boot:

- O Ubuntu solicitará **atualizações** → aceite e conclua.  
- Reinicie novamente se for necessário.

---

## 6. (Recomendado) Instalar os "Guest Additions"

Depois do Ubuntu instalado:

1. No menu do VirtualBox, clique em:  
   **Dispositivos → Inserir imagem de CD dos Adicionais para Convidado**
2. O Ubuntu deve montar o CD automaticamente.
3. Abra o terminal e execute:

```
sudo bash /media/$USER/VBox_GAs_*/VBoxLinuxAdditions.run
```

---

## 7. Atualizar o sistema (terminal)

```
sudo apt update
sudo apt upgrade
```

---

## 8. Instalar navegadores

**Chrome**
```
cd Downloads
sudo snap install chrome
```

**Opera**
```
cd Downloads
sudo snap install opera
```

**Visual Studio Code**
```
sudo snap install code --classic
```

---

# 5. Adicionais para Convidado (Guest Additions) – Ubuntu 25.10
**Passo a passo**

VirtualBox → **Dispositivos** → **Inserir imagem de CD dos Adicionais para Convidado**

Se nada acontecer:

```
lsmod | grep vbox
sudo apt update
sudo apt install build-essential dkms linux-headers-$(uname -r)
lsblk
sudo mount /dev/sr0 /mnt
ls /mnt
cd /mnt
sudo sh VBoxLinuxAdditions.run
cd
```

---

# 6. WUBUNTU (Winux 11.25)

## O que é
Wubuntu/Winux 11.25 é uma distribuição Linux baseada no **Kubuntu/Ubuntu 24.04 LTS**, projetada para reproduzir a aparência e o funcionamento do Windows 10/11.  
Ela utiliza o **KDE Plasma** personalizado para imitar fielmente o sistema da Microsoft.

---

## Para que serve
Wubuntu é voltado para usuários que:

- Querem migrar do Windows para Linux sem estranhar a interface.  
- Precisam rodar programas Windows através do **Wine**.  
- Desejam compatibilidade com aplicativos Android usando **PowerTools**.  
- Buscam um Linux estável, mas com visual e comportamento semelhantes ao Windows.

---

## Principais características

- **Interface KDE Plasma totalmente modificada** para parecer Windows 10/11.  
- **Microsoft Edge pré-instalado** (versão Linux).  
- Suite **OnlyOffice** instalada por padrão.  
- Base sólida do **Ubuntu 24.04 LTS**.  
- Kernel **Linux 6.14**.  
- Integrações extras para melhorar a compatibilidade com softwares Windows e Android.

---

## Controvérsias

- Acusações de **uso indevido de marcas registradas** da Microsoft na interface.  
- Preocupações envolvendo **privacidade**, principalmente em edições pagas.  
- Críticas de parte da comunidade Linux por ser “apenas um Ubuntu com tema de Windows”.  

---

## Instalação no VirtualBox (igual ao Ubuntu)

Para finalizar no terminal:

```
sudo apt update
sudo apt upgrade
```

---

## Guest Additions no Winux

- Inserir imagem de CD
- Abrir a notificação
- Clique com botão direito → "Abrir terminal aqui"

Execute:

```
sudo ./VBoxLinuxAdditions.run
```

---

## Instalar Chrome no Winux (método recomendado)

Baixe o .deb no site oficial → Downloads → Terminal:

```
sudo apt update
sudo apt install ./google-chrome-stable_current_amd64.deb
```

---

# 7. Softwares Importantes

## Wine Linux
Permite rodar programas do Windows (.exe, .msi) diretamente no Linux.

### Como funciona
- Traduz chamadas do Windows para chamadas compatíveis com Linux.
- Não é um emulador, e sim uma camada de compatibilidade.

### Vantagens
- Não utiliza emulação.
- Roda muitos programas com excelente desempenho.

---

## PlayOnLinux
Interface gráfica para facilitar o uso do Wine.

### Para que serve
- Instalar programas do Windows facilmente.
- Criar ambientes separados para cada aplicação.
- Utilizar diferentes versões do Wine quando necessário.

---

## Steam Proton
Tecnologia da Valve para rodar jogos de Windows no Linux via Steam.

### Como funciona
- Baseado no Wine.
- Utiliza **DXVK** e **VKD3D** para converter DirectX em Vulkan.
- Possui otimizações específicas para jogos.

### Vantagens
- Grande parte dos jogos roda diretamente, sem ajustes.
- Alto desempenho.
- Recebe atualizações constantes.

---

## Fim do Guia
Este documento reúne explicações completas sobre Ubuntu, Manjaro, Winux, instalação no VirtualBox e ferramentas essenciais do ecossistema Linux.









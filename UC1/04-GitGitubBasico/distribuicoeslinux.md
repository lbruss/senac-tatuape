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


A instalação dele no Virtual Box é a mesma coisa que nos outros
mas na hora de inserir imagem de CD dos adicionais para convidado no Virtual Box, voce adiciona e vai abrir uma notificação, abre, clica com o botão direito em algum canto que não tenha um arquivo a ser selecionado e em seguida clique em "Abrir terminal aqui"
No terminal digite
sudo ./VBoxLinuxAdditions.run

e ai pode remover o CD virtual que esta pronto

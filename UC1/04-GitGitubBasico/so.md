Insatalação Windows 11 

Criar midia com o seguinte site oficial: https://www.microsoft.com/pt-br/software-download/windows11
va em: Criar mídia de instalação do Windows 11
em seguida clique em "baixar agora", ja com o pendrive plugado na maquina (Recomendo plugar na porta USB azul)
Abra o software baixado 

Com o software aberto, leia tudo e aceite, clique em avançar
Avançar novamente
Deixe marcado unidade Flash USB e avançar
Nesse momento ele reconhece o pendrive e em seguida clique em avançar e ja vai estar baixando o windows 11 no pendrive
apos a finalizar as atividades, pode retirar o pendrive


Via Virtual Box Oracle:

Abra o Virtual Box
va em "Novo"
em nome, coloque o que quiser 
em imagem ISO, va em "Outro" e procure a iso do windows 11
Opção: Pular Instalação Desassistida (Serve para pular as abas de interação na hora da instalação, são aquelas perguntas pessoais, marque se quiser)
finalize

clique na maquina criada 
va em configurações, ative a opção Expert

aba Geral, Avançado, e selecione "Bi-direcional" nas duas opções
aba Sistema, Placa-mae, memoria base, coloque ate o limite da barra verde, não deixe na barra vermelha, apenas verde
na mesma aba, Processador, processadores, coloque ate o 4 no maximo e habilite os recursos estendidos, as duas opções, ou so uma
aba Display, habilite Aceleração 3D e coloque a Memoria de video no maximo 
aba Rede, em "Conectado a" selecione "Não conectado"
Por fim, clique em Ok

Apos isso inice a maquina
apos isso, clique em qualquer tecla quando pedir, clique rapido em qualquer tecla

Instalação 
Escolha o idioma, va em avançar
teclado com "ç" Teclado ABNT, teclado sem o "ç" Teclado americano (Estados Unidos Internacional), escolha e avance
marque a caixa de "Concordo que tudo sera excluido..." e marque em "Instalar o Windows 11" e avance
clique em "Não tenho chave"
selecione a "Imagem"
Windows Home, bem basico e limitado, menos desempenho abaixo do que o Windows Pro
Windows Pro, mais segurança, trabalhar com um dominio, mais profissional, mais desempenho
selecione o que desejar e clique em avançar
se tiver todos os requisitos para baixar o windows 11, so clicando em avançar



se não tiver os requisitos para baixar o windows 11, não vai baixar
nesse caso de aparecer a mensagem que não é possivel instalar, voltar para a tela de escolha da "Imagem" clique as telcas
Shift + F10 para abir o prompt de comando
Digite:
regedit
pressione enter

No registro do Windows, expandir HKey_Local_Machine, expandir o System e selecione o Setup
Selecionar o Setup com o botao direito do mouse e cirar uma chave de nome: LabConfig
No lado direto (em branco), criar 4 Valor DWord (32bits)

ByPassTPMCheck
ByPassSecureBootCheck
ByPassRAMCheck
ByPassStorageCheck
ByPassCPUCheck

Clique com botao direito, um por vez, em modificar, APENAS altere o numero 0 para 1, apenas isso
apos isso, fechar o registro do windows, clicando apenas no botão vermelho em fechar
apos isso, vai avançando normalmente como se estivesse instalando normalmente

selecione o seu pais e clique em "sim"
o seu teclado, selecione de acordo com a sua escolha ja feita antes na instalação
em pular ou coloque outro teclado
Processo de burlar instalação caso esteja sem internet, no caso co virtual box que foi selecionado que não esta conectado, ja que se fosse instalar com a internet conectada, o windows iria instalar varios software que talvez voce nem va usar, depois baixa esses softwares de quiser

instalar sem internet (Muito melhor, intalação limpa)
pressionar as teclas Shift + F10
digitar: oobe\bypassnro
e pressione enter

vai reiniciar e vai avançando, quando chegar novamente na parte de rede, clique em "não tenho internet"
coloque o seu nome
se quiser colocar senha, coloque, se não quiser apenas avance
as opções a seguir são pessoais, de preferncia diga tudo não, todos na segunda opção
apos a instalação do windows, conecte a internet, indo para a aba do Virtual box
na opção maquina, configurções, vai em rede e mude a opção não conectado para NAT
instale os drivers, no virtual box, dispositivos, inserir CD 
va em no explorador de arquivos, vai em unidade de CD e instale o "VBoxWindowsAdditions", so com esse nome
vai avançando e vai reiniciar sozinho e esta pronto o seu windows

Instalação Windows 11 em Maquina real:

Plugue o pendrive com o Windows 11 na maquina
Entre na BIOS/Setup da maquina com F12, F10 ou a com a tecla DELETE, vai variando de maquina para maquina, fique clicando em uma das teclas ate aparecer a BIOS/Setup, faça isso enquanto liga ou reinicia o PC
Mude a ordem de boot, faça com que esse pendrive plugado fique em primeiro na hora do boot
salvar e sair ou clique enter, depende da maquina
apos isso
é o mesmo processo que o do Virtual Box, a partir da instalação
e se não estiver conectado a internet, é o mesmo procedimento ja feito antes no Virtual Box
apos a instalação do windows, instalar os divers
Driver Booster é um bom software para buscar e instalar os drivers

e ja esta feito, pode usar o seu windows































# Instalação do Windows 11  
Guia completo para instalar o Windows 11 em **pendrive**, **VirtualBox** e **máquina real**, com todos os passos organizados e claros.

---

# 1. Criar a Mídia do Windows 11 (Pendrive Bootável)

### 1.1. Baixar o Criador de Mídia Oficial
Acesse o site oficial:
https://www.microsoft.com/pt-br/software-download/windows11

Vá em **Criar mídia de instalação do Windows 11**  
Clique em **Baixar agora**.

> Recomendações:
- Pendrive de **8 GB ou mais**
- Preferencialmente usar porta **USB azul (3.0)**

### 1.2. Criar o Pendrive Bootável
1. Abra o software baixado.
2. Aceite os termos → **Avançar**.
3. Avance novamente (deixe as opções padrão).
4. Selecione **Unidade flash USB** → Avançar.
5. Escolha o pendrive detectado.
6. Clique em **Avançar** e aguarde o download e criação da mídia.
7. Quando concluir, remova o pendrive.

---

# 2. Instalação via VirtualBox Oracle

## 2.1. Criando a Máquina Virtual
1. Abra o **VirtualBox**.
2. Clique em **Novo**.
3. Nome → escolha qualquer nome.
4. Em **Imagem ISO**, clique em **Outro** e selecione a ISO do Windows 11.
5. (Opcional) **Marque**: *Pular Instalação Desassistida*.
6. Finalize a criação.

## 2.2. Configurações da Máquina Virtual
Selecione a máquina criada → **Configurações** → Ativar modo **Expert**.

### Geral → Avançado
- Habilitar **Bi-direcional** nas duas opções.

### Sistema → Placa-mãe
- Ajustar **Memória Base** até o limite da barra verde (sem entrar no vermelho).

### Sistema → Processador
- Colocar até **4 CPUs** no máximo.
- Ativar as opções de **Recursos estendidos**.

### Display
- Habilitar **Aceleração 3D**.
- Colocar **Memória de vídeo no máximo**.

### Rede
- Em *Conectado a*: selecionar **Não conectado** (instalação limpa).

Clique em **OK**.

---

# 3. Iniciar a Instalação no VirtualBox

1. Inicie a máquina.
2. Assim que pedir, pressione qualquer tecla rapidamente.

---

# 4. Processo de Instalação do Windows 11

### 4.1. Primeiros Passos
- Escolha o idioma → **Avançar**.
- Teclado:
  - Com "ç" → **ABNT2**  
  - Sem "ç" → **US Internacional**
- Marque *Concordo que tudo será excluído...*
- Clique em **Instalar o Windows 11**.
- Escolha **Não tenho chave**.

### 4.2. Escolher a Versão do Windows
- **Windows 11 Home**
  - Mais básico, limitado e com menos desempenho.
- **Windows 11 Pro**
  - Mais segurança, domínio, melhor desempenho.

Escolha → Avançar.

---

# 5. Caso o Windows bloqueie a instalação (sem requisitos)

Se aparecer mensagem dizendo que não é possível instalar, faça:

**1. Na tela de escolha de versão, pressione:**

**Shift + F10**


**2. No Prompt, digite:**

```
regedit
```

**3. Vá até:**
HKEY_LOCAL_MACHINE > SYSTEM > Setup

**4. Clique com o botão direito em **Setup** → **Novo → Chave****
Nome: **LabConfig**

**5. Na parte direita, crie **DWORD (32 bits)** com os nomes:**

- ByPassTPMCheck
- ByPassSecureBootCheck
- ByPassRAMCheck
- ByPassStorageCheck
- ByPassCPUCheck


**6. Em cada um, clique com o botão direito do mouse, selecione "modificar" e mude o valor de **0 para 1**.**

- Feche o Registro (botão vermelho).

- Continue a instalação normalmente.

---

# 6. Instalação Sem Internet (Instalação Limpa – Recomendado)

Quando o instalador pedir conexão:

1. Pressione:

**Shift + F10**

**2. Digite:**
```
oobe\bypassnro
```


3. Pressione **Enter**.

O Windows reiniciará e permitirá instalar **sem internet**.

Depois:

- Clique em **Não tenho internet**
- Coloque seu nome
- Configure senha (opcional)
- Nas perguntas de privacidade → escolha sempre **Não** ou a 2ª opção.

---

# 7. Finalizar a Instalação no VirtualBox

Após chegar à área de trabalho:

1. Vá no VirtualBox:
   - **Dispositivos → Inserir imagem do CD dos adicionais**
2. No Explorador de Arquivos:
   - Entre na unidade de CD
   - Execute **VBoxWindowsAdditions**
3. Avance até o fim — reiniciará automaticamente.

Sua instalação estará finalizada.

---

# 8. Instalar o Windows 11 em uma Máquina Real

### 8.1. Iniciar a Instalação
1. Plugue o pendrive com o Windows 11.
2. Ligue o PC e pressione a tecla da BIOS:
   - **F12**, **F10**, **DEL**, depende da placa-mãe.
3. Alterar a **ordem de boot**:
   - Coloque o pendrive como **1º dispositivo**.
4. Salve e saia.

### 8.2. Instalação
O processo é igual ao descrito na seção do VirtualBox:

- Seleção de idioma
- Teclado
- Versão do Windows
- Bypass (se necessário)
- Instalação sem internet (opcional, recomendado)

### 8.3. Instalar Drivers
Após o Windows iniciar:

- Instale os drivers da sua máquina.
- Você pode usar:
  - **Driver Booster**
  - Ou drivers oficiais do fabricante.

---

# 9. Pronto!
Seu Windows 11 está instalado, otimizado e pronto para uso.


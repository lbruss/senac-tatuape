# 🖥️ Script de Logon e Mapeamento de Rede (Active Directory)

Este guia mostra como **automatizar tarefas quando o usuário faz login**, como:

- Mapear pastas de rede 📁  
- Abrir programas 🚀  
- Abrir sites 🌐  

Pense nisso como um **“roteiro automático”**: quando o usuário entra no computador, tudo que ele precisa já abre sozinho.

---

# 📁 1. Onde fica o Script de Logon

O script deve ser salvo no diretório padrão do domínio:

C:\Windows\SYSVOL\sysvol\NOMEDODOMINIO\scripts

> 🔎 Esse local é especial porque todos os computadores do domínio conseguem acessar automaticamente.

---

# 🔗 2. Mapear uma pasta de rede

## 📌 Comando básico

Abra o Bloco de Notas e escreva:

```bat
net use P: \\SERVIDOR\PASTA

✔️ Explicação

P: → letra da unidade (pode ser qualquer uma disponível)

\\SERVIDOR\PASTA → caminho da pasta na rede



---

🧠 Analogia

É como criar um atalho automático: a pasta da rede aparece como se fosse um “HD” dentro do computador.


---

🚀 3. Abrir programas automaticamente

📌 Exemplo

start notepad

Ou:

start "C:\Program Files\Google\Chrome\Application\chrome.exe"


---

🌐 4. Abrir sites automaticamente

start https://www.google.com


---

🧠 Analogia

É como ligar o computador e já deixar tudo pronto:

Pasta aberta

Sistema iniciado

Site carregado



---

📝 5. Criar o arquivo de script

📌 Passo a passo

1. Abra o Bloco de Notas


2. Escreva os comandos (juntos ou separados)



💡 Exemplo completo:

net use P: \\SRV-ARQUIVOS\Projetos
start notepad
start https://www.google.com

3. Clique em Salvar como


4. Escolha o local:

C:\Windows\SYSVOL\sysvol\NOMEDODOMINIO\scripts


5. Nome do arquivo:

logon.cmd

ou

logon.bat


6. Em Tipo, selecione:

Todos os arquivos




---

👤 6. Vincular script ao usuário

📌 Passo a passo

1. Abra:

Usuários e Computadores do Active Directory


2. Clique com botão direito no usuário


3. Vá em:

Propriedades → Perfil


4. No campo:

Script de logon

Digite:

logon.cmd


5. Clique em Aplicar e OK




---

🧠 Analogia

É como dizer:
👉 “Sempre que esse usuário entrar, execute esse roteiro automaticamente.”


---

👁️ 7. Enumeração baseada em acesso (Segurança)

Esse recurso faz com que o usuário veja apenas o que ele tem permissão para acessar.


---

📌 Como ativar

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

🧠 Analogia

Imagine um armário com várias gavetas:

🔓 Você só enxerga as gavetas que pode abrir

🔒 As outras simplesmente não aparecem



---

💡 Informações adicionais

🔹 Persistência do mapeamento

Se quiser garantir que a unidade continue após reiniciar:

net use P: \\SERVIDOR\PASTA /persistent:yes


---

🔹 Remover mapeamento

net use P: /delete


---

🔹 Ordem de execução

Scripts rodam no login do usuário

Dependem da rede estar disponível


👉 Em redes lentas, pode haver atraso na execução.


---

🎯 Resumo final

Script de logon → automatiza tarefas

net use → mapeia rede

start → abre programas/sites

SYSVOL → pasta padrão do domínio

Enumeração → esconde o que não pode acessar



---

✅ Resultado: ambiente automatizado, organizado e mais profissional 💼
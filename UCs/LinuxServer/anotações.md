# ☕ Apache Tomcat — Guia Completo no Debian

Este guia mostra como instalar e configurar o **Apache Tomcat**, um servidor de aplicações Java.

---

# 🧠 O que é o Tomcat?

O **Apache Tomcat** é um servidor que executa aplicações Java na web.

👉 Ele é muito usado para rodar:

- Sistemas web em Java  
- APIs  
- Aplicações corporativas  

---

## 🧠 Analogia

Se o **Apache (web server)** entrega páginas HTML, o **Tomcat** é como um **motor inteligente**, que executa código Java e gera páginas dinâmicas.

---

# ⚙️ Etapas Gerais

1. Instalar Debian  
2. Configurar rede  
3. Instalar Java  
4. Instalar Tomcat  
5. Configurar acesso  

---

# 🖥️ Passo 1 — Instalar Debian

Durante a instalação:

- Escolha **Graphic Install**
- Domínio → pode deixar em branco (configura depois)
- Defina senha do root

---

## 📌 Particionamento

- Escolher:

Assistido - usar disco inteiro com LVM

- Depois:

/home, /var e /tmp separados

---

## 📦 Seleção de software

Marcar apenas:

- Servidor SSH  
- Utilitários padrão  

---

## 🔐 Finalização

- Finalize a instalação  
- Faça login como:

root

---

# 🌐 Passo 2 — Configurar Rede

## 📌 Configurar IP fixo e DNS

Depois de configurar:

### ✔️ Testes

```bash
ping google.com

👉 Testa internet (DNS funcionando)


---

ip a

👉 Verifica o IP configurado


---

👉 Teste também de outro computador:

ping IP_DO_SERVIDOR


---

☕ Passo 3 — Instalar Java

O Tomcat precisa do Java para funcionar.

📥 Instalar

apt install default-jdk


---

🔍 Verificar

java -version
javac -version


---

🚀 Passo 4 — Instalar Apache Tomcat

📥 Instalação

apt install tomcat11 tomcat11-admin tomcat11-examples tomcat11-docs


---

🔍 Verificar serviço

systemctl status tomcat11


---

🌐 Acessar no navegador

Digite:

http://IP_DO_SERVIDOR:8080

Exemplo:

http://10.26.44.222:8080

👉 Se aparecer a página, o Tomcat está funcionando ✅


---

👤 Passo 5 — Criar usuário administrador

📂 Acessar diretório

cd /etc/tomcat11


---

💾 Fazer backup

cp tomcat-users.xml tomcat-users.xml.bkp


---

✏️ Editar arquivo

nano tomcat-users.xml


---

📌 Adicionar usuário

Dentro do arquivo, adicione:

<user username="admin" password="SUA_SENHA" roles="manager-gui,admin-gui"/>


---

💾 Salvar

Ctrl + O

Enter

Ctrl + X



---

🔄 Reiniciar serviço

systemctl restart tomcat11


---

🌐 Acessar painel administrativo

1. Abra no navegador:

http://IP_DO_SERVIDOR:8080


2. Clique em:

Manager App


3. Faça login com:



Usuário: admin

Senha: definida anteriormente



---

💡 Informação Adicional

🔹 Porta 8080

É a porta padrão do Tomcat

Diferente do Apache (porta 80)


👉 Você pode mudar isso depois na configuração.


---

🔹 Segurança

Por padrão:

O acesso administrativo pode ser restrito

Em produção, recomenda-se limitar acesso por IP



---

🧠 Resumo Final

Você configurou:

Debian (sistema base)

Rede (IP + DNS)

Java (necessário para rodar aplicações)

Tomcat (servidor de aplicações)



---

🎯 Analogia Final

Você montou:

O terreno → Debian

Energia → Java

Máquina → Tomcat


👉 Agora você tem um servidor pronto para rodar aplicações Java na web 🚀
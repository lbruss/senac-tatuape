# GPO (Group Policy Objects)

**Visão Geral**

GPO (**Group Policy Object**) são políticas usadas no Active Directory para:

- Controlar usuários
- Controlar computadores
- Padronizar ambientes
- Restringir ações

> **Analogia:**  
A GPO é como um “conjunto de regras da empresa” aplicado automaticamente nos computadores e usuários.

---

# Conceitos Importantes

**GPO se aplica a:**

- Usuários
- Computadores

**Não se aplica diretamente a grupos**

---

**Vinculação**

A GPO normalmente é vinculada a:

- Unidade Organizacional (OU)
- Domínio
- Site

> Mais comum: **OU**

---

# Políticas x Preferências

**Políticas**
São regras obrigatórias.

- Usuário não consegue alterar

---

**Preferências**
São sugestões/configurações iniciais.

- Usuário pode alterar depois

---

> **Analogia:**  
- Política = lei  
- Preferência = recomendação  

---

# Forçar Atualização da GPO

**Comando**

No CMD:

```
gpupdate /force
```

---

**O que faz?**

- Atualiza políticas imediatamente
- Evita esperar sincronização automática

**Muito usado em testes**

---

# Ocultar Disco Local C:

**Objetivo**

Impedir que o usuário:

- Veja o Disco C:
- Acesse o Disco C:

> Força armazenamento em rede  
> Evita salvar arquivos localmente

---

# Criando a GPO

**Passo a passo**

1. Abrir:
   - **Gerenciador do Servidor**

2. Ir em:
   - **Ferramentas → Gerenciamento de Política de Grupo**

---

3. Localizar:
   - Domínio
   - Unidade Organizacional (OU)

---

4. Botão direito na OU:
   - **Criar um GPO neste domínio e vinculá-lo aqui**

---

5. Nomear a GPO

Exemplo:

Impedir e ocultar o disco local

> Sempre usar nomes claros

---

**Editar a GPO**

1. Botão direito na GPO
2. **Editar**

---

# Ocultar unidade C:

**Caminho**

Configuração do Usuário
→ Políticas
→ Modelos Administrativos
→ Componentes do Windows
→ Explorador de Arquivos

---

**Configurar:**

* “Ocultar estas unidades específicas em Meu Computador"

- Abrir
- Marcar:
  - Habilitado

---

**Resultado**

Usuário não verá o Disco C:

---

# Impedir acesso ao Disco C:

No mesmo local:

* “Impedir o acesso a unidades do Meu Computador”

- Habilitar
- Aplicar
- OK

---

**Resultado Final**

Mesmo tentando abrir diretamente:
- usuário não acessa o Disco C:

---

> **Objetivo corporativo:**  
Centralizar arquivos na rede e reduzir perda de dados locais.

---

# Bloquear CMD e PowerShell

**Objetivo**

Impedir:
- CMD
- PowerShell
- Execução de comandos

> Aumenta segurança  
> Reduz risco de alteração indevida

---

# Imedir o acesso ao Disco Local através de comandos

**Criar nova GPO**

Exemplo de nome:

Impedir CMD e PowerShell

---

**Editar GPO**

**Caminho**

Configuração do Usuário
→ Modelos Administrativos
→ Sistema

---

# Bloquear CMD

**Política:**

* “Impedir o acesso ao Prompt de Comando”

- Habilitar
- Aplicar
- OK

---

# Bloquear PowerShell

**Política:**

* “Não executar aplicativos especificados do Windows”

- Habilitar
- Clique em:
  - **Mostrar**

---

**Adicionar:**

powershell.exe
powershell_ise.exe
pwsh.exe

---

* Aplicar → OK

---

# Resultado Final

Usuário:

-  Não acessa Disco C:
-  Não usa CMD
-  Não usa PowerShell

> Ambiente mais controlado e seguro

---

# Observação Importante

Bloquear CMD e PowerShell:

- Pode atrapalhar suporte técnico
- Pode impedir scripts legítimos
- Deve ser aplicado apenas onde necessário

---

**Resumo Relâmpago**

- GPO aplica regras no AD  
- É vinculada à OU  
- Políticas são obrigatórias  
- Preferências são sugestões  
- gpupdate força atualização  
- GPO pode ocultar Disco C:  
- Também pode bloquear acesso ao disco  
- CMD pode ser bloqueado  
- PowerShell também pode ser bloqueado  
- Tudo aumenta controle e segurança  

---

# Resumo Final

- GPO = automação de regras  
- Aplicada em usuários e computadores  
- Disco C: pode ser ocultado e bloqueado  
- CMD e PowerShell podem ser desativados  
- Muito usado em ambientes corporativos  

---
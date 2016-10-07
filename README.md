# Banco de Provas
Banco de Provas da UNICAMP

# Estrutura do repostitório
- Iniciais da sigla da disciplina
  - sigla da disciplina
    - professor (caso especificado)
      - provas
      
## Formato de nome de arquivos

Tudo em minúsculas e concatenado com `-`:
- sigla da disciplina (ex: ma211)
- sigla da avaliação (ex: p1, t1, ex)
- ano,  semestre (ex: 2016s2) e turma (caso especificada) (ex: n, a, noite, especial)
- detalhes (professor/resolução) (ex: login do professor, res)

Ou seja, a resolução da prova 1 de MA211 coordenada do segundo semestre de 2016 deve chamar:
> `ma211-p1-2016s2-res`

<details> 
  <summary>Regex de nome de arquivo</summary>
  Uma regra legal é que o nome do arquivo de match em:
  > `/^([a-z]{1,2}\d{3})-([a-z\d]{2})-(\d{4})s(\d)(\w*)-?([^\.]*)\.(.*)$/`

  Além disso o caminho completo deve ser:
  > `/^([a-z]{1,2})\/\1(\d{3})\/([^\.]*)\/?\1\2-([a-z\d]{2})-(\d{4})s(\d)(\w*)-?\3-?([^\.]*)\.(.*)$/`
</details>


# FAQ
- **Como adicionar uma prova?**
  - Faça um pull request ou preencha [esse form](https://docs.google.com/forms/d/e/1FAIpQLSfsxCowi3938OrBSrkOkvgluQnc9_HLKIB9Y01XQGSvidaOCA/viewform).
- **Não concordo com o material hospedado aqui. Como remover?**
  - Abra um [issue](https://github.com/unicampers/banco-de-provas/issues/new) pedindo a remoção ou, se preferir, faça um PR removendo você mesmo. Por favor explique o motivo de desejar a remoção.
- **Isso me ajudou muito!!! Obrigado 😚**
  - Isso não é exatamente uma pergunta mas você é bem vindo!

# Licença
Não há licença definida para este repositório pois ela varia de prova por prova.

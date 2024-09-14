def verificarLeatraA(quantidade):
    quantidade = quantidade.lower()

    contar = quantidade.count('a')

    if (contar > 0):
        print(f"A letra 'a' aparece {contar} vezes.")
    else:
        print("A letra 'a' não foi encontrada.")

texto = 'O cabelo da boneca é muito sedoso'
verificarLeatraA(texto)
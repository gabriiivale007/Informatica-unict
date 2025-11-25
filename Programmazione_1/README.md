# Programmazione I – Materiale ed Esercizi 💻

Questa cartella contiene il materiale e gli esercizi del corso di **Programmazione I** (linguaggio C).  
Questa libreria di esempi verrà aggiornata durante l'anno con nuovo materiale e ulteriori esercizi.

Gli esempi sono pensati per:

- capire la sintassi base del C
- esercitarsi con variabili, tipi e operatori
- lavorare con input/output (`printf`, `scanf`, …)
- fare pratica con condizioni, cicli e funzioni
- introdurre array, stringhe e gestione semplice della memoria

---

## Organizzazione della cartella 📂

I file sorgente sono in C (`.c`) e sono in genere organizzati per:

- **lezione** (es. esercizi spiegati a lezione)
- **argomento** (es. tipi, operatori, cicli, funzioni, array, …)

Il nome dei file può cambiare nel tempo, ma in generale:

- ogni file contiene **uno o pochi esempi ben commentati**
- i commenti spiegano **cosa fa il programma** e **quale concetto illustra**

---

## Come compilare ed eseguire i programmi ⚙️

Esempi generici con `gcc`:

```bash
# Compilazione di un singolo file C
gcc -o programma nome_file.c

# Esecuzione
./programma
```

Se il programma usa la libreria matematica (`math.h`), ricordarsi di aggiungere `-lm`:

```bash
gcc -o programma nome_file.c -lm
./programma
```

---

## Come usare questa cartella 📚

1. Scegli un file `.c` relativo all’argomento che stai studiando.
2. Leggi i commenti all’inizio e dentro il codice.
3. Prova a capire cosa farà il programma **prima** di eseguirlo.
4. Compila ed esegui.
5. Modifica:
   - valori delle variabili
   - condizioni (`if`, `while`, `for`, …)
   - funzioni e parametri  
   e osserva come cambia il comportamento.

---

## Riferimenti 🔗

- Sito professore: <https://www.dmi.unict.it/messina/teaching.html>  
- Documentazione C (DevDocs): <https://devdocs.io/c/>

---

Questa libreria è pensata come supporto allo studio e verrà arricchita progressivamente durante l'anno accademico. ✅

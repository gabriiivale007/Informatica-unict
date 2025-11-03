# Esercizi di Assembly ARM 🧠💻

Questa repository contiene una serie di esempi di Assembly ARM pensati per capire in modo pratico:

- come funzionano i registri
- le operazioni aritmetiche di base
- le istruzioni di salto condizionato
- i cicli (`loop`, `while`, `for` “simulati” in Assembly)

Ogni file `.s` è un piccolo esempio autonomo, ben commentato, pensato come “lezione” o mini-esercizio.

---

## Contenuto della repo 📂

I file sorgente sono scritti in Assembly ARM (sintassi GNU).  
Ogni file ha un nome che descrive cosa fa (es: `operazioni_base.s`, `condizioni_if.s`, `loop_infinito.s`, …).

> ✅ Per i dettagli guarda sempre i commenti all’inizio di ogni file: spiegano obiettivo, equivalenza in pseudocodice/C e registri usati.

---

## Prerequisiti ⚙️

Per lavorare con questi esempi ti basta:

- **Visual Studio Code (consigliato)**  
  Editor usato e consigliato per modificare e studiare i file `.s`.

- Un **toolchain ARM**, ad esempio:
  - `arm-none-eabi-as`, `arm-none-eabi-ld`, ecc.
- Un **ambiente di esecuzione**:
  - emulatore tipo `qemu-arm`  
  - oppure una board fisica ARM (se ne hai una)

Esempio generico di build + run:

```bash
# Assembla
arm-none-eabi-as -o programma.o programma.s

# Link
arm-none-eabi-ld -o programma programma.o

# Esegui con qemu
qemu-arm ./programma
```

---

## Struttura tipica di una lezione 🧩

Ogni file segue più o meno questo schema:

1. **Header commentato** – spiegazione in linguaggio naturale:
   - cosa fa il programma
   - quali registri usa
   - che “equivalente” avrebbe in C/pseudocodice

2. **Inizializzazione dei registri** – valori di partenza (come fossero variabili)

3. **Logica principale** – operazioni, confronti, cicli

4. **Eventuale loop finale** – per mantenere il programma in esecuzione (quando serve)

---

## Cosa impari da questi esempi 🎯

- leggere e scrivere semplici programmi in Assembly ARM
- capire la differenza tra:
  - salti incondizionati (`B`)
  - salti condizionati (`BEQ`, `BNE`, `BGE`, …)
- tradurre un costrutto di alto livello (`if`, `while`, `for`) in Assembly
- usare i registri come “variabili” temporanee

---

## Come usare questa repo 📚

1. Apri il file `.s` in **Visual Studio Code**.
2. Leggi bene i commenti in testa.
3. Prova ad indovinare cosa fa **prima** di eseguirlo.
4. Assemblalo ed eseguilo con il toolchain ARM.
5. Modifica:
   - i valori immediati (`#10`, `#60`, `#-3`, …)
   - le condizioni nei `CMP`
   - le etichette e la struttura del ciclo
6. Controlla cosa cambia nel comportamento del programma.

---

## Riferimenti 🔗

- Sito del professore: <https://www.dmi.unict.it/santoro/index.php?p=15>

Se hai suggerimenti, miglioramenti o vuoi aggiungere nuove “lezioni”, sentiti libero di modificare e committare 😉

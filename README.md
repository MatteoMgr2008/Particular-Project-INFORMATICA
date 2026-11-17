# Particular Project

🇮🇹 [Italiano](#italiano) | 🇬🇧 [English](#english)

---

<a id="italiano"></a>
## 🇮🇹 Italiano

### 📌 Descrizione
Progetto di **Informatica** che stampa l'elenco dei **numeri primi**, uno dopo l'altro, partendo da 2. Lo stesso algoritmo è scritto in due versioni:
- **C++**: programma da console che mostra i numeri primi nel terminale, con una pausa di 100 ms tra un controllo e l'altro.
- **Arduino**: sketch che invia i numeri primi sul **Monitor Seriale** (9600 baud), con una pausa di 300 ms dopo ogni numero primo trovato.

Per capire se un numero è primo, la funzione `isPrime` prova a dividerlo per tutti i numeri da 2 fino alla sua metà. Il ciclo continua finché il contatore `int` non va in overflow e diventa minore di 1.

### 📂 Contenuto
| Percorso | Descrizione |
|---|---|
| `File CPP/Particular Project.cpp` | Codice sorgente C++ del programma |
| `File CPP/Particular Project.exe` / `.o` | Eseguibile Windows e file oggetto già compilati |
| `File CPP/Particular Project.workspace` / `.workspace.layout` | File di workspace di Code::Blocks |
| `File INO/Particular Project.ino` | Sketch Arduino con la stessa logica |
| `File INO/Particular Project.fzz` | Progetto Fritzing (Arduino Uno) |
| `File INO/Particular Project (Vista Breadboard/PCB/Schema).png` | Immagini esportate da Fritzing nelle tre viste |

### 🛠️ Tecnologie
- **C++** (librerie standard `iostream`, `chrono`, `thread`)
- **Arduino** (scheda Arduino Uno)
- **Code::Blocks** e **Fritzing**

### ▶️ Come eseguire
**Versione C++**
```bash
cd "File CPP"
g++ "Particular Project.cpp" -o "Particular Project"
./"Particular Project"
```
Su Windows si può anche avviare direttamente `Particular Project.exe`. Per fermare il programma premere `Ctrl+C`.

**Versione Arduino**
1. Aprire `File INO/Particular Project.ino` con l'**Arduino IDE** (l'IDE potrebbe chiedere di spostarlo in una cartella con lo stesso nome).
2. Collegare un Arduino Uno e caricare lo sketch.
3. Aprire il **Monitor Seriale** impostato a **9600 baud**.

Il file `.fzz` si apre con **Fritzing**.

### 📋 Requisiti
- Un compilatore C++ (es. g++ / MinGW, incluso in Code::Blocks)
- Arduino IDE e una scheda Arduino Uno (per lo sketch)
- Fritzing (facoltativo, solo per il file `.fzz`)

### 👤 Autore
[MatteoMgr2008](https://github.com/MatteoMgr2008)

---

<a id="english"></a>
## 🇬🇧 English

### 📌 Description
**Computer Science** (Informatica) school project that prints the list of **prime numbers**, one after another, starting from 2. The same algorithm is written in two versions:
- **C++**: console program that prints the primes in the terminal, waiting 100 ms between each check.
- **Arduino**: sketch that sends the primes to the **Serial Monitor** (9600 baud), waiting 300 ms after each prime found.

To check whether a number is prime, the `isPrime` function tries dividing it by every number from 2 up to half of it. The loop keeps going until the `int` counter overflows and becomes less than 1.

### 📂 Contents
| Path | Description |
|---|---|
| `File CPP/Particular Project.cpp` | C++ source code of the program |
| `File CPP/Particular Project.exe` / `.o` | Precompiled Windows executable and object file |
| `File CPP/Particular Project.workspace` / `.workspace.layout` | Code::Blocks workspace files |
| `File INO/Particular Project.ino` | Arduino sketch with the same logic |
| `File INO/Particular Project.fzz` | Fritzing project (Arduino Uno) |
| `File INO/Particular Project (Vista Breadboard/PCB/Schema).png` | Images exported from Fritzing in its three views (breadboard, PCB, schematic) |

### 🛠️ Technologies
- **C++** (standard libraries `iostream`, `chrono`, `thread`)
- **Arduino** (Arduino Uno board)
- **Code::Blocks** and **Fritzing**

### ▶️ How to run
**C++ version**
```bash
cd "File CPP"
g++ "Particular Project.cpp" -o "Particular Project"
./"Particular Project"
```
On Windows you can also launch `Particular Project.exe` directly. Press `Ctrl+C` to stop the program.

**Arduino version**
1. Open `File INO/Particular Project.ino` with the **Arduino IDE** (the IDE may ask to move it into a folder with the same name).
2. Connect an Arduino Uno and upload the sketch.
3. Open the **Serial Monitor** set to **9600 baud**.

The `.fzz` file opens with **Fritzing**.

### 📋 Requirements
- A C++ compiler (e.g. g++ / MinGW, bundled with Code::Blocks)
- Arduino IDE and an Arduino Uno board (for the sketch)
- Fritzing (optional, only for the `.fzz` file)

### 👤 Author
[MatteoMgr2008](https://github.com/MatteoMgr2008)

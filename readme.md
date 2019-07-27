# bootcamp

## 1. Biodata.html

#### Penjelasan program:
Program ini adalah untuk menampilkan **Format json** yang awalnya adalah objek dalam sebuahjavascript, Didalam file biodata.js terdapat program utama memiliki function myBiodata, dan objekorang bertype let, fungsi myBiodata me-return objek let orang,kemudian nilai kembali myBiodata yangberupa objek di ubah menjadi json format dengan perintah *JSON.stringify* & kemudian ditampilkan keconsole *(console.log)*.

#### Kegunaan JSON pada REST API
Kegunaan JSON pada REST API adalah Sebagai format data/resource yang dikirim antar aplikasi, atau format data/recource yang dikrim sebagai respon dari REST-Server kepada REST-Client.

##### Program yang dibutuhkan :
1. Code Editor (misal, [Visual Code Studio](https://code.visualstudio.com/))
2. Browser (misal, Mozilla Firefox)
3. [NodeJs](https://nodejs.org/)

##### Cara menjalankan :
##### Cara 1.
- Buka folder dengan terminal atau klick kanan 
    > pilih **Open in terminal** pada folder yang terdapat file *biodata.js*
- Ketikan **node biodata.js**

##### Cara 2.
- Buka Browser dan open link [ES6 Console](https://es6console.com/)
- klik kanan pada file **biodata.js**
    > open with visual code studio
- Copy dan Paste-kan script ke link diatas
- Klik Run

---

## 2.Regex.js

#### Penjelasan program: 
Regex biasa digunakan untuk validasi form.

**USERNAME**

`var usernameREGEX = /^[A-Za-z]{1}[A-Za-z0-9]{4,8}$/;`
```java
- /^[a-zA-Z]{1} = Hanya Karakter Huruf besar & kecil yang diperbolehkan diawal.(1 digit)
- [A-Za-z0-9]   = Harus terdiri Huruf Besar,kecil dan angka.
- {4,8}$        = Terdiri dari 5-9 digit.(ditambah digit awal)
```


**PASSWORD** 

`var passwordREGEX = /^(?=.*[A-Za-z])(?=.+[\d]+)(?=.*[=]+)(?=.*[#|?|@|!|$|%|^|&|*|-|_|=]+).{8,}$/;`
```java
- /^(?=.*[A-Za-z])  = Harus terdiri minimal masing-masing 1 kombinasi.(huruf kecil dan besar)
- (?=.*[\d])        = Harus terdiri minimal dari 1 digit angka.
- (?=.*[=])         = Harus terdiri minimal dari 1 simbol `=`.
- (?=.*[#|?|@|!|$|%|^|&|*|-|_|=]) = Harus terdiri minimal dari 1 karakter karakter spesial.
- .                 = Karakter sesuai ketentuan yang sudah ditulis sebelumnya.
- {8,}$/;           = Harus terdiri minimal dari 8 karakter atau lebih.
```
    
#### Program yang dibutuhkan :
1. Browser (misal, Mozilla Firefox)

#### Cara menjalankan :
Biasanya digunakan dalam sebuah function, tapi disini saya akan menjalankannaya di online Editor

#### Cara 1. 
- Buka Browser dan open link [Regexr](https://regexr.com/)
- Copy dan Paste-kan REGEX & input sesuai syarat karakternya.
- Bila dipojok kanan bertuliskan no match, berarti karakter belum memenuhi syarat regex

#### Cara 2. 
- Buka folder dengan terminal atau klick kanan 
    > pilih **Open in terminal** pada folder yang terdapat file *2_regex.php*
- Ketikan **php 2_regex.php**

## 3_cetak_gambar.cpp
#### Penjelasan program: 
Program ini terbuat dari bahasa pemrogramman C++, 

#### Program yang dibutuhkan :
1. Browser (misal, Mozilla Firefox)
2. Terminal
#### Cara menjalankan :
Bisa dijalankan dionlline Editor, Terminal, Aplikasi atau program khusus tertentu.

#### Cara 1. 
- Buka browser dan open link [Online Editor](https://www.onlinegdb.com/).
- Copy pastekan Code yang ada didalam file c++

#### Cara 2.
- Buka folder dengan terminal atau klick kanan 
    > pilih **Open in terminal** pada folder yang terdapat file *3_cetak_gambar.cpp*
- Ketikan **3_cetak_gambar.cpp**
- ketikan diterminal (untuk mengkompile file agar bisa dijalankan). 
    > g++ 3_cetak_gambar.cpp -o ./filehasilcompile
    - Tunggu proses compile selesai.
    > ketikan ./filehasilcompile

## 4_vowel.cpp
#### Penjelasan program: 
Program ini terbuat dari bahasa pemrogramman C++, 

#### Program yang dibutuhkan :
1. Browser (misal, Mozilla Firefox)
2. Terminal
#### Cara menjalankan :
Bisa dijalankan dionlline Editor, Terminal, Aplikasi atau program khusus tertentu.

#### Cara 1. 
- Buka browser dan open link [Online Editor](https://www.onlinegdb.com/).
- Copy pastekan Code yang ada didalam file c++

#### Cara 2.
- Buka folder dengan terminal atau klick kanan 
    > pilih **Open in terminal** pada folder yang terdapat file *4_vowel.cpp*
- Ketikan **4_vowel.cpp**
- ketikan diterminal (untuk mengkompile file agar bisa dijalankan). 
    > g++ 4_vowel.cpp -o ./filehasilcompile
    - Tunggu proses compile selesai.
    > ketikan ./filehasilcompile

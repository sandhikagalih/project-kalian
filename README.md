# project-kalian

## Menyimpan daftar Project Kalian yang sudah disubmit di Discord

* Setiap minggunya akan ditampilkan 10 project yang sudah kalian kirimkan lewat discord wpu
* Jika kalian ingin ikut mengirimkan, join discord.gg/wpu

## Season 5 | 2025 

### 4 Januari 2024

1. [https://jolly.pow.kim]  
   **wand**
   
  Halo pak Dika dan semuanya! Selamat pagi :v 👋 

  Sudah lama saya tidak ikut showcase project. Kali ini saya ingin berbagi project sampingan yang saya buat sebagai *intermezzo* di tengah frustrasi mengerjakan project utama yang sudah tiga bulan nggak selesai-selesai. 😂 Project ini saya namakan **Jolly**, sebuah *bahasa pemrograman*—atau lebih tepatnya, sebuah **compiler**. Jolly dirancang untuk membuat pengalaman menulis kode lebih seru dan menyenangkan, dengan mengganti keyword JavaScript seperti `function`, `const`, dan `for` menjadi keyword yang lebih fun seperti `fun`, `lock`, dan `loopy`. Jika kalian tau pygyat di python, kalian bisa buat jsgyat menggunakan repo ini, yang mau coba silakan clone dan bermain dengan keywordnya.

  Project ini saya bangun menggunakan **Bun** sebagai runtime utama, dan CLI-nya dibuat dengan bantuan **chalk**, **commander**, **figlet**, dan **ora**. Selain itu, proses minifikasi dan formatting dibantu oleh **Terser** dan **Prettier**. 

  Meskipun Jolly adalah project eksperimental dan tidak serius (saya buat cuma sehari dan kodenya berantakan banget :v banyak use case yang belum dites juga), saya merasa project ini cukup menarik untuk dibagikan, terutama bagi kalian yang ingin mencoba sesuatu yang berbeda dalam menulis JavaScript. Jadi, kalau kalian penasaran atau hanya ingin sekadar mencoba Jolly, silakan cek link berikut:

  - NPM: https://www.npmjs.com/package/@jolly-lang/compiler
  - Website: https://jolly.pow.kim
  - Repository: https://github.com/kimmyxpow/jolly-lang

  Semoga bisa memberikan sedikit hiburan (atau inspirasi) di sela-sela kesibukan coding kalian 😊

<br>

2. [https://tailguide.vercel.app/]  
   **sycle**
   
  Selamat malam, Pak Dhika dan teman-teman.

  Perkenalkan, nama saya Rivaldo Tandoko, mahasiswa semester 3 di Telkom University. Pada sesi showcase ke-6 ini, saya ingin memperkenalkan sebuah web project yang berfungsi untuk memvisualisasikan berbagai properti CSS dan TailwindCSS, seperti transform, border radius, shadows, serta efek glassmorphism.

  Web ini dirancang untuk membantu developer pemula memahami dan menerapkan properti-properti tersebut secara interaktif dan efisien.

  Tech Stack yang digunakan:
  - Next.js
  - TailwindCSS
  - Shadcn
  - React-icons

  Fitur Utama:
  - Visualisasi real-time properti CSS seperti transformasi, radius border, shadows, dan efek glassmorphism.
  - Antarmuka yang responsif dan interaktif.

  Live Demo: https://tailguide.vercel.app/
  Repository GitHub: https://github.com/rtrivaldo/tailguide

  Sekian dari saya. Mohon dukungan dan feedbacknya, dan jangan lupa bintang satunya. Terima kasih! 😊

<br>

3. [https://github.com/snaztoz/kaba]  
   **Hafidh**
   
  Selamat pagi Pak Dhika dan teman-teman WPU, perkenalkan saya Hafidh. Saya ingin ikut melakukan showcase project (pertama kali) yang tengah saya kerjakan saat ini.

  Saya sedang mengerjakan sebuah compiler (dan *prototype* untuk runtime-nya) untuk bahasa pemrograman yang tengah saya buat: [Kaba](https://github.com/snaztoz/kaba), meskipun untuk saat ini fitur-fiturnya masih sangat minimalis.

  #### Teknologi yang digunakan
  * Rust

  #### Fitur
  * Math expression (e.g. `99 + 5 / 2`)
  * Pembuatan variabel dengan static typing
  * Conditional statement
  * Loop statement
  * Function
  * ... dan masih banyak yang [lainnya](https://github.com/snaztoz/kaba#-features)

  #### Link demo

  Saya mencantumkan [beberapa contoh](https://github.com/snaztoz/kaba#-example) program Kaba yang sudah bisa dijalankan oleh compiler dan juga runtime-nya

  #### Cara install & run

  Karena ini project CLI, maka perlu ada beberapa step yang perlu dilakukan untuk bisa menjalankan Kaba:

  * Cara yang paling mudah, bisa mendownload prebuilt compiler di [release page](https://github.com/snaztoz/kaba/releases) dan melakukan unzip filenya. Di dalamnya terdapat binary yang sudah siap digunakan.

  * Jika ingin mem-build compilernya secara manual, maka harus menginstall Rust toolchain terlebih dulu, kemudian mengikuti [langkah-langkah ini](https://github.com/snaztoz/kaba#%EF%B8%8F-build).

  Setelah binary compiler sudah didapatkan, buat sebuah file source code Kaba (sebagai contoh, `program.kaba`), isi dengan program yang [valid](https://github.com/snaztoz/kaba#-example), kemudian jalankan:

  ```sh
  kaba run program.kaba
  ```

  p.s. Jika source code kosong, maka akan ada error yang belum dicover oleh Kaba (ini adalah known bug)

  Link repo: https://github.com/snaztoz/kaba

  Sekian dari saya, saya akan sangat menghargai feedback dan masukan dari teman-teman sekalian. Terima kasih😊

<br>

4. [https://drive.google.com/file/d/13CLAD-3kLkMFj18OQkhyxJ1cKReS6Laj/view?usp=drive_link]  
   **Yoru**
   
  Assalamualaikum, halo semuanya dan pak Dhika, perkenalkan nama saya riswandi, setelah sekian lama baru bisa ikut showcase project lagi soalnya ngoding nya ngikutin mood wkwkwkwk.

  pada project kali ini saya sedang membuat aplikasi mobile untuk pencatatan penjualan outlet, kebetulan kakak saya punya outlet semacam jualan pulsa, jadi saya coba buatkan aplikasi untuk monitoring penjualan biar gk usah di catat lagi di buku.
  Nama Aplikasi nya **My Outlet**

  **FITUR** :
  - Pencatatan Penjualan dan Pengeluaran
  - Pencatatan Utang dan Piutang
  - Laporan total pendapatan

  **Cara Penggunaan** :
  silahkan membuat kategori terlebih dahulu di tab stok kategori kemudian buat produk (optional) pada tab produk,
  untuk produk sendiri bisa di tulis di halaman transaksi pada saat ingin membuat transaksi,
  tapi untuk lebih memudahkan disarankan membuat produk terlebih dahulu biar bisa autofill dan produknya tersimpan di database 

  **Teknologi yang di gunakan** :
  - FrontEnd :
    - React Native
    - NativeWind (styling)
    - Fastlane (version management)
  - BackEnd (API)
    - ExpressJS
    - Prisma (ORM)
    - Nodemailer (Email verification)
    - MySQL (Database)
    - Docker (Deployment)

  **Link Apps** : https://drive.google.com/file/d/13CLAD-3kLkMFj18OQkhyxJ1cKReS6Laj/view?usp=drive_link
  mohon maap klo ui nya ngk bagus soalnya gk pinter design wkwkwk

  **Link Repo (Apps)** : https://github.com/rixwand/outlet-pembukuan
  Untuk Repo API belum saya public soalnya belum saya buat dokumentasi nya

  **Note** : Untuk server nya sisa 6 bulan jadi tolong di maklumi klo tiba-tiba ngk bisa di akses mwhwh, VPS mahal soalnya

  Sekian dan terima kasih mohon kritik dan sarannya.

<br>

5. [https://github.com/rhysqi/Inventory-System/releases/tag/v1.0]  
   **rhysqi_**
   
  Assalamualaikum Pak Dhika

  Saya Risky mau showcase yang kedua kali <:hehehe:972470914488885288>
  Untuk showcase kali ini saya mau showcase aplikasi desktop CRUD sederhana yang sangat mudah sekali berbasis Windows.
  Saya juga dibantu oleh asisten saya yaitu ChatGPT untuk mencari dokumentasi karena saya malas mencari dokumentasi yang isinya cukup banyak.
  Untuk kali ini saya juga dibantu oleh para tumbal saya yang bersedia menjadi bahan eksperimen sebagai tester, yaitu
  - Iqbal Ramadhan 
  - Rafika 

  Nama dari aplikasi ini adalah `Inventory System`.
  Aplikasi ini dibuat dengan memakai:
  ```.NET 8, C#, WPF, Sqlite3, .NET Entity Framework(ORM)```

  fitur yang di implementasikan adalah
  - CRUD (Untuk memanajemen barang)
  - Soft Delete (proteksi data untuk bisa di recover jika kehapus tidak sengaja)

  Untuk mengoperasikannya
  - Sidebar kiri untuk ganti page (`Items List` untuk daftar barang, `Deleted Items` untuk barang yang di hapus).
  - Tombol `add` pada page `Items List` untuk nambah data
  - Untuk Edit datanya bisa langsung saja di klik di table nya dan tekan enter untuk apply

  Untuk link release nya bisa di download di sini:
  https://github.com/rhysqi/Inventory-System/releases/tag/v1.0

  (sedikit tambahan)
  Aplikasinya udah pakai installer kok. Jadi, kalau mau install/uninstall ngga perlu manual.
  Nanti bisa di cek di folder dimana aplikasi di install dan ada file `uninstall.exe` di sana.
  Bisa juga memakai `Windows Sandbox` sebagai alat testing.

  untuk link repo nya bisa dilihat di sini:
  https://github.com/rhysqi/Inventory-System

  Untuk bagian fitur `Expired Data` blm saya implementasikan karena saya sedang malas.
  Jadi, saya implementasi nya kapan-kapan. 

  Mungkin itu saja dari project saya yang saya buat karena lagi santai2. 
  Dan untuk project lain mungkin nanti akan di showcase di lain waktu. (karena saya pemalas jadi mungkin kapan-kapan)
  Sekian terima kasih

<br>

6. [https://faceapp.imamulikhlas.com]  
   **AlexaFers**
   
  Assalamualaikum, halo Pak Dhika dan Semuanya... Perkenalkan aku imam, akhirnya ada kesempatan buat ikut showcase project di WPU hehehe..

  Kali ini aku punya project iseng sekaligus coba explore terkait teknologi AI yang sekarang sedang rame. Berawal dari keisengan ingin tau proses dari pembuatan aplikasi seperti FOTOYU yang dapat mencari wajah kita dari koleksi gambar yang diupload oleh orang lain, saya terpikir bagaimana sebenarnya aplikasi seperti itu bekerja.

  Aplikasi ini adalah hasil eksplorasi menggunakan internet dan AI seperti claude dan chatgpt. Kode yang diciptakan juga generate by AI namun dengan campur tangan penulis.

  ✨ **Fitur Utama :**
  -Unggah gambar kedalam aplikasi dan menyimpannya ke dalam Database.
  -Deteksi foto dengan gambar yang terkait, lalu hasil pencarian menampilkan seluruh gambar yang telah diunggah dengan wajah yang sesuai.

  🎯 **Teknologi yang di gunakan :**
  -Flask
  -Python
  -MYSQL (database)
  -Nginx


  🔍 **Ingin mencoba langsung? **
  **Video Demo:** https://www.youtube.com/watch?v=1GkWeF-fm-8
  **Link Apps:** https://faceapp.imamulikhlas.com
  **Repo:** https://github.com/imamulikhlas/AlbumPeopleChecker

  Teman-teman yang tertarik dengan projek ini boleh dikembangkan sebebas-bebasnya ya.. Jangan lupa bantu star projeknya di Github jika tertarik.

  Terima kasih <:mantab:972471617923993600>

<br>

7. [https://alfarabygit.github.io/indra7-portfolio/]  
   **Indra**
   
  Assalamu'alaikum pak dhika dan kawan-kawan semoga sehat selalu. Sudah lama gak live showcase project dan beberapa hari yang lalu muncul lagi dan kali ini saya mau showcase project sederhana yang kesepuluh.

  Project kali ini redesign portfolio sederhana menggunakan reactjs yang mana sebelumnya menggunakan html, css dan js. 
  Tech stack:
  1. Vite(reactjs) 
  2. Tailwind css
  3. Framer motion
  Isi konten portfolio ini adalah beberapa project-project yang sudah di showcase sebelum nya dan sudah responsive.

  Seperti biasa jangan lupa like dan feedback project saya dari pak dhika dan kawan-kawan. 

  Sekian wassalamualaikum warahmatullahi wabarakatuh

  Jangan lupa titik koma. Ditunggu project selanjutnya

  GitHub:https://github.com/alfarabygit/indra7-portfolio
  Website:https://alfarabygit.github.io/indra7-portfolio/

<br>

8. [https://evan-web.vercel.app/]  
   **Mewing**
   
  Assalamu'alaikum pak dhika dan temen temen semuanya semoga sehat sehat ya. akhirnya punya kesempatan buat live showcase project pertama kali. jadi disini saya cuman mau nunjukin website portfolio saya yang saya buat kira kira tahun lalu simpel aja sih, terinspirasi dari salah video yang ada diyoutube juga design nya.

  Saya menggunakan framework nextJs dengan bahasa pemogramman utamanya TypeScript untuk tech stack lebih lengkapnya ada dibawah :
  1.    NextJS 14
  2.    Framer motion
  3.    GSAP
  4.    TailwindCSS
  Jangan lupa like dan saya juga butuh masukan dari pak dhika dan temen temen sekalian apa yang harus di perbaiki di website portfolio ini 
  Sekian terimakasih wassalamualaikum warahmatullahi wabarakatuh.

  Github: https://github.com/evanstef/personal-website-evan
  Website : https://evan-web.vercel.app/

<br>

9. [https://vitalify-health.vercel.app/]  
   **joan-telkomuniversity-webdesign**
   
  halo semua saya joan kali ini di showcase ke 8, saya cuma buat website kesehatan yg isinya kalkulator BMI dan sebagainya, over all konsepnya buat sdgs 3 tentang kesehatan

  tech stack : React, Tailwind

  web : https://vitalify-health.vercel.app/
  repo : https://github.com/joanpurbaa/vitalify

<br>

10. [https://ghrelease.vercel.app]  
   **F for Fityan**
   
  Halo Pak Dhika dan semuanya! Saya Fityan. Ini showcase ke-3 saya (kalo gak salah inget). 

  Weekend kemarin saya bikin **GitHub Release Viewer**, website yang *simple* untuk baca release notes dari repositori2 GitHub __yang publik__, dan bisa switch antar rilis dengan mudah.

  Motifnya bikin ini karena di page GitHub aslinya *menurut saya* agak susah untuk switch antar rilisnya (UX-nya kurang), plus pengen nyoba Next.js ft. React 19 yang baru aja stable release belum lama ini.

  - Repo: https://github.com/fityannugroho/ghrelease
  - Web: https://ghrelease.vercel.app

  Tech stack
  - Next.js 15 + React 19
  - Tailwind CSS + Shadcn UI
  - Tanstack Query

  Jangan lupa kasih ⭐ di reponya ya. Kalo mau follow atau kontribusi juga boleh banget. Terima kasih 🙏

<br>
<br>


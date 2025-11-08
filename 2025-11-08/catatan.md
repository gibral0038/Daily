Pada penggunaan iterator pada kode soal-001 terdapat penggunaan iterator it untuk fungsi auto. Pada penggunaan ini digunakan pemanggilan elemen menggunakan -> dan bukan .(titik).Alasannya dikarenakan pada kode ini dilakukan pemanggilan melalui iterator dan bukan objek secara langsung. 

- Pada pemanggilan objek secara langsung dapat menggunakan "wartel.second" karena pada penggunaan ini objek diakses secara langsung.

- Pada pemanggilan menggunakan pointer dimana dalam kode ini menggunakan iterator "it" maka digunakan pemanggilan menggunakan pointer sehingga objek tidak secara langsung dipanggil melainkan ditunjuk terlebih dahulu menggunakan "->" barulah bisa digunakan.
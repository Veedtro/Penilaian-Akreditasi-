#include <stdio.h>

void main (){
    float nilai1, nilai2, nilai3, nilai4, nilai5, nilai6, nilai7;
    char grade1, grade2, grade3, grade4, grade5, grade6, grade7;


    // Nomor (1) NDTPS
    int ndtps;

    printf("=== PROGRAM AKREDITASI STUDI ===\n");
    printf("\n--Penilaian berdasarkan kecukupan jumlah dosen tetap --\n");

    // Input jumlah dosen tetap dengan validasi nilai positif
    do {
        printf("Masukkan jumlah dosen tetap: ");
        scanf("%d", &ndtps);
    } while (ndtps <= 0);

    // Hitung berdasarkan jumlah dosen tetap
    if (ndtps >= 6) {
        nilai1 = 4;
    } else if (ndtps >= 4 && ndtps < 6) {
        nilai1 = (float) ndtps / 6 * 4;
    } else {
        nilai1 = 0;
    }

    // Tentukan grade
    if (nilai1 >= 3.5) {
        grade1 = 'A';
    } else if (nilai1 >= 2.5) {
        grade1 = 'B';
    } else if (nilai1 >= 1.5) {
        grade1 = 'C';
    } else {
        grade1 = 'D';
    }

    printf("Nilai untuk kecukupan jumlah dosen tetap: %.2f (Grade: %c)\n", nilai1, grade1);


    // Nomor (2) Jabatan Akademik
    int GB, LK;
    float pgblk;

    printf("\n-- Penilaian berdasarkan jabatan akademik dosen tetap --\n");
    printf("Masukkan jumlah dosen tetap yang  menjabat sebagai Guru Besar: ");
    scanf("%d",  &GB);
    printf("Masukkan jumlah dosen tetap yang menjabat sebagai Lektor Kepala: ");
    scanf("%d", &LK);

    pgblk = ((float)(GB + LK) / ndtps) * 100;

    nilai2 = (pgblk >= 70) ? 4 : (pgblk >= 50) ? 3 : (pgblk >= 30) ? 2 : 1;

     // Tentukan grade
    if (nilai2 >= 3.5) {
        grade2 = 'A';
    } else if (nilai1 >= 2.5) {
        grade2 = 'B';
    } else if (nilai1 >= 1.5) {
        grade2 = 'C';
    } else {
        grade2 = 'D';
    }
    printf("Nilai dosen tetap = %.2f (Grade: %c)\n", nilai1, grade1);
    printf("Nilai jabatan = %.2f  (Grade: %c)\n", nilai2, grade2);

    // Nomor (3) Kurikulum

    int PK, CP, SK;

    printf("\n-- Penilaian Kurikulum --\n");
    do {
        printf("Masukkan nilai keterlibatan pemangku kepentingan dalam proses evaluasi dan pemutakhiran kurikulum (1-100): ");
        scanf("%d", &PK);
    } while (PK < 1 || PK > 100);

    do {
        printf("Masukkan nilai kesesuaian capaian pembelajaran dengan profil lulusan dan jenjang KKNI/SKKNI (1-100): ");
        scanf("%d", &CP);
    } while (CP < 1 || CP > 100);

    do {
        printf("Masukkan nilai ketepatan struktur kurikulum dalam pembentukan capaian pembelajaran (1-100): ");
        scanf("%d", &SK);
    } while (SK < 1 || SK > 100);

    float rata_rata = (float)(PK + CP + SK) / 3;

    // Konversi ke skala 0-4
    nilai3 = rata_rata / 25; // Membagi dengan 25 untuk mendapatkan skala 0-4

     // Tentukan grade
    if (nilai3 >= 3.5) {
        grade3 = 'A';
    } else if (nilai1 >= 2.5) {
        grade3 = 'B';
    } else if (nilai1 >= 1.5) {
        grade3 = 'C';
    } else {
        grade3 = 'D';
    }
    printf("Nilai Studi Kurikulum = %.2f (Grade: %c)\n", nilai3, grade3);


    // Nomor (4) Kesesuaian Bidang Kerja Lulusan
    int KBK;

    printf("\n-- Penilaian berdasarkan kesesuaian bidang kerja lulusan saat mendapatkan pekerjaan pertama --\n");
    printf("Masukkan presentase nilai kesesuaian bidang kerja lulusan saat mendapatkan pekerjaan pertama (0-100): ");
    scanf("%d", &KBK);

    if (KBK >= 60) {
        nilai4 = 4;
    } else {
        nilai4 = (20 * KBK) / 3;
        if (nilai4 > 4) {
            nilai4 = nilai4 / 100; // bagi '100' agar hasil tidak lebih dari '4.00'
        }
    }
     // Tentukan grade
    if (nilai4 >= 3.5) {
        grade4 = 'A';
    } else if (nilai1 >= 2.5) {
        grade4 = 'B';
    } else if (nilai1 >= 1.5) {
        grade4 = 'C';
    } else {
        grade4 = 'D';
    }
    printf("Nilai Kesesuaian Bidang Kerja Lulusan = %.2f (Grade: %c)\n", nilai4, grade4);


    // Nomor (5) Kepuasan Pengguna
    int a, b, c, d;
    float hasil;

    printf("\n-- Penilaian berdasarkan tingkat kepuasan pengguna terhadap lulusan prodi --\n");
    printf("- Presentase jawaban 'sangat baik': ");
    scanf("%d", &a);
    printf("- Presentase jawaban 'baik': ");
    scanf("%d", &b);
    printf("- Presentase jawaban 'cukup': ");
    scanf("%d", &c);
    printf("- Presentase jawaban 'kurang': ");
    scanf("%d", &d);

    hasil = (float) (4 * a) + (3 * b) + (2 * c) + d;
    nilai5 = hasil / 100; // Agar nilai tidak lebih dari 4.0


     // Grade berdasarkan nilai
    if (nilai5 >= 3.5) {
        grade5 = 'A';
    } else if (nilai5 >= 2.5) {
        grade5 = 'B';
    } else if (nilai5 >= 1.5) {
        grade5 = 'C';
    } else {
        grade5 = 'D';
    }

    printf("Nilai kepuasan pengguna = %.2f (Grade: %c)\n", nilai5, grade5);


    //Nomor (6) Publikasi Ilmiah Mahasiswa
    int na1, na2, na3, na4, nb1, nb2, nb3, nc1, nc2, nc3, nm;
    float rl, rn, ri;

    printf("\nPenilaian Jumlah Publikasi Ilmiah Mahasiswa Magister\n");
    printf("-------------------------------------------------\n");
    printf("Masukkan jumlah publikasi:\n");
    printf("  - Jumlah publikasi mahasiswa di jurnal nasional tidak terakreditasi: ");
    scanf("%d", &na1);
    printf("  - Jumlah publikasi mahasiswa di jurnal nasional terakreditasi: ");
    scanf("%d", &na2);
    printf("  - Jumlah publikasi mahasiswa di jurnal internasional: ");
    scanf("%d", &na3);
    printf("  - Jumlah publikasi mahasiswa di jurnal internasional bereputasi: ");
    scanf("%d", &na4);
    printf("  - Jumlah publikasi mahasiswa di seminar wilayah/lokal/PT: ");
    scanf("%d", &nb1);
    printf("  - Jumlah publikasi mahasiswa di seminar nasional: ");
    scanf("%d", &nb2);
    printf("  - Jumlah publikasi mahasiswa di seminar internasional: ");
    scanf("%d", &nb3);
    printf("  - Jumlah pagelaran/pameran/presentasi mahasiswa dalam forum di tingkat wilayah: ");
    scanf("%d", &nc1);
    printf("  - Jumlah pagelaran/pameran/presentasi mahasiswa dalam forum di tingkat nasional: ");
    scanf("%d", &nc2);
    printf("  - Jumlah pagelaran/pameran/presentasi mahasiswa dalam forum di tingkat internasional: ");
    scanf("%d", &nc3);
    printf("  - Jumlah mahasiswa pada saat TS: ");
    scanf("%d", &nm);

    rl = ((float)(na1 + nb1 + nc1) / nm) * 100;
    rn = ((float)(na2 + na3 + nb2 + nc2) / nm) * 100;
    ri = ((float)(na4 + nb3 + nc3) / nm) * 100;

    if (ri >= 2) {
        nilai6 = 4;
    } else if (ri < 2 && rn >= 20) {
        nilai6 = 3 + (ri / 2);
    } else if (ri > 0 && ri < 2 && rn > 0 && rn < 20) {
        nilai6 = 2 + (2 * (ri / 2)) + (rn / 20) - ((ri * rn) / (2 * 20));
    } else if (ri == 0 && rn ==  0 && rl >= 70) {
        nilai6 = 2;
    } else if (ri == 0 && rn == 0 && rl < 70) {
        nilai6 = (2 * rl) / 70;
    } else {
        nilai6 = 0;
    }
     // Tentukan grade
    if (nilai6 >= 3.5) {
        grade6 = 'A';
    } else if (nilai6 >= 2.5) {
        grade6 = 'B';
    } else if (nilai6 >= 1.5) {
        grade6 = 'C';
    } else {
        grade6 = 'D';
    }
    printf("Nilai publikasi ilmiah = %.2f (Grade: %c)\n", nilai6, grade6);

    // Fungsi Publikasi Ilmiah Mahasiswa Magister Terapan
    int naa1, naa2, naa3, naa4, nbb1, nbb2, nbb3, ncc1, ncc2, ncc3, nmm;
    float rla, rna, ria;

    printf("\nPenilaian Jumlah Publikasi Ilmiah Mahasiswa Magister Terapan\n");
    printf("-------------------------------------------------\n");
    printf("Masukkan jumlah publikasi:\n");
    printf("  - Jumlah publikasi mahasiswa di jurnal nasional tidak terakreditasi: ");
    scanf("%d", &naa1);
    printf("  - Jumlah publikasi mahasiswa di jurnal nasional terakreditasi: ");
    scanf("%d", &naa2);
    printf("  - Jumlah publikasi mahasiswa di jurnal internasional: ");
    scanf("%d", &naa3);
    printf("  - Jumlah publikasi mahasiswa di jurnal internasional bereputasi: ");
    scanf("%d", &naa4);
    printf("  - Jumlah publikasi mahasiswa di seminar wilayah/lokal/PT: ");
    scanf("%d", &nbb1);
    printf("  - Jumlah publikasi mahasiswa di seminar nasional: ");
    scanf("%d", &nbb2);
    printf("  - Jumlah publikasi mahasiswa di seminar internasional: ");
    scanf("%d", &nbb3);
    printf("  - Jumlah pagelaran/pameran/presentasi mahasiswa dalam forum di tingkat wilayah: ");
    scanf("%d", &ncc1);
    printf("  - Jumlah pagelaran/pameran/presentasi mahasiswa dalam forum di tingkat nasional: ");
    scanf("%d", &ncc2);
    printf("  - Jumlah pagelaran/pameran/presentasi mahasiswa dalam forum di tingkat internasional: ");
    scanf("%d", &ncc3);
    printf("  - Jumlah mahasiswa pada saat TS: ");
    scanf("%d", &nmm);


    rla = ((float)(na1 + nb1 + nc1) / nm) * 100;
    rna = ((float)(na2 + na3 + nb2 + nc2) / nmm) * 100;
    ria = ((float)(na4 + nb3 + nc3) / nm) * 100;

    if (ria >= 2) {
        nilai7 = 4;
    } else if (ria < 2 && rna>= 20) {
        nilai7 = 3 + (ria / 2);
    } else if (ria > 0 && ria < 2 && rna > 0 && rna < 20) {
        nilai7 = 2 + (2 * (ria / 2)) + (rna / 20) - ((ria * rna) / (2 * 20));
    } else if (ria == 0 && rna ==  0 && rla >= 70) {
        nilai7 = 2;
    } else if (ria == 0 && rna == 0 && rla < 70) {
        nilai7 = (2 * rla) / 70;
    } else {
        nilai7 = 0;
    }
    // Tentukan grade
    if (nilai7 >= 3.5) {
        grade7 = 'A';
    } else if (nilai7 >= 2.5) {
        grade7 = 'B';
    } else if (nilai7 >= 1.5) {
        grade7 = 'C';
    } else {
        grade7 = 'D';
    }
    printf("Nilai publikasi ilmiah = %.2f (Grade: %c)\n", nilai7, grade7);

   // rangkuman output
    printf("\n\n== HASIL PENILAIAN AKREDITASI ==\n");
    printf("Nilai Kecukupan Dosen Tetap = %.2f (Grade: %c)\n", nilai1, grade1);
    printf("Nilai Jabatan Akademik Dosen Tetap = %.2f  (Grade: %c)\n", nilai2, grade2);
    printf("Nilai kurikulum = %.2f (Grade: %c)\n", nilai3, grade3);
    printf("Nilai Kesesuaian Bidang Kerja Lulusan = %.2f (Grade: %c)\n", nilai4, grade4);
    printf("Nilai Kepuasan Pengguna = %.2f (Grade: %c)\n", nilai5, grade5);
    printf("Nilai Publikasi Ilmiah Magister = %.2f (Grade: %c)\n", nilai6, grade6);
    printf("Nilai Publikasi Ilmiah Magister Terapan = %.2f (Grade: %c)\n", nilai7, grade7);

    printf("\n== TERIMAKASIH ==\n");

    return 0;

}


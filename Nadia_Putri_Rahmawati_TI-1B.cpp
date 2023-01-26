#include <iostream>
using namespace std;

struct uas
{
    string user, input;
    char jurusan, ti;
    int matkul, pil, pok;
};
string teknik [3] ={
        "A. Teknik Informatika A",
        "B. Teknik Informatika B",
        "C. Teknik Informatika C",

};

void planer()
{
    char ulang;
    system("cls");
    do
    {
        system ("cls");
        uas informatika;
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ JADWAL MATA KULIAH TEKNIK INFORMATIKA ^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "\n";
        cout << "\t ----------------------------" << endl;
        cout << "\t ;  " << teknik [0]     << " ;" << endl;
        cout << "\t ;  " << teknik [1]     << " ;" << endl;
        cout << "\t ;  " << teknik [2]     << " ;" << endl;
        cout << "\t ----------------------------" << endl;
        cout << "\n" ;
        cout << "\t \t Pliss to select : ";
        cin >> informatika.ti;
        switch (informatika.ti)
        {
        case 'A':
            system("cls");
            {
                cout << "\n"
                     << endl;
                cout << "==================== Table Jadwal Mata Kuliah TI-1A =======================" << endl;
                cout << "---------------------------------------------------------------------------" << endl;
                cout << "\n"
                     << endl;
                cout << "===========================================================================" << endl;
                cout << "|          MATA KULIAH                 | RUANGAN | WAKTU MATKUL | HARI    |" << endl;
                cout << "|-------------------------------------------------------------------------|" << endl;
                cout << "| Arsitektur dan Organisasi Komputer   |   D10   |  8.40 -9.30  | SENIN   |" << endl;
                cout << "| Dasar Pemograman                     | Lab. TI |  13.00-15.30 | SENIN   |" << endl;
                cout << "| Bahasa Asing                         |   D10   |  16.20-18.00 | SENIN   |" << endl;
                cout << "| Pengantar Teknologi Informasi        |   D10   |  7.00 -9.30  | SELASA  |" << endl;
                cout << "| Logika Informatika                   |   D10   |  9.30 -12.00 | KAMIS   |" << endl;
                cout << "| Literasi Digital dan Etika Teknologi | Lab. TI |  7.00 -08.40 | JUMAT   |" << endl;
                cout << "| Pendidikan Pancasila                 |   B7    |  8.40 -10.20 | JUMAT   |" << endl;
                cout << "| Aqidah Ahklaq                        |   B9    |  10.00-12.00 | SABTU   |" << endl;
                cout << "===========================================================================" << endl;
                cout << "\n";
                cout << "JADWAL DI ATAS ADALAH JADWAL MATA KULIAH KELAS 1-A"<< endl;
                cout << "\n";
                break;
            }

        case 'B':
        {
            system("cls ");
            cout << "\t\t\t ============================= JADWAL KULIAH Mata Kuliah TI-1B  ==============================" << endl;
            string jadwal;
            cout << "\n";
            cout << " Gunakan Huruf Kapital Untuk Memilih, Contoh: SENIN. " << endl;
            cout << "\n"
                 << endl;
            cout << " Jadwal hari ini : ";
            cin >> jadwal;
            if (jadwal == "SENIN")
            {
                cout << "\n"
                     << endl;
                cout << "================================================================" << endl;
                cout << "|---|------------------------------|------------|------------- |" << endl;
                cout << "| NO|          MATA KULIAH         |   RUANGAN  | WAKTU MATKUL |" << endl;
                cout << "|---|------------------------------|------------| -------------|" << endl;
                cout << "| 1.|Pengantar Teknologi Informasi |     B10    | 7.00 - 8.40  |" << endl;
                cout << "|---|------------------------------|------------|------------- |" << endl;
                cout << "| 2.|Dasar Pemograman              |  Lab - TI  | 9.20 - 12.00 |" << endl;
                cout << "|---|------------------------------|------------|------------- |" << endl;
                cout << "| 3.|Bahasa Asing                  |     D10    |14.40 - 16.40 |" << endl;
                cout << "|---|------------------------------|------------|------------- |" << endl;
            }
            else if (jadwal == "SELASA")
            {
                cout << "\n"
                     << endl;

                cout << "======================================================================" << endl;
                cout << "|---|------------------------------------|------------|------------- |" << endl;
                cout << "| NO|              MATA KULIAH           |   RUANGAN  | WAKTU MATKUL |" << endl;
                cout << "|---|------------------------------------|------------| -------------|" << endl;
                cout << "| 1.|Logika Informatika                  |     D5     | 7.00 - 8.40  |" << endl;
                cout << "|---|------------------------------------|------------|------------- |" << endl;
                cout << "| 2.|Arsitektur dan organisasi Komputer  |     D10    | 13.00- 14.40 |" << endl;
                cout << "|---|------------------------------------|------------|------------- |" << endl;
            }
            else if (jadwal == "JUMAT")
            {
                cout << "==============================================================================" << endl;
                cout << "|NO |             MATA KULIAH             | RUANGAN |  WAKTU       | HARI    |" << endl;
                cout << "|---|------------------------------------------------------------------------|" << endl;
                cout << "|1. |Literasi Digital Dan Etika Teknologi | Lab. TI |  7.00 -08.40 | JUMAT   |" << endl;
                cout << "|---|------------------------------------------------------------------------|" << endl;
                cout << "|2. |Pendidikan Pancasila                 | B7      |  13.00-14.40 | JUMAT  " << endl;
                cout << "|---|------------------------------------------------------------------------|" << endl;
            }
            else if (jadwal == "SABTU")
            {
                cout << "=======================================" << endl;
                cout << "|NO |           MATA KULIAH           |" << endl;
                cout << "|---|---------------------------------|" << endl;
                cout << "|1. |Aqidah Akhlaq                    |" << endl;
                cout << "|---|---------------------------------|" << endl;
            }
            else if (jadwal == "SEMUA_MATA_KULIAH")
            {
                cout << "\n"
                     << endl;
                cout << "=============* Table Jadwal Mata Kuliah selama 1 Semester *================" << endl;
                cout << "\n"
                     << endl;
                cout << "===========================================================================" << endl;
                cout << "|          MATA KULIAH                 | RUANGAN | WAKTU MATKUL | HARI    |" << endl;
                cout << "|-------------------------------------------------------------------------|" << endl;
                cout << "| Pengantar Teknologi Informasi        |   B10   |  7.00 -8.40  | SENIN   |" << endl;
                cout << "| Dasar Pemograman                     | Lab. TI |  9.20 -12.00 | SENIN   |" << endl;
                cout << "| Bahasa Asing                         |   D10   |  14.40-16.40 | SENIN   |" << endl;
                cout << "| Logika Informatika                   |   D5    |  7.00 -9.30  | SELASA  |" << endl;
                cout << "| Arsitektur dan Organisasi Komputer   |   D10   |  13.00-15.00 | SELASA  |" << endl;
                cout << "| Literasi Digital dan Etika Teknologi | Lab. TI |  8.40 -10.20 | JUMAT   |" << endl;
                cout << "| Pendidikan Pancasila                 |   B7    |  13.00-14.40 | JUMAT   |" << endl;
                cout << "| Aqidah Ahklaq                        |   B9    |  10.00-12.00 | SABTU   |" << endl;
                cout << "===========================================================================" << endl;
                cout << "Table Diatas adalah jadwal Mata Kuliah Semester 1 :)" << endl;
                cout << "\n"
                     << endl;
            }
            else
                cout << "\n";
                cout << "=====================================" << endl;
                cout << "| Maaf Tidak Ada Jadwal Mata Kuliah |" << endl;
                cout << "=====================================" << endl;
                cout << "\n";

            break;
        }

        case 'C':
            system("cls");
            {
                cout << "===========================================================================" << endl;
                cout << "                   JADWAL TEKNIK INFORMATIKA KELAS C                       " << endl;
                cout << "===========================================================================" << endl;
                cout << "===========================================================================" << endl;
                cout << "|          MATA KULIAH                 | RUANGAN | WAKTU MATKUL | HARI    |" << endl;
                cout << "|-------------------------------------------------------------------------|" << endl;
                cout << "| Pendidikan Pancasila                 |   D05   |  15.30-17.10 | SENIN   |" << endl;
                cout << "| Dasar Pemograman                     | Lab. TI |  15.30-18.00 | SELASA  |" << endl;
                cout << "| Logika Informatika                   | Lab. TI |  16.20-18.00 | SELASA  |" << endl;
                cout << "| Pengantar Teknologi Informasi        | Lab. TI |  7.00 -8.40  | KAMIS   |" << endl;
                cout << "| Literasi Digital dan Etika Teknologi | Lab. TI |  10.20-12.00 | JUMAT   |" << endl;
                cout << "| Arsitektur dan Organisasi Komputer   |   D09   |  13.00-14.40 | JUMAT   |" << endl;
                cout << "| Bahasa Asing                         |   D07   |  14.40-16.20 | SENIN   |" << endl;
                cout << "| Aqidah Ahklaq                        |   -     |  10.00-12.00 | SABTU   |" << endl;
                cout << "===========================================================================" << endl;
                cout << "\n";
                cout << "Table Diatas adalah jadwal Mata Kuliah Semester TI-1C :)" << endl;
                cout << "\n"
                     << endl;
                break;
            }
        default:
            cout << "Maaf Hari ini tidak ada jadwal " << endl;
        }

        cout << "Ingin memilih menu lain (y/t)? ";
        cin >> ulang;
        cout << endl;
    } while (ulang != 't');
}

void kelompok()
{
    system("cls");
    uas kelompok;
    cout << "\n";
    cout << " ==============================\t List Nama Kelompok Mata Kuliah TI 1-B \t==================================" << endl;
    cout << "\n";
    cout << "\t''''''''''''''''''''''' " << endl;
    cout << "\t' 1. Arsitektur       ' " << endl;
    cout << "\t' 2. B. Inggris       ' " << endl;
    cout << "\t' 3. Dasar Pemograman ' " << endl;
    cout << "\t''''''''''''''''''''''' " << endl;
    cout << "\n " << endl;
    cout << " \t Pilih : ";
    cin >> kelompok.pok;
    system("cls");
    if (kelompok.pok <= 1)
    {
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ Kelompok Arsitektur 1-B ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ " << endl;
        cout << "\n"
             << endl;
        cout << "========================================================================================================" << endl;
        cout << "| Kelompok 1             | Kelompok 2              | Kelompok 3                | Kelompok 4            |" << endl;
        cout << "========================================================================================================" << endl;
        cout << "| Ages Gelar Pangestu    | FAUZIA NURAFNI          | ARYA PANGESTU             | REIZA MAULIDIA SENJAYA|" << endl;
        cout << "| GIBRAN GENTA RABBANI   | RESTU GEDE PURNAMA      | NUZABA ALAM AL-ZIHAD      | FERRI EKALAYA         |" << endl;
        cout << "| M FAREL ABDILLAH       | MAULANA IFNU SYAFI      | M. SAMANI KAMIL           | PUTRI AULIA MAULIDA   |" << endl;
        cout << "| FAJAR BUDIMAN          | NADIA PUTRI RAHMAWATI   | LUTHFI FAUZAN ACHMAD      | CAROL DWI PUTRA       |" << endl;
        cout << "| MOH ABDI HAFIDZ FADILAH| RAFDY FAUZAN ILHAM F    | SYALWA FIDA WIFA          | M. FAKHRI KHAIRIL IMAM|" << endl;
        cout << "| RIZKY MAULANA YUSUF    | M. FADHLAN SYUHADA      | FERI IRAWAN               | ALMA SAKHIRAGAMA K    |" << endl;
        cout << "| ERI ZULFAN DIWANI      | ARIP                    | M. ARIZKY                 | NAZMI MAULANA FAUZAN  |" << endl;
        cout << "| SILVY DENIA PUTRI      | M. FAISAL RAFLI         | MOH. RIZKY MAULANA        | M. GEORGE ELMAR       |" << endl;
        cout << "| RAKA WAHYU SAGARA      | FINO FALENTINO          | M. UTAMA LUHUR BUDHY      | M. SACHRAN ALMIQDAD FR|" << endl;
        cout << "| NUR INSAN              | ASRI NURKHOLIDAH        | TAOPIK MULYA KUROCHMAN    | M. KEVIN FEDHAYYEN    |" << endl;
        cout << "| IQBAL PRIBADI          | HANIF IMAM MUNTAZHAR    |                           |                       |" << endl;
        cout << "| DHIYA JAUHAR AKMAL     |                         |                           |                       |" << endl;
        cout << "========================================================================================================" << endl;
    }
    else if (kelompok.pok <= 2)
    {
        cout << "---------------------------------- KELOMPOK BAHASA ASING TI 1-B ----------------------------------------" << endl;
        cout << "\n";
        cout << "========================================================================================================" << endl;
        cout << "| Kelompok 1          |  Kelompok 2        | Kelompok 3       | kelompok 4           | kelompok 5      |" << endl;
        cout << "--------------------------------------------------------------------------------------------------------" << endl;
        cout << "| ALMA SAKHIRAGAMA K  |FAUZIA NURAFNI      | Ryan R.          | NUZABA ALAM AL-ZIHAD | HANIF IMAM M.   |" << endl;
        cout << "| Nadia Putri R.      |SILVY DENIA PUTRI   | M. FAISAL RAFLI  | RESTU GEDE PURNAMA   | NAZMI MAULANA F.|" << endl;
        cout << "| Putri Aulia M.      |Asri Nurkholidah    | M.Utama          | M.Sachran            | Arip            |" << endl;
        cout << "| Raka Wahyu Sagara   |Syalwa Fida         | M.Samani K.      | Ages Gelar P.        | M. Abdi H.      |" << endl;
        cout << "| Rafdy F.            |Reiza Maulida S.    | Ferri Ekalaya    | Primadika A.         | Dhiya Januar A. |" << endl;
        cout << "|                     |                    |                  |                      | M. Fadlan S.    |" << endl;
        cout << "========================================================================================================" << endl;
        cout << "| Kelompok 6          | Kelompok 7         | Kelompok 8       | Kelompok 9           |                 |" << endl;
        cout << "-------------------------------------------------------------------------------------------------------|" << endl;
        cout << "| Sulthan R.          | Taofik Mulya       | Maulana Ifnu     | Fino F               |                 |" << endl;
        cout << "| Moh. Rizky M.       | Nur Insan          | Fajar Budiman    | M.Fakhri K.          |                 |" << endl;
        cout << "| Luthfi F.           | M.Farel A.         | Feri Irawan      | Iqbal Pribadi        |                 |" << endl;
        cout << "| Arya Pangestu       | M. Arizki          | Gibran Genta     | Rizky M. Yusuf       |                 |" << endl;
        cout << "| Eri zulfan          | M.Kevin F          | M.George E.      | Carol Dwi P          |                 |" << endl;
        cout << "========================================================================================================" << endl;
    }
    else if (kelompok.pok <= 3)
    {
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ KELOMPOK DASAR PEMOGRAMAN TI 1-B ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "\n";
        cout << "\t =========================================================================================" << endl;
        cout << "\t | \t\t Kelompok 1 \t\t  |\t\t\t Kelompok 2 \t\t |" << endl;
        cout << "\t =========================================================================================" << endl;
        cout << "\t | \t Ages Gelar Pangestu    \t  |     NUZABA ALAM AL-ZIHAD     \t\t |" << endl;
        cout << "\t | \t GIBRAN GENTA RABBANI   \t  |     M. SAMANI KAMIL          \t\t |" << endl;
        cout << "\t | \t M FAREL ABDILLAH       \t  |     LUTHI FAUZAN ACHMAD      \t\t |" << endl;
        cout << "\t | \t FAJAR BUDIMAN          \t  |     SYALWA FIDA WIFA         \t\t |" << endl;
        cout << "\t | \t MOH ABDI HAFIDZ F.     \t  |     FERI IRAWAN              \t\t |" << endl;
        cout << "\t | \t RIZKY MAULANA YUSUF    \t  |     M.ARIZKI                 \t\t |" << endl;
        cout << "\t | \t ERI ZULFAN DIWANI      \t  |     MOH. RIZKI MAULANA       \t\t |" << endl;
        cout << "\t | \t SILVY DENIA PUTRI      \t  |     M. UTAMA LUHUR BUDHY     \t\t |" << endl;
        cout << "\t | \t RAKA WAHYU SAGARA      \t  |     REIZA MAULIDIA SENJAYA   \t\t |" << endl;
        cout << "\t | \t NUR INSAN              \t  |     FERRI EKALAYA            \t\t |" << endl;
        cout << "\t | \t FAUZIA NURAFNI         \t  |     PUTRI AULIA MAULIDA      \t\t |" << endl;
        cout << "\t | \t HANIF IMAM MUNTAZHAR   \t  |     CAROL DWI PUTRA          \t\t |" << endl;
        cout << "\t | \t ASRI NURKHOLIDAH       \t  |     M. FAKHRI KHAIRIL IMAM   \t\t |" << endl;
        cout << "\t | \t RESTU GEDE PURNAMA     \t  |     ALMA SAKHIRAGAMA K       \t\t |" << endl;
        cout << "\t | \t MAULANA IFNU SYAFI     \t  |     NAZMI MAULANA FAUZAN     \t\t |" << endl;
        cout << "\t | \t NADIA PUTRI RAHMAWATI  \t  |     MUHAMMAD GEORGE ELMAR    \t\t |" << endl;
        cout << "\t | \t RAFDY FAUZAN ILHAM F   \t  |     M. SACHRAN ALMIQDAD FR   \t\t |" << endl;
        cout << "\t | \t M. FADHLAN SYUHADA     \t  |     MUHAMMAD KEVIN FEDHAYYEN \t\t |" << endl;
        cout << "\t | \t ARIP                   \t  |     IQBAL PRIBADI            \t\t |" << endl;
        cout << "\t | \t ARYA PANGESTU          \t  |     DHIYA JAUHAR AKMAL       \t\t |" << endl;
        cout << "\t | \t\t                          |     MUHAMMAD FAISAL RAFLI    \t\t |" << endl;
        cout << "\t | \t\t                          |     FINO FALENTINO           \t\t |" << endl;
        cout << "\t | \t\t                          |     TAOFIK MULYA KUROCHMAN   \t\t |" << endl;
        cout << "\t =========================================================================================" << endl;
    }
}

void tugas()
{
    system("cls");
    cout << "\n"
         << endl;
    cout << "'''''''''''''''''''''''''''''''''''''''''''''''' TO DO LIST TUGAS ''''''''''''''''''''''''''''''''''''''''''''"<< endl;
    cout << "                                                 ----------------                                          "<< endl;
    cout << "\n" << endl;
    int n;
    string tugas[10], status[10], matkul[10];
    // int nilai[10];

    cout << "Masukan Jumlah Data Tugas Yang akan di input = ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << endl;
        getchar();
        cout << "Tugas ke-" << i + 1 << endl;
        cout << "Masukan Tugas Hari ini       : " ;
                getline (cin,tugas[i]);
        cout << "Masukan Matkul               : " ;
                getline (cin,matkul[i]);
        cout << "Status Tugas (Selesai/Belum) : " ;
                getline (cin,status [i]);
    }
    cout << endl;
    cout << "                                  ~~~~~~~~~~~~~~~~~~~~~~~~~                           " << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>\t  | DAFTAR TUGAS HARI INI |  \t <<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << "                                  ~~~~~~~~~~~~~~~~~~~~~~~~~                           " << endl;


    for (int i = 0; i < n; i++)
    {
        cout << "\n";
        cout << "------------------------------------------------------------------------------" << endl;
        cout << "Tugas Ke-      :" << i + 1 << " ( " << tugas[i] << " )                        " << endl;
        cout << "Nama Tugas     :" << tugas[i] << endl;
        cout << "Mata Kuliah    :" << matkul[i] << endl;
        cout << "Status         :" << status[i] << endl;
        cout << "------------------------------------------------------------------------------" << endl;
        cout << "List Tugas Hari Ini :)" << endl;
        cout << "\n"
             << endl;
    }
}

int main()
{
    system("CLS");
my_planner:
    char ulang;
    uas pilihan;
    system("cls");
    cout << "\n" ;
    cout << "\n" ;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ............. WEEKLY PLANER  ............ <<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << "\t\t\t\t      (AGENDA MINGGUAN SELAMA 1 SEMESTER )\t\t\t" << endl;
    cout << "----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\n";
    cout << "\n";
    cout << endl;
    cout << "\t\t\t\t MENU UTAMA \t"<< endl ;
    cout << "\t ................................................................" << endl;
    cout << "\t : 1. Jadwal Mata Kuliah Teknik Informatika Semester 1          :" << endl;
    cout << "\t : 2. List Kelompok Mata kuliah TI 1-B                          :" << endl;
    cout << "\t : 3. To do List Tugas                                          :" << endl;
    cout << "\t ................................................................" << endl;
    cout << "    \t Pilih di sini :  ";
    cin >> pilihan.matkul;
    do
    {
        switch (pilihan.matkul)
        {

        case 1:
            planer();
            break;
        case 2:
            system("cls");
            kelompok();
            break;
        case 3:
            tugas();
            break;
        default:
            cout << "Maaf Menu Tidak Tersedia " << endl;
        }

        cout << "Ingin memilih menu lain (y/t)? ";
        cin >> ulang;
        cout << endl;

    } while (ulang != 't');

    if (ulang == 't')
    {
        goto my_planner;
    };
    return 0;
}

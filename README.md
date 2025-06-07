# Kütüphane Yönetim Sistemi (C)

Bu uygulama terminal üzerinden çalışan bir kitap yönetim sistemidir.

## Özellikler
- Kitap ekleme ve listeleme
- Kullanıcı modülü (hazırlık aşamasında)

## Derleme
```bash
make
```

## Çalıştırma
```bash
./library
```

## Coverity Analizi
```bash
cov-build --dir cov-int make
cov-analyze --dir cov-int
cov-format-errors --dir cov-int --html-output report
```

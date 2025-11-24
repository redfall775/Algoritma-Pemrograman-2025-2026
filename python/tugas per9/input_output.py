nama = "buku"
harga = 10000
jumlah = 3

total = harga * jumlah

if total > 276000:
    diskon = total * 0.06   
else: 
    diskon = 0   
total_bayar = total - diskon

print("\n===== STRUK PEMBELIAN =====")
print(f"Nama Barang   : {nama}")
print(f"Harga Satuan  : {harga}")
print(f"Jumlah Beli   : {jumlah}")
print(f"Total Harga   : {total}")
print(f"Diskon        : {diskon}")
print(f"Total Bayar   : {total_bayar}")
print("===========================")
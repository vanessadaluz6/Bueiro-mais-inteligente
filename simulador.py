import requests

while(True):
   valor = int(input("Informe um valor: "))
   r = requests.post("http://bueiro-verde.herokuapp.com/download", json={"LDR":valor})
   print(r.status_code)

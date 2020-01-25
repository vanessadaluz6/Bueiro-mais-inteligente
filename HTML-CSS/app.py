import json

from flask import Flask, render_template, redirect, request, jsonify, url_for
from flask_socketio import SocketIO, send, emit
from flask_cors import CORS

app = Flask(__name__)
socketio = SocketIO(app)
CORS(app)

dados = {
    "NIVEL" : 0,
    "CARGA" : 0,
    "ID" : "",
    "BAIRRO" : "",
    "RUA" : "",
    "TIPO" : "",
}

@app.route("/")
def rota_inicial():
    return render_template("index.html")

@app.route("/Monitoramento")
def rota_monitoramento():
    return render_template("monitor.html")

@app.route("/Sobre")
def rota_sobre():
    return render_template("about.html")

@app.route("/upload", methods = ["POST"])
def rota_upload():
    global dados
    dados = request.get_json()
    return "200"

@app.route("/download", methods = ["GET"])
def rota_download():
    global dados
    return jsonify(dados)

if __name__ == "__main__":
    app.run("0.0.0.0",port=8080)
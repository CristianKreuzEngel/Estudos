import 'dart:math';

import 'package:flutter/material.dart';

class Home extends StatefulWidget {
  const Home({super.key});

  @override
  State<Home> createState() => _HomeState();
}

class _HomeState extends State<Home> {
  TextEditingController txtnome = TextEditingController();
  TextEditingController txtidade = TextEditingController();

  var nome, idade;

  void exibirTexto() {
    setState(() {
      nome = txtnome.text;
      idade = int.parse(txtidade.text);
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        backgroundColor: Colors.green,
        title: Text("Exemplo textfield"),
      ),
      body: Container(
        padding: EdgeInsets.all(100),
        child: Column(children: [
          TextField(
            controller: txtnome,
            decoration: InputDecoration(labelText: "ESCREVA SEU NOME"),
            style: TextStyle(fontSize: 19, color: Colors.green),
          ),
          SizedBox(
            height: 45,
          ),
          TextField(
            controller: txtidade,
            decoration: InputDecoration(labelText: "ESCREVA SUA IDADE"),
            style: TextStyle(fontSize: 19, color: Colors.green),
          ),
          SizedBox(height: 40),
          ElevatedButton(
            child: Text("ENVIAR"),
            onPressed: exibirTexto,
          ),
          Text("Seu nome é $nome"),
          Text("Sua idade é $idade")
        ]),
      ),
    );
  }
}

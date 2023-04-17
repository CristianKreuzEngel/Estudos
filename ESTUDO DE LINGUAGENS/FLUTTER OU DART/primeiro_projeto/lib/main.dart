import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
      title: "Primeiro Projeto",
      home: Scaffold(
        appBar: AppBar(
          title: Text("Quantos porcentos meu irmão é boiola?"),
          backgroundColor: Colors.green,
        ),
        body: Container(
            child: Column(
          children: [
            Text(
              "Meu irmão é boiola \n 100%",
              style: TextStyle(
                  fontSize: 19,
                  color: Colors.blue,
                  letterSpacing: 0,
                  fontWeight: FontWeight.bold,
                  wordSpacing: 30,
                  decoration: TextDecoration.underline
                  ),
            ),
          ],
        )),
      )));
}

import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
    debugShowCheckedModeBanner: false,
    home: Scaffold(
      appBar: AppBar(
        title: const Text("PIZZARIA DEGUSTAR"),
        backgroundColor: Colors.blueGrey,
      ),
      body: Container(
          child: Column(
        children: [
          SizedBox(
            width: 200,
            height: 80,
          ),
          TextButton(
            child: const Text(
              "Fazer Pedido",
              style: TextStyle(fontSize: 20),
            ),
            style: TextButton.styleFrom(
                primary: Colors.white, backgroundColor: Colors.green),
            onPressed: () {
              print("pedido feito com sucesso");
            },
          )
        ],
      )),
    ),
  ));
}

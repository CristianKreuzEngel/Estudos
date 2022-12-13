import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
      title: "Primeiro Projeto",
      home: Scaffold(
        appBar: AppBar(
          title: Text("Scaffold"),
          backgroundColor: Colors.green,
        ),
        body: Container(
          child: Column(children: [Text("Testenho")]),
        ),
      )));
}

import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
    home: Container(
      decoration:
          BoxDecoration(border: Border.all(width: 10, color: Colors.orange)),
      child: Image(
        image: AssetImage("images/perfil.jpg"),
        fit: BoxFit.scaleDown,
      ),
    ),
  ));
}

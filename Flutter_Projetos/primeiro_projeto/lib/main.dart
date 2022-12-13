
import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
      title: "Primeiro Projeto",
      home: Container(
          color: Colors.white,
          child: Column(
            children: [
              Text("texto 01"),
              Text("texto 02"),
              Text("texto 03")
          ]
        )
      )
    )
  );
}

import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
    debugShowCheckedModeBanner: false,
    home: home(),
  ));
}

class home extends StatelessWidget {
  const home({super.key});

  @override
  Widget build(BuildContext context) {
    var total = "?";
    return Scaffold(
      appBar: AppBar(
        title: Text("CALCULADORA"),
        backgroundColor: Colors.green,
      ),
      body: Center(
          child: Padding(
        padding: EdgeInsets.all(50),
        child:
            Column(mainAxisAlignment: MainAxisAlignment.spaceEvenly, children: [
          Text(
            "Qual o valor da soma abaixo $total",
            textAlign: TextAlign.center,
            style: TextStyle(fontSize: 25),
          ),
          Text(
            "19 + 1 = ?",
            textAlign: TextAlign.center,
            style: TextStyle(fontSize: 30),
          ),
          ElevatedButton(
            child: Text("Calcular"),
            style: ElevatedButton.styleFrom(
                primary: Colors.green, onPrimary: Colors.white),
            onPressed: () {
              total = '20';
            },
          )
        ]),
      )),
    );
  }
}

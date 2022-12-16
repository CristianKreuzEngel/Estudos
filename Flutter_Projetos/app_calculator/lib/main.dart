import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
    debugShowCheckedModeBanner: false,
    home: home(),
  ));
}

class home extends StatefulWidget {
  const home({super.key});

  @override
  State<home> createState() => _homeState();
}

class _homeState extends State<home> {
  var total = "?";
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text("CALCULADORA"),
        backgroundColor: Colors.green,
      ),
      body: Center(
          child: Padding(
        padding: const EdgeInsets.all(50),
        child:
            Column(mainAxisAlignment: MainAxisAlignment.spaceEvenly, children: [
          Text(
            "Qual o valor da soma abaixo",
            textAlign: TextAlign.center,
            style: const TextStyle(fontSize: 25),
          ),
          Text(
            "19 + 1 = $total",
            textAlign: TextAlign.center,
            style: TextStyle(fontSize: 30),
          ),
          ElevatedButton(
            child: Text("Calcular"),
            style: ElevatedButton.styleFrom(
                primary: Colors.green, onPrimary: Colors.white),
            onPressed: () {
              setState(() {
                total = "20";
              });
            },
          )
        ]),
      )),
    );
  }
}

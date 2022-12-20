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
  var total = "QUEM É MINHA NOIVA MARAVILHOSA?";
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text("Aplicativo para meu dengo"),
        backgroundColor: Colors.red,
      ),
      body: Center(
          child: Padding(
        padding: const EdgeInsets.all(50),
        child:
            Column(mainAxisAlignment: MainAxisAlignment.spaceEvenly, children: [
          Text(
            "$total",
            textAlign: TextAlign.center,
            style: const TextStyle(fontSize: 25),
          ),
          ElevatedButton(
            child: Text("CLIQUE AQUI PARA SABER"),
            style: ElevatedButton.styleFrom(
                primary: Colors.red, onPrimary: Colors.white),
            onPressed: () {
              setState(() {
                total = "GABRIELE DE JESUS CARVALHO <3 ";
              });
            },
          )
        ]),
      )),
    );
  }
}

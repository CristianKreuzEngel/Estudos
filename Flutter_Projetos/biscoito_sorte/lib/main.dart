import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(debugShowCheckedModeBanner: false, home: Home()));
}

class Home extends StatefulWidget {
  const Home({super.key});

  @override
  State<Home> createState() => _HomeState();
}

class _HomeState extends State<Home> {
  int numero = 0;
//array de frases
  var listaFrase = [
    "Quem disse qual é o seu limite?",
    "Em vez de ficar pensando em um monte de besteira...",
    "Por que não usa sua força para seguir em frente?"
  ];
  var listaImage = [
    "image/saitama_1.jpg",
    "image/saitama_2.jpg",
    "image/saitama_3.jpg",
    "image/saitama_4.jpg"
  ];

  //auxiliares de caminho

  var imageSaitama1 = "image/saitama_5.jpg";

  //variavel que guarda a fase

  var frase = "Seu limite...";

  // função troca de foto

  void troca() {
    setState(() {
      frase = listaFrase[numero];
      imageSaitama1 = listaImage[numero];
      print(numero);
      numero = numero + 1;
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Motivation"),
        centerTitle: true,
        backgroundColor: Colors.orange,
      ),
      body: Center(
        child: Padding(
            padding: EdgeInsets.all(80),
            child: Column(
              mainAxisAlignment: MainAxisAlignment.spaceEvenly,
              children: [
                CircleAvatar(
                  backgroundImage: AssetImage(imageSaitama1),
                  radius: 80,
                  backgroundColor: Colors.yellow,
                ),
                Text(
                  frase,
                  textAlign: TextAlign.center,
                  style: TextStyle(fontSize: 20),
                ),
                ElevatedButton(
                  child: Text("Continue"),
                  onPressed: troca,
                  style: ElevatedButton.styleFrom(
                      primary: Colors.orange, onPrimary: Colors.white),
                )
              ],
            )),
      ),
    );
  }
}

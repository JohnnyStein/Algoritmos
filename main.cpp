#include <iostream>

using namespace std;

int main() {
  cout << "Bem vindo(a)!" << endl;
  cout << "version 0.0" << endl;
  int dist;
  int vel;
  int car;
  cout << "Qual a distância percorrida em km?" << endl;
  cin >> dist;
  cout << "Qual a velocidade constante?" << endl;
  cin >> vel;
  cout << "Qual o modelo de seu carro?\n" <<
  "1- VW Nivus\n" << 
  "2- CV Tracker\n" <<
  "3- Tesla Model 3\n"<< 
  "4- Renault Duster\n"<< 
  "5- Peugeot 208\n"<< 
  "6- Peugeot 308\n"<< 
  "7- Peugeot 2008\n"<< 
  "8- Peugeot 3008\n"<< 
  "9- Peugeot 5008\n"<<
  "10- VW Golf\n"<< endl;
  cin >> car;
  if(car == 1) {
	  float gas = 7.5;
	  if(dist < 0) {
	  cout << "Distância inexistente" << endl;
	  return 0;
  } 
	  if(vel < 0) {
		  cout << "Velocidade inexistente!" << endl;
		  return 0;
	  } else {
		  int tempo = dist / vel;
		  float gasprice = 5.2;
		  int gasused = dist / gas;
		  int totalgas = gasused * gasprice;
		  cout << "Você percorreu " << dist << " km, há " << vel << " km/h constantes. Você usou " << gasused << " litros de gasolina que custaram " << totalgas << " R$. Sua viagem durou " << tempo << " hora(s)!" << endl;
	  }
  } else if(car == 2) {
	  float gas = 8.0;
	  if(dist < 0) {
	  cout << "Distância inexistente" << endl;
	  return 0;
  } 
	  if(vel < 0) {
		  cout << "Velocidade inexistente!" << endl;
		  return 0;
	  } else {
		  int tempo = dist / vel;
		  float gasprice = 5.2;
		  int gasused = dist / gas;
		  int totalgas = gasused * gasprice;
		  cout << "Você percorreu " << dist << " km, há " << vel << " km/h constantes. Você usou " << gasused << " litros de gasolina que custaram " << totalgas << " R$. Sua viagem durou " << tempo << " hora(s)!" << endl;
	  }
  } else if(car == 3) {
	  float gas = 10.0;
	  if(dist < 0) {
	  cout << "Distância inexistente" << endl;
	  return 0;
  } 
	  if(vel < 0) {
		  cout << "Velocidade inexistente!" << endl;
		  return 0;
	  } else {
		  int tempo = dist / vel;
		  float gasprice = 5.2;
		  int gasused = dist / gas;
		  int totalgas = gasprice * gasused;
		  cout << "Você percorreu " << dist << " km, há " << vel << " km/h constantes. Você usou " << gasused << " litros de gasolina que custaram " << totalgas << " R$. Sua viagem durou " << tempo << " hora(s)!" << endl;
	  }
  } else if(car == 4) {
	  float gas = 8.6;
	  if(dist < 0) {
	  cout << "Distância inexistente" << endl;
	  return 0;
  } 
	  if(vel < 0) {
		  cout << "Velocidade inexistente!" << endl;
		  return 0;
	  } else {
		  int tempo = dist / vel;
		  float gasprice = 5.2;
		  int gasused = dist / gas;
		  int totalgas = gasprice * gasused;
		  cout << "Você percorreu " << dist << " km, há " << vel << " km/h constantes. Você usou " << gasused << " litros de gasolina que custaram " << totalgas << " R$. Sua viagem durou " << tempo << " hora(s)!" << endl;
	  } 
	  }else if(car == 5) {
	  float gas = 6.3;
	  if(dist < 0) {
	  cout << "Distância inexistente" << endl;
	  return 0;
  } 
	  if(vel < 0) {
		  cout << "Velocidade inexistente!" << endl;
		  return 0;
	  } else {
		  int tempo = dist / vel;
		  float gasprice = 5.2;
		  int gasused = dist / gas;
		  int totalgas = gasprice * gasused;
		  cout << "Você percorreu " << dist << " km, há " << vel << " km/h constantes. Você usou " << gasused << " litros de gasolina que custaram " << totalgas << " R$. Sua viagem durou " << tempo << " hora(s)!" << endl;
	  }
	  }else if(car == 6) {
	  float gas = 6.0;
	  if(dist < 0) {
	  cout << "Distância inexistente" << endl;
	  return 0;
  } 
	  if(vel < 0) {
		  cout << "Velocidade inexistente!" << endl;
		  return 0;
	  } else {
		  int tempo = dist / vel;
		  float gasprice = 5.2;
		  int gasused = dist / gas;
		  int totalgas = gasprice * gasused;
		  cout << "Você percorreu " << dist << " km, há " << vel << " km/h constantes. Você usou " << gasused << " litros de gasolina que custaram " << totalgas << " R$. Sua viagem durou " << tempo << " hora(s)!" << endl;
	  }
	  }else if(car == 7) {
	  float gas = 7.5;
	  if(dist < 0) {
	  cout << "Distância inexistente" << endl;
	  return 0;
  } 
	  if(vel < 0) {
		  cout << "Velocidade inexistente!" << endl;
		  return 0;
	  } else {
		  int tempo = dist / vel;
		  float gasprice = 5.2;
		  int gasused = dist / gas;
		  int totalgas = gasprice * gasused;
		  cout << "Você percorreu " << dist << " km, há " << vel << " km/h constantes. Você usou " << gasused << " litros de gasolina que custaram " << totalgas << " R$. Sua viagem durou " << tempo << " hora(s)!" << endl;
	  }
	  }else if(car == 8) {
	  float gas = 7.4;
	  if(dist < 0) {
	  cout << "Distância inexistente" << endl;
	  return 0;
  } 
	  if(vel < 0) {
		  cout << "Velocidade inexistente!" << endl;
		  return 0;
	  } else {
		  int tempo = dist / vel;
		  float gasprice = 5.2;
		  int gasused = dist / gas;
		  int totalgas = gasprice * gasused;
		  cout << "Você percorreu " << dist << " km, há " << vel << " km/h constantes. Você usou " << gasused << " litros de gasolina que custaram " << totalgas << " R$. Sua viagem durou " << tempo << " hora(s)!" << endl;
	  }
	  }else if(car == 9) {
	  float gas = 7.9;
	  if(dist < 0) {
	  cout << "Distância inexistente" << endl;
	  return 0;
  } 
	  if(vel < 0) {
		  cout << "Velocidade inexistente!" << endl;
		  return 0;
	  } else {
		  int tempo = dist / vel;
		  float gasprice = 5.2;
		  int gasused = dist / gas;
		  int totalgas = gasprice * gasused;
		  cout << "Você percorreu " << dist << " km, há " << vel << " km/h constantes. Você usou " << gasused << " litros de gasolina que custaram " << totalgas << " R$. Sua viagem durou " << tempo << " hora(s)!" << endl;
	  }
	  }else if(car == 10) {
	  float gas = 7.1;
	  if(dist < 0) {
	  cout << "Distância inexistente" << endl;
	  return 0;
  } 
	  if(vel < 0) {
		  cout << "Velocidade inexistente!" << endl;
		  return 0;
	  } else {
		  int tempo = dist / vel;
		  float gasprice = 5.2;
		  int gasused = dist / gas;
		  int totalgas = gasprice * gasused;
		  cout << "Você percorreu " << dist << " km, há " << vel << " km/h constantes. Você usou " << gasused << " litros de gasolina que custaram " << totalgas << " R$. Sua viagem durou " << tempo << " hora(s)!" << endl;
	  }
	  }else {
	  cout << "Carro não encontrado" << endl;
	  return 0;
  }
	  }

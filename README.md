<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174749932-8598a1dd-fd81-49a6-b7f2-65e17fd7ada2.png" />
</p>
<h1 align="center">
   My_RPG
</h1>

---

## Motivation : 

Le **My_RPG** est un des trois grands projets de fin d'année à Epitech, avec le *42sh* et le *corewar*. C'est l'un des projets les plus libres de l'année et le but est donc de créer un RPG. Ce projet se réalise en groupe de 4 et doit être fait en utilisant la CSFML.
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174751319-b989d23b-bf0a-4ad7-9530-b9582537278c.png"/>
</p>

---

## Description :

Lors de la réalisation du **My_RPG**, il est demandé d'avoir certaine caractéristiques sur le jeu : 
- Le joueur doit avoir des statistiques et il doit être possible de les visualiser à l'aide d'un menu
- Un système de combat doit être implémenté, le résultat du combat doit dépendre des statistiques du joueur et de son adversaire
- Il devrait y avoir des PNJs dans le jeu
- Un système de quête, avec au moins une quête, doit être mis en place
- Le joueur doit avoir un inventaire dans lequel des objets doivent pouvoir être rangé
- Le joueur doit pouvoir gagner de l'expérience avec les combas qu'il mène
- Avec assez d'expérience, le joueur doit pouvoir monter de niveau

---

## Fonctions Autorisées : 

- Toutes les fonctions de la CSFML
- Toutes les fonctions de la librairie Math
- malloc, free, memset, (s)rand, getline, (f)open, (f)read, (f)close, (f)write, opendir, readdir, closedir

---

## Installer & Lancer le Projet :

Ouvrez un terminal et dirigez vous ou vous souhaitez que le projet soit installé, puis exécutez les commandes suivantes : 
```bash
$ git clone git@github.com:DoctypeHonoo/my_rpg.git
$ cd my_rpg
$ make
```
Le binaire se trouvera alors à la racine du projet, et il vous suffira de le lancer comme ceci : 
```bash
$ ./my_rpg
```
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174756029-b3c80e79-a26a-419f-ad66-f43cd7f27ba9.png">
</p>

---

## Le Jeu : 

Le jeu que nous avons réalisé est un Pokemon like. Lors du lancement du binaire vous disposez d'un menu et il vous suffit de cliquer sur le bouton *Play* pour lancer, ou *Quit* pour quitter.
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174756708-5995d786-2970-47d9-8b4a-56cc003b2040.png">
</p>
Une fois le jeu lancé, le rendu graphique donne ceci : 
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174758130-cac31698-199f-4cc1-b1c7-94c66773131e.png">
</p>
Le jeu possède un système de collision totalement fonctionnel avec le décor et possède aussi un système de combat. Le premier se déroule dans la maison et haut à gauche de l'écran, quand au deuxième, le combat du boss, se déroule dans la grotte au milieu à droite.
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174759264-2d0758bb-c3dd-4a6e-a08e-9900e104f382.png">
</p>
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174759971-90c6c6dc-6231-4663-8927-0df57ebc7ca0.png">
</p>

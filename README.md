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
$ git clone git@github.com:DoctypeHonoo/Minishell2.git
$ cd Minishell2
$ make
```
Le binaire se trouvera alors à la racine du projet, et il vous suffira de le lancer comme ceci : 
```bash
$ ./mysh
```
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174324257-643359eb-7f57-478c-85c6-128e540f568f.png">
</p>

---

## Comment l'utiliser ? : 

Le terminal Minishell2 s'utilise comme tout autre terminal, il vous est possible d'utiliser n'importe quel binaire interne, tel que *ls*, *cat*, *grep*, et bien d'autre, mais aussi les fonctions builtins, tel que *cd*, *setenv*, *unsetenv* et *env*. De plus, mon minishell2 dispose des séparateurs "**;**" et permet donc d'exécuter plusieurs commande sur une même ligne. Malheureusement il ne possède pas encore les fonctionnalités des pipes et des redirections. Pour finir mon Minishell2 permet aussi d'exécuter n'importe quel autre binaire se trouvant sur le pc, et indique aussi les Segmentation Faults.

<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174324680-877675c7-df21-46e5-bc8a-01379c644ab8.png">
</p>

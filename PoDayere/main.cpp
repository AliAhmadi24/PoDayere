#include <fstream>
#include <graphics.h>
#include <iostream>
#include <math.h>
using namespace std;
ifstream fin ("shoamr.txt");
fstream fin2 ("bestskeyt.txt");
int r_po = 3, r_shakhak = 0, r_cheshm = 0, r_shirt = 12, modelshirt = 2, home = 1, r_divar = 3, r_panjere = 6, r_saghf = 12;
bool shakhak = true, shirt = true;
void setf (int);
void po (int, int);
void po_size2 (int, int);
void po_l (int, int);
void po_r (int, int);
void pak_po (int, int);
void pak_po_l (int, int);
void pak_po_r (int, int);
void start ();
void hayat ();
void shekl ();
void skeyt ();
void sheklskeyt (int, int);
void pak_sheklskeyt (int, int);
void po_in_the_house ();
void sheklhouse ();
void shop ();
void shop_lebas ();
void shekl_shop ();
void flesh (int, int);
void shekl_rang_sade ();
void shop_shakhak ();
void shop_eye ();
void shop_po_rang ();
void house_shop ();
void smallhouse (int, int);
void shekl_shop_house ();
void shop_roof ();
void shop_wall ();
void shop_window ();
void otagh_game ();
void shekl_otagh_game ();
void game_xo ();
void game_memory ();
int main ()
{
  initwindow (900, 700);
  srand (time (NULL));
  start ();
  while (!kbhit () || 0 == 0)
    {
      if (home == 1)
        hayat ();
      else if (home == 2)
        skeyt ();
      else if (home == 3)
        po_in_the_house ();
    }
  return 0;
}
void
setf (int r)
{
  setcolor (r);
  setfillstyle (1, r);
}
void
po (int x, int y)
{
  if (shakhak == true)
    {
      setf (r_shakhak);
      line (x, y, x + 28, y - 56);
      line (x, y, x - 28, y - 56);
      line (x + 1, y, x + 29, y - 56);
      line (x - 1, y, x - 29, y - 56);
    }
  setf (r_po);
  fillellipse (x, y, 35, 35);
  if (shirt == true)
    {
      if (modelshirt == 1) /// sade
        {
          setf (r_shirt);
          arc (x, y, 190, 350, 35);
          line (x - 34, y + 5, x - 5, y + 5);
          line (x + 34, y + 5, x + 5, y + 5);
          line (x, y + 12, x - 6, y + 5);
          line (x, y + 12, x + 6, y + 5);
          floodfill (x, y + 15, r_shirt);
        }
      else if (modelshirt == 2) /// indiana
        {
          setf (6);
          arc (x, y, 45, 135, 35);
          line (x - 39, y - 25, x + 39, y - 25);
          line (x - 39, y - 26, x + 39, y - 26);
          floodfill (x, y - 27, 6);
          setf (COLOR (196, 182, 138));
          arc (x, y, 190, 350, 35);
          line (x - 34, y + 5, x - 5, y + 5);
          line (x + 34, y + 5, x + 5, y + 5);
          line (x, y + 12, x - 6, y + 5);
          line (x, y + 12, x + 6, y + 5);
          floodfill (x, y + 15, COLOR (196, 182, 138));
          setf (COLOR (149, 131, 74));
          line (x, y + 12, x, y + 35);
          line (x - 1, y + 13, x - 1, y + 35);
          line (x + 1, y + 13, x + 1, y + 35);
          fillellipse (x + 5, y + 17, 2, 2);
          fillellipse (x + 5, y + 24, 2, 2);
          fillellipse (x + 5, y + 31, 2, 2);
        }
      else if (modelshirt == 3) /// sport
        {
          setf (COLOR (255, 255, 181));
          line (x - 34, y + 4, x - 5, y + 4);
          line (x + 34, y + 4, x + 5, y + 4);
          setf (COLOR (0, 128, 255));
          arc (x, y, 190, 350, 35);
          line (x - 34, y + 5, x - 5, y + 5);
          line (x + 34, y + 5, x + 5, y + 5);
          line (x, y + 12, x - 6, y + 5);
          line (x, y + 12, x + 6, y + 5);
          setf (COLOR (0, 128, 255));
          arc (x, y, 190, 350, 34);
          line (x - 34, y + 6, x - 5, y + 6);
          line (x + 34, y + 6, x + 5, y + 6);
          line (x, y + 13, x - 6, y + 6);
          line (x, y + 13, x + 6, y + 6);
          setf (11);
          floodfill (x, y + 15, COLOR (0, 128, 255));
          setf (COLOR (0, 128, 255));
          fillellipse (x, y + 17, 2, 2);
          fillellipse (x, y + 24, 2, 2);
          fillellipse (x, y + 31, 2, 2);
          bar (x + 9, y + 13, x + 19, y + 23);
          setfillstyle (1, 15);
          bar (x + 11, y + 15, x + 17, y + 21);
        }
      else if (modelshirt == 4) /// kot o shalvar
        {
          setf (15);
          arc (x, y, 190, 350, 35);
          line (x - 34, y + 5, x - 5, y + 5);
          line (x + 34, y + 5, x + 5, y + 5);
          line (x, y + 10, x - 6, y + 5);
          line (x, y + 10, x + 6, y + 5);
          arc (x, y, 190, 350, 34);
          line (x - 34, y + 6, x - 5, y + 6);
          line (x + 34, y + 6, x + 5, y + 6);
          line (x, y + 10, x - 6, y + 6);
          line (x, y + 10, x + 6, y + 6);
          setf (15);
          floodfill (x, y + 15, 15);
          setf (0);
          arc (x, y, 190, 350, 35);
          line (x - 34, y + 5, x - 6, y + 5);
          line (x + 34, y + 5, x + 6, y + 5);
          line (x, y + 22, x - 7, y + 5);
          line (x, y + 22, x + 7, y + 5);
          floodfill (x, y + 25, 0);
        }
    }
  setf (15);
  fillellipse (x - 11, y - 11, 5, 5);
  fillellipse (x + 11, y - 11, 5, 5);
  setf (r_cheshm);
  fillellipse (x - 11, y - 11, 2, 2);
  fillellipse (x + 11, y - 11, 2, 2);
}
void
po_size2 (int x, int y)
{
  if (shakhak == true)
    {
      setf (r_shakhak);
      line (x, y, x + 140, y - 280);
      line (x, y, x - 140, y - 280);
      line (x + 1, y, x + 141, y - 280);
      line (x - 1, y, x - 141, y - 280);
      line (x + 2, y, x + 142, y - 280);
      line (x - 2, y, x - 142, y - 280);
    }
  setf (r_po);
  fillellipse (x, y, 175, 175);
  if (shirt == true)
    {
      if (modelshirt == 1)
        {
          setf (r_shirt);
          arc (x, y, 187, 353, 175);
          line (x - 174, y + 25, x - 30 + 1, y + 25);
          line (x + 174, y + 25, x + 30 - 1, y + 25);
          line (x, y + 60, x - 30, y + 25);
          line (x, y + 60, x + 30, y + 25);
          floodfill (x, y + 75, r_shirt);
        }
      else if (modelshirt == 2)
        {
          setf (6);
          arc (x, y, 45, 135, 175);
          line (x - 195, y - 125, x + 195, y - 125);
          line (x - 195, y - 126, x + 195, y - 126);
          floodfill (x, y - 140, 6);
          setf (COLOR (196, 182, 138));
          arc (x, y, 188, 352, 175);
          line (x - 172, y + 25, x - 30 + 1, y + 25);
          line (x + 171, y + 25, x + 30 - 1, y + 25);
          line (x, y + 60, x - 30, y + 25);
          line (x, y + 60, x + 30, y + 25);
          floodfill (x, y + 75, COLOR (196, 182, 138));
          setf (COLOR (149, 131, 74));
          line (x - 7, y + 52, x - 7, y + 175);
          line (x + 7, y + 52, x + 7, y + 175);
          line (x + 7, y + 52, x, y + 61);
          line (x - 7, y + 52, x + 1, y + 61);
          arc (x, y, 267, 273, 175);
          floodfill (x, y + 100, COLOR (149, 131, 74));
          fillellipse (x + 25, y + 85, 10, 10);
          fillellipse (x + 25, y + 120, 10, 10);
          fillellipse (x + 25, y + 155, 10, 10);
        }
      else if (modelshirt == 3)
        {
          setf (COLOR (255, 255, 181));
          line (x - 170, y + 24, x - 25, y + 24);
          line (x + 170, y + 24, x + 26, y + 24);
          line (x - 170, y + 23, x - 25, y + 23);
          line (x + 170, y + 23, x + 26, y + 23);
          line (x - 170, y + 22, x - 25, y + 22);
          line (x + 170, y + 22, x + 26, y + 22);
          setf (COLOR (0, 128, 255));
          arc (x, y, 188, 352, 175);
          line (x - 171, y + 25, x - 26, y + 25);
          line (x + 171, y + 25, x + 26, y + 25);
          line (x, y + 60, x - 30, y + 25);
          line (x, y + 60, x + 30, y + 25);
          setf (COLOR (0, 128, 255));
          arc (x, y, 188, 352, 174);
          line (x - 171, y + 26, x - 26, y + 26);
          line (x + 171, y + 26, x + 26, y + 26);
          line (x, y + 61, x - 30, y + 26);
          line (x, y + 61, x + 30, y + 26);
          line (x, y + 61 - 2, x + 30, y + 26 - 2);
          line (x, y + 61 - 2, x - 30, y + 26 - 2);
          setf (11);
          floodfill (x, y + 105, COLOR (0, 128, 255));
          setf (COLOR (0, 128, 255));
          fillellipse (x, y + 85, 10, 10);
          fillellipse (x, y + 120, 10, 10);
          fillellipse (x, y + 155, 10, 10);
          bar (x + 45, y + 85, x + 90, y + 115);
          setfillstyle (1, 15);
          bar (x + 50, y + 90, x + 85, y + 110);
        }
      else if (modelshirt == 4)
        {
          setf (15);
          arc (x, y, 188, 352, 175);
          line (x - 172, y + 25, x - 27, y + 25);
          line (x + 172, y + 25, x + 27, y + 25);
          line (x, y + 50, x - 30, y + 25);
          line (x, y + 50, x + 30, y + 25);
          setf (15);
          floodfill (x, y + 105, 15);
          setf (0);
          arc (x, y, 188, 352, 175);
          line (x - 172, y + 25, x - 35, y + 25);
          line (x + 172, y + 25, x + 35, y + 25);
          line (x, y + 110, x - 35, y + 25);
          line (x, y + 110, x + 35, y + 25);
          floodfill (x, y + 140, 0);
        }
    }
  setf (15);
  fillellipse (x - 65, y - 55, 20, 20);
  fillellipse (x + 65, y - 55, 20, 20);
  setf (r_cheshm);
  fillellipse (x - 65, y - 55, 10, 10);
  fillellipse (x + 65, y - 55, 10, 10);
}
void
po_r (int x, int y)
{
  if (shakhak == true)
    {
      setf (r_shakhak);
      line (x, y, x, y - 56);
      line (x - 1, y, x - 1, y - 56);
    }
  setf (r_po);
  fillellipse (x, y, 35, 35);
  if (shirt == true)
    {
      if (modelshirt == 1)
        {
          setf (r_shirt);
          arc (x, y, 190, 342, 35);
          line (x - 34, y + 5, x + 27, y + 5);
          line (x + 27, y + 5, x + 34, y + 13);
          floodfill (x, y + 15, r_shirt);
        }
      else if (modelshirt == 2)
        {
          setf (6);
          arc (x, y, 45, 135, 35);
          line (x - 39, y - 25, x + 39, y - 25);
          line (x - 39, y - 26, x + 39, y - 26);
          floodfill (x, y - 27, 6);
          setf (COLOR (196, 182, 138));
          arc (x, y, 190, 342, 35);
          line (x - 34, y + 5, x + 27, y + 5);
          line (x + 27, y + 5, x + 34, y + 13);
          floodfill (x, y + 15, COLOR (196, 182, 138));
          setf (COLOR (149, 131, 74));
          arc (x, y, 300, 342, 35);
          arc (x, y, 300, 342, 34);
          arc (x, y, 300, 342, 33);
          for (int i = 0; i <= 22; i++)
            {
              arc (x, y, 300, 310 + i, 34);
            }
        }
      else if (modelshirt == 3)
        {
          setf (COLOR (255, 255, 181));
          line (x - 34, y + 4, x + 27, y + 4);
          setf (COLOR (0, 128, 255));
          arc (x, y, 190, 342, 35);
          arc (x, y, 190, 342, 34);
          line (x - 34, y + 5, x + 27, y + 5);
          line (x + 27, y + 5, x + 33, y + 13);
          line (x - 34, y + 6, x + 27, y + 6);
          line (x + 27, y + 6, x + 33, y + 14);
          setf (11);
          floodfill (x, y + 10, COLOR (0, 128, 255));
          setf (COLOR (0, 128, 255));
          fillellipse (x + 27, y + 17, 2, 2);
          fillellipse (x + 21, y + 23, 2, 2);
          fillellipse (x + 13, y + 28, 2, 2);
        }
      else if (modelshirt == 4)
        {
          setf (15);
          arc (x, y, 190, 342, 35);
          line (x - 34, y + 5, x + 27, y + 5);
          line (x + 27, y + 5, x + 33, y + 10);
          floodfill (x, y + 10, 15);
          setf (0);
          arc (x, y, 190, 335, 35);
          line (x - 34, y + 5, x + 24, y + 5);
          line (x + 24, y + 5, x + 31, y + 17);
          floodfill (x, y + 25, 0);
        }
    }
  setf (15);
  fillellipse (x + 11, y - 11, 5, 5);
  setf (r_cheshm);
  fillellipse (x + 11, y - 11, 2, 2);
}
void
po_l (int x, int y)
{
  if (shakhak == true)
    {
      setf (r_shakhak);
      line (x, y, x, y - 56);
      line (x - 1, y, x - 1, y - 56);
    }
  setf (r_po);
  fillellipse (x, y, 35, 35);
  if (shirt == true)
    {
      if (modelshirt == 1)
        {
          setf (r_shirt);
          arc (x, y, 198, 350, 35);
          line (x + 34, y + 5, x - 27, y + 5);
          line (x - 27, y + 5, x - 34, y + 13);
          floodfill (x, y + 15, r_shirt);
        }
      else if (modelshirt == 2)
        {
          setf (6);
          arc (x, y, 45, 135, 35);
          line (x - 39, y - 25, x + 39, y - 25);
          line (x - 39, y - 26, x + 39, y - 26);
          floodfill (x, y - 27, 6);
          setf (COLOR (196, 182, 138));
          arc (x, y, 198, 350, 35);
          line (x + 34, y + 5, x - 27, y + 5);
          line (x - 27, y + 5, x - 34, y + 13);
          floodfill (x, y + 15, COLOR (196, 182, 138));
          setf (COLOR (149, 131, 74));
          arc (x, y, 198, 250, 35);
          arc (x, y, 198, 250, 34);
          arc (x, y, 198, 250, 33);
          fillellipse (x - 24, y + 13, 2, 2);
          fillellipse (x - 18, y + 20, 2, 2);
          fillellipse (x - 11, y + 27 - 1, 2, 2);
        }
      else if (modelshirt == 3)
        {
          setf (COLOR (255, 255, 181));
          line (x + 34, y + 4, x - 27, y + 4);
          setf (COLOR (0, 128, 255));
          arc (x, y, 198, 350, 35);
          arc (x, y, 198, 350, 34);
          line (x + 34, y + 5, x - 27, y + 5);
          line (x - 27, y + 5, x - 33, y + 13);
          line (x + 34, y + 6, x - 27, y + 6);
          line (x - 27, y + 6, x - 33, y + 14);
          setf (11);
          floodfill (x, y + 10, COLOR (0, 128, 255));
          setf (COLOR (0, 128, 255));
          fillellipse (x - 27, y + 17, 2, 2);
          fillellipse (x - 21, y + 23, 2, 2);
          fillellipse (x - 13, y + 28, 2, 2);
          bar (x - 9, y + 11, x - 19, y + 21);
          setfillstyle (1, 15);
          bar (x - 11, y + 13, x - 17, y + 19);
        }
      else if (modelshirt == 4)
        {
          setf (15);
          arc (x, y, 198, 350, 35);
          line (x + 34, y + 5, x - 27, y + 5);
          line (x - 27, y + 5, x - 33, y + 10);
          floodfill (x, y + 10, 15);
          setf (0);
          arc (x, y, 210, 350, 35);
          line (x + 34, y + 5, x - 24, y + 5);
          line (x - 24, y + 5, x - 31, y + 17);
          floodfill (x, y + 25, 0);
        }
    }
  setf (15);
  fillellipse (x - 11, y - 11, 5, 5);
  setf (r_cheshm);
  fillellipse (x - 11, y - 11, 2, 2);
}
void
pak_po (int x, int y)
{
  setf (11);
  if (shakhak == true)
    {
      line (x, y, x + 28, y - 56);
      line (x, y, x - 28, y - 56);
      line (x + 1, y, x + 29, y - 56);
      line (x - 1, y, x - 29, y - 56);
    }
  fillellipse (x, y, 36, 35);
  if (shirt == true)
    {
      if (modelshirt == 2)
        {
          arc (x, y, 45, 135, 35);
          line (x - 39, y - 25, x + 39, y - 25);
          line (x - 39, y - 26, x + 39, y - 26);
          floodfill (x, y - 27, 11);
        }
    }
}
void
pak_po_l (int x, int y)
{
  setf (11);
  if (shakhak == true)
    {
      line (x, y, x, y - 56);
      line (x - 1, y, x - 1, y - 56);
    }
  fillellipse (x, y, 36, 35);
  if (shirt == true)
    {
      if (modelshirt == 2)
        {
          arc (x, y, 45, 135, 35);
          line (x - 39, y - 25, x + 39, y - 25);
          line (x - 39, y - 26, x + 39, y - 26);
          floodfill (x, y - 27, 11);
        }
    }
}
void
pak_po_r (int x, int y)
{
  setf (11);
  if (shakhak == true)
    {
      line (x, y, x, y - 56);
      line (x - 1, y, x - 1, y - 56);
    }
  fillellipse (x, y, 36, 35);
  if (shirt == true)
    {
      if (modelshirt == 2)
        {
          arc (x, y, 45, 135, 35);
          line (x - 39, y - 25, x + 39, y - 25);
          line (x - 39, y - 26, x + 39, y - 26);
          floodfill (x, y - 27, 11);
        }
    }
}
void
start ()
{
  int x = 450, y = 400, start = 33, start2;
  setf (12);
  line (50, 0, 840, 700);
  line (840, 0, 50, 700);
  floodfill (800, 350, 12);
  floodfill (200, 350, 12);
  setf (3);
  floodfill (450, 50, 12);
  setf (9);
  line (50, 0, 450, 200);
  line (840, 0, 450 - 1, 200);
  floodfill (450, 50, 9);
  setf (14);
  floodfill (450, 600, 12);
  setf (1);
  line (50, 700, 450, 550);
  line (840, 700, 450 - 1, 550);
  floodfill (450, 670, 1);
  setf (11);
  bar (0, 0, 50, 700);
  bar (900, 0, 840, 700);
  setf (10);
  line (840, 0, 642, 525);
  line (840, 0, 445, 350);
  line (445, 350, 642, 525);
  floodfill (460, 350, 10);
  line (258, 516, 60 - 10, 0);
  line (60 - 10, 0, 445, 350);
  line (445, 350, 258, 516);
  floodfill (260, 350, 10);
  setf (1);
  rectangle (300, 200, 600, 500);
  rectangle (301, 200 + 1, 600 - 1, 500 - 1);
  rectangle (300 - 1, 200 - 1, 600 + 1, 500 + 1);
  setf (13);
  floodfill (450, 350, 1);
  setf (11);
  settextstyle (2, 3, 8);
  outtextxy (557, 300, "WELCOM T0 ");
  outtextxy (550 - 3, 300 + 30, "PODAYERE");
  setf (0);
  line (x, y, x + 28, y - 56);
  line (x, y, x - 28, y - 56);
  line (x + 1, y, x + 29, y - 56);
  line (x - 1, y, x - 29, y - 56);
  setf (11);
  fillellipse (x, y, 35, 35);
  setf (15);
  fillellipse (x - 11, y - 11, 5, 5);
  fillellipse (x + 11, y - 11, 5, 5);
  setf (0);
  fillellipse (x - 11, y - 11, 2, 2);
  fillellipse (x + 11, y - 11, 2, 2);
  setf (12);
  arc (x, y, 190, 350, 35);
  line (x - 34, y + 5, x - 5, y + 5);
  line (x + 34, y + 5, x + 5, y + 5);
  line (x, y + 12, x - 6, y + 5);
  line (x, y + 12, x + 6, y + 5);
  floodfill (x, y + 15, 12);
  setfillstyle (1, 14);
  setcolor (4);
  while (start >= 1)
    {
      bar (10, (start * 20) - 5, 40, ((start + 1) * 20) - 5);
      rectangle (10, (start * 20) - 5, 40, ((start + 1) * 20) - 5);
      bar (850, (start * 20) - 5, 880, ((start + 1) * 20) - 5);
      rectangle (850, (start * 20) - 5, 880, ((start + 1) * 20) - 5);
      start--;
      start2 = rand () % 3;
      if (start2 == 0)
        {
          delay (20);
        }
      else if (start2 == 1)
        delay (80);
      else if (start2 == 2)
        delay (175);
    }
}
void
hayat ()
{
  int x = 150, y = 615, d, z, p, k, xm, ym, delta, delta2;
  char ch;
  setf (11);
  bar (0, 0, 900, 700);
  setf (10);
  bar (0, 650, 900, 700);
  setf (14);
  fillellipse (850, 50, 105, 105);
  shekl ();
  po (x, y);
  while (!kbhit () || 0 == 0)
    {
      if (d > 1000 && d < 1100)
        {
          if (z == 0)
            {
              z = 1;
              p = rand () % 5;
            }
          if (p == 0 || p == 2)
            {
              setf (r_po);
              fillellipse (x - 11, y - 11, 5, 5);
              fillellipse (x + 11, y - 11, 5, 5);
            }
        }
      else if (d > 1100)
        {
          z = 0;
          d = 0;
          setf (15);
          fillellipse (x - 11, y - 11, 5, 5);
          fillellipse (x + 11, y - 11, 5, 5);
          setf (r_cheshm);
          fillellipse (x - 11, y - 11, 2, 2);
          fillellipse (x + 11, y - 11, 2, 2);
        }
      delay (1);
      d++;
      if (ismouseclick (WM_LBUTTONDOWN))
        {
          xm = mousex ();
          ym = mousey ();
          clearmouseclick (WM_LBUTTONDOWN);
          if (ym < 550)
            {
              pak_po (x, y);
              for (int i = 0; i <= 125; i++)
                {
                  po (x, y);
                  if (i % 4 == 0)
                    delay (1);

                  pak_po (x, y);
                  y--;
                }
              for (int i = 0; i <= 125; i++)
                {
                  po (x, y);
                  if (i % 4 == 0)
                    delay (1);

                  pak_po (x, y);
                  y++;
                }
              po (x, y);
              shekl ();
            }
          else if (ym > 550)
            {
              delta = x - xm;
              if (delta < 0)
                delta *= -1;
              delta2 = delta / 160;
              if (delta2 > 0)
                {
                  if (x < xm)
                    {
                      pak_po (x, y);
                      for (int j = 0; j < delta2; j++)
                        {
                          for (int i = 0; i <= 80; i++)
                            {
                              po_r (x, y);
                              if (xm > 695 && xm - x < 160)
                                shekl ();
                              if (i % 4 == 0)
                                delay (1);
                              pak_po_r (x, y);
                              if (xm > 695 && xm - x < 160)
                                shekl ();
                              if (i % 4 == 0)
                                y--;
                              x++;
                            }
                          for (int i = 0; i <= 80; i++)
                            {
                              po_r (x, y);
                              if (xm > 695 && xm - x < 160)
                                shekl ();
                              if (i % 4 == 0)
                                delay (1);
                              pak_po_r (x, y);
                              if (xm > 695 && xm - x < 160)
                                shekl ();
                              if (i % 4 == 0)
                                y++;
                              x++;
                            }
                        }
                      for (int i = 0; i < (delta % 160) / 2; i++)
                        {
                          po_r (x, y);
                          if (xm > 695 && xm - x < 160)
                            shekl ();
                          if (i % 4 == 0)
                            delay (1);
                          pak_po_r (x, y);
                          if (xm > 695 && xm - x < 160)
                            shekl ();
                          if (i % 4 == 0)
                            y--;
                          x++;
                        }
                      for (int i = 0; i < (delta % 160) / 2; i++)
                        {
                          po_r (x, y);
                          if (xm > 695 && xm - x < 160)
                            shekl ();
                          if (i % 4 == 0)
                            delay (1);
                          pak_po_r (x, y);
                          if (xm > 695 && xm - x < 160)
                            shekl ();
                          if (i % 4 == 0)
                            y++;
                          x++;
                        }
                    }
                  else if (x > xm)
                    {
                      pak_po (x, y);
                      for (int j = 0; j < delta2; j++)
                        {
                          for (int i = 0; i <= 80; i++)
                            {
                              po_l (x, y);
                              if (xm < 75 && x - xm < 160)
                                shekl ();
                              if (i % 4 == 0)
                                delay (1);
                              pak_po_l (x, y);
                              if (xm < 75 && x - xm < 160)
                                shekl ();
                              if (i % 4 == 0)
                                y--;
                              x--;
                            }
                          for (int i = 0; i <= 80; i++)
                            {
                              po_l (x, y);
                              if (xm < 75 && x - xm < 160)
                                shekl ();
                              if (i % 4 == 0)
                                delay (1);
                              pak_po_l (x, y);
                              if (xm < 75 && x - xm < 160)
                                shekl ();
                              if (i % 4 == 0)
                                y++;
                              x--;
                            }
                        }
                      for (int i = 0; i < (delta % 160) / 2; i++)
                        {
                          po_l (x, y);
                          if (xm < 75 && x - xm < 160)
                            shekl ();
                          if (i % 4 == 0)
                            delay (1);
                          pak_po_l (x, y);
                          if (xm < 75 && x - xm < 160)
                            shekl ();
                          if (i % 4 == 0)
                            y--;
                          x--;
                        }
                      for (int i = 0; i < (delta % 160) / 2; i++)
                        {
                          po_l (x, y);
                          if (xm < 75 && x - xm < 160)
                            shekl ();
                          if (i % 4 == 0)
                            delay (1);
                          pak_po_l (x, y);
                          if (xm < 75 && x - xm < 160)
                            shekl ();
                          if (i % 4 == 0)
                            y++;
                          x--;
                        }
                    }
                }
              else
                {
                  pak_po (x, y);
                  if (x < xm)
                    {
                      for (int i = 0; i < (delta % 160) / 2; i++)
                        {
                          po_r (x, y);
                          if (xm > 695 && xm - x < 160)
                            shekl ();
                          if (i % 4 == 0)
                            delay (1);
                          pak_po_r (x, y);
                          if (xm > 695 && xm - x < 160)
                            shekl ();
                          if (i % 4 == 0)
                            y--;
                          x++;
                        }
                      for (int i = 0; i < (delta % 160) / 2; i++)
                        {
                          po_r (x, y);
                          if (xm > 695 && xm - x < 160)
                            shekl ();
                          if (i % 4 == 0)
                            delay (1);
                          pak_po_r (x, y);
                          if (xm > 695 && xm - x < 160)
                            shekl ();
                          if (i % 4 == 0)
                            y++;
                          x++;
                        }
                    }
                  else
                    {
                      for (int i = 0; i < (delta % 160) / 2; i++)
                        {
                          po_l (x, y);
                          if (xm < 75 && x - xm < 160)
                            shekl ();
                          if (i % 4 == 0)
                            delay (1);
                          pak_po_l (x, y);
                          if (xm < 75 & x - xm < 160)
                            shekl ();
                          if (i % 4 == 0)
                            y--;
                          x--;
                        }
                      for (int i = 0; i < (delta % 160) / 2; i++)
                        {
                          po_l (x, y);
                          if (xm < 75 & x - xm < 160)
                            shekl ();
                          if (i % 4 == 0)
                            delay (1);
                          pak_po_l (x, y);
                          if (xm < 75 & x - xm < 160)
                            shekl ();
                          if (i % 4 == 0)
                            y++;
                          x--;
                        }
                    }
                }
              if (x > 695)
                {
                  home = 3;
                  break;
                }
              else if (x < 75)
                {
                  home = 2;
                  break;
                }
              else if (x >= 75 && x <= 695)
                po (x, y);
            }
        }
      if (kbhit ())
        {
          ch = getch ();
          if (ch == 'd' || ch == 'D' || ch == 77)
            {
              pak_po (x, y);
              if (755 - x < 160)
                {
                  k = 755 - x;
                  for (int i = 0; i <= k / 2; i++)
                    {
                      po_r (x, y);
                      shekl ();
                      if (i % 4 == 0)
                        delay (1);
                      pak_po_r (x, y);
                      shekl ();
                      if (i % 4 == 0)
                        y--;
                      x++;
                      shekl ();
                    }
                  for (int i = 0; i <= k / 2; i++)
                    {
                      po_r (x, y);
                      shekl ();
                      if (i % 4 == 0)
                        delay (1);
                      pak_po_r (x, y);
                      shekl ();
                      if (i % 4 == 0)
                        y++;
                      x++;
                      shekl ();
                    }
                  home = 3;
                  break;
                }
              else
                {
                  for (int i = 0; i <= 80; i++)
                    {
                      po_r (x, y);
                      if (i % 4 == 0)
                        delay (1);
                      pak_po_r (x, y);
                      if (i % 4 == 0)
                        y--;
                      x++;
                    }
                  for (int i = 0; i <= 80; i++)
                    {
                      po_r (x, y);
                      if (i % 4 == 0)
                        delay (1);
                      pak_po_r (x, y);
                      if (i % 4 == 0)
                        y++;
                      x++;
                    }
                }
            }
          else if (ch == 'a' || ch == 'A' || ch == 75)
            {
              pak_po (x, y);
              if (x < 160)
                {
                  k = x;
                  for (int i = 0; i <= k / 2; i++)
                    {
                      po_l (x, y);
                      shekl ();
                      if (i % 4 == 0)
                        delay (1);
                      pak_po_l (x, y);
                      shekl ();
                      if (i % 4 == 0)
                        y--;
                      x--;
                      shekl ();
                    }
                  for (int i = 0; i <= k / 2; i++)
                    {
                      po_l (x, y);
                      shekl ();
                      if (i % 4 == 0)
                        delay (1);
                      pak_po_l (x, y);
                      shekl ();
                      if (i % 4 == 0)
                        y++;
                      x--;
                      shekl ();
                    }
                  home = 2;
                  break;
                }
              else
                {
                  for (int i = 0; i <= 80; i++)
                    {
                      po_l (x, y);
                      if (i % 4 == 0)
                        delay (1);
                      pak_po_l (x, y);
                      if (i % 4 == 0)
                        y--;
                      x--;
                    }
                  for (int i = 0; i <= 80; i++)
                    {
                      po_l (x, y);
                      if (i % 4 == 0)
                        delay (1);
                      pak_po_l (x, y);
                      if (i % 4 == 0)
                        y++;
                      x--;
                    }
                }
            }
          else if (ch == ' ' || ch == 72 || ch == 'w' || ch == 'W')
            {
              pak_po (x, y);
              for (int i = 0; i <= 125; i++)
                {
                  po (x, y);
                  if (i % 4 == 0)
                    delay (1);
                  pak_po (x, y);
                  y--;
                }
              for (int i = 0; i <= 125; i++)
                {
                  po (x, y);
                  if (i % 4 == 0)
                    delay (1);
                  pak_po (x, y);
                  y++;
                }
            }
          po (x, y);
          shekl ();
        }
    }
}
void
shekl () /// shekle khone
{
  setf (r_saghf);
  line (900, 650, 750, 650);
  line (900, 650, 900, 250);
  line (900, 250, 750, 400);
  line (750, 400, 750, 650);
  floodfill (850, 600, r_saghf);
  setf (r_divar);
  bar (750, 651, 900, 400);
  setf (r_panjere);
  bar (800 - 20, 450, 850 + 20, 500);
  setf (15);
  bar (800 - 15, 400 + 55, 850 + 15, 450 + 45);
  setf (r_panjere);
  bar (823, 450, 827, 500);
  bar (775 + 10, 473, 850 + 20, 477);
  setf (r_panjere);
  bar (750, 520, 700, 650);
  setf (7);
  fillellipse (700, 600 - 16, 5, 65);
  setf (COLOR (220, 204, 141));
  bar (0, 500, 70, 650);
  setf (COLOR (204, 181, 87));
  bar (55, 490, 75, 650);
}
void
skeyt ()
{
  char ch;
  int x = 120, y = 349, xm = 0, ym = 420, f = 300, xm2 = 600, ym2 = 300, f2 = 300, k, l = 0, v = 10, record = 0, xg, yg;
  setf (11);
  bar (0, 0, 900, 700);
  while (!kbhit () || 0 == 0, l == 0)
    {
      sheklskeyt (x, y);
      if (ismouseclick (WM_LBUTTONDOWN))
        {
          clearmouseclick (WM_LBUTTONDOWN);
          if (getpixel (x - 55, y + 71) == 10 || getpixel (x + 55, y + 71) == 10)
            {
              record++;
              for (int i = 0; i <= 220; i++)
                {
                  if (kbhit ())
                    {
                      ch = getch ();
                      if (ch == 'v' || ch == 'V')
                        {
                          if (v > 2)
                            ;
                          v--;
                        }
                    }
                  if (xm + f + 1 < 0)
                    {
                      xm = 900;
                      ym = (rand () % 30) * 10 + 200;
                      k = ym2 - ym;
                      if (k < 0)
                        k = -k;
                      while (k > 70)
                        {
                          ym = (rand () % 30) * 10 + 200;
                          k = ym2 - ym;
                          if (k < 0)
                            k = -k;
                        }
                      ym = 700 - ym;
                    }
                  if (xm2 + f2 + 1 < 0)
                    {
                      xm2 = 900;
                      ym2 = (rand () % 30) * 10 + 200;
                      k = ym2 - ym;
                      if (k < 0)
                        k = -k;
                      while (k > 70)
                        {
                          ym2 = (rand () % 30) * 10 + 200;
                          k = ym2 - ym;
                          if (k < 0)
                            k = -k;
                        }
                      ym2 = 700 - ym2;
                    }
                  sheklskeyt (x, y);
                  setf (6);
                  bar (xm, ym + 20, xm + f, 700);
                  bar (xm2, ym2 + 20, xm2 + f2, 700);
                  setf (10);
                  bar (xm, ym, xm + f, ym + 20);
                  bar (xm2, ym2, xm2 + f2, ym2 + 20);
                  delay (v);
                  setf (11);
                  line (xm + f + 1, ym, xm + f + 1, 700);
                  line (xm2 + f2 + 1, ym2, xm2 + f2 + 1, 700);
                  xm--;
                  xm2--;
                  pak_sheklskeyt (x, y);
                  if (kbhit ())
                    {
                      ch = getch ();
                      if (ch == 'v' || ch == 'V')
                        {
                          if (v > 2)
                            ;
                          v--;
                        }
                    }
                  if (getpixel (x + 96, y + 45) == 6 || getpixel (x + 96, y + 45) == 10)
                    x--;
                  y--;
                }
              while (getpixel (x - 55, y + 71) != 10 && getpixel (x + 55, y + 71) != 10)
                {
                  if (kbhit ())
                    {
                      ch = getch ();
                      if (ch == 'v' || ch == 'V')
                        {
                          if (v > 2)
                            ;
                          v--;
                        }
                    }
                  if (xm + f + 1 < 0)
                    {
                      xm = 900;
                      ym = (rand () % 30) * 10 + 200;
                      k = ym2 - ym;
                      if (k < 0)
                        k = -k;
                      while (k > 70)
                        {
                          ym = (rand () % 30) * 10 + 200;
                          k = ym2 - ym;
                          if (k < 0)
                            k = -k;
                        }
                      ym = 700 - ym;
                    }
                  if (xm2 + f2 + 1 < 0)
                    {
                      xm2 = 900;
                      ym2 = (rand () % 30) * 10 + 200;
                      k = ym2 - ym;
                      if (k < 0)
                        k = -k;
                      while (k > 70)
                        {
                          ym2 = (rand () % 30) * 10 + 200;
                          k = ym2 - ym;
                          if (k < 0)
                            k = -k;
                        }
                      ym2 = 700 - ym2;
                    }

                  sheklskeyt (x, y);
                  if (y > 700)
                    {
                      setf (14);
                      bar (0, 0, 900, 700);
                      setf (4);
                      settextstyle (2, 3, 8);
                      outtextxy (450, 350, "GAME OVER");
                      home = 1;
                      l = 5;
                      line (0, 0, 900, 0);
                      delay (2000);
                      break;
                    }
                  setf (6);
                  bar (xm, ym + 20, xm + f, 700);
                  bar (xm2, ym2 + 20, xm2 + f2, 700);
                  setf (10);
                  bar (xm, ym, xm + f, ym + 20);
                  bar (xm2, ym2, xm2 + f2, ym2 + 20);
                  delay (v);
                  setf (11);
                  line (xm + f + 1, ym, xm + f + 1, 700);
                  line (xm2 + f2 + 1, ym2, xm2 + f2 + 1, 700);
                  pak_sheklskeyt (x, y);
                  xm--;
                  xm2--;
                  if (kbhit ())
                    {
                      ch = getch ();
                      if (ch == 'v' || ch == 'V')
                        {
                          if (v > 2)
                            ;
                          v--;
                        }
                    }
                  if (getpixel (x + 96, y + 45) == 6 || getpixel (x + 96, y + 45) == 10)
                    x--;
                  if (getpixel (x + 55, y + 71) == 10 || getpixel (x - 55, y + 71) == 10)
                    break;
                  y++;
                  if (v > 2)
                    v--;
                }
            }
        }
      if (kbhit ())
        {
          ch = getch ();
          if (ch == 'v' || ch == 'V')
            {
              if (v > 2)
                ;
              v--;
            }
          if (getpixel (x + 55, y + 71) == 10 || getpixel (x - 55, y + 71) == 10)
            if (ch == ' ' || ch == 72 || ch == 'w' || ch == 'W')
              {
                record++;
                for (int i = 0; i <= 220; i++)
                  {
                    if (kbhit ())
                      {
                        ch = getch ();
                        if (ch == 'v' || ch == 'V')
                          {
                            if (v > 2)
                              ;
                            v--;
                          }
                      }
                    if (xm + f + 1 < 0)
                      {
                        xm = 900;
                        ym = (rand () % 30) * 10 + 200;
                        k = ym2 - ym;
                        if (k < 0)
                          k = -k;
                        while (k > 70)
                          {
                            ym = (rand () % 30) * 10 + 200;
                            k = ym2 - ym;
                            if (k < 0)
                              k = -k;
                          }
                        ym = 700 - ym;
                      }
                    if (xm2 + f2 + 1 < 0)
                      {
                        xm2 = 900;
                        ym2 = (rand () % 30) * 10 + 200;
                        k = ym2 - ym;
                        if (k < 0)
                          k = -k;
                        while (k > 70)
                          {
                            ym2 = (rand () % 30) * 10 + 200;
                            k = ym2 - ym;
                            if (k < 0)
                              k = -k;
                          }
                        ym2 = 700 - ym2;
                      }
                    sheklskeyt (x, y);
                    setf (6);
                    bar (xm, ym + 20, xm + f, 700);
                    bar (xm2, ym2 + 20, xm2 + f2, 700);
                    setf (10);
                    bar (xm, ym, xm + f, ym + 20);
                    bar (xm2, ym2, xm2 + f2, ym2 + 20);
                    delay (v);
                    setf (11);
                    line (xm + f + 1, ym, xm + f + 1, 700);
                    line (xm2 + f2 + 1, ym2, xm2 + f2 + 1, 700);
                    xm--;
                    xm2--;
                    pak_sheklskeyt (x, y);
                    if (kbhit ())
                      {
                        ch = getch ();
                        if (ch == 'v' || ch == 'V')
                          {
                            if (v > 2)
                              ;
                            v--;
                          }
                      }
                    if (getpixel (x + 96, y + 45) == 6 || getpixel (x + 96, y + 45) == 10)
                      x--;
                    y--;
                  }
                while (getpixel (x - 55, y + 71) != 10 && getpixel (x + 55, y + 71) != 10)
                  {
                    if (kbhit ())
                      {
                        ch = getch ();
                        if (ch == 'v' || ch == 'V')
                          {
                            if (v > 2)
                              ;
                            v--;
                          }
                      }
                    if (xm + f + 1 < 0)
                      {
                        xm = 900;
                        ym = (rand () % 30) * 10 + 200;
                        k = ym2 - ym;
                        if (k < 0)
                          k = -k;
                        while (k > 70)
                          {
                            ym = (rand () % 30) * 10 + 200;
                            k = ym2 - ym;
                            if (k < 0)
                              k = -k;
                          }
                        ym = 700 - ym;
                      }
                    if (xm2 + f2 + 1 < 0)
                      {
                        xm2 = 900;
                        ym2 = (rand () % 30) * 10 + 200;
                        k = ym2 - ym;
                        if (k < 0)
                          k = -k;
                        while (k > 70)
                          {
                            ym2 = (rand () % 30) * 10 + 200;
                            k = ym2 - ym;
                            if (k < 0)
                              k = -k;
                          }
                        ym2 = 700 - ym2;
                      }

                    sheklskeyt (x, y);
                    if (y > 700)
                      {
                        setf (14);
                        bar (0, 0, 900, 700);
                        setf (4);
                        settextstyle (2, 3, 8);
                        outtextxy (450, 350, "GAME OVER");
                        home = 1;
                        l = 5;
                        line (0, 0, 900, 0);
                        delay (2000);
                        break;
                      }
                    setf (6);
                    bar (xm, ym + 20, xm + f, 700);
                    bar (xm2, ym2 + 20, xm2 + f2, 700);
                    setf (10);
                    bar (xm, ym, xm + f, ym + 20);
                    bar (xm2, ym2, xm2 + f2, ym2 + 20);
                    delay (v);
                    setf (11);
                    line (xm + f + 1, ym, xm + f + 1, 700);
                    line (xm2 + f2 + 1, ym2, xm2 + f2 + 1, 700);
                    pak_sheklskeyt (x, y);
                    xm--;
                    xm2--;
                    if (kbhit ())
                      {
                        ch = getch ();
                        if (ch == 'v' || ch == 'V')
                          {
                            if (v > 2)
                              ;
                            v--;
                          }
                      }
                    if (getpixel (x + 96, y + 45) == 6 || getpixel (x + 96, y + 45) == 10)
                      x--;
                    if (getpixel (x + 55, y + 71) == 10 || getpixel (x - 55, y + 71) == 10)
                      break;
                    y++;
                    if (v > 2)
                      v--;
                  }
              }
        }
      if (y > 700)
        {
          setf (14);
          bar (0, 0, 900, 700);
          setf (4);
          settextstyle (2, 3, 8);
          outtextxy (450, 350, "GAME OVER");
          home = 1;
          l = 5;
          delay (2000);
          break;
        }
      if (xm + f + 1 < 0)
        {
          xm = 900;
          ym = (rand () % 30) * 10 + 200;
          k = ym2 - ym;
          if (k < 0)
            k = -k;
          while (k > 70)
            {
              ym = (rand () % 30) * 10 + 200;
              k = ym2 - ym;
              if (k < 0)
                k = -k;
            }
          ym = 700 - ym;
        }
      if (xm2 + f2 + 1 < 0)
        {
          xm2 = 900;
          ym2 = (rand () % 30) * 10 + 200;
          k = ym2 - ym;
          if (k < 0)
            k = -k;
          while (k > 70)
            {
              ym2 = (rand () % 30) * 10 + 200;
              k = ym2 - ym;
              if (k < 0)
                k = -k;
            }
          ym2 = 700 - ym2;
        }
      setf (6);
      bar (xm, ym + 20, xm + f, 700);
      bar (xm2, ym2 + 20, xm2 + f2, 700);
      setf (10);
      bar (xm, ym, xm + f, ym + 20);
      bar (xm2, ym2, xm2 + f2, ym2 + 20);
      delay (v);
      setf (11);
      line (xm + f + 1, ym, xm + f + 1, 700);
      line (xm2 + f2 + 1, ym2, xm2 + f2 + 1, 700);
      if (getpixel (x + 96, y + 45) == 6 || getpixel (x + 96, y + 45) == 10)
        x--;
      if (getpixel (x + 55, y + 71) != 10 && getpixel (x - 55, y + 71) != 10)
        {
          pak_sheklskeyt (x, y);
          y++;
        }
      xm--;
      xm2--;
      if (y > 700)
        {
          setf (11);
          setf (14);
          bar (0, 0, 900, 700);
          setf (4);
          settextstyle (2, 3, 8);
          outtextxy (450, 350, "GAME OVER");
          home = 1;
          l = 5;
          line (0, 0, 900, 0);
          delay (2000);
          break;
        }
      if (kbhit ())
        {
          ch = getch ();
          if (ch == 'v' || ch == 'V')
            {
              if (v > 2)
                ;
              v--;
            }
          if (getpixel (x + 55, y + 71) == 10 || getpixel (x - 55, y + 71) == 10)
            if (ch == ' ' || ch == 72 || ch == 'w' || ch == 'W')
              {
                record++;
                for (int i = 0; i <= 220; i++)
                  {
                    if (kbhit ())
                      {
                        ch = getch ();
                        if (ch == 'v' || ch == 'V')
                          {
                            if (v > 2)
                              ;
                            v--;
                          }
                      }
                    if (xm + f + 1 < 0)
                      {
                        xm = 900;
                        ym = (rand () % 30) * 10 + 200;
                        k = ym2 - ym;
                        if (k < 0)
                          k = -k;
                        while (k > 70)
                          {
                            ym = (rand () % 30) * 10 + 200;
                            k = ym2 - ym;
                            if (k < 0)
                              k = -k;
                          }
                        ym = 700 - ym;
                      }
                    if (xm2 + f2 + 1 < 0)
                      {
                        xm2 = 900;
                        ym2 = (rand () % 30) * 10 + 200;
                        k = ym2 - ym;
                        if (k < 0)
                          k = -k;
                        while (k > 70)
                          {
                            ym2 = (rand () % 30) * 10 + 200;
                            k = ym2 - ym;
                            if (k < 0)
                              k = -k;
                          }
                        ym2 = 700 - ym2;
                      }

                    sheklskeyt (x, y);
                    setf (6);
                    bar (xm, ym + 20, xm + f, 700);
                    bar (xm2, ym2 + 20, xm2 + f2, 700);
                    setf (10);
                    bar (xm, ym, xm + f, ym + 20);
                    bar (xm2, ym2, xm2 + f2, ym2 + 20);
                    delay (v);
                    setf (11);
                    line (xm + f + 1, ym, xm + f + 1, 700);
                    line (xm2 + f2 + 1, ym2, xm2 + f2 + 1, 700);
                    xm--;
                    xm2--;
                    pak_sheklskeyt (x, y);
                    if (kbhit ())
                      {
                        ch = getch ();
                        if (ch == 'v' || ch == 'V')
                          {
                            if (v > 2)
                              ;
                            v--;
                          }
                      }
                    if (getpixel (x + 96, y + 45) == 6 || getpixel (x + 96, y + 45) == 10)
                      x--;
                    y--;
                  }
                while (getpixel (x - 55, y + 71) != 10 && getpixel (x + 55, y + 71) != 10)
                  {
                    if (kbhit ())
                      {
                        ch = getch ();
                        if (ch == 'v' || ch == 'V')
                          {
                            if (v > 2)
                              ;
                            v--;
                          }
                      }
                    if (xm + f + 1 < 0)
                      {
                        xm = 900;
                        ym = (rand () % 30) * 10 + 200;
                        k = ym2 - ym;
                        if (k < 0)
                          k = -k;
                        while (k > 70)
                          {
                            ym = (rand () % 30) * 10 + 200;
                            k = ym2 - ym;
                            if (k < 0)
                              k = -k;
                          }
                        ym = 700 - ym;
                      }
                    if (xm2 + f2 + 1 < 0)
                      {
                        xm2 = 900;
                        ym2 = (rand () % 30) * 10 + 200;
                        k = ym2 - ym;
                        if (k < 0)
                          k = -k;
                        while (k > 70)
                          {
                            ym2 = (rand () % 30) * 10 + 200;
                            k = ym2 - ym;
                            if (k < 0)
                              k = -k;
                          }
                        ym2 = 700 - ym2;
                      }
                    sheklskeyt (x, y);
                    if (y > 700)
                      {
                        setf (14);
                        bar (0, 0, 900, 700);
                        setf (4);
                        settextstyle (2, 3, 8);
                        outtextxy (450, 350, "GAME OVER");
                        home = 1;
                        l = 5;
                        line (0, 0, 900, 0);
                        delay (2000);
                        break;
                      }
                    setf (6);
                    bar (xm, ym + 20, xm + f, 700);
                    bar (xm2, ym2 + 20, xm2 + f2, 700);
                    setf (10);
                    bar (xm, ym, xm + f, ym + 20);
                    bar (xm2, ym2, xm2 + f2, ym2 + 20);
                    delay (v);
                    setf (11);
                    line (xm + f + 1, ym, xm + f + 1, 700);
                    line (xm2 + f2 + 1, ym2, xm2 + f2 + 1, 700);
                    pak_sheklskeyt (x, y);
                    xm--;
                    xm2--;
                    if (kbhit ())
                      {
                        ch = getch ();
                        if (ch == 'v' || ch == 'V')
                          {
                            if (v > 2)
                              ;
                            v--;
                          }
                      }
                    if (getpixel (x + 96, y + 45) == 6 || getpixel (x + 96, y + 45) == 10)
                      x--;
                    if (getpixel (x + 55, y + 71) == 10 || getpixel (x - 55, y + 71) == 10)
                      break;
                    y++;
                  }
                if (v > 1)
                  v--;
              }
        }
    }
  record--;
  char c[3];
  for (int i = 0; i <= record; i++)
    {
      fin.getline (c, 30);
    }
  setf (1);
  bar (0, 0, 900, 700);
  setf (15);
  outtextxy (450, 350, "your point:");
  outtextxy (490, 350, c);
  setf (15);
  bar (0, 0, 200, 700);
  bar (700, 0, 900, 700);
  delay (1000);
}
void
sheklskeyt (int x, int y)
{
  po_r (x, y);
  setf (14);
  fillellipse (x + 85, y + 45, 10, 10);
  setf (12);
  bar (x - 85, y + 35, x + 85, y + 55);
  circle (x + 85, y + 45, 10);
  line (x - 85, y + 35, x - 35, y + 35);
  line (x - 105, y - 10, x - 85, y + 35);
  line (x - 105, y - 10, x - 35, y + 35);
  line (x - 85, y + 35, x - 110, y + 31);
  line (x - 85, y + 55, x - 110, y + 58);
  line (x - 110, y + 32, x - 110, y + 58);
  setf (14);
  floodfill (x - 80, y + 33, 12);
  floodfill (x - 109, y + 55, 12);
  setf (0);
  fillellipse (x - 55, y + 60, 10, 10);
  fillellipse (x + 55, y + 60, 10, 10);
}
void
pak_sheklskeyt (int x, int y)
{
  pak_po_r (x, y);
  setf (11);
  fillellipse (x + 85, y + 45, 10, 10);
  fillellipse (x, y, 36, 36);
  bar (x - 85, y + 35, x + 85, y + 55);
  circle (x + 85, y + 45, 10);
  line (x - 85, y + 35, x - 35, y + 35);
  line (x - 105, y - 10, x - 85, y + 35);
  line (x - 105, y - 10, x - 35, y + 35);
  line (x - 85, y + 35, x - 110, y + 31);
  line (x - 85, y + 55, x - 110, y + 58);
  line (x - 110, y + 32, x - 110, y + 58);
  floodfill (x - 80, y + 33, 11);
  floodfill (x - 109, y + 55, 11);
  fillellipse (x - 55, y + 60, 10, 10);
  fillellipse (x + 55, y + 60, 10, 10);
}
void
flesh (int x, int y)
{
  setf (COLOR (255, 2, 2));
  line (x - 20, y - 20, x - 50, y + 1);
  line (x - 20, y + 20, x - 50, y - 1);
  line (x - 20, y - 20, x - 20, y + 20);
  floodfill (x - 22, y, COLOR (255, 2, 2));
}
void
po_in_the_house ()
{
  int x = 450, y = 350, xm, ym, r;
  sheklhouse ();
  po_size2 (x, y);
  while (!kbhit () || 0 == 0)
    {
      if (ismouseclick (WM_LBUTTONDOWN))
        {
          xm = mousex ();
          ym = mousey ();
          clearmouseclick (WM_LBUTTONDOWN);
          if (pow ((xm - x), 2) + pow (ym - y, 2) <= 30625)
            {
              for (int i = 0; i < 250; i++)
                {
                  setf (r_po);
                  fillellipse (x - 65, y - 55, 20, 20);
                  fillellipse (x + 65, y - 55, 20, 20);
                  delay (2);
                }
              setf (15);
              fillellipse (x - 65, y - 55, 20, 20);
              fillellipse (x + 65, y - 55, 20, 20);
              setf (r_cheshm);
              fillellipse (x - 65, y - 55, 10, 10);
              fillellipse (x + 65, y - 55, 10, 10);
            }
          else if (xm < 30 && y > 320 && y < 380)
            {
              shop ();
              sheklhouse ();
              po_size2 (x, y);
            }
          else if (getpixel (xm, ym) == COLOR (255, 2, 2))
            {
              home = 1;
              break;
            }
          else if (xm >= 867 && ym > 320 && ym < 380)
            {
              otagh_game ();
              sheklhouse ();
              po_size2 (x, y);
            }
        }
    }
}
void
sheklhouse ()
{

  setf (1);
  bar (0, 0, 900, 700);
  setf (14);
  bar (0, 440, 900, 480);
  setf (12);
  bar (0, 455, 900, 465);
  setf (11);
  bar (0, 440, 900, 0);
  setf (r_panjere);
  bar (650, 100, 850, 250);
  setf (15);
  bar (660, 110, 840, 240);
  setf (14);
  floodfill (670, 120, r_panjere);
  setf (r_panjere);
  bar (650, 170, 850, 180);
  bar (745, 100, 755, 240);
  setf (COLOR (255, 165, 74));
  bar (200, 525, 700, 200);
  fillellipse (650, 200, 50, 50);
  fillellipse (250, 200, 50, 50);
  bar (250, 150, 650, 200);
  setf (12);
  for (int i = 0; i <= 2; i++)
    {
      line (250, 150 + i, 650, 150 + i);
      arc (250, 200, 90, 180, 50 - i);
      arc (650, 200, 0, 90, 50 - i);
      line (700 - i, 200, 700 - i, 625);
      line (200 + i, 200, 200 + i, 625);
    }
  setf (COLOR (255, 128, 0));
  bar (125, 525, 775, 700);
  setf (12);
  rectangle (125, 525, 775, 700);
  rectangle (126, 526, 774, 699);
  rectangle (127, 527, 773, 698);
  setf (COLOR (255, 128, 0));
  fillellipse (200, 525, 75, 75);
  fillellipse (700, 525, 75, 75);
  setf (12);
  circle (200, 525, 75);
  circle (700, 525, 75);
  circle (200, 525, 74);
  circle (700, 525, 74);
  circle (200, 525, 73);
  circle (700, 525, 73);
  setf (8);
  bar (0, 320, 30, 380);
  setf (15);
  line (5, 325, 28, 350);
  line (5, 375, 28, 350);
  line (5, 326, 27, 350);
  line (5, 374, 27, 350);
  setf (8);
  bar (900, 320, 870 - 3, 380);
  setf (15);
  line (895 - 3, 325, 872 - 3, 350);
  line (895 - 3, 375, 872 - 3, 350);
  line (895 - 3, 326, 873 - 3, 350);
  line (895 - 3, 374, 873 - 3, 350);
  flesh (70, 40);
}
void
shekl_shop ()
{
  int x = 100, y = 100;
  for (int i = 0; i <= 1100; i++)
    {
      if (i < 700)
        setf (12);
      else
        setf (4);
      line (i, 0, i, 700);
      if (i - 200 < 700)
        setf (11);
      else
        setf (1);
      line (i - 200, 0, i - 200, 700);
      if (i % 8 == 0)
        delay (1);
    }
  flesh (70, 40);
  settextstyle (6, 4, 2);
  setf (10);
  outtextxy (150, 175, "Clothes");
  setf (12);
  arc (x, y, 190, 350, 35);
  line (x - 34, y + 5, x - 5, y + 5);
  line (x + 34, y + 5, x + 5, y + 5);
  line (x, y + 12, x - 6, y + 5);
  line (x, y + 12, x + 6, y + 5);
  floodfill (x, y + 15, 12);
  delay (100);
  x = 500;
  y = 120;
  setf (10);
  outtextxy (550, 175, "Antenna");
  setf (0);
  line (x + 10, y, x + 38, y - 56);
  line (x - 10, y, x - 38, y - 56);
  line (x + 11, y, x + 39, y - 56);
  line (x - 11, y, x - 39, y - 56);
  delay (100);
  setf (10);
  outtextxy (130, 425, "Eyes");
  setf (1);
  bar (70, 350, 130, 400);
  setf (15);
  fillellipse (85, 375, 12, 12);
  fillellipse (115, 375, 12, 12);
  setf (0);
  fillellipse (85, 375, 5, 5);
  fillellipse (115, 375, 5, 5);
  x = 500;
  y = 375;
  setf (10);
  delay (100);
  outtextxy (565, 435, "Podayere's");
  outtextxy (527, 460, "color");
  setf (12);
  fillellipse (x, y, 35, 35);
  setf (15);
  fillellipse (x - 11, y - 11, 5, 5);
  fillellipse (x + 11, y - 11, 5, 5);
  setf (r_cheshm);
  fillellipse (x - 11, y - 11, 2, 2);
  fillellipse (x + 11, y - 11, 2, 2);

  setf (10);
  delay (100);
  bar (200, 510, 400, 560);
  outtextxy (365 + 21, 550 - 2, "House settings");
}
void
shop ()
{
  int xm, ym;
  sheklhouse ();
  po_size2 (450, 350);
  shekl_shop ();
  while (!kbhit () || 0 == 0)
    {
      if (ismouseclick (WM_LBUTTONDOWN))
        {
          xm = mousex ();
          ym = mousey ();

          clearmouseclick (WM_LBUTTONDOWN);
          if (getpixel (xm, ym) == COLOR (255, 2, 2))
            {
              sheklhouse ();
              break;
            }
          else if (xm > 60 && xm < 140 && ym > 100 && ym < 200)
            {
              shop_lebas ();
              shekl_shop ();
            }
          else if (xm > 462 && xm < 538 && ym > 60 && ym < 195)
            {
              shop_shakhak ();
              shekl_shop ();
            }
          else if (xm > 60 && xm < 140 && ym > 350 && ym < 450)
            {
              shop_eye ();
              shekl_shop ();
            }
          else if (xm > 450 && xm < 550 && ym >= 340 && ym < 480)
            {
              shop_po_rang ();
              shekl_shop ();
            }
          else if (xm >= 200 && xm <= 400 && ym >= 510 && ym <= 560)
            {
              house_shop ();
              shekl_shop ();
            }
        }
    }
}
void
shop_lebas ()
{
  bool ss;
  int x = 100, y = 100, l, rr, xm, ym;
  for (int i = 0; i <= 1100; i++)
    {
      if (i < 700)
        setf (12);
      else
        setf (4);
      line (i, 0, i, 700);
      if (i - 200 < 700)
        setf (11);
      else
        setf (1);
      line (i - 200, 0, i - 200, 700);
      if (i % 8 == 0)
        delay (1);
    }
  setf (10);
  bar (0, 300, 30, 350);
  setf (12);
  bar (0, 350, 30, 400);
  flesh (70, 40);
  ss = shirt;
  shirt = true;
  l = modelshirt;
  rr = r_shirt;
  r_shirt = 12;
  modelshirt = 1;
  po (x, y);
  r_shirt = rr;
  x = 600;
  delay (100);
  modelshirt++;
  po (x, y);
  x = 100;
  y = 500;
  delay (100);
  modelshirt++;
  po (x, y);
  delay (100);
  x = 600;
  modelshirt++;
  po (x, y);
  delay (500);
  modelshirt = l;
  shirt = ss;
  setf (11);
  bar (250, 200, 500, 390);
  po (350, 300);
  setcolor (14);
  settextstyle (6, 4, 2);
  outtextxy (505 - 10, 400, "YOUR PODAYERE");
  while (!kbhit () || 0 == 0)
    {
      if (ismouseclick (WM_LBUTTONDOWN))
        {
          xm = mousex ();
          ym = mousey ();

          clearmouseclick (WM_LBUTTONDOWN);
          if (xm <= 30 && ym >= 300 && ym <= 350)
            {
              shirt = true;
            }
          else if (xm <= 30 && ym >= 350 && ym <= 400)
            {
              shirt = false;
            }
          else if (xm > 70 && xm < 130 && ym < 140 && ym > 40)
            {
              modelshirt = 1;
              shekl_rang_sade ();
            }
          else if (xm > 570 && xm < 630 && ym < 140 && ym > 40)
            {
              modelshirt = 2;
            }
          else if (xm > 70 && xm < 130 && ym < 540 && ym > 440)
            {
              modelshirt = 3;
            }
          else if (xm > 570 && xm < 630 && ym < 540 && ym > 440)
            {
              modelshirt = 4;
            }
          else if (getpixel (xm, ym) == COLOR (255, 2, 2))
            {
              break;
            }
          setf (11);
          bar (250, 200, 500, 360);
          po (350, 300);
        }
    }
}
void
shekl_rang_sade ()
{
  int r = 0, xm, ym;
  for (int i = 0; i <= 1100; i++)
    {
      if (i < 700)
        setf (12);
      else
        setf (4);
      line (i, 0, i, 700);
      if (i - 200 < 700)
        setf (COLOR (170, 255, 255));
      else
        setf (1);
      line (i - 200, 0, i - 200, 700);
      if (i % 8 == 0)
        delay (1);
    }
  flesh (70, 40);
  po (600, 180);
  for (int i = 1; i <= 3; i++)
    {
      for (int j = 1; j <= 5; j++)
        {
          setf (r);
          fillellipse (i * 150, j * 120, 20, 20);
          delay (100);
          r++;
        }
    }
  setf (15);
  fillellipse (600, 360, 20, 20);
  while (!kbhit () || 0 == 0)
    {
      if (ismouseclick (WM_LBUTTONDOWN))
        {
          xm = mousex ();
          ym = mousey ();
          clearmouseclick (WM_LBUTTONDOWN);
          if (xm < 700 && ym > 100)
            {
              if (xm < 562)
                {
                  if (getpixel (xm, ym) != COLOR (170, 255, 255))
                    r_shirt = getpixel (xm, ym);
                  po (600, 180);
                }
              else if (xm > 562 && ym > 220)
                {
                  if (getpixel (xm, ym) != COLOR (170, 255, 255))
                    r_shirt = getpixel (xm, ym);
                  po (600, 180);
                }
            }
          else if (getpixel (xm, ym) == COLOR (255, 2, 2))
            {
              shop_lebas ();
              break;
            }
        }
    }
}
void
shop_shakhak ()
{
  int r = 0, xm, ym;
  for (int i = 0; i <= 1100; i++)
    {
      if (i < 700)
        setf (12);
      else
        setf (4);
      line (i, 0, i, 700);
      if (i - 200 < 700)
        setf (COLOR (170, 255, 255));
      else
        setf (1);
      line (i - 200, 0, i - 200, 700);
      if (i % 8 == 0)
        delay (1);
    }
  setf (10);
  bar (0, 300, 30, 350);
  setf (12);
  bar (0, 350, 30, 400);
  flesh (70, 40);
  po (600, 180);
  for (int i = 1; i <= 3; i++)
    {
      for (int j = 1; j <= 5; j++)
        {
          setf (r);
          fillellipse (i * 150, j * 120, 20, 20);
          delay (100);
          r++;
        }
    }
  setf (15);
  fillellipse (600, 360, 20, 20);
  while (!kbhit () || 0 == 0)
    {
      if (ismouseclick (WM_LBUTTONDOWN))
        {
          xm = mousex ();
          ym = mousey ();
          clearmouseclick (WM_LBUTTONDOWN);
          if (xm < 700 && ym > 100)
            {
              if (xm <= 30 && ym >= 300 && ym <= 350)
                {
                  pak_po (600, 180);
                  shakhak = true;
                  po (600, 180);
                }
              else if (xm <= 30 && ym >= 350 && ym <= 400)
                {
                  pak_po (600, 180);

                  shakhak = false;
                  po (600, 180);
                }
              else if (xm < 562)
                {
                  if (getpixel (xm, ym) != COLOR (170, 255, 255))
                    r_shakhak = getpixel (xm, ym);
                  pak_po (600, 180);
                  po (600, 180);
                }
              else if (xm > 562 && ym > 220)
                {
                  if (getpixel (xm, ym) != COLOR (170, 255, 255))
                    r_shakhak = getpixel (xm, ym);
                  pak_po (600, 180);
                  po (600, 180);
                }
            }
          else if (getpixel (xm, ym) == COLOR (255, 2, 2))
            {
              break;
            }
        }
    }
}
void
shop_eye ()
{
  int r = 0, xm, ym;
  for (int i = 0; i <= 1100; i++)
    {
      if (i < 700)
        setf (12);
      else
        setf (4);
      line (i, 0, i, 700);
      if (i - 200 < 700)
        setf (COLOR (170, 255, 255));
      else
        setf (1);
      line (i - 200, 0, i - 200, 700);
      if (i % 8 == 0)
        delay (1);
    }
  flesh (70, 40);
  po (600, 180);
  for (int i = 1; i <= 3; i++)
    {
      for (int j = 1; j <= 5; j++)
        {
          setf (r);
          fillellipse (i * 150, j * 120, 20, 20);
          delay (50);
          r++;
        }
    }
  setf (15);
  fillellipse (600, 360, 20, 20);
  while (!kbhit () || 0 == 0)
    {
      if (ismouseclick (WM_LBUTTONDOWN))
        {
          xm = mousex ();
          ym = mousey ();
          clearmouseclick (WM_LBUTTONDOWN);
          if (xm < 700 && ym > 100)
            {
              if (xm < 562)
                {
                  if (getpixel (xm, ym) != COLOR (170, 255, 255))
                    r_cheshm = getpixel (xm, ym);
                  po (600, 180);
                }
              else if (xm > 562 && ym > 220)
                {
                  if (getpixel (xm, ym) != COLOR (170, 255, 255))
                    r_cheshm = getpixel (xm, ym);
                  po (600, 180);
                }
            }
          else if (getpixel (xm, ym) == COLOR (255, 2, 2))
            {
              break;
            }
        }
    }
}
void
shop_po_rang ()
{
  int r = 0, xm, ym;
  for (int i = 0; i <= 1100; i++)
    {
      if (i < 700)
        setf (12);
      else
        setf (4);
      line (i, 0, i, 700);
      if (i - 200 < 700)
        setf (COLOR (170, 255, 255));
      else
        setf (1);
      line (i - 200, 0, i - 200, 700);
      if (i % 8 == 0)
        delay (1);
    }
  flesh (70, 40);
  po (600, 180);
  for (int i = 1; i <= 3; i++)
    {
      for (int j = 1; j <= 5; j++)
        {
          setf (r);
          fillellipse (i * 150, j * 120, 20, 20);
          delay (50);
          r++;
        }
    }
  setf (15);
  fillellipse (600, 360, 20, 20);
  while (!kbhit () || 0 == 0)
    {
      if (ismouseclick (WM_LBUTTONDOWN))
        {
          xm = mousex ();
          ym = mousey ();
          clearmouseclick (WM_LBUTTONDOWN);
          if (xm < 700 && ym > 100)
            {
              if (xm < 562)
                {
                  if (getpixel (xm, ym) != COLOR (170, 255, 255))
                    r_po = getpixel (xm, ym);
                  po (600, 180);
                }
              else if (xm > 562 && ym > 220)
                {
                  if (getpixel (xm, ym) != COLOR (170, 255, 255))
                    r_po = getpixel (xm, ym);
                  po (600, 180);
                }
            }
          else if (getpixel (xm, ym) == COLOR (255, 2, 2))
            {
              break;
            }
        }
    }
}
void
shekl_shop_house ()
{
  for (int i = 0; i <= 1100; i++)
    {
      if (i < 700)
        setf (12);
      else
        setf (4);
      line (i, 0, i, 700);
      if (i - 200 < 700)
        setf (11);
      else
        setf (1);
      line (i - 200, 0, i - 200, 700);
      if (i % 8 == 0)
        delay (1);
    }
  flesh (70, 40);
  setf (10);
  settextstyle (6, 4, 2);
  outtextxy (130, 220, "Roof");
  setf (12);
  line (190, 40, 40, 190);
  line (190, 40, 190, 190);
  line (40, 190, 190, 190);
  floodfill (180, 135, 12);
  delay (100);
  setf (10);
  outtextxy (540, 220, "Wall");
  setf (3);
  bar (460, 40, 600, 190);
  delay (100);
  setf (10);
  outtextxy (140, 518, "Window");
  setf (6);
  bar (40, 420, 190, 490);
  setf (15);
  bar (50, 430, 180, 480);
  setf (6);
  bar (110, 420, 120, 490);
  bar (40, 450, 190, 460);
}
void
house_shop ()
{
  int xm, ym;
  shekl_shop_house ();
  while (!kbhit () || 0 == 0)
    {
      if (ismouseclick (WM_LBUTTONDOWN))
        {
          xm = mousex ();
          ym = mousey ();
          clearmouseclick (WM_LBUTTONDOWN);
          if (getpixel (xm, ym) == COLOR (255, 2, 2))
            {
              break;
            }
          else if (xm >= 40 && xm <= 190 && ym >= 40 && ym <= 230)
            {
              shop_roof ();
              shekl_shop_house ();
            }
          else if (xm >= 460 && xm <= 600 && ym >= 40 && ym <= 230)
            {
              shop_wall ();
              shekl_shop_house ();
            }
          else if (xm >= 40 && xm <= 190 && ym >= 420 && ym <= 530)
            {
              shop_window ();
              shekl_shop_house ();
            }
        }
    }
}
void
smallhouse (int x, int y)
{
  setf (r_saghf);
  line (x, y, x, y + 200);
  line (x, y, x - 75, y + 75);
  line (x - 75, y + 74, x - 75, y + 200);
  line (x - 75, y + 200, x + 1, y + 200);
  floodfill (x - 7, y + 190, r_saghf);
  setf (r_divar);
  bar (x - 75, y + 75, x + 1, y + 201);
  setf (r_panjere);
  bar (x - 15, y + 25 + 60, x - 60, y + 50 + 60);
  setf (15);
  bar (x - 18, y + 25 + 63, x - 57, y + 50 + 57);
  setf (r_panjere);
  bar (x - 35, y + 85, x - 39, y + 110);
  bar (x - 15, y + 95, x - 60, y + 99);
  setf (r_panjere);
  bar (x - 75, y + 140, x - 100, y + 201);
  setf (7);
  fillellipse (x - 100, y + 170, 3, 30);
}
void
shop_roof ()
{
  int r = 0, xm, ym;
  for (int i = 0; i <= 1100; i++)
    {
      if (i < 700)
        setf (12);
      else
        setf (4);
      line (i, 0, i, 700);
      if (i - 200 < 700)
        setf (COLOR (170, 255, 255));
      else
        setf (1);
      line (i - 200, 0, i - 200, 700);
      if (i % 8 == 0)
        delay (1);
    }
  flesh (70, 40);
  smallhouse (620, 120);
  for (int i = 1; i <= 3; i++)
    {
      for (int j = 1; j <= 5; j++)
        {
          setf (r);
          fillellipse (i * 150, j * 120, 20, 20);
          delay (50);
          r++;
        }
    }
  setf (15);
  fillellipse (600, 360, 20, 20);
  while (!kbhit () || 0 == 0)
    {
      if (ismouseclick (WM_LBUTTONDOWN))
        {
          xm = mousex ();
          ym = mousey ();
          clearmouseclick (WM_LBUTTONDOWN);
          if (xm < 700 && ym > 100)
            {
              if (xm < 562)
                {
                  if (getpixel (xm, ym) != COLOR (170, 255, 255))
                    r_saghf = getpixel (xm, ym);
                  smallhouse (620, 120);
                }
              else if (xm > 562 && ym > 320)
                {
                  if (getpixel (xm, ym) != COLOR (170, 255, 255))
                    r_saghf = getpixel (xm, ym);
                  smallhouse (620, 120);
                }
            }
          else if (getpixel (xm, ym) == COLOR (255, 2, 2))
            {
              break;
            }
        }
    }
}
void
shop_wall ()
{
  int r = 0, xm, ym;
  for (int i = 0; i <= 1100; i++)
    {
      if (i < 700)
        setf (12);
      else
        setf (4);
      line (i, 0, i, 700);
      if (i - 200 < 700)
        setf (COLOR (170, 255, 255));
      else
        setf (1);
      line (i - 200, 0, i - 200, 700);
      if (i % 8 == 0)
        delay (1);
    }
  flesh (70, 40);
  smallhouse (620, 120);
  for (int i = 1; i <= 3; i++)
    {
      for (int j = 1; j <= 5; j++)
        {
          setf (r);
          fillellipse (i * 150, j * 120, 20, 20);
          delay (50);
          r++;
        }
    }
  setf (15);
  fillellipse (600, 360, 20, 20);
  while (!kbhit () || 0 == 0)
    {
      if (ismouseclick (WM_LBUTTONDOWN))
        {
          xm = mousex ();
          ym = mousey ();
          clearmouseclick (WM_LBUTTONDOWN);
          if (xm < 700 && ym > 100)
            {
              if (xm < 562)
                {
                  if (getpixel (xm, ym) != COLOR (170, 255, 255))
                    r_divar = getpixel (xm, ym);
                  smallhouse (620, 120);
                }
              else if (xm > 562 && ym > 320)
                {
                  if (getpixel (xm, ym) != COLOR (170, 255, 255))
                    r_divar = getpixel (xm, ym);
                  smallhouse (620, 120);
                }
            }
          else if (getpixel (xm, ym) == COLOR (255, 2, 2))
            {
              break;
            }
        }
    }
}
void
shop_window ()
{
  int r = 0, xm, ym;
  for (int i = 0; i <= 1100; i++)
    {
      if (i < 700)
        setf (12);
      else
        setf (4);
      line (i, 0, i, 700);
      if (i - 200 < 700)
        setf (COLOR (170, 255, 255));
      else
        setf (1);
      line (i - 200, 0, i - 200, 700);
      if (i % 8 == 0)
        delay (1);
    }
  flesh (70, 40);
  smallhouse (620, 120);
  for (int i = 1; i <= 3; i++)
    {
      for (int j = 1; j <= 5; j++)
        {
          setf (r);
          fillellipse (i * 150, j * 120, 20, 20);
          delay (50);
          r++;
        }
    }
  setf (15);
  fillellipse (600, 360, 20, 20);
  while (!kbhit () || 0 == 0)
    {
      if (ismouseclick (WM_LBUTTONDOWN))
        {
          xm = mousex ();
          ym = mousey ();
          clearmouseclick (WM_LBUTTONDOWN);
          if (xm < 700 && ym > 100)
            {
              if (xm < 562)
                {
                  if (getpixel (xm, ym) != COLOR (170, 255, 255))
                    r_panjere = getpixel (xm, ym);
                  smallhouse (620, 120);
                }
              else if (xm > 562 && ym > 320)
                {
                  if (getpixel (xm, ym) != COLOR (170, 255, 255))
                    r_panjere = getpixel (xm, ym);
                  smallhouse (620, 120);
                }
            }
          else if (getpixel (xm, ym) == COLOR (255, 2, 2))
            {
              break;
            }
        }
    }
}
void
otagh_game ()
{
  int r = 0, xm, ym;
  shekl_otagh_game ();
  while (!kbhit () || 0 == 0)
    {
      if (ismouseclick (WM_LBUTTONDOWN))
        {
          xm = mousex ();
          ym = mousey ();
          clearmouseclick (WM_LBUTTONDOWN);
          if (getpixel (xm, ym) == COLOR (255, 2, 2))
            {
              break;
            }
          else if (xm >= 80 && xm <= 160 && ym >= 90 && ym <= 130)
            {
              game_xo ();
              shekl_otagh_game ();
            }
          else if (xm >= 80 && xm <= 200 && ym >= 150 && ym <= 190) // 80,150,200,190
            {
              game_memory ();
              shekl_otagh_game ();
            }
        }
    }
}
void
shekl_otagh_game ()
{
  for (int i = 0; i <= 1100; i++)
    {
      if (i < 700)
        setf (12);
      else
        setf (4);
      line (i, 0, i, 700);
      if (i - 200 < 700)
        setf (COLOR (170, 255, 255));
      else
        setf (1);
      line (i - 200, 0, i - 200, 700);
      if (i % 8 == 0)
        delay (1);
    }
  flesh (70, 40);
  settextstyle (6, 4, 2);
  setf (10);
  bar (80, 90, 160, 130);
  outtextxy (150, 120, "X  O");
  outtextxy (150, 120, "X  O");
  delay (50);
  settextstyle (6, 4, 2);
  setf (10);
  bar (80, 150, 200, 190);
  outtextxy (190, 180, "Memory");
}
void
game_xo ()
{
  bool p = true;
  setf (1);
  for (int i = 0; i <= 700; i++)
    {
      line (700 - i, 0, 700 - i, 700);
      if (i % 8 == 0)
        delay (1);
    }
  flesh (70, 40);
  settextstyle (2, 3, 8);
  setf (11);
  outtextxy (480, 40, "X  O");
  for (int i = 0; i <= 2; i++)
    {
      for (int j = 0; j <= 2; j++)
        {
          setf (14);
          bar ((i * 80) + 330, (j * 80) + 100, (i * 80) + 410, (j * 80) + 180);
          setf (12);
          rectangle ((i * 80) + 330, (j * 80) + 100, (i * 80) + 410, (j * 80) + 180);
          delay (50);
        }
    }
  int a[3][3] = { 0 }, xm, ym, n = 1, xn, yn, x, y, t = 0;
  setf (12);
  fillellipse (600, 220, 20, 20);
  fillellipse (300, 220, 20, 20);
  setf (0);
  bar (330, 380, 570, 420);
  setf (14);
  rectangle (330, 380, 570, 420);
  while (!kbhit () || 0 == 0)
    {
      if (ismouseclick (WM_LBUTTONDOWN))
        {
          setf (0);
          bar (330, 380, 570, 420);
          setf (14);
          rectangle (330, 380, 570, 420);
          xm = mousex ();
          ym = mousey ();
          clearmouseclick (WM_LBUTTONDOWN);
          if (getpixel (xm, ym) == COLOR (255, 2, 2))
            {
              setf (14);
              outtextxy (500 - 25, 412, "NO WIN");
              Beep (2500, 1500);
              break;
            }
          if (xm <= 570 && xm >= 330 && ym >= 100 && ym <= 340)
            {
              xn = xm - 330;
              yn = ym - 100;
              xn = xn / 80;
              yn = yn / 80;
              if (getpixel (xm, ym) == COLOR (255, 2, 2))
                {
                  setf (14);
                  outtextxy (500 - 25, 412, "NO WIN");
                  break;
                }
              if (a[xn][yn] == 0)
                {
                  t++;
                  a[xn][yn] = n;
                  setf (11);
                  if (n == 1)
                    setf (12);
                  x = (xn * 80) + 370;
                  y = (yn * 80) + 140;
                  fillellipse (600, 220, 20, 20);
                  fillellipse (300, 220, 20, 20);
                  fillellipse ((xn * 80) + 370, (yn * 80) + 140, 35, 35);
                  setf (15);
                  fillellipse (x - 11, y - 11, 5, 5);
                  fillellipse (x + 11, y - 11, 5, 5);
                  setf (0);
                  fillellipse (x - 11, y - 11, 2, 2);
                  fillellipse (x + 11, y - 11, 2, 2);
                  if (n == 1)
                    n = 2;
                  else
                    n = 1;
                  setf (11);
                  if (n == 1)
                    setf (12);
                  fillellipse (600, 220, 20, 20);
                  fillellipse (300, 220, 20, 20);
                }
              else
                {
                  setf (12);
                  settextstyle (2, 3, 8);
                  outtextxy (460, 410, "ERROR");
                  Beep (2100, 500);
                }
            }
        }
      for (int i = 0; i <= 2; i++)
        if (a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][0] == 1)
          {
            setf (12);
            p = false;
            outtextxy (500 - 15, 412, "RED WIN");
            break;
          }
      for (int i = 0; i <= 2; i++)
        if (a[0][i] == a[1][i] && a[1][i] == a[2][i] && a[0][i] == 1)
          {
            setf (12);
            p = false;
            outtextxy (500 - 15, 412, "RED WIN");
            break;
          }
      if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] == 1)
        {
          setf (12);
          outtextxy (500 - 15, 412, "RED WIN");
          break;
        }
      if (a[2][0] == a[1][1] && a[1][1] == a[0][2] && a[2][0] == 1)
        {
          setf (12);
          outtextxy (500 - 15, 412, "RED WIN");
          break;
        }
      for (int i = 0; i <= 2; i++)
        if (a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][0] == 2)
          {
            setf (11);
            p = false;
            outtextxy (500, 412, "BLUE WIN");
            break;
          }
      for (int i = 0; i <= 2; i++)
        if (a[0][i] == a[1][i] && a[1][i] == a[2][i] && a[0][i] == 2)
          {
            setf (11);
            p = false;
            outtextxy (500, 412, "BLUE WIN");
            break;
          }
      if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] == 2)
        {
          setf (11);
          outtextxy (500, 412, "BLUE WIN");
          break;
        }
      if (a[2][0] == a[1][1] && a[1][1] == a[0][2] && a[2][0] == 2)
        {
          setf (11);
          outtextxy (500, 412, "BLUE WIN");
          break;
        }
      if (t > 8)
        {
          setf (14);
          outtextxy (500 - 25, 412, "NO WIN");
          break;
        }
      if (p == false)
        break;
    }
  delay (500);
}
void
game_memory ()
{
  int xm, ym, a[100] = { 0 }, check[100] = { 0 }, sh = 0, last = 1;
  bool nobat = true, n = true;
  setf (1);
  for (int i = 0; i <= 700; i++)
    {
      line (700 - i, 0, 700 - i, 700);
      if (i % 8 == 0)
        delay (1);
    }
  setf (15);
  bar (0, 0, 150, 700);
  po (75, 350);
  setf (15);
  bar (900, 0, 750, 700);
  flesh (70, 40);
  settextstyle (2, 3, 8);
  setf (11);
  outtextxy (520, 40, "memory");
  setf (0);
  bar (330, 520, 570, 560);
  setf (14);
  rectangle (330, 520, 570, 560);
  setf (4);
  bar (200, 70, 700, 500);
  setf (2);
  rectangle (200, 70, 700, 500);
  line (450, 70, 450, 500);
  line (200, 285, 700, 285);
  po (825, 350);
  delay (1250);
  while (!kbhit () || 0 == 0)
    {
      if (nobat == true)
        {
          setf (0);
          bar (330, 520, 570, 560);
          setf (14);
          rectangle (330, 520, 570, 560);
          for (int i = 0; i < last; i++)
            {
              if (ismouseclick (WM_LBUTTONDOWN))
                {
                  xm = mousex ();
                  ym = mousey ();
                  clearmouseclick (WM_LBUTTONDOWN);
                  if (getpixel (xm, ym) == COLOR (255, 2, 2))
                    {
                      setf (14);
                      outtextxy (500 - 25, 552, "NO WIN");
                      Beep (2500, 1500);
                      n = false;
                      break;
                    }
                }
              if (i + 1 == last)
                a[i] = (rand () % 4) + 1;
              setf (11);
              if (a[i] == 1)
                {
                  if (ismouseclick (WM_LBUTTONDOWN))
                    {
                      xm = mousex ();
                      ym = mousey ();
                      clearmouseclick (WM_LBUTTONDOWN);
                      if (getpixel (xm, ym) == COLOR (255, 2, 2))
                        {
                          setf (14);
                          outtextxy (500 - 25, 552, "NO WIN");
                          Beep (2500, 1500);
                          n = false;
                          break;
                        }
                    }
                  floodfill (205, 75, 2);
                  Beep (1200, 1000 - (3 * last));
                  delay (75);
                  setf (4);
                  floodfill (205, 75, 2);
                  if (ismouseclick (WM_LBUTTONDOWN))
                    {
                      xm = mousex ();
                      ym = mousey ();
                      clearmouseclick (WM_LBUTTONDOWN);
                      if (getpixel (xm, ym) == COLOR (255, 2, 2))
                        {
                          setf (14);
                          outtextxy (500 - 25, 552, "NO WIN");
                          Beep (2500, 1500);
                          n = false;
                          break;
                        }
                    }
                }
              if (a[i] == 2)
                {
                  if (ismouseclick (WM_LBUTTONDOWN))
                    {
                      xm = mousex ();
                      ym = mousey ();
                      clearmouseclick (WM_LBUTTONDOWN);
                      if (getpixel (xm, ym) == COLOR (255, 2, 2))
                        {
                          setf (14);
                          outtextxy (500 - 25, 552, "NO WIN");
                          Beep (2500, 1500);
                          n = false;
                          break;
                        }
                    }
                  floodfill (455, 75, 2);
                  Beep (1200, 1000 - (3 * last));
                  delay (75);
                  setf (4);
                  floodfill (455, 75, 2);
                  if (ismouseclick (WM_LBUTTONDOWN))
                    {
                      xm = mousex ();
                      ym = mousey ();
                      clearmouseclick (WM_LBUTTONDOWN);
                      if (getpixel (xm, ym) == COLOR (255, 2, 2))
                        {
                          setf (14);
                          outtextxy (500 - 25, 552, "NO WIN");
                          Beep (2500, 1500);
                          n = false;
                          break;
                        }
                    }
                }
              if (a[i] == 3)
                {
                  if (ismouseclick (WM_LBUTTONDOWN))
                    {
                      xm = mousex ();
                      ym = mousey ();
                      clearmouseclick (WM_LBUTTONDOWN);
                      if (getpixel (xm, ym) == COLOR (255, 2, 2))
                        {
                          setf (14);
                          outtextxy (500 - 25, 552, "NO WIN");
                          Beep (2500, 1500);
                          n = false;
                          break;
                        }
                    }
                  floodfill (205, 295, 2);
                  Beep (1200, 1000 - (3 * last));
                  delay (75);
                  setf (4);
                  floodfill (205, 295, 2);
                  if (ismouseclick (WM_LBUTTONDOWN))
                    {
                      xm = mousex ();
                      ym = mousey ();
                      clearmouseclick (WM_LBUTTONDOWN);
                      if (getpixel (xm, ym) == COLOR (255, 2, 2))
                        {
                          setf (14);
                          outtextxy (500 - 25, 552, "NO WIN");
                          Beep (2500, 1500);
                          n = false;
                          break;
                        }
                    }
                }
              if (a[i] == 4)
                {
                  if (ismouseclick (WM_LBUTTONDOWN))
                    {
                      xm = mousex ();
                      ym = mousey ();
                      clearmouseclick (WM_LBUTTONDOWN);
                      if (getpixel (xm, ym) == COLOR (255, 2, 2))
                        {
                          setf (14);
                          outtextxy (500 - 25, 552, "NO WIN");
                          Beep (2500, 1500);
                          n = false;
                          break;
                        }
                    }
                  floodfill (455, 295, 2);
                  Beep (1200, 1000 - (3 * last));
                  delay (75);
                  setf (4);
                  floodfill (455, 295, 2);
                  if (ismouseclick (WM_LBUTTONDOWN))
                    {
                      xm = mousex ();
                      ym = mousey ();
                      clearmouseclick (WM_LBUTTONDOWN);
                      if (getpixel (xm, ym) == COLOR (255, 2, 2))
                        {
                          setf (14);
                          outtextxy (500 - 25, 552, "NO WIN");
                          Beep (2500, 1500);
                          n = false;
                          break;
                        }
                    }
                }
            }
          nobat = false;

          sh = 0;
        }
      if (n == false)
        break;
      if (ismouseclick (WM_LBUTTONDOWN))
        {
          xm = mousex ();
          ym = mousey ();
          clearmouseclick (WM_LBUTTONDOWN);
          if (getpixel (xm, ym) == COLOR (255, 2, 2))
            {
              setf (14);
              outtextxy (500 - 25, 552, "NO WIN");
              Beep (2500, 1500);
              break;
            }
          else if (xm >= 200 && xm <= 700 && ym >= 70 && ym <= 500)
            {
              if (xm >= 200 && xm <= 450 && ym >= 70 && ym <= 285)
                check[sh] = 1;
              if (xm > 450 && xm <= 700 && ym >= 70 && ym <= 285)
                check[sh] = 2;
              if (xm >= 200 && xm <= 450 && ym > 285 && ym <= 500)
                check[sh] = 3;
              if (xm > 450 && xm <= 700 && ym > 285 && ym <= 500)
                check[sh] = 4;
              if (check[sh] == a[sh])
                {
                  setf (11);
                  if (a[sh] == 1)
                    {
                      floodfill (205, 75, 2);
                      Beep (1200, 1000 - (3 * last));
                      delay (75);
                      setf (4);
                      floodfill (205, 75, 2);
                    }
                  else if (a[sh] == 2)
                    {
                      floodfill (455, 75, 2);
                      Beep (1200, 1000 - (3 * last));
                      delay (75);
                      setf (4);
                      floodfill (455, 75, 2);
                    }
                  else if (a[sh] == 3)
                    {
                      floodfill (205, 295, 2);
                      Beep (1200, 1000 - (3 * last));
                      delay (75);
                      setf (4);
                      floodfill (205, 295, 2);
                    }
                  else if (a[sh] == 4)
                    {
                      floodfill (455, 295, 2);
                      Beep (1200, 1000 - (3 * last));
                      delay (75);
                      setf (4);
                      floodfill (455, 295, 2);
                    }
                }
              else if (check[sh] != a[sh])
                {

                  setf (14);
                  outtextxy (500 - 25, 552, "NO WIN");
                  Beep (2500, 1500);
                  break;
                }
              sh++;
            }
        }
      if (sh == last)
        {
          sh = 0;
          nobat = true;
          setf (14);
          outtextxy (500 - 25, 552, "OKAY..");
          outtextxy (500 - 25, 552, "OKAY..");
          delay (500);
          last++;
        }
      if (last == 100)
        {
          setf (10);
          outtextxy (500 - 20, 552, "YOU WIN");
          Beep (500, 1000);
          break;
        }
    }
}

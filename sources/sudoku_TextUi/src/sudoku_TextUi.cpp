/*
    This file is part of sudoku_TextUi
    infrastructure
    Copyright (C) 2012  Julien Thevenon ( julien_thevenon at yahoo.fr )

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>
*/
#include "sudoku_TextUi.h"
#include "sudoku_situation.h"

sudoku_TextUi::sudoku_TextUi(void):FSM_UI<sudoku_situation>()
{
}

void sudoku_TextUi::displaySpecificSituation(const sudoku_situation *p_situation)
{
  cout << p_situation->toString() << endl ;
}

string sudoku_TextUi::toString(void)const
{
  return "sudoku_TextUi";
}


FSM_UI_if* createGameOfLifeTextUi(void)
{
  return new sudoku_TextUi();
}

extern "C"
{
  void registerFsmUi(map<string,FSM_UI_creator> *p_factory)
  {
    registerFsmUi("sudoku",createGameOfLifeTextUi,p_factory);
  }
}

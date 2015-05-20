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
#ifndef _SUDOKU_TEXT_UI_H_
#define _SUDOKU_TEXT_UI_H_

#include "FSM_UI.h"
#include "sudoku_situation.h"

class sudoku_TextUi:public FSM_UI<sudoku_situation>
{
 public:
  sudoku_TextUi(void);

  //Methods inherited from interface
  void displaySpecificSituation(const sudoku_situation *p_situation);
  string toString(void)const;
	


 private:
};
#endif

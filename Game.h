#include <ExtCtrls.hpp>
#include <vcl.h>
class GameXO{
	public:
		GameXO(TPanel *Panels[3][3]);
		void NewGame();
                void ClearField();
                void CheckTurn(int x, int y);
                void CheckWin(int x, int y);
                void DisplayStatistics();
	private:
	        int turn; //L. nieparzyste - gracz 1
                          //L. parzyste - gracz 2
                TPanel *Panels[3][3];
                int magicSquare[3][3];
                int winsCross;
                int winsCircle;
};
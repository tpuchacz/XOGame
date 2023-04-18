#include <ExtCtrls.hpp>
class GameXO{
	public:
		GameXO(TPanel *Panels[3][3],TLabel *LabelInfo);
		void NewGame();
                void CheckTurn(int x, int y);
                void CheckWin(int x, int y);
	private:
	        int turn; //L. nieparzyste - gracz 1
                          //L. parzyste - gracz 2
                TPanel *Panels[3][3];
                TLabel *LabelInfo;
};
#include <ExtCtrls.hpp>
class GraKolkoKrzyzyk{
	public:
		GraKolkoKrzyzyk();
		void nowaGra(TPanel *Panels[]);
                void sprawdzKolejnosc(TPanel *Panel);
	private:
	        int kolejnosc; //L. nieparzyste - gracz 1
                               //L. parzyste - gracz 2
};
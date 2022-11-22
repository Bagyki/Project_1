#ifndef GOODS_H
#define GOODS_H



class Goods
{
public:
	Goods()
	{
		m_Description = "";
		m_Weight = 0;
		m_Volume = 0;
		m_LoadingMeter = 0;
		m_Adr = "";
		m_Comment = "";
	}
	~Goods()
	{
	}

private:
	string m_Description;
	double m_Weight;
	double m_Volume;
	double m_LoadingMeter;
	string m_Adr;
	string m_Comment;

};

#endif
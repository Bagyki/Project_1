#ifndef LOAD_H
#define LOAD_H



class Load
{
public:
	Load() 
	{
		m_Weight = 0;
	}
	~Load(){}

	void setLoad(double load);
	
	double getLoad() const;
	

private:
	double m_Weight;

};





#endif


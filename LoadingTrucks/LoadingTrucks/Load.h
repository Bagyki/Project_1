#ifndef LOAD_H
#define LOAD_H



class Load
{
public:
	Load(double load) 
	{
		m_Weight = load;
	}
	~Load(){}

	void setLoad(double load);   //setWeight
	
	double getLoad() const;
	

private:
	double m_Weight;

};





#endif


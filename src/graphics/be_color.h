#ifndef BE_COLOR_H_INCLUDED
#define BE_COLOR_H_INCLUDED

class BeColor
{
	public:
		BeColor();
		BeColor( const float nr, const float ng, const float nb, const float na );
		~BeColor();
		
		BeColor randomBeColorRGB();
		void normalize(BeColor* c );
		BeColor& operator=(const BeColor& other);
		bool operator!=(const BeColor& other) const;
		BeColor getNormalized();
		void normalize();
		
		void setR( const float r ) { m_r = r; }
		void setG( const float g ) { m_g = g; }
		void setB( const float b ) { m_b = b; }
		void setA( const float a ) { m_a = a; }
		
		float r() const { return m_r; }
		float g() const { return m_g; }
		float b() const { return m_b; }
		float a() const { return m_a; }
		
		const float* getFloatPointer() const { return &m_r; }
		
	private:
		float m_r;
		float m_g;
		float m_b;
		float m_a;
};

#endif

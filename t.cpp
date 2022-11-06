#include <iostream>

class Fixed {
	private:
		int a;
	public:
		Fixed(){
			this->a = 0;}
		void setA(int a){
			this->a = a;}
		int	getA(void){
			return(this->a);}
		float toFloat(void) const{
			return (this->a);}
		Fixed &operator--(int){
			this->a--;
			return (*this);}
		Fixed &operator++(int){
			Fixed tmp(*this);
				this->a++;
			return (*this);}
};
std::ostream &operator<<(std::ostream &out, const Fixed &obj){
    out << obj.toFloat();
    return (out);}
int main(){
    Fixed a;
    a.setA(222);
    std::cout << a.getA() << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a-- << std::endl;
    std::cout << --a << std::endl;
    return 0;}

//#include<memory>
//#include<initializer_list>
#include<boost/shared_ptr.hpp>
#include<boost/make_shared.hpp>
#include<vector>

//模板函数定义
template<typename T> int compare(const T&a, const T&b){
	if(a<b) return -1;
	if(b<a) return 1;
	return 0;
}

//模板类定义
template<typename T> class St{
public:
	typedef typename std::vector<T>::size_type size_type;
//	St(std::initializer_list<T> i):ps(std::make_shared(std::vector<T>(i))){	}
	St(std::vector<T> i):ps(boost::make_shared<std::vector<T>>(i)){}
    T& operator[](size_type i);
private:
	boost::shared_ptr<std::vector<T>> ps;
};

template<typename T> T& St<T>::operator [](size_type i){
	return (*ps)[i];
}
#ifndef __GEOMETRY_H__
#define __GEOMETRY_H__
#include <cmath>
#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

template <size_t DIM, typename T> 
struct vec{
    vec(){ 
        cout<<"vec()"<<endl;
        for(size_t i=DIM;i--;data_[i]=T());
        } 
            T& operator[](const size_t i)           {return data_[i];}
    const   T& operator[](const size_t i) const     {return data_[i];}
private:
    T data_[DIM];
};

typedef vec<2, float> vec2f;
typedef vec<3, float> vec3f;
typedef vec<3, int  > vec3i;
typedef vec<4, float> vec4f;

template <typename T> 

struct vec<2, T>{
    vec() : x(T()),y(T()) {
        cout<<"[vec<2, T>] vec()"<<endl;
    }
    vec(T X, T Y): x(X), y(Y) {
        cout<<"[vec<2, T>] vec(T X, T Y)"<<endl;
    }
    template<class U> 
        vec<2,T> (const vec<2,U> &v);
            T& operator[](const size_t i)   {
            assert(i < 2);
            return i<=0 ? x : y;
        }
    const   T& operator[](const size_t i) const {
            assert(i < 2);
            return i <= 0 ? x : y;
    }
    T x,y;
};

#endif
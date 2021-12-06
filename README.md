# poilogcpp

Conversion of `poilog` using C++ and Rcpp
https://github.com/cran/poilog

* The package `poilog` was originally written with C and the R API for C
* This package `poilogcpp` converts the C code to C++, and uses Rcpp. This will be used for Numbat.


The examples work from https://rdrr.io/cran/poilog/

```
library(poilogcpp)

dpoilog(1, 1, 1)
## [1] 0.1757333

### plot density for given parameters 
barplot(dpoilog(n=0:20,mu=2,sig=1),names.arg=0:20)


### change in density of n2 for two different values of rho (given n1=10)   
barplot(rbind(dbipoilog(n1=rep(10,21),n2=0:20,mu1=0,mu2=0,sig=1,sig2=1,rho=0.0),
              dbipoilog(n1=rep(10,21),n2=0:20,mu1=0,mu2=0,sig=1,sig2=1,rho=0.8)),
              beside=TRUE,space=c(0,0.2),names.arg=0:20,xlab="n2",col=1:2)
legend(35,0.0012,c("rho=0","rho=0.8"),fill=1:2)

```

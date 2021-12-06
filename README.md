# poilogcpp

`poilog` written use C++ and Rcpp

Souce code for the original `poilog` [here](https://github.com/cran/poilog) and CRAN link [here](https://cran.r-project.org/web/packages/poilog/index.html).


* The package `poilog` was originally written with C and the R API for C
* This package `poilogcpp` converts the C code to C++, and uses Rcpp.


The examples work from https://rdrr.io/cran/poilog/

```
library(poilogcpp)

### plot density for given parameters 
barplot(dpoilog(n=0:20,mu=2,sig=1),names.arg=0:20)

### draw random deviates from a community of 50 species 
rpoilog(S=50,mu=2,sig=1)

### draw random deviates including zeros 
rpoilog(S=50,mu=2,sig=1,keep0=TRUE)

### draw random deviates with sampling intensity = 0.5 
rpoilog(S=50,mu=2,sig=1,nu=0.5)

### how many species are likely to be observed 
### (given S,mu,sig2 and nu)? 
hist(replicate(1000,length(rpoilog(S=30,mu=0,sig=3,nu=0.7))))

### how many individuals are likely to be observed
### (given S,mu,sig2 and nu)? 
hist(replicate(1000,sum(rpoilog(S=30,mu=0,sig=3,nu=0.7))))

### simulate observations

n <- rpoilog(S=80,mu=1,sig=2)

### obtain estimates of parameters
est <- poilogMLE(n)

### similar, but now with bootstrapping ###
## Not run: est <- poilogMLE(n,nboot=10)

### change start values and request tracing information 
### from optimization procedure
est <- poilogMLE(n,startVals=c(2,3),
                 control=list(maxit=1000,trace=1, REPORT=1))
                 

```

Citation for the original `poilog` is here:
```
Vidar Grøtan and Steinar Engen (2008). poilog: Poisson lognormal and
bivariate Poisson lognormal distribution. R package version 0.4.
```
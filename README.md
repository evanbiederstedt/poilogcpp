# poilogcpp

`poilog` written to use C++ and Rcpp

Souce code for the original `poilog` [here](https://github.com/cran/poilog) and CRAN link [here](https://cran.r-project.org/web/packages/poilog/index.html).


* The package `poilog` was originally written with C and the R API for C
* This package `poilogcpp` converts the C code to C++, and uses Rcpp.


The original source code had no roxygen2 documentation, so I didn't add them here. For reference, please check the documentation on [CRAN](https://cran.r-project.org/web/packages/poilog/poilog.pdf) and [rdrr.io: R Package Documentation](https://rdrr.io/cran/poilog/)


The examples work from https://rdrr.io/cran/poilog/

```
library(poilogcpp)

### plot density for given parameters 
barplot(dpoilog(n=0:20,mu=2,sig=1),names.arg=0:20)

### draw random deviates from a community of 50 species 
rpoilog(S=50,mu=2,sig=1)

### draw random deviates including zeros 
rpoilog(S=50,mu=2,sig=1,keep0=TRUE)

## etc...
```

Citation for the original `poilog` is here:
```
Vidar Grøtan and Steinar Engen (2008). poilog: Poisson lognormal and
bivariate Poisson lognormal distribution. R package version 0.4.
```

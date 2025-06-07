//Overview of Volatlity Modleing.
// A few adjectives you can use with Volatility
//-Actula
//-Historical /Realized
//-Implied
//-Forward

// Volatility Estimation by Statistical Means
//1.ARCH
//2.GARCH
//3.EWMA

/*
Beyond close-close estimators range based estimation of volatility
The problem with estimating volatility is that you need lots of data to avoid sampling error problems.
Using single day data by going down to finer timescales for that dates has a problems.
  a. returns over very short timescales, such as minutes, does not appear to be normally distributed.
  b.returns do not have a finite standard deviation.

so very simple ways of better estimating volatility using readily available price data, and not just closing prices.
1) Tradition Close-to-Close measure:
     when drift is small
      σ2cc = 1/n Summation(i=1,n) square((log(Ci/Ci-1)))

here there is a slight change of notation from before; Ci is the closing price on the ith day.
  Note also that we are looking at logarithms.
  To adjust this for the drift take
σ2acc= 1/(n-1) * Summation(i=1,n)( square(log(Ci/Ci-1)) -square(log(Cn/Co))/n(n-1))

  (Don't for forget to annualize: multiply by the square root of the number of trading days in a year).


#Parkinson(1980)
This estimator used extreme value, the highs H and the lows L during the day.
        
         


//
//  OptionData.hpp
//  Heston Model
//
//  Created by Changheng Chen on 9/16/17.
//  Copyright © 2017 Changheng Chen. All rights reserved.
//

#ifndef OptionData_hpp
#define OptionData_hpp

#include <iostream>

struct option
{
    double S0; // Spot price
    double K;  // Strike price
    double T;  // Maturity
    double v;  // volatility
    double q;  // dividends
    double r;  // risk-free risk
};

struct basket
{
    double S01;
    double S02;
    double v1;
    double v2;
    double rho;
    double K;
    double T;
    double q;
    double r;
};

#endif /* OptionData_hpp */

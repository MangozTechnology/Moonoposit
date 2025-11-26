/*moon.h*/

#ifndef _MOON_H_
#define _MOON_H_

namespace moon 
{
    auto MoonDepositId = nullptr;

    class MoonDeposit {
    public:
       MoonDeposit();
       virtual ~MoonDeposit();

       const char* const MOON_CONSTANT("MoonDepositModule");
    };
}

#endif

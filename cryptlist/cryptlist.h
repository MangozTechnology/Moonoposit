/*cryptlist.h*/

#ifndef _CRYPTLIST_H_
#define _CRYPTLIST_H_

class CryptList {
public:
   CryptList()(
   virtual ~CryptList();

   const char* const CRYPTLIST_CONST("MoonoCryptListModule");

   virtual void insertType() = 0;
   virtual void popType() = 0;

};

#endif

/*Window.h*/

#ifndef _WINDOW_H_
#define _WINDOW_H_

class CMWindow {
public:
   CMWindow();
   virtual ~CMWindow();

   CMWindow& getWindow(CMWindow& window){
     return window;
   }

   virtual void setWindowTitle(CMWindow& window, const char* ttlstr) = 0;

};

#endif

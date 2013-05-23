// BCX Bounce by Kevin Diggins adopted from Charles Petzold 
// BCX generated C code modified for the free Dev-C++ system
// from   http://www.bloodshed.net/
// or     http://sourceforge.net/projects/dev-cpp/
// (actually Dev-C++ is the IDE for the GNU GCC/G++ compiler)
// a Dev-C++ tested Windows Application by  vegaseat  21nov2004
#include <windows.h>
#define Show(Window) RedrawWindow(Window,0,0,0);ShowWindow(Window,SW_SHOW);
#define AppName "BouncingBall1"
#define Caption "Bouncing Ball ..."
char BCX_STR [1024*1024];
static int     BCX_GetDiaUnit;
static int     BCX_cxBaseUnit;
static int     BCX_cyBaseUnit;
static int     BCX_ScaleX;
static int     BCX_ScaleY;
static HANDLE  Form1;
double  MIN (double,double);
double  MAX (double,double);
int     WINAPI WinMain (HINSTANCE, HINSTANCE, LPSTR, int);
void    FormLoad (HANDLE);
LRESULT CALLBACK WndProc (HWND, UINT, WPARAM, LPARAM);
double MAX (double a, double b)
{
  if (a > b)
  {
    return a;
  }
  return b;
}
double MIN (double a, double b)
{
  if (a < b)
  {
    return a;
  }
  return b;
}
// standard main for Windows GUI
int WINAPI WinMain (HINSTANCE hInst, HINSTANCE hPrev, LPSTR CmdLine, int CmdShow)
{
  static  WNDCLASS  Wc;
  memset(&Wc,0,sizeof(Wc));
  static  MSG  Msg;
  memset(&Msg,0,sizeof(Msg));
  Wc.style=CS_HREDRAW | CS_VREDRAW;
  Wc.lpfnWndProc=WndProc;
  Wc.cbClsExtra=0;
  Wc.cbWndExtra=0;
  Wc.hInstance=hInst;
  Wc.hIcon=LoadIcon(NULL,IDI_WINLOGO);
  Wc.hCursor=LoadCursor(NULL,IDC_ARROW);
  Wc.hbrBackground=(HBRUSH)GetStockObject(WHITE_BRUSH);
  Wc.lpszMenuName=NULL;
  Wc.lpszClassName=AppName;
  RegisterClass(&Wc);
  FormLoad(hInst);
  // 50ms here, lower value gives higher speed
  SetTimer((HWND)Form1,1,50,NULL);
  // ye olde event message loop
  while(GetMessage(&Msg,NULL,0,0))
  {
    if (!IsWindow((HWND)Form1)||!IsDialogMessage((HWND)Form1,&Msg))
    {
      TranslateMessage(&Msg);
      DispatchMessage(&Msg);
    }
  }
  return Msg.wParam;
}
// create the form and show it (somewhat older style)
void FormLoad (HANDLE hInst)
{
  // get the scale factors
  BCX_GetDiaUnit = GetDialogBaseUnits();
  BCX_cxBaseUnit = LOWORD(BCX_GetDiaUnit);
  BCX_cyBaseUnit = HIWORD(BCX_GetDiaUnit);
  BCX_ScaleX = BCX_cxBaseUnit/4;
  BCX_ScaleY = BCX_cyBaseUnit/8;
  // now the form
  Form1=CreateWindow(AppName,Caption,
    DS_MODALFRAME|WS_POPUP|WS_CAPTION|WS_SYSMENU,
    10*BCX_ScaleX,20*BCX_ScaleY,250*BCX_ScaleX,175*BCX_ScaleY,NULL,
    (HMENU)NULL,(HINSTANCE)hInst,NULL);
  Show((HWND)Form1);
}
// event message handler
LRESULT CALLBACK WndProc (HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  static  HANDLE  hBitmap;
  static  HBRUSH  hBrush;
  static  HDC  hdc;
  static  HDC  hdcMem;
  static int cxClient;
  static int cyClient;
  static int xCenter;
  static int yCenter;
  static int cxTotal;
  static int cyTotal;
  static int cxRadius;
  static int cyRadius;
  static int cxMove;
  static int cyMove;
  static int xPixel;
  static int yPixel;
  static int nScale;
  
  while(1)
  {
    if (Msg == WM_CREATE)
    {
      hdc = GetDC(hWnd);
      xPixel = GetDeviceCaps(hdc,ASPECTX);
      yPixel = GetDeviceCaps(hdc,ASPECTY);
      ReleaseDC(hWnd,hdc);
      return 0;
      break;
    }
    // draw the ball
    if (Msg == WM_SIZE)
    {
      xCenter = (cxClient=LOWORD(lParam))/2;
      yCenter = (cyClient=HIWORD(lParam))/2;
      nScale = (int)MIN(cxClient*xPixel,cyClient*yPixel)/16;
      cxRadius = nScale/xPixel;
      cyRadius = nScale/yPixel;
      cxMove = (int)MAX(1,cxRadius/4);
      cyMove = (int)MAX(1,cyRadius/4);
      cxTotal = 2*(cxRadius+cxMove);
      cyTotal = 2*(cyRadius+cyMove);
      if (hBitmap)
      {
        DeleteObject(hBitmap);
      }
      hdc = GetDC(hWnd);
      hdcMem = CreateCompatibleDC(hdc);
      hBitmap = CreateCompatibleBitmap(hdc,cxTotal,cyTotal);
      ReleaseDC(hWnd,hdc);
      SelectObject(hdcMem,hBitmap);
      Rectangle(hdcMem,-1,-1,cxTotal+1,cyTotal+1);
      hBrush = CreateHatchBrush(HS_DIAGCROSS,0);
      SelectObject(hdcMem,hBrush);
      SetBkColor(hdcMem,RGB(0,127,255));
      Ellipse(hdcMem,cxMove,cyMove,cxTotal-cxMove,cyTotal-cyMove);
      DeleteDC(hdcMem);
      DeleteObject(hBrush);
      return 0;
      break;
    }
    // move the ball
    if (Msg == WM_TIMER)
    {
      if (!hBitmap)
      {
        break;
      }
      hdc = GetDC(hWnd);
      hdcMem = CreateCompatibleDC(hdc);
      SelectObject(hdcMem,hBitmap);
      BitBlt(hdc,xCenter-cxTotal/2,yCenter-cyTotal/2,cxTotal,cyTotal,hdcMem,0,0,SRCCOPY);
      ReleaseDC(hWnd,hdc);
      DeleteDC(hdcMem);
      xCenter += cxMove;
      yCenter += cyMove;
      if (xCenter+cxRadius>=cxClient||xCenter-cxRadius<=0)
      {
          cxMove = -cxMove;
      }
      if (yCenter+cyRadius >= cyClient || yCenter-cyRadius <= 0)
      {
          cyMove = -cyMove;
      }
      return 0;
      break;
    }
    // clean up and exit program
    if (Msg == WM_DESTROY)
    {
      if (hBitmap)
      {
        DeleteObject(hBitmap);
      }
      KillTimer((HWND)Form1,1);
      PostQuitMessage(0);
      return 0;
    }
    break;
  }
  return DefWindowProc(hWnd, Msg, wParam, lParam);
}

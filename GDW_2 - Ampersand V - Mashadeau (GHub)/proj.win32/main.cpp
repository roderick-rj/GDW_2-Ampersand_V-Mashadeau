/*
Project: Mashadeau: Sorcerer's Quest (Game Development Workshop II (INFR 1396U) Video Game)
Team: Ampersand V (&V)
	- Caleb Birnie (100699828)
	- Carter Menary (100700587)
	- Devin Fitzpatrick (100709082)
	- Nathan Tuck (100708651)
	- Roderick �R.J.� Montague (100701758)
	- Jason Lee (100698121)
		*Jason Lee was only part of this group for the purposes of Digital Game Design.
		*Jason is not in Essential Mathematics for Games II, Object Oriented Programming, or Game Development Workshop II.
Date: 04/03/2019 
*/

/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "main.h"
#include "AppDelegate.h"
#include "cocos2d.h"

#include <ctime>
#include <random>

USING_NS_CC;

int WINAPI _tWinMain(HINSTANCE hInstance,
                       HINSTANCE hPrevInstance,
                       LPTSTR    lpCmdLine,
                       int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

	//srand(time(0)); // seeding the randomizer. This was ultimately not used.
	// AllocConsole(); // creates a text console for debugging purposes.
	// freopen("CONOUT$", "w", stdout); // allows for cout.

    // create the application instance
    AppDelegate app;
    return Application::getInstance()->run();
}

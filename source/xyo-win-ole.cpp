//
// XYO Win Library
//
// Copyright (c) 2018 Grigore Stefan <g_stefan@yahoo.com>
// Created by Grigore Stefan <g_stefan@yahoo.com>
//
// MIT License (MIT) <http://opensource.org/licenses/MIT>
//

#include <windows.h>
#include <ole2.h>
#include <stdio.h>

#include "xyo-win-ole.hpp"

namespace XYO {
	namespace Win {

		using namespace XYO::Core;

		class XOle {
			public:
				bool isValid;

				XOle();
				~XOle();
		};

		XOle::XOle() {
			isValid=true;
			OleInitialize(NULL);
		};

		XOle::~XOle() {
			OleUninitialize();
		};

		bool Ole::isValid() {
			return (TSingletonProcess<XOle>::getValue())->isValid;
		};

	};
};


//-----------------------------------------------------------------------------
// Copyright (c) 2016 Vitaliy Zhygotsky, Leichanka Aliaksandr
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
//-----------------------------------------------------------------------------

#ifndef GMBOXINSTANCEINFO_H
#define GMBOXINSTANCEINFO_H

#include "../spriterengine/objectinfo/boxinstanceinfo.h"

#include "spriterGM.h"

namespace SpriterEngine
{

	class GMBoxInstanceInfo : public BoxInstanceInfo
	{
		int m_ObjectID = -1;
		std::string m_ObjectName;
	public:
		GMBoxInstanceInfo(int objectID, std::string objectName, point initialSize);

		void render() override;

		void renderObject(int ModelIndex, int InstanceIndex, UniversalObjectInterface *spriteInfo) override;

		ImageFile *getImage() override { return NULL; }
	};

}

#endif // GMBOXINSTANCEINFO_H

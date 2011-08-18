#pragma once
#include "3DMapObj.h"

class C3DMapSceneObj : public C3DMapObj
{
public:
	virtual int		getObjType	()				{return MAP_3DSIMPLE;}
	virtual void	renderFocus	()const;
protected:
	__int64			m_ObjectID;
};
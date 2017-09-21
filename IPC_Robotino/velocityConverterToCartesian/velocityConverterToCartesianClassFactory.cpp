///////////////////////////////////////////////////////////////////////////////
// velocityConverterToCartesianClassFactory.cpp
#include "TcPch.h"
#pragma hdrstop

#include "velocityConverterToCartesianClassFactory.h"
#include "velocityConverterToCartesianServices.h"
#include "velocityConverterToCartesianVersion.h"
#include "velocityConverterToCartesian.h"

BEGIN_CLASS_MAP(CvelocityConverterToCartesianClassFactory)
///<AutoGeneratedContent id="ClassMap">
	CLASS_ENTRY(CID_velocityConverterToCartesianCvelocityConverterToCartesian, SRVNAME_VELOCITYCONVERTERTOCARTESIAN "!CvelocityConverterToCartesian", CvelocityConverterToCartesian)
///</AutoGeneratedContent>
END_CLASS_MAP()

CvelocityConverterToCartesianClassFactory::CvelocityConverterToCartesianClassFactory() : CObjClassFactory()
{
	TcDbgUnitSetImageName(TCDBG_UNIT_IMAGE_NAME(SRVNAME_VELOCITYCONVERTERTOCARTESIAN)); 
#if defined(TCDBG_UNIT_VERSION)
	TcDbgUnitSetVersion(TCDBG_UNIT_VERSION(velocityConverterToCartesian));
#endif //defined(TCDBG_UNIT_VERSION)
}


#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function LiveLinkComponents.LiveLinkComponentController.SetSubjectRepresentation
	 */
	struct ULiveLinkComponentController_SetSubjectRepresentation_Params
	{
	public:
		struct FLiveLinkSubjectRepresentation                      InSubjectRepresentation;                                 // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLinkComponents.LiveLinkComponentController.GetSubjectRepresentation
	 */
	struct ULiveLinkComponentController_GetSubjectRepresentation_Params
	{
	public:
		struct FLiveLinkSubjectRepresentation                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

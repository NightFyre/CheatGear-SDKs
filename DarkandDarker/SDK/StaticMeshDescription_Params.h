#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
	 */
	struct UStaticMeshDescription_SetVertexInstanceUV_Params
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5VLC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           UV;                                                      // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UVIndex;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
	 */
	struct UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Params
	{
	public:
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SlotName;                                                // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
	 */
	struct UStaticMeshDescription_GetVertexInstanceUV_Params
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UVIndex;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StaticMeshDescription.StaticMeshDescription.CreateCube
	 */
	struct UStaticMeshDescription_CreateCube_Params
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HalfExtents;                                             // 0x0018(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonGroupID                                     PolygonGroup;                                            // 0x0030(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonID                                          PolygonID_PlusX;                                         // 0x0034(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonID                                          PolygonID_MinusX;                                        // 0x0038(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonID                                          PolygonID_PlusY;                                         // 0x003C(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonID                                          PolygonID_MinusY;                                        // 0x0040(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonID                                          PolygonID_PlusZ;                                         // 0x0044(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonID                                          PolygonID_MinusZ;                                        // 0x0048(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
